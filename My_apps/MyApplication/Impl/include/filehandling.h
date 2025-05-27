#include "My_App.h"
#include"fstream"
/*
File Handling refers to the operations 
which we perform on files like create delete edit read write etc.
-> To store the program in  a file in Hard disk.
Hard Disk  -> RAM 
Streams:
Output stream
input Stream

Steps:
1. Open the file in RAM (ofstream)   -> fout obj.
2. input from our file  (ifstream)
3.
Streams:abort
ios
ios-> istream->ifstream
ios-> istream ->iostream->fstream
ios-> ostream ->ofstream
ios-> ostream ->iostream->fstream

*/
class Filehandler :public MainClass{

    private:



    public:
    char ch;
    ifstream fin;
    ofstream fout;
    void Readfile();
    void Writefile();

    Filehandler();
    ~Filehandler();


};