#include <iostream>

using namespace std;

int main()
{

    int marks;
    // declaring variable called marks

    cout << "Enter your marks here: " << endl;
    cin >> marks;
    // assigning users input into the "marks" variable

        if( marks <= 100 & marks>= 80 )
            {
                cout << "Grade: A\n";
                // This block of code says that if input is between 100 and 80 (inclusive) print out "Grade: A"
            }
        else if(marks < 80 & marks >= 75)
            {
                cout << "Grade: B+\n";
                 // This block of code says that if input is below 80 and greater than or equal to 75 print out "Grade: B+"
            }
        else if(marks < 75 & marks >= 70)
            {
                cout << "Grade: B\n";
                // This block of code says that if input is below 75 and greater than or equal to 70 print out "Grade: B"
            }
        else if(marks < 70 & marks >= 65)
            {
                cout << "Grade: C+\n";
                // This block of code says that if input is below 70 and greater than or equal to 65 print out "Grade: C"
            }
        else if(marks < 65 & marks >= 60)
            {
                cout << "Grade: C\n";
                // This block of code says that if input is below 65 and greater than or equal to 60 print out "Grade: C+"
            }
        else if(marks < 60 & marks >= 55)
            {
                cout << "Grade: D+\n";
                // This block of code says that if input is below 60 and greater than or equal to 55 print out "Grade: D+"
            }
        else if(marks < 55 & marks >= 50)
            {
                cout << "Grade: D\n";
                // This block of code says that if input is below 55 and greater than or equal to 50 print out "Grade: D"
            }
        else if(marks < 50 )
            {
                cout << "Grade: F\n";
                // This block of code says that if input is below 50  "Grade: F"
            }

    return 0;

}

