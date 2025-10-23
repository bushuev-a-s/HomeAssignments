/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 2b
 * Main file
 */

#include <iostream>
#include <string>

int main() {
    int stacksize=0;
    int stack[stacksize];
    char data;
    std::string polish;
    std::getline(std::cin,polish);
    char stringArray[polish.length()];
    for (int i=0; i<polish.length(); i++){
        stringArray[i]=polish[i];
    }
    for (int i=0; i<polish.length(); i+=2){
        data=stringArray[i];
        std::cout<<data<<std::endl;
        if(data=='+'||data=='-'||data=='*'||data=='/'){
            int result;
            if (data=='+'){
                while (stacksize>0){
                    result+=stack[stacksize-1];
                    stacksize--;
                }
            }
            if (data=='-'){
                while (stacksize>0){
                    result-=stack[stacksize-1];
                    stacksize--;
                }
            }
            if (data=='*'){
                while (stacksize>0){
                    result*=stack[stacksize-1];
                    stacksize--;
                }
            }
            if (data=='/'){
                while (stacksize>0){
                    result/=stack[stacksize-1];
                    stacksize--;
                }
            }
            std::cout<<result<<std::endl;
            stacksize=1;
            delete[] stack;
            int stack[stacksize]={result};
        }
        else{
            int tempstack[stacksize];
            for (int i=0;i<stacksize;i++){
                tempstack[i]=stack[i];
            }
            delete[] stack;
            stacksize++;
            int stack[stacksize];
            for (int i=0;i<stacksize;i++){
                stack[i]=tempstack[i];
            }
            delete[] tempstack;
            stack[-1]=data;
        }
    }
    std::cout<<stack[0];
}
