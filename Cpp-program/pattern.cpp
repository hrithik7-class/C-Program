#include<iostream>
using namespace std;
int main(){
	int  n=4;
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			cout<<"*";
		}
		 if(i!=n){
		 	for(int j=0; j<2*(n-i)-2; j++){
		 		cout<<" ";
			 }
			 for(int j=i+1; j>0; j--){
			 	cout<<"*";
			 }
			 
		 }
		 cout<<endl;
	}
	for(int i=0; i<n; i++){
		for(int j=0;j<n-i;j++){
			 	cout<<"*";
			 }
			 cout<<"";
			 if(i!=n){
			 	for(int j=0; j<2*i; j++){
			 		cout<<" ";
				 }
				 for(int j=0; j<n-i; j++){
				 	cout<<"*";
				 }
			 }
		cout<<endl;
	}
	 
	
	
		
		return 0;	
	}





//for(int j=0; j<2*(n-i)-2; j++){
//		 		cout<<" ";
//			 }
//			 for(int j=0;j<n-i;j++){
//			 	cout<<"*";
//			 }









//for(int i=0; i<n; i++){
//		
//		for(int j=0; j<i+1; j++){
//			cout<<ch;
//			
//			
//			
//		}
//		cout<<endl;
//		ch++;
//	}







// hpllow pattern
//for(int i=0; i<n; i++){
//		
//		for(int j=0; j<n-i-1; j++)
//		{
//			cout<<" ";
//			
//			
//		}
//			cout<<"*";
//			if(i!=0){
//				for(int j=0; j<2*i-1; j++){
//					cout<<" ";
//				}
//				cout<<"*";
//			}
//			cout<<endl;
//		}
//		
//		for( int i=0; i<n-1; i++){
//			for(int j=0; j<i+1; j++){
//				cout<<" ";
//			}
//			cout<<"*";
//			if(i!=n-2){
//				for(int j=0; j< 2*(n-i)-5; j++){
//					cout<<" ";
//				}
//				cout<<"*";
//			}
//			cout<<endl;
//		} 
	
