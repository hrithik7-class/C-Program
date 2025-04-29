#include <iostream>
using namespace std;
int main(){
    int n=6;
    bool isPrime=true;

    for(int i=2; i*i<=n;i++){
    	if(n%i==0){
    		isPrime=false;
    		break;
		}
		i++;
	}
	if(isPrime==true){
		cout<<" prime no.";
	}else{
		cout<<" not prime";
	}
    
return 0;
    
} 





//do{
//    	cout<<i<<" ";
//    	i++;
//	}
//	while(i<=n);
//	cout<<endl;
//





//while(i<=n){
//        if(i%2==1){
//            
//           
//            cout<<i<<" "<<"\n";
//             sumOf+=i;
//             
//        }
//        i++;      
//    }






// int sumOf=0;
//    for(int i=1; i<=10; i++){
//    	if(i%2==0){
//    		cout<<i <<" ";
//    		sumOf+=i;
//		}
//	}
//	cout<<endl;
//    cout<<sumOf;

