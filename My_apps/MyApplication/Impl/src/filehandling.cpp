#include"filehandling.h"

Filehandler::Filehandler(){
    cout<<"[CPP_FILEHANDLING]  Filehandler  constructor called\n";
}
Filehandler::~Filehandler(){
    cout<<"[CPP_FILEHANDLING]  Filehandler  Destructor called\n";

}
void Filehandler::Readfile(){
    cout<<"[CPP_FILEHANDLING]  Checking existense of  File textfile.txt\n";
    fin.open("../../lib/input/textfile.txt");
    if (!fin) {
        cout << "[CPP_FILEHANDLING] Error: Unable to open file!\n";
    }
    else{
        cout<<"[CPP_FILEHANDLING]  textfile.txt is available and Reading  File textfile.txt\n";
        char ch;
        while (fin.get(ch)) {  
            cout << ch;
        }
    fin.close();
    }
}
void Filehandler::Writefile(){
    cout<<"[CPP_FILEHANDLING]  Creating a file with name Created_file.txt\n";
    fout.open("../../lib/generated/Created_file.txt");
    cout<<"[CPP_FILEHANDLING]  Successfully Created a file with name Created_file.txt\n";
    fout<<"Kudos! Welcome. Your File is created Successfully! This is the content of Your File!";
    for(int j=0; j<=5; j++){
        for(int i=0; i<=10; i++){
            fout<< j << " * " << i <<" = " << j*i << "\n";
            }
            fout << "The Number table of " << j+1 << " is Available below:\n"; 
    }
    
    
    fout.close();

}

void MainClass::filehandling(){
    Filehandler obj;
    obj.Readfile();
    obj.Writefile();
}