#include<iostream>
using namespace std;
void printRowSum(int arr[][3]){
    cout<<"Printing row-wise Sum is: "<<endl;
    for(int i=0; i<3; i++){
    int sum=0;
        for(int j=0; j<3; j++){
            sum = sum+arr[i][j];
        }
        cout << "Sum of elements in row " << i+1 << ": " << sum << endl;
    }
}
int main(){
    int arr[3][3];
    cout<<"Input from user is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the arrays: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printRowSum(arr);
return 0;
}