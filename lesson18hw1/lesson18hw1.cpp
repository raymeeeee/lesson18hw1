#include <iostream>

struct Worker {

    char surname[50] = "";
    int birthdate = 0;
    char position[50] = "";
    double salary = 0;
    char education[50] = "";

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
}
