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
    float* stack=new float[stacksize];
    std::string temp;
    std::string temp2;
    std::string polish;
    std::getline(std::cin,polish);
    int spaces=0;
    for (char ch:polish){
        if (ch==' '){
            spaces++;
        }
    }
    std::string* array=new std::string[spaces+1];
    int cnt=0;
    for (char ch:polish){
        if (ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            temp2=ch;
            array[cnt]=temp2;
            cnt++;
        }
        else if (ch==' '){
            array[cnt]=temp;
            temp="";
            cnt++;
        }
        else{
            temp+=ch;
        }
    }
    std::string data;
    for (int i=0; i<spaces+1; i++){
        data=array[i];
        //std::cout<<data<<std::endl;
        if(data=="+"||data=="-"||data=="*"||data=="/"){
            float result;
            if (data=="+"){
                while (stacksize>0){
                    result+=stack[stacksize-1];
                    stacksize--;
                }
            }
            if (data=="-"){
                while (stacksize>0){
                    result-=stack[stacksize-1];
                    stacksize--;
                }
            }
            if (data=="*"){
                while (stacksize>0){
                    result*=stack[stacksize-1];
                    stacksize--;
                }
            }
            if (data=="/"){
                while (stacksize>0){
                    result/=stack[stacksize-1];
                    stacksize--;
                }
            }
            //std::cout<<result<<std::endl;
            stacksize=1;
            delete[] stack;
            float* stack=new float[stacksize];
            stack[0]=result;
        }
        else{
            float* tempstack=new float[stacksize];
            for (int i=0;i<stacksize;i++){
                tempstack[i]=stack[i];
            }
            delete[] stack;
            stacksize++;
            float* stack=new float[stacksize];
            for (int i=0;i<stacksize;i++){
                stack[i]=tempstack[i];
            }
            delete[] tempstack;
            stack[-1]=std::stof(data);
        }
    }
    //std::cout<<stack[0];
}
