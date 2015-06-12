// This file demonstrates the getline function with
// a specified delimiter.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string input;	// To hold file input
    string name;
    int Sloot = 0, Eirik = 0, Jorge = 0, Matty = 0, Ali = 0, Joe = 0, Peter = 0, Ben = 0, Justin = 0, Me = 0;
    
    // Open the file for input.
    fstream dataFile("names4.txt", ios::in);
    fstream dataFile2("sloot.txt", ios::out);
    // If the file was successfully opened, continue.
    if (dataFile)
    {
        // Read an item using $ as a delimiter.
        getline(dataFile, input, '*');
        
        // While the last read operation
        // was successful, continue.
        while (dataFile)
        {
            // Display the last item read.
            //cout << input << endl;
            dataFile >> name;
            if (name == "Sloot")
            {
                getline(dataFile, input, '*');
                cout << input << endl;
                dataFile2 << input << endl;
            }
            /*
            if (name == "Sloot")Sloot++;
            else if (name == "Eirik")Eirik++;
            else if (name == "Jorge")Jorge++;
            else if (name == "Matty")Matty++;
            else if (name == "Ali")Ali++;
            else if (name == "Ben")Ben++;
            else if (name == "Joe")Joe++;
            else if (name == "Justin")Justin++;
            else if (name == "Peter")Peter++;
            else if (name == "Me")Me++;
            */
            
            // Read an item using $ as a delimiter.
            //getline(dataFile, input, '*');
            
        }
        
        // Close the file.
        dataFile.close();
    }
    else
    {
        cout << "ERROR: Cannot open file.\n";
    }
    cout << "Sloot: " << Sloot << endl;
    cout << "Eirik: " << Eirik << endl;
    cout << "Jorge: " << Jorge << endl;
    cout << "Joe: " << Joe << endl;
    cout << "Matty: " << Matty << endl;
    cout << "Peter: " << Peter << endl;
    cout << "Justin: " << Justin << endl;
    cout << "Ali: " << Ali << endl;
    cout << "Ben: " << Ben << endl;
    cout << "Me: " << Me << endl;
    
    return 0;
}