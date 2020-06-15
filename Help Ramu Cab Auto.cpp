#include<iostream>
using namespace std;
int Ans(){
	int c1, c2, c3, c4, n, m,  arrn[1005], arrm[1005];
	cin>>c1>>c2>>c3>>c4>>n>>m;
	for(int i =0;i<n;i++){
		cin>>arrn[i];
	}
	for(int i =0;i<m;i++){
		cin>>arrm[i];
	}
	int p1 = 0, p2 = 0, p3 = 0, p4 = 0;
	for(int i = 0; i<n ;i++){
		p1+= min(arrn[i]*c1,c2);
	}
	p1 = min(p1, c3);
		for(int i =0;i<m;i++){
		p2+= min(arrm[i]*c1,c2);
	}
	p2 = min(p2, c3);
	p3 = p1 + p2;
	p4 = min(p3,c4);
	return p4;

}
int main() {
	int T;
	cin>>T;
	while(T--){
		cout<<Ans()<<endl;
	}

	return 0;
}
