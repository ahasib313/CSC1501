#include <iostream>
#include <string>
using namespace std;
int main()
{


    int rocket[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1 };
    int astronaut[16] = { 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1 };
    int trained[16] = { 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1 };
    int educated[16] = { 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 };

    cout << "Welcome to the Validator" << endl;


    for (int i = 0; i < 16; i++)
    {

        cout << "\nRocket: " << rocket[i] << 

             ", Astronaut: " << astronaut[i] <<  

             ", Trained: " << trained[i] << 

             ", Educated: " << educated[i] << endl;


        cout << "(Proposition 1)- If someone has a rocket, that implies they're an astronaut: " << !(rocket[i] && !astronaut[i]) << endl;

        cout << "(Proposition 2)- If someone is an astronaut, that implies they're highly trained: " << !(astronaut[i] && !trained[i]) << endl;
        
        cout << "(Proposition 3)- If someone is highly trained, that implies they're educated: " << !(trained[i] && !educated[i]) << endl;
        
        cout << "(Conclusion)- A person is educated, that implies they have a rocket: " << !(educated[i] && !rocket[i]) << endl;
        
        if (!(rocket[i] && !astronaut[i]) == 1 && !(astronaut[i] && !trained[i]) == 1 && !(trained[i] && !educated[i]) == 1 && !(educated[i] && !rocket[i]) == 0)
        {
            cout << "Therefore, this statement is invalid!" << endl << endl;
        }
        else
        {
            cout << "Therefore, this statement is valid!" << endl << endl;
        }
    }

    cout << "-------------------------------" << endl;
    cout << "End of Validator!" << endl;

}
