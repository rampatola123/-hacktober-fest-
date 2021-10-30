#include<bits/stdc++.h>
void reverse(int val[],int len){
    int j,temp;
    for(int i=0,j=(len-1);i<j;i++,j--){
        temp=val[j];
        val[j]=val[i];
        val[i]=temp;
    }
    std::cout<<"new array is"<<std::endl;
    for(int i=0;i<len;i++)
      std::cout<<val[i]<<" ";
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    
    int n  =sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    return 0;
}