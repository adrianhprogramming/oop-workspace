#include <iostream>
#include "Musician.h"


Musician::Musician(){
    instrument = "unknown";
    experience = 0;}

Musician::Musician(std::string instrument2, int experience2){
    instrument = instrument2;
    experience = experience2;
}

std::string Musician::get_instrument(){
    return instrument;}

int Musician::get_experience(){
    return experience;}

