#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
    cout<<"Start of Lab 05: Q3\n"<<endl;
    int rows = 2;
    int columns = 2;
    int arr[rows][columns] = {
        {1,1},
        {1,1},};
    int a = 0;
    int b = 0;
    bool sym = true;
    for(int i = 0;i < rows;i++){
        for(int j = 0; j < columns; j++){
            if(arr[i][j] != arr[j][i]){
                sym = false;
                break;};    
        }
    if(!sym){
       break;
    };
    }
    if(sym){
        cout<<"The matrix is symmetric";
    }
    else{
        cout<<"The matrix is not symmetric";
    }
    return 0;
}
