#include "Aforizm.h"
#include <fstream>
using namespace std;

void readAf(Aforizm &afor, ifstream &ifst)   
{
	ifst.getline(afor.aftor, 100, '\n');
}

void OutAf(Aforizm &aftor, ofstream &ofst)
{
	ofst << " ����� ������� ������������: " << aftor.aftor << endl;
}
