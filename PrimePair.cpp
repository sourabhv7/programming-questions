// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// bool is_prime(int n){
// 		for(int i=2;i<=sqrt(n);i++)
// 			if(n%i==0)return false;
// 		return true;
// 	}

// void Pair(int n){
// int i=0,j=0;
// for(i=2;i<n;i++)
//     for(j=2;j<=n-i;j++)
//         if(is_prime(i)&& is_prime(j))
//            if(i*j<=n)cout<<"("<<i<<","<<j<<") ";
// }
// int main(){
//     int num;
//     cout<<"Enter the Number : ";cin>>num;
//     Pair(num);
// return 0;
// }
#include<iostream>
#include<math.h>
using namespace std;
int *findTwoElement(int *arr, int n) {
    int i=0;
    int *res = new int[2];
    for(i=0;i<n;i++){
        if(arr[abs(arr[i])-1]<0){
            res[0]=abs(arr[i]);
        }else{
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            res[1] = i+1;
        }
    }
    return res;
    }

    int repeted(int *arr,int n){
       int i=0,temp = 0,t=-1;
        for(i=0;i<n;i++){
            if(arr[abs(arr[i])-1] < 0){
                t=abs(arr[i]);
                temp++;
            }else{
                arr[abs(arr[i])-1] = - arr[abs(arr[i])-1];
            }
        }
        if(temp==0){
            return t;
        }else{
            if((temp+1)>=n/2){
                return t;
            }
        }
        return t;
    }
int main(){
    int arr[] = {1,2,3,3,3};
    cout<<repeted(arr,5);

// 1 2 2 3 5 7
return 0;
}