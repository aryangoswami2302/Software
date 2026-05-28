#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int choice;
    float data[7];
    float total = 0;
    float average;

    do
    {
        cout << "\n===== Student Productivity Tracker =====";
        cout << "\n1. Log Daily Study Hours";
        cout << "\n2. Generate Weekly Report";
        cout << "\n3. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                ofstream file("studyhours.txt");

                for(int i = 0; i < 7; i++)
                {
                    cout << "Enter study hours for Day " << i + 1 << ": ";
                    cin >> data[i];

                    file << data[i] << endl;
                }

                file.close();

                cout << "\nStudy hours saved successfully!\n";
                break;
            }

            case 2:
            {
                ifstream file("studyhours.txt");

                total = 0;

                cout << "\nWeekly Study Report\n";

                for(int i = 0; i < 7; i++)
                {
                    file >> data[i];

                    cout << "Day " << i + 1 << ": "
                         << data[i] << " hours\n";

                    total = total + data[i];
                }

                average = total / 7;

                cout << "\nTotal Study Hours: " << total;
                cout << "\nAverage Study Hours: " << average;

                file.close();
                break;
            }

            case 3:
            {
                cout << "\nExiting Program...";
                break;
            }

            default:
            {
                cout << "\nInvalid Choice!";
            }
        }

    } while(choice != 3);

    return 0;
}
