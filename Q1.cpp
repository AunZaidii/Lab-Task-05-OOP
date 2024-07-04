#include <iostream>
using namespace std;
int main(){
    cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
    cout<<"Start of Lab 05: Q1\n"<<endl;
    int rows = 2;
    int columns = 2;
    int arr[rows][columns] = {
        {1,2},
        {3,4},
    };
int a=0;
for(int i = 0;i < rows;i++){
    for(int j=0; j < columns; j++){
        a += arr[i][j];
    }
}
cout<<"The sum of array is "<<a<<endl;
return 0;
}
