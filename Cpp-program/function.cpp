#include<iostream>
//#include<bits/stdc++.h>
using namespace std;



int main(){
	int i=4 ;
	
	switch(i){
	case 1:
		cout<<"its 1";
		break;
	case 2:
		cout<<"its 2";
		break;
	case 3:
		cout<<"its 4";
		break;
	default:
		cout<<"none of them";
		break;
	}
    return 0;
}




//
//	int sumDigit=0;
//	while(num>0){
//		int lastDigit =num%10;
//		 num/=10;
//		sumDigit+=lastDigit;	
//	}
//		return sumDigit;


//in main//  cout<<min(145);











//#include<iostream>
//using namespace std;
//
//
//int fac(int n){
//   int fac=1;
//   for(int i=1;i<=n;i++){
//   	fac*=i;
//   }
//   return fac;
//}
//int ncr(int n,int r){
//  int denom_co = fac(n);
//  int nema_co =fac(r);
//  int nmr= fac(n-r);
//  return denom_co/(nema_co*nmr);
//   }
//   
// 
//int main(){
//	int n=8;
//	int r=3;
//	cout<<ncr(n,r);
//
//	return 0;
//}








//#include<iostream>
//using namespace std;
//
//
//int fac(int n){
//   for(int i=1;i*i<=n;i++){
//   	if( n%2==1){
//   	     cout<<"prime"<<"\n";
//	   }
//	   else{
//	   	 cout<<"not"<<"\n";
//	   }
//	   
//   }
//   
//   return n;
//}
//
// 
//int main(){
//    cout<<fac(5);
//
//	return 0;
//}







//#include<iostream>
////#include<bits/stdc++.h>
//using namespace std;
//
//
//bool isPrime(int n){
//   for(int i=2; i*i<=n;i++){
//   	if(n%i==0){
//    		return false;
//		}
//   	
//   }
//		
//	return true;
//   
//};
//
//int print(int n){
//	for(int i=2; i<=n;i++)
//	if(isPrime(i))
//	cout<<i<<" ";
//      	
//}
// 
//int main(){
//	int n=30;
//	
//	print(n);
//    return 0;
//}
//

