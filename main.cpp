#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char *argv[])
{


    do
    {
        system("clear"); // to clear the terminal for linux; change the argument to 'cls' for windows
        cout << setw(30) << "RED BLACK TREE\n";
        cout << "  1. Insert in the tree\n"
             << "  2. Delete a node from the tree\n"
             << "  3. Search for an element in the tree\n"
             << "  4. Display the tree\n"
             << "  5. Exit\n\n"
             << "Enter your choice: ";
        int input;
        cin >> input;
        switch (input) {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }

        // to hold the screen for showing the results
        cout << "\nPress any key to continue...\n" << flush;
        cin.ignore();
        cin.ignore();

    } while (true);

    return 0;
}
