#include "Orchestra.h"
#include "Musician.h"
#include <iostream>


// default constructor
Orchestra::Orchestra(){
size = 0,
Musician* members;
}           

// constructor for an orchestra of given size
Orchestra::Orchestra(int size2){
size2 = size;}   

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members(){
    return size;}

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(std::string instrument){
if (instrument == "violin")
{
    return true;
}
else
return false; 
} 

// returns the array of members of the orchestra
Musician *get_members(){
    return* members;}        

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician);

~Orchestra();