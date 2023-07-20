#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> vect, int target){
    int start = 0;
    int end = vect.size()-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(vect[mid] == target) return mid+1;
        else if(vect[mid] < target) start = mid+1;
        else  end = mid-1;
    }
    return -1;
}


int main(){
    int n;
    cout<<"Enter No. of element ";
    cin>>n;
    cout<<endl;
    vector<int> vect(n);
    for(int i=0;i<n;i++){
        cout<<"Enter element ";
        cin>>vect[i];
    }
    sort(vect.begin(),vect.end());
    cout<<"\n";
    int target;
    cout<<"Enter Target ";
    cin>>target;
    int ans = binarySearch(vect, target);
    if(ans != -1) 
        cout<<"Target found at "<<ans<<endl;
    else cout<<"Target not Found!";
    return 0;
}