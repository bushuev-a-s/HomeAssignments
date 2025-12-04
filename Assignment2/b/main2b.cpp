/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 2b
 * Main file
 */

#include <iostream>
#include <string>

int main() {
    int pointer=-1;
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
    float* stack=new float[spaces+1];
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
            pointer-=1;
            if (data=="+"){
                stack[pointer]=stack[pointer]+stack[pointer+1];
            }
            if (data=="-"){
                stack[pointer]=stack[pointer]-stack[pointer+1];
            }
            if (data=="*"){
                stack[pointer]=stack[pointer]*stack[pointer+1];
            }
            if (data=="/"){
                stack[pointer]=stack[pointer]/stack[pointer+1];
            }
            //std::cout<<result<<std::endl;
        }
        else{
            pointer+=1;
            stack[pointer]=std::stof(data);
        }
    }
    delete[] stack;
    std::cout<<stack[0];
}
