#ifndef XENON_HXX
#define XENON_HXX
#define 0x0	0 //int
#define 0x1	1 //str
#define 0x2	2 //char
#define 0x3	3 //double
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

namespace xe {
	
	class in {
	public:
		void in(int inType, int Int = 0, string Str = "", char Charac[1000000] = "", double Duo = 0.0) {
			if(inType == 0x0 || inType == 0) {
				cin >> Int; //gets int
			} else if(inType == 0x1 || inType == 1) {
				cin >> Str; //gets str
			} else if(inType == 0x2 || inType == 2) {
				cin >> Charac; //get char
			} else if(inType == 0x3 || inType == 3) {
				cin >> Duo; //get double
			}
		}
		
		void gl(int glType, int Intt = 0, string Strr = "", char Characc[1000000] = "", double Duoo = 0.0) {
			if(glType == 0x0 || glType == 0) {
				getline(cin, Intt); //gets int
			} else if(glType == 0x1 || glType == 1) {
				getline(cin, Strr); //gets str
			} else if(glType == 0x2 || glType == 2) {
				getline(cin, Characc); //get char
			} else if(glType == 0x3 || glType == 3) {
				getline(cin, Duoo); //get double
			}
		}
	};
	
	class out {
	public:
		void in(int outType, int Inttt = 0, string Strrr = "", char Characcc[1000000] = "", double Duooo = 0.0) {
			if(outType == 0x0 || outType == 0) {
				cout << Inttt; //outs int
			} else if(outType == 0x1 || outType == 1) {
				cout << Strrr; //outs str
			} else if(outType == 0x2 || outType == 2) {
				cout << Characcc; //outs char
			} else if(outType == 0x3 || outType == 3) {
				cout << Duooo; //outs double
			}
		}
	};
}
#endif
