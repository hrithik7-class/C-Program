#include<iostream>
using namespace std;
 int isPower(int n){
 	return (n>0) && ((n &(n-1))==0);	
}

 int main(){
 	int n=8;
 	if(isPower(n)){
 		cout<<"yes";
	 }
	 else{
	 	cout<<"no";
	 }
 }
 
 
 
 
 
 
 
 
// int reverseInt(int n){
// 	int rev=0;
// 	int Column;
// 	while(n!=0){
// 		
// 		int reminder =n%10;
// 	    rev=rev*10+reminder;
// 	    n/=10;
// 	     Column =rev;
//		 }
//    return Column;
//}
//
// int main(){
// 	int n=32;
// 	cout<<reverseInt(n)<<endl;
// }
