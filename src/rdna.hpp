#include <random>
#include<iostream>
#include <string>
using namespace std;

string randDNA(int seed , string bases , int length) {
	mt19937 eng1(seed);
	int min=0, max=0 ;

	if (bases.length()<1) return "";
		max=bases.size()-1;

uniform_int_distribution<> u(min, max);
int randomIndex = 0;
string DNA = " ";

for(int i=0; i<length; i++){
	randomIndex = u(eng1);
	DNA += bases[randomIndex];
}

return DNA;
}

