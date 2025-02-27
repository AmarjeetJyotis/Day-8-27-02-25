#include<iostream>
using namespace std;
int main(){
     int array[4][4];
    //  User from input 
     for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>array[i][j];
        }
     }
    //  Printing the array 

    cout<<"Print the array: "<<endl;
     for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
     }
return 0;
}