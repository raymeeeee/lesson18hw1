#include <iostream>
using namespace std;

struct Worker {

    char surname[50] = "";
    int birthdate = 0;
    char position[50] = "";
    double salary = 0;
    char education[50] = "";

    void showWorker(){
        cout << surname << endl;
        cout << birthdate << endl;
        cout << position << endl;
        cout << salary << endl;
        cout << education << endl << endl;
    }
};

int main()
{
    int size = 5;
    Worker* arr = new Worker[5]{
        {"Bobenko", 1979, "Director", 100000, "Higher"},
        {"Uschenko", 1960, "Worker", 30000, "Lower"},
        {"Tkachenko", 1959, "Worker", 40000, "Middle"},
        {"Melnik", 1969, "Secretary", 60000, "Higher"},
        {"Pivovarov", 1980, "Manager", 80000, "Higher"}
    };

    int ageSixty = 0;
    for (int i = 0; i < size; i++)
    {
        if ((2024 - arr[i].birthdate) > 60) {
            ageSixty++;
            arr[i].showWorker();
        }
    }
}
