#include<iostream>
#include<vector>
using namespace std;

void Spiraltreverse(int arr[4][4]){
    int dir=0,top=0,down=3,left=0,right=3;
    int i=0;
    while(top<=down && left<=right){
        if(dir==0){
            for(i=left;i<=right;i++){
                cout<<arr[top][i]<<" ";
            }top++;
              }

        else if(dir == 1){
            for(i=top;i<=down;i++){
                cout<<arr[i][right]<<" ";
            }right--;
        }
        else if(dir == 2){
            for(i=right;i>=left;i--){
                cout<<arr[down][i]<<" ";
            }down--;
        }
        else if(dir == 3){
            for(i=down;i>=top ;i--){
                cout<<arr[i][left]<<" ";
            }left++;
        }

        dir = (dir+1)%4;
    }
}

void Rotate(vector<vector<int>> &arr,int row){
int i=0, top=0,down= row-1,left=0,right= row-1,j=0;
for(i=0;i<row;i++){
    for(j=i;j<row;j++){
        int temp = arr[i][j];
        arr[i][j] =arr[j][i];
        arr[j][i] = temp;
    }
}

for(i=0;i<row;i++){
    int start =0,end=row-1;
    while(start<end){
        swap(arr[i][start],arr[i][end]);
        start++;end--;
    }
    
}
}


int main(){
vector<vector<int>> arr ={
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}
};
// Spiraltreverse(arr);
Rotate(arr,4);
for(int i=0;i<4;i++){
    for(int j =0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
}
return 0;
}