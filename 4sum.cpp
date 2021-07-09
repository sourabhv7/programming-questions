#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void fourSum(vector<int> &arr,int num){
// int i=0,j=0,k=0,l=0;
// int n= arr.size();
// vector<vector<int>> res;
// vector<int> ans;
// for(i=0;i<n-3;i++){
//     if(arr[i]==arr[i+1])i++;
//     for(j=i+1;j<n-2;j++){
//         int sum = arr[i]+arr[j];
//         k=j+1;l=n-1;
//         while(k<l){
//             if(sum+arr[k]+arr[l]==num){
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<endl;
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]);
//                 ans.push_back(arr[k]);
//                 ans.push_back(arr[l]);
//                 res.push_back(ans);
//                 k++;l--;
//                 ans.clear();
//                 }
//             else if(sum+arr[k]+arr[l]>num)l--;
//             else if(sum+arr[k]+arr[l]<num)k++;
//         }
//     }
// }
// for(i=0;i<res.size();i++){
//     for(j=0;j<res[i].size();j++){
//         cout<<res[i][j]<<" ";
//     }cout<<endl;
// }
// return 0;
// }

vector<vector<int>> fourSum(vector<int> &arr,int num ){
    vector<vector<int>> res;
    if(arr.empty()) return res; 
     int i,j,k,l;
     i=j=k=l=0;
     int n=arr.size();
     sort(arr.begin(),arr.end());
     for(i=0;i<n;i++){
         for(j=i+1;j<n-2;j++){
            int towSum = arr[i]+arr[j];
            k=j+1,l=n-1;
            while(k<l){
                int sum=arr[k]+arr[l];
                if(towSum+sum<num)k++;
                else if(towSum+sum>num)l--;
                else{
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    temp.push_back(arr[l]);
                    res.push_back(temp);
                    temp.clear();
                    k++;l--;
                    while(k<l && arr[k]==arr[k-1])k++;
                    while(k<l && arr[l]==arr[l+1])l--;
                }
            }
         while(j+1<n && arr[j+1]==arr[j])j++;
         }
         while(i+1<n && arr[i+1]==arr[i])i++;
     }
     return res;

}

void div(int *arr,int n){
    int arr1[n];
    int arr2[n];
    arr1[0]=1;
    arr2[n-1] = 1;
    int i=0;
    for(i=1;i<n;i++){
       arr1[i] = arr1[i-1]*arr[i-1];
    }
    for(i=n-2;i>=0;i--){
        arr2[i] = arr2[i+1]*arr[i+1];
    }
    for(i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }cout<<endl;
    for(i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}
int main(){
int arr[]= {10,3,5,6,2};  //
// fourSum(arr,19);
div(arr,5);
// fourSum(arr,23);
return 0;
}