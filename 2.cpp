/*
* @Author: YYH
* @School: BISTU
* @Date:   2019-06-26 09:29:40
* @Last Modified by:   YYH
* @Last Modified time: 2019-06-26 10:11:58
*/
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<ostream>
#include<sstream>
#include<string>
using namespace std;

const string extension = ".txt";
const int  num =1254;
int main()
{

		ostringstream os;
		string res;
		//os<<num;
		//res += os.str();
		res += std::to_string(num);
		res += extension;
		cout<<"结果："<<res<<endl;
		ofstream outfile;
		outfile.open(res,ios::in|ios::out|ios::trunc);
		if(!outfile)
			{cout<<"error!"<<endl;return 0;}
		outfile<<res;
		outfile.close();
	return 0;
}
