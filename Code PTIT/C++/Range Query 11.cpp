#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a;
	vector<int> nho;
	for(int i=0; i<n; i++)
	{
			int c;
			cin >> c;
			a.push_back(c);
	}
		
	for(int i=0; i<a.size()-1; i++)
		{
			int gtnn=abs(a.at(i)-a.at(i+1));
			for(int j=i+1; j<a.size(); j++)
				{
					if(abs(a.at(j)-a.at(i)) < gtnn)
					{
						gtnn=abs(a.at(j)-a.at(i));
					}
				}
			nho.push_back(gtnn);
		}	
	
	int min=nho.at(0);
	for(int i=0; i<a.size()-1; i++)
		{
			if(nho.at(i) < min)
				{
					min=nho.at(i);
				}
		}
	cout << min;
}
