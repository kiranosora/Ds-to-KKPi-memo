#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <string>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <numeric>
#include <map>
#include <utility>
#include <limits.h>
#include <math.h>
#include <fstream>
using namespace std;



int main(int argc, const char** argv){
    
    //1. Read Branching Fraction
    double br, brStatErr, brSysErr;
    string str;
    ifstream ifsBr("br.dat");
    ifsBr >> str >> str >> br >> str >> brStatErr >> str >> brSysErr;

    //2. Read FF
    double FF, FFstatErr, FFsysErr;
    double bf, bfStatErr, bfSysErr;
    ofstream ofs("res.dat");
    ifstream ifsFF("FF.dat");
    while(ifsFF >> str >> FF >> FFstatErr >> FFsysErr){
        bf = br * FF/100 ;
        bfStatErr = sqrt( brStatErr*brStatErr* FF/100 * FF/100 + br*br * FFstatErr/100*FFstatErr/100);
        bfSysErr = sqrt( brSysErr*brSysErr* FF/100 * FF/100 + br*br * FFsysErr/100*FFsysErr/100);
        ofs << str<<"\t\t"<< bf <<"\t\t" << bfStatErr << "\t\t"<<bfSysErr <<endl;
        cout<<"\t\t"<<bf <<"\t\t" << bfStatErr << "\t\t"<<bfSysErr <<endl;
    }
    ofs.close();
    return 0;
}

