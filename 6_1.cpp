#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[]){
	fstream infile,outfile;
	infile.open(argv[1]);
	outfile.open(argv[2]);
	if (!infile){
		cout<<"���ܴ������ļ���"<<argv[1]<<endl;
		return 0;
	}
	if (!outfile){
		cout<<"���ܴ�Ŀ���ļ���"<<argv[2]<<endl;
		return 0;
	}
	char ch;
	while (infile>>ch)
		outfile<<ch;
	infile.close();
	outfile.close();
	return 0;
} 
