#include<iostream>
using namespace std;
void printCloumnSum(int arr[][3]){
    for(int j=0; j<3; j++){
        int colSum=0;
        for(int i=0; i<3; i++){
            colSum=colSum+arr[i][j];
        }
cout << "Sum of elements in column " << j+1 << ": " << colSum << endl;
    }
}
int main(){
    int arr[3][3];
    cout<<"Enter Elements are: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing the element is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    printCloumnSum(arr);
return 0;
}