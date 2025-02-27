#include<iostream>
#include <limits.h>
using namespace std;
void transpose(int arr[][3], int row, int col, int transposeArr[][3]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            // swap arr[i][j], arr[j][i]
            transposeArr[i][j]=arr[i][j];
    }
    }
}
void PrintArr(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<endl;
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3];
    int row = 3;
    int col = 3;
    cout<<"eneter your Elements is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing the Arrays is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << "Printing the Arrays: " << endl;
    printArr(arr, row, col);
    
    int transposeArr[3][3]; // Declare transpose array
    transpose(arr, row, col, transposeArr);
    cout << "Transpose arrays is: " << endl;
    printArr(transposeArr, col, row); // Print transposed array
return 0;
}