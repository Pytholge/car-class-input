#include <iostream>

using namespace std;

class Car
{
    public:
        int weight;
        int year;
        string make;
        string model;
};

int main()
{
    Car userCar;

    cout << "What is the car make?\n";
    cin >> userCar.make;

    cout << "What is the car model?\n";
    cin >> userCar.model;

    cout << "What is the car's weight?\n";
    cin >> userCar.weight;

    cout << "What is the car's year?\n";
    cin >> userCar.year;

    cout << "The car is a " << userCar.year << " " << userCar.make << " " << userCar.model << " with a weight of " << userCar.weight << " " << "lbs.\n";

    system("pause");


}