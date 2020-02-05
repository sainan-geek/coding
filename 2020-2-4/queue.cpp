#include<queue>
#include<iostream>
using namespace std;

int main(){
	priority_queue<int> p;
	p.push(1);
	p.push(2);
	p.push(3);
	p.push(4);
	p.push(5);
	for(int i=0;i<5;i++){
		cout<<p.top()<<endl;
		p.pop();
	}
	return 0;


}
