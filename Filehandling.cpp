#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){

    ofstream outfile("example.txt");
    if (!outfile){
        cerr<<"Error in creating file !!!"<<endl;
        return 1;
    }
    cout<<"File created and writing the data....."<<endl;
    outfile <<"This is test file ."<<endl;
    outfile <<"Hello world."<<endl;
    outfile <<"c++ file handling is fun  ."<<endl;

    outfile.close();
    cout<<"Data written successfully and file closed .."<<endl;

    ifstream infile("example.txt");
    if (!infile){
        cerr<<"Error in opening file !!! "<<endl;
        return 1;
    }

    string line ;
    cout <<"file opened successfully "<<endl<<endl;

    while (getline(infile,line)){
        cout<<line<<endl;
    }

    infile.close();

    
    return 0;
}
