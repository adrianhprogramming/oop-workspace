//NOTE: This file is for testing and is not meant to be submitted.

#ifndef UTILS
#define UTILS
#include <cstdlib>
#include <tuple>
#include <iostream>
#include <cmath>

//function reads a reference of the original tuple, and will not overrite the 2 ints called pos
//This function reads out the euclidean distance

class Utils{
    public:
    // Accepts two ints and returns a tuple object.

    // Returns a random position within a grid represented by gridWidth and gridHeight as a std::tuple<int, int>.
    static std::tuple<int,int> generateRandomPos(int gridWidth, int gridHeight){
    int x = rand() % gridWidth;
    int y = rand() % gridHeight;


    return std::make_tuple(x,y);
    }
    //Returns the Euclidean distance between two positions given as pos1 and pos2 as a double.

//The function accepts two tuples, and returns a double.
    static double calculateDistance(std::tuple<int,int> pos1, std::tuple<int,int> pos2){
        double eucDistance;
        
        //this is how you read a variable from a location in the vector
        int x1 = std::get<0>(pos1);
        int y1 = std::get<0>(pos1);
        int x2 = std::get<0>(pos2);
        int y2 = std::get<0>(pos2);

        //Using formula of euclidean distance
        eucDistance = std::sqrt(
            pow((x2-x1),2) + 
            pow((y2-y1),2)
        ) ;

        return eucDistance;

    };
};

// //calling the readTuple function.
//         readTuple(utils::generateRandomPos(gridWidth,gridHeight));

// //
// //printing out the generated euclidean distance.
// std::cout << utils::calculateDistance(
// (utils::generateRandomPos(gridWidth,gridHeight)),
// (utils::generateRandomPos(gridWidth,gridHeight))
//  ) << std::endl;

// return 0;





#endif // UTILS