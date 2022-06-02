/**
 * @file main.cpp
 * @author Aswath S
 * @brief 
 * @version 0.1
 * @date 2022-06-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <array>
#include <iostream>
#include "Electron.hpp"
int main(){
    Electron e;
    e.set(0,0.9);

    const std::array<Electron,5> e1,e2;
    for(const Electron &element:e1){
        // element=e;
        std::cout<<" M: "<<element.mass<< " C: "<<element.charge<<" \n";
    }
    bool isEqual = e1==e2;
    std::cout<<"isEqual? (T/F) "<<isEqual;

}