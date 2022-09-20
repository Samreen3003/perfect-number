#include<iostream>
using namespace std;
float mean(float arr[],int n)
{
float sum=0;
for(int i=0;i<n;i++)
{
    sum+=arr[i];
    return sum/n;
}
float median(float arr[],intn)
{
  sort(arr,arr+n);
  int max_count=1,res=arr[0],count=1;
for(int i=1;i<n;i++)
{
if(arr[i]==arr[i-1])
count++;
else{
if(count>max_count)
{
max_count=count;
res=arr[i-1];
}
count=1;
}
}
if(count>max_count)
{
max_count=count;
res=rr[n-1];
}
return res;
}
int main()int n;
float arr[50];
cout<<"enter the size of array=";
cin>>n;
cout<<"enter the element of the array=";
for(int i=0;i<n;i++)
    cin>>arr[i];
cout<<"\n mean="<<mean(arr,n);
cout<<"\nmedian="<<medain(arr,n);
cout<<"\nmode="<<mode(arr,n);
return 0;
}
