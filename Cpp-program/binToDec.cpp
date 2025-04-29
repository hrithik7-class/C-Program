#include<iostream>
using namespace std;
  int decTobin(int dec){
  	int pow=1;
  	int ans=0;
  	while(dec>0){
  		int rem=dec%2;
  		ans+=rem*pow;
  		dec=dec/10;
  		pow=pow*2;
  		
	  }
  	return ans;
  }
  
  int main(){
  	int dec=100;
  	cout<<decTobin(dec);
  }
