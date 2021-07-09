#include<iostream>
#include<unordered_set>
#include<map>
#include<vector>
using namespace std;
void findMissing(long long a[], long long b[], int n, int m) { 
     unordered_set<long long> s;
     vector<long long> v;
     int i=0;
     for(i=0;i<m;i++){
         s.insert(b[i]);
     }
     for(i=0;i<n;i++){
         if(s.find(a[i]) == s.end())v.push_back(a[i]);
     }
     for(i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }

	} 

int findsubArray(int *arr,int n){
    map<long long,long long> m;
    m[0]++;
    long long sum=0,i=0,ans=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
        int remsum = sum-0;
        if(m[remsum]!=0)ans+=m[remsum];
        m[remsum]++;
    }
    return ans;
}

int main(){
  int arr[] = {6,-1,-3,4,-2,2,4,6,-12,-7};
  cout<<findsubArray(arr,10);
// long long arr[] ={227, 2 ,17, 15 ,17 ,21 ,26, 30, 16, 12, 19, 22 ,18, 8, 24 ,10, 17 ,28, 14, 7 ,4, 21 ,3, 4};
// long long arr1[] = {25, 12, 30 ,24, 14 ,34};
// findMissing(arr,arr1,24,6);
return 0;
}