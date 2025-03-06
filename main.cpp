#include <iostream>

using namespace std;
int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int* numbers = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cout<< numbers[i];
        if(i < n  -1)
        {
            cout<<" +";
        }
        sum += numbers[i];
    }
    cout << " = " << sum << endl;
    cout << "The result of sum number: " << sum <<endl;
    delete[] numbers;

    return 0;
}

//#include <iostream>
//
//using namespace std;
//
//int main(){
//    int numbers, counter;
//    double hours_work, hours_salary, salary;
//    string name;
//    cout<<"Enter the numbers of employee: ";
//    cin>>numbers;
//    for (counter = 1; counter <= numbers; counter++)
//    {
//        cout<<"Enter the name of employee: ";
//        cin>>name;
//        cout<<"Enter the Hour_Work of employee: ";
//        cin>>hours_work;
//        cout<<"Enter the Hour_Salary of employee: ";
//        cin>>hours_salary;
//        if(hours_work <= 50)
//            salary = hours_work + hours_salary;
//        else
//            salary = hours_salary * 50+(hours_work-50) * 1.5 * hours_salary;
//        cout<<"========================================================"<<endl;
//        cout<<"Name of the employee = "<<name<<endl;
//        cout<<"Salary of the employee = "<<salary<<endl;
//        cout<<"========================================================"<<endl;
//    }
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//float circle(float radius){
//    float area = 3.14 * radius * radius ;
//    return area;
//}
//int main(){
//    cout<< circle (6) << "is the area of circle ";
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
// int main(){
//     string name;
//     cout<<"Input a string until stop \n";
//     for (name ="zero ";name !="stop"; cin>> name)
//         if(name == "zero")
//             cout<<"Initial value is "<<name << endl;
//     else
//         cout<<"Your input "<<name << endl;
//     return 0;
// }

//#include <iostream>
//
//using namespace std;
//
//void displayMenu(){
//    int choice ;
//    do{
//        cout<<"\n--- Freelancing App ---\n";
//        cout<<"1 Register \n";
//        cout<<"2.Login \n";
//        cout<<"3.Exit \n";
//        cout<<"Choose an option: ";
//        cin>>choice ;
//        switch(option){
//            case 1:
//                registerUser();
//                break;
//            case 2:
//                loginUser();
//                break;
//            case 3:
//                cout<<"Exiting the app. Goodbye! \n";
//                break;
//            default:
//                cout<<"Invalid choice. please try again. \n";
//        }
//    }while (choice != 3);
//
//};