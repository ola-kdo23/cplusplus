#include <iostream>

//this is a simple program to calculate a dogs years into human years
/*what does the program do:
1. collect input from user
2. calculate its equivalent in human years 
3. return this as output
*/
int main(){
    //variable declaration and initialization
    int dogYear = 0; 

    //printing to the output stream
    std::cout << "Welcome to the dog years converter!\n";
    std::cout << "How old is your dog? ";

    //collecting and storing user input
    std::cin >> dogYear ;

    //converting human years into dog years based on user input
    if(dogYear<=0){
        std::cout << "Whoops, thats an invalid dog age!";
    }
    else if (dogYear==1 || dogYear==2)
    {
        std::cout << "Woah, your dog is " << 21/dogYear << " years old in human years!\n";
    }
    else{
        std::cout << "Woah, your dog is " << 21+ ((dogYear-2) * 4) << " years old in human years!\n";
    }
}

/*what was the point of this program?
1. Demonstrate basic variable assignment
2. Demonstrate basic basic input collection from user
3. Demnstrate basic branching.
*/

//branching redone using switch statements:
/*
switch (dogYear){
    case 1:
        std::cout << "Woah, your dog is " << 21 << " years old in human years!\n";
        break;
    case 2:
        std::cout << "Woah, your dog is " << 21/2 << " years old in human years!\n";
        break;
    default:
        std::cout << "Woah, your dog is " << 21+ ((dogYear-2) * 4) << "years in human years";
        break;

}
*/
//problem with this code? ite not robost we cant handle invalid entries! But it shows what switch statement in c look like:
//switch (variable with finite number of possibilities)
//case (one of those possibilities):
//action to be carried out;
//default (runs anytime value that is seen is outside of notes cases):
//end every case and default block with break;
