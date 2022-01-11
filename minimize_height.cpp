#include<iostream>
using namespace std;
int mindiff(int a[],int k,int n){
    for(int i=0;i<n;i++){
        if(a[i]-k<=0){
            a[i]=a[i]+k;
        }
        else{
            a[i]=a[i]-k;
        }
    }
    int newmax=INT_MIN;
    int newmin=INT_MAX;
    for(int j=0;j<n;j++){
        newmax=max(a[j],newmax);
        newmin=min(a[j],newmin);
    }
    int diff=newmax-newmin;
    return diff;
}
int main(){
    int a[]={3,9,12,16,20};
    int n=5;
    cout<<"the minimum difference possible between highest and lowest height is: "<<mindiff(a,3,n)<<endl;
    return 0;
    
}