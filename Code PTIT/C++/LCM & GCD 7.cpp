#include<iostream>
#include<algorithm>
using namespace std;

long long kt(long long m, long long bcnn) {
	long long du = m % bcnn;
	long long m1 = m;
	if(du==0) return m;
	m=m+(bcnn-du);
	if(m<m1*10) return m;
	else return -1;
}

int main() {
	int n;
	int a,b,c,d;
	long long ml,m;
	cin>>n;
	while(n--) {
		ml=1;
		cin>>a>>b>>c>>d;
		m=std::__gcd(a,b);
		ml=a*b/m;
		m=std::__gcd(ml,c);
		ml=ml*c/m;
		m=1;
		while(--d) {
			m=m*10;
		}
		cout<<kt(m,ml);
		cout<<endl;
	}
	return 0;
}
