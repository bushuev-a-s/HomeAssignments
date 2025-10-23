/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 2b
 * Main file
 */

#include <iostream>

int main() {
    int stacksize=0;
    int stack[stacksize];
    while (std::cin.peek() != EOF){
        char data;
        std::cin>>data;
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
