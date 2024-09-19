// #include <iostream>
// #include <cstring> 
// #include "dma.h"    

// using namespace std;

// namespace seneca {

//     void reverse() {
//         int num;   
//         cout << "Enter the number of double values:\n> ";
//         cin >> num;
        
//         double* arr = new double[num]; 

//         for (int i = 0; i < num; i++) {
//             cout << i + 1 << "> "; 
//             cin >> arr[i];
//         }
        
//         for (int i = num - 1; i >= 0; i--) {
//             cout << arr[i] << endl;
//         }
        
//         delete[] arr;  
//     }

//     Contact* getContact() {
//         Contact* newContact = new Contact;  
        
//         cout << "Name: ";
//         cin.getline(newContact->m_name, 21); 
        
//         cout << "Last name: ";
//         cin.getline(newContact->m_lastname, 31);  
        
//         cout << "Phone number: ";
//         cin >> newContact->m_phoneNumber; 
//         cin.ignore(1000, '\n');  
//         return newContact;  
//     }

//     void display(const Contact& C) {
//         cout << C.m_name << " " << C.m_lastname << ", +" << C.m_phoneNumber << endl;
//     }

   
//     void deallocate(Contact* C) {
//         delete C;  
//     }

   
//     void setEmpty(Contact& C) {
//         C.m_name[0] = '\0';       
//         C.m_lastname[0] = '\0';   
//         C.m_phoneNumber = 0;      
//     }

// }


#include <iostream>
#include <cstring> 
#include "dma.h"    

using namespace std;

namespace seneca {

    void reverse() {
        int num;   
        cout << "Enter the number of double values:\n> ";
        cin >> num;

        cin.ignore(1000, '\n');
        
        double* arr = new double[num]; 

        for (int i = 0; i < num; i++) {
            cout << i + 1 << "> "; 
            cin >> arr[i];
        }
        
        for (int i = num - 1; i >= 0; i--) {
            cout << arr[i] << endl;
        }
        
        delete[] arr;  
    }

    Contact* getContact() {
        Contact* newContact = new Contact;  
        cin.ignore(1000, '\n');
        cout << "Name: ";
        cin.getline(newContact->m_name, 21); 
        
        cout << "Last name: ";
        cin.getline(newContact->m_lastname, 31);  
        
        cout << "Phone number: ";
        cin >> newContact->m_phoneNumber; 
        cin.ignore(1000, '\n');  
        return newContact;  
    }

    void display(const Contact& C) {
        cout << C.m_name << " " << C.m_lastname << ", +" << C.m_phoneNumber << endl;
    }

    void deallocate(Contact* C) {
        delete C;  
    }

    void setEmpty(Contact& C) {
        C.m_name[0] = '\0';       
        C.m_lastname[0] = '\0';   
        C.m_phoneNumber = 0;      
    }

}