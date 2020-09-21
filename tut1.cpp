#include<iostream>
using namespace std;
int main() {
	int no;
	cin>>no;
	for(int i=0;i<no;i++){
		int n;
		cin>>n;
		int r;
		int eans=0;
		int oans=0;
		while(n>0){
			r=n%10;
		if(r%2==0){
			 eans=eans+r;
		}
		else{
			oans=oans+r;
		}
		n=n/10;
		}
		if(eans%4==0 || oans%3==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		
	}
	return 0;
}
