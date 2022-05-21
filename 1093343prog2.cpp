#include<iostream>
#include<vector>
#include <iomanip>
using namespace std;
string output[8] = { "SN","WN1","WN2","WN3","WT1","WT2","WT3","ST" };
int a1 = 0;
int a2 = 0;
int a3 = 0;
int a4 = 0;
int a5 = 0;
int a6 = 0;
int a7 = 0;
int a8 = 0;
int b1 = 0;
int b2 = 0;
int b3 = 0;
int b4 = 0;
int b5 = 0;
int b6 = 0;
int b7 = 0;
int b8 = 0;
string temp1[2] = { "T","N" };
int main()
{
	string input;
	cin >> input;
	vector<char>InputChar(input.begin(), input.end());////input value in char
	vector<int>hisNum;

	hisNum.push_back(0);
	hisNum.push_back(0);
	hisNum.push_back(0);/////前面先放000

	for (int i = 0; i < InputChar.size(); i++)
	{
		if (InputChar[i] == 'T')
		{
			hisNum.push_back(1);
		}
		if (InputChar[i] == 'N')
		{
			hisNum.push_back(0);
		}
	}
	int a, b, c;
	for (int j = 0; j < InputChar.size(); j++)
	{
		for (int k = 0; k < 3; k++)
		{
			//cout << hisNum[j + k];
		}
		a = hisNum[j + 0];
		b = hisNum[j + 1];
		c = hisNum[j + 2];
		if (a == 0 && b == 0 && c == 0)
		{
			if (a1 >= 0 && a1 <= 3)
				b1 = 1;////NT
			else
				b1 = 0;
			cout << a << b << c << "    ";
			cout << setw(4) << output[a1] << "  " << setw(4) << output[a2] << "  " << setw(4) << output[a3] << "  " << setw(4) << output[a4] << "  " << setw(4) << output[a5] << "  " << setw(4) << output[a6] << "  " << setw(4) << output[a7] << "  " << setw(4) << output[a8] << "  " << setw(4) << temp1[b1] << "  " << setw(4) << InputChar[j]<< endl;
			if (InputChar[j] == 'T')
			{
				a1++;
				if (a1 > 7)
					a1--;
			}
			else
			{
				if (a1 >=1)
				{
					a1--;
				}
			}
		}
		if (a == 0 && b == 0 && c == 1)
		{
			if (a2 >= 0 && a2 <= 3)
				b2 = 1;////NT
			else
				b2 = 0;
			cout << a << b << c << "    ";
			cout << setw(4) << output[a1] << "  " << setw(4) << output[a2] << "  " << setw(4) << output[a3] << "  " << setw(4) << output[a4] << "  " << setw(4) << output[a5] << "  " << setw(4) << output[a6] << "  " << setw(4) << output[a7] << "  " << setw(4) << output[a8] << "  " << setw(4) << temp1[b2] << "  " << setw(4) << InputChar[j] << endl;
			if (InputChar[j] == 'T')
			{
				a2++;
				if (a2 > 7)
					a2--;
			}
			else
			{
				if (a2 >= 1)
				{
					a2--;
				}
			}
		}
		if (a == 0 && b == 1 && c == 0)
		{
			if (a3 >= 0 && a3 <= 3)
				b3 = 1;////NT
			else
				b3 = 0;
			cout << a << b << c << "    ";
			cout << setw(4) << output[a1] << "  " << setw(4) << output[a2] << "  " << setw(4) << output[a3] << "  " << setw(4) << output[a4] << "  " << setw(4) << output[a5] << "  " << setw(4) << output[a6] << "  " << setw(4) << output[a7] << "  " << setw(4) << output[a8] << "  " << setw(4) << temp1[b3] << "  " << setw(4) << InputChar[j] << endl;
			if (InputChar[j] == 'T')
			{
				a3++;
				if (a3 > 7)
					a3--;
			}
			else
			{
				if (a3 >= 1)
				{
					a3--;
				}
			}
		}
		if (a == 0 && b == 1 && c == 1)
		{
			if (a4 >= 0 && a4 <= 3)
				b4 = 1;////NT
			else
				b4 = 0;
			cout << a << b << c << "    ";
			cout << setw(4) << output[a1] << "  " << setw(4) << output[a2] << "  " << setw(4) << output[a3] << "  " << setw(4) << output[a4] << "  " << setw(4) << output[a5] << "  " << setw(4) << output[a6] << "  " << setw(4) << output[a7] << "  " << setw(4) << output[a8] << "  " << setw(4) << temp1[b4] << "  " << setw(4) << InputChar[j] << endl;
			if (InputChar[j] == 'T')
			{
				a4++;
				if (a4 > 7)
					a4--;
			}
			else
			{
				if (a4 >= 1)
				{
					a4--;
				}
			}
		}
		if (a == 1 && b == 0 && c == 0)
		{
			if (a5 >= 0 && a5 <= 3)
				b5 = 1;////NT
			else
				b5 = 0;
			cout << a << b << c << "    ";
			cout << setw(4) << output[a1] << "  " << setw(4) << output[a2] << "  " << setw(4) << output[a3] << "  " << setw(4) << output[a4] << "  " << setw(4) << output[a5] << "  " << setw(4) << output[a6] << "  " << setw(4) << output[a7] << "  " << setw(4) << output[a8] << "  " << setw(4) << temp1[b5] << "  " << setw(4) << InputChar[j] << endl;
			if (InputChar[j] == 'T')
			{
				a5++;
				if (a5 > 7)
					a5--;
			}
			else
			{
				if (a5 >= 1)
				{
					a5--;
				}
			}
		}
		if (a == 1 && b == 0 && c == 1)
		{
			if (a6 >= 0 && a6 <= 3)
				b6 = 1;////NT
			else
				b6 = 0;
			cout << a << b << c << "    ";
			cout << setw(4) << output[a1] << "  " << setw(4) << output[a2] << "  " << setw(4) << output[a3] << "  " << setw(4) << output[a4] << "  " << setw(4) << output[a5] << "  " << setw(4) << output[a6] << "  " << setw(4) << output[a7] << "  " << setw(4) << output[a8] << "  " << setw(4) << temp1[b6] << "  " << setw(4) << InputChar[j] << endl;
			if (InputChar[j] == 'T')
			{
				a6++;
				if (a6 > 7)
					a6--;
			}
			else
			{
				if (a6 >= 1)
				{
					a6--;
				}
			}
		}
		if (a == 1 && b == 1 && c == 0)
		{
			if (a7 >= 0 && a7 <= 3)
				b7 = 1;////NT
			else
				b7 = 0;
			cout << a << b << c << "    ";
			cout << setw(4) << output[a1] << "  " << setw(4) << output[a2] << "  " << setw(4) << output[a3] << "  " << setw(4) << output[a4] << "  " << setw(4) << output[a5] << "  " << setw(4) << output[a6] << "  " << setw(4) << output[a7] << "  " << setw(4) << output[a8] << "  " << setw(4) << temp1[b7] << "  " << setw(4) << InputChar[j] << endl;
			if (InputChar[j] == 'T')
			{
				a7++;
				if (a7 > 7)
					a7--;
			}
			else
			{
				if (a7 >= 1)
				{
					a7--;
				}
			}
		}
		if (a == 1 && b == 1 && c == 1)
		{
			if (a8 >= 0 && a8 <= 3)
				b8 = 1;////NT
			else
				b8 = 0;
			cout << a << b << c << "    ";
			cout << setw(4) << output[a1] << "  " << setw(4) << output[a2] << "  " << setw(4) << output[a3] << "  " << setw(4) << output[a4] << "  " << setw(4) << output[a5] << "  " << setw(4) << output[a6] << "  " << setw(4) << output[a7] << "  " << setw(4) << output[a8] << "  " << setw(4) << temp1[b8] << "  " << setw(4) << InputChar[j] << endl;
			if (InputChar[j] == 'T')
			{
				a8++;
				if (a8 > 7)
					a8--;
			}
			else
			{
				if (a8 >= 1)
				{
					a8--;
				}
			}
		}
		//cout << endl;
	}




}