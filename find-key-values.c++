#include<iostream>
using namespace std;
bool findKey(int arr[][3], int row, int col, int key){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    // values is not present 
    return false;
}
int main(){
    int arr[3][3];
    cout<<"eneter your Elements is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing the elements is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int key=8;
    if(findKey(arr, 3, 3, key)){
        cout<<"key ELement is Found: "<<key<<endl;
    }
    else{
        cout<<"Element is NOT found: "<<key<<endl;
    }
return 0;
}