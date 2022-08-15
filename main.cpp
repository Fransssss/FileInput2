//Author: Fransiskus
// 8/14/22

#include <iostream>
#include "fstream"
#include "string"

using std::ifstream;
using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::string;

int main()
{
    cout << "\n== College Class Grades ==" << endl;
    cout << "1. Computer Science" << endl;
    cout << "2. Calculus" << endl;
    cout << "3. Political Science" << endl;
    string choice;
    ifstream inFS;                           // input file stream
    cout << "choice: ";
    cin >> choice;

    while(choice !=  "e" and choice != "E")
    {
        if(choice == "1")
        {
            string student;                     // take a whole line from file
            string studentName;                 // take only name
            string studentGrade;                // take only grade
            int posComma;                       // position of comma in a line
            int numbering = 1;                  // numbering the list of student
            cout << "\n= Computer Science =" << endl;
            inFS.open("CompScience.txt");
            if(inFS.is_open())
            {
                while(!inFS.eof())               // while there is still data then keep reading
                {
                    getline(inFS, student);
                    posComma = student.find(',');                      // find comma in a line
                    studentName = student.substr(0, posComma);     // get student name
                    studentGrade = student.substr(posComma+1, student.size() -1);
                    cout << numbering << ". Name: " << studentName << endl;
                    cout << "   Grade: " << studentGrade << endl;
                    numbering++;                                           // increment by one
                }
                inFS.close();                                            // close file so it  can be open and read later
            }
            else
            {
                cout << "[ File cannot be opened ]" << endl;
            }
        }

        else if(choice == "2")
        {
            string student;
            string studentName;
            string studentGrade;
            int posComma;
            int numbering = 1;
            cout << "\n= Calculus =" << endl;
            inFS.open("Calculus.txt");
            if(inFS.is_open())
            {
                while(!inFS.eof())
                {
                    getline(inFS, student);
                    posComma = student.find(',');
                    studentName = student.substr(0, posComma);
                    studentGrade = student.substr(posComma+1, student.size()-1);

                    cout << numbering << ". Name: " << studentName << endl;
                    cout << "   Grade: " << studentGrade << endl;
                    numbering++;
                }
                inFS.close();
            }
            else
            {
                cout << "\n[ Fila cannot be opened ]" << endl;
            }
        }

        else if(choice == "3")
        {
            string student;
            string studentName;
            string studentGrade;
            int posComma;
            int numbering = 1;
            cout << "\n= Political Science =" << endl;
            inFS.open("PoliticalScience.txt");
            if(inFS.is_open())
            {
                while(!inFS.eof())
                {
                    getline(inFS,student);
                    posComma = student.find(',');
                    studentName = student.substr(0, posComma);
                    studentGrade = student.substr(posComma+1, student.size()-1);

                    cout << numbering << ". Name: " << studentName << endl;
                    cout << "   Grade: " << studentGrade << endl;
                    numbering++;
                }
            }
            else
            {
                cout << "\n[ File cannot be opened ]" << endl;
            }

        }

        else
        {
            cout << "\n[ Invalid choice ]" << endl;
        }

        cout << "\n== College Class Grades ==" << endl;
        cout << "1. Computer Science" << endl;
        cout << "2. Calculus" << endl;
        cout << "3. Political Science" << endl;
        cout << "choice: ";
        cin >> choice;
    }

    if(choice == "e" or choice == "E")
    {
        cout << "\n== Exit Program ==" << endl;
    }

    return 0;
}
