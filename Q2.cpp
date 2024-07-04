// input number of sides and number of die then output the sum of the die
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int sides, die, sum = 0;
    cout << "Enter the number of sides: ";
    cin >> sides;
    cout << "Enter the number of die: ";
    cin >> die;
    srand(time(0));
    for (int i = 0; i < die; i++){
        sum += rand() % sides + 1;
    }
    cout << "The sum of the die is: " << sum << endl;
    return 0;
}