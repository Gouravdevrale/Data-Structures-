//Your task is to divide the numbers 1,2,…,n into two sets of equal sum.

#include<iostream>
using namespace std;
int main(){
long long int i,b=0,j=0,m=0,l=0;
cin>>i;
long long int arr[i],brr[i];
for(long long int j=1;j<=i;j++){
	b=b+j;
}
if(b%2==0){
long long int r=b/2;
	cout<<"YES \n";
	for(long long d=i;d>0;d--){
		if((j+d)<=r){
			j=j+d;
			arr[m]=d;
			m++;
		}else{
			brr[l]=d;
			l++;
		}
	}
}else{
	cout<<"NO \n";
	return 0;
}
cout<<m<<endl;
for(long long int b=0;b<m;b++){
	cout<<arr[b]<<" ";
}
cout<<endl;
cout<<l<<endl;
for(long long int b=0;b<l;b++){
	cout<<brr[b]<<" ";
}
return 0;
}
