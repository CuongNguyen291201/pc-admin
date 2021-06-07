/*
Nguyen Quoc Cuong
Ma Sv: B19DCCN085
Nhom: 15
STT: 06
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isExistTag(string str)
{
	vector <string> open, close;
	for (int i = 0; i<str.length() - 1; i++)
	{
		if (str[i] != '<') continue;
		for (int j = i + 2; j<=str.length() - 1; j++)
		{
			if (str[j] != '>') continue;
			string tenthe = "";
			if (str[i + 1] == '\\')
			{
				for (int k = i + 2; k<j; k++) tenthe += str[k];
				if (tenthe != "") close.push_back(tenthe);
			}
			else
			{
				for (int k = i + 1; k<j; k++) tenthe += str[k];
				open.push_back(tenthe);
			}
		}
	}
	for (int i = 0; i<open.size(); i++)
		for (int j = 0; j<close.size(); j++)
			if (open[i] == close[j]) return 1;
	return 0;
}


bool Check(string chuoi)
{
	int i = 0, j = chuoi.length() - 1;
	string open, close;
	
	while (chuoi[i] == ' ') i++;
	if (chuoi[i] != '<') return 0;
	i++;
	while (chuoi[i] != '>' && i < j) open += chuoi[i++];
	if (open == "" || chuoi[i] != '>') return 0;
	
	while (chuoi[j] == ' ') j--;
	if (chuoi[j] != '>') return 0;
	j--;
	while (chuoi[j] != '\\' && j > i) close += chuoi[j--];
	if (chuoi[j] != '\\' || chuoi[j - 1] != '<' || close == "") return 0;
	
	for (int k = 0; k<=(close.length() - 1)/2; k++)
	{
		char temp = close[k];
		close[k] = close[close.length() - 1 - k];
		close[close.length() - 1 - k] = temp;
	}
	
	if (open != close) return 0;
	
	string str = "";
	for (int k = i + 1; k <= j - 2; k++)
		str += chuoi[k];
	
	return !isExistTag(str);
}

int main()
{
	string chuoi;
	getline(cin, chuoi);
	
	cout << Check(chuoi);
	
	return 0;
}
