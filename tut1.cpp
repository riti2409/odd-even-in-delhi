#include<iostream>
using namespace std;
int main() {
	int no_of_times;
	cin>>no_of_times;
	for(int i=0;i<no_of_times;i++){
		int n;
		cin>>n;
		int r;
		int even_ans=0;
		int odd_ans=0;
		while(n>0){
			r=n%10;
		if(r%2==0){
			 even_ans=even_ans+r;
		}
		else{
			odd_ans=odd_ans+r;
		}
		n=n/10;
		}
		if(even_ans%4==0 || odd_ans%3==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		
	}
	return 0;
}
