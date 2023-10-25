#include <iostream>
using namespace std;

/*struct Animal
{
    string move;
}Dog, Bird, Fish;

void movement(string userInput)
{
    if (userInput == "dog")
    {
        cout << "Dog " << Dog.move << "\n";
    }
    else if (userInput == "bird")
    {
        cout << "Bird " << Bird.move << "\n";
    }
    else if (userInput == "fish")
    {
        cout << "Fish " << Fish.move << "\n";
    }
    else
    {
        cout << "Something went wrong!" << "\n";
    }

}

int main()
{
    Dog.move = "walks";
    Bird.move = "flies";
    Fish.move = "swims";
    string animalType = " ";
    cout << "enter the type of the animal" << "\n";
    cin >> animalType;


    movement(animalType);

    return 0;
}*/

// The same project without creaating 3 structs



struct Animal
{
    string move;
} UsersAnimal;

void movement(string userInput)
{
    if (userInput == "dog")
    {
        UsersAnimal.move = "walks";
        cout << "Dog " << UsersAnimal.move << "\n";
    }
    else if (userInput == "bird")
    {
        UsersAnimal.move = "flies";
        cout << "Bird " << UsersAnimal.move << "\n";
    }
    else if (userInput == "fish")
    {
        UsersAnimal.move = "swims";
        cout << "Fish " << UsersAnimal.move << "\n";
    }
    else
    {
        cout << "Something went wrong!" << "\n";
    }

}

int main()
{
    string animalType = " ";
    cout << "enter the type of the animal" << "\n";
    cin >> animalType;


    movement(animalType);

    return 0;
}


