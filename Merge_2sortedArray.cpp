#include<iostream>
using namespace std;
void mergearray(int a[],int b[],int n,int m){
    int j=0;
    
    //merge both the arrays and then sort using selection sort technique
    for(int i=n;i<n+m;i++){
        a[i]=b[j];
        j++;
    }
    cout<<"the merged array is: ";
    for(int i=0;i<n+m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //selection sort technique
    for(int p=0;p<(n+m-1);p++){
        int min=p;
        for(int q=p+1;q<(n+m);q++){
            if(a[p]>a[q]){
                min=q;
                int temp=a[p];
                a[p]=a[min];
                a[min]=temp;
            }
        }
    }
    cout<<"the merged Sorted array is: ";
    for(int i=0;i<(n+m);i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[]={1,3,5,7};
    int b[]={0,2,6,8,9};
    int n=4;
    int m=5;
    mergearray(a,b,n,m);
  //  cout<<"the merged sorted array is: ";
  //  for(int i=0;i<n+m;i++){
    //    cout<<a[i]<<" ";
   // }
  // cout<<endl;
   return 0;
}