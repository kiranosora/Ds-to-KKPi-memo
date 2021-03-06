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
#include <functional>
using namespace std;



int main(int argc, const char** argv){
    ifstream ifs1("res.dat");
    ifstream ifs2("pdg.dat");
    double rBf=0, rBfErrSta=0, rBfErrSys=0, pBf=0, pBfErr=0, res=0, resErr=0;
    string str;
    double rBfErr=0;
    while(ifs2 >> str >>  pBf >> pBfErr){
        ifs1 >> str>> rBf >> rBfErrSta >> rBfErrSys;
        rBfErr = sqrt(rBfErrSta * rBfErrSta + rBfErrSys*rBfErrSys);
        res = rBf / pBf;
        resErr = sqrt( 1/(pBf*pBf)*rBfErr*rBfErr + rBf*rBf/(pBf*pBf*pBf*pBf)*pBfErr*pBfErr);
        cout<<" rBfErr: "<<rBfErr<<" pBfErr: "<<pBfErr<<endl;
        cout<< str<< "\t\t"<< res<<" \t\t "<<resErr<<endl;
    }
    return 0;
}

