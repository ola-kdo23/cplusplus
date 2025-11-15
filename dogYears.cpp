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
    else if (dogYear==1 or dogYear==2)
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