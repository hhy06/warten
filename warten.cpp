#include <iostream>
#include <cstdlib>
#include "windows.h"
using namespace std;


int main(int argc, char *argv[]){

/*

	for (int i=0;i< argc; i++){
		cout<<i<<":"<<argv[i]<<" = " << atoi(argv[i])<<endl;
	}
*/

	if (argc != 2) {
		cout<<"Bitte sagen Sie 'warten.exe 3'. "<<endl;
		Sleep(3000);
		return 0;
	}

	int ct = atoi(argv[1]);
	if (ct <=0 ) {
		cout<<"Bitte sagen Sie 'warten.exe 3'. "<<endl;
		Sleep (3000);
		return 0;
	}


	
	cout<<"WARTEN "<<ct<<"s"<<endl;

	for (int i =1 ;i<=ct;i++){
		Sleep(1000);
		if (i % 60 ==0){
			cout<<i/60 <<endl;
		}
		else{
			cout<<".";
		}
	}

	cout<<"BYE"<<endl;
	
	return 0;
}
