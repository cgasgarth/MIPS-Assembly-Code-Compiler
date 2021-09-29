#include <iostream>
#include <fstream> 
#include <string>
#include <boost/algorithm/string.hpp>
using namespace boost::algorithm;
using namespace std;

int main(int argc, char **argv){
    ifstream in1("out.txt");
    ifstream in2(argv[1]);
    string line1;
    string line2;
    int lineNum = 1;
    while(getline(in1, line1)){
        getline(in2, line2);
        line1 = line1.substr(0, line1.length()-0);
        line2 = line2.substr(0, line2.length()-1);
        to_upper(line1);
        to_upper(line2);
        if(line1!=line2){
            cout << lineNum << endl;
        }
        lineNum ++;
    }
}