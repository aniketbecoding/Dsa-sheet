#include<iostream>
using namespace std;
int minjump(int a[],int n){
    
    int next=0;                     //next is a pointer moving forward in the array,intially points to the first element
    int last=a[n-1];
    int l=0;                        //l is used to denote the num of jumps
    int i=0;
    int ans=0;
    while( i<n){
        next+=a[i];             //next pointer will move forward according to the element value in the array
        i=next;                 //i will be same as next,also for while loop i should be incremented so instead of incrementing i it will have the same value as next as we dont require the previous values before next 
        l++;                       // as next pointer moves forward we increment l to find num of jumps
        if((a[i]==last) && (i==(n-1))){         //the second condition is used to make sure that we are at the last element. because at times the last element may be equal to a element in between 
                ans=l;
        }
       
    }
    if(i>=n){                   //if you cant reach the end of the array then answer will be -1
        ans=-1;
    }
    return l;

}
int main(){
    int a[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n=11;
    cout<<"minimum jump is: "<<minjump(a,n)<<endl;
       
    

    return 0;
}