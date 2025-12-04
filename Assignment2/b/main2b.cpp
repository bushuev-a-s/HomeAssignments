/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 2b
 * Main file
 */

#include <iostream>
#include <string>
#include <sstream>

int main() {
    int pointer=-1;
    float* stack=new float[20];
    std::string data;
    std::getline(std::cin, data);
    std::istringstream iss(data);
    while (iss>>data){
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
        }
        else{
            pointer+=1;
            stack[pointer]=std::stof(data);
        }
    }
    std::cout<<stack[0];
    delete[] stack;
}
