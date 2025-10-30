//laba algosi 1

// #include <iostream>
// using namespace std;
// #include <cmath>
// int desyat(int num){
//     int res=0,i=0;
//     while (num>0){
//         res=res+(num%10)*pow(8,i);
//         i++;
//         num=num/10;
//     }
//     return res;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<desyat(n)<<endl;
// }

//laba algosi 3
// #include <iostream>
// using namespace std;
// #include <cmath>
// int rec(int num) {
//     int i=2;
//     if (num == 1) {return 1;}
//     else {return num + rec(num - 1);}
// }
// int sum(int num) {
//     if (num == 1) { return 1; }
//     else {return rec(num) + sum(num-1);}
// }

// int main() {
//     int n;
//     float s=0;
//     cout << "введите n" << endl;
//     cin >> n;
//     if (n < 1 || n > 30) {
//         cout << "error, try again." << endl;
//         return 1;
//     }
//     cout << "summa= " << sum(n) << endl;
//     return 0;
// }
#include <iostream>
#include <cmath>
#include "pipec10.h"
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;
int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    #endif
    int choese;
    cout << "Выберите от 1-11: " << endl;
    cout << "1) Сумма эл-ов массивов" << endl;
    cout << "2) подсчет четных чисел" << endl;
    cout << "3) Поиск максимального и минимального элемента" << endl;
    cout << "4) Среднее арифметическое" << endl;
    cout << "5) Количество положительных и отрицательных чисел" << endl;
    cout << "6) Инверсия массива" << endl;
    cout << "7) Количество локальных максимумов" << endl;
    cout << "9) Объединение двух массивов" << endl;
    cout << "10) Удаление всех нулей из массива" << endl;
    cout << "11) Выход из программы " << endl;
    cin >> choese;
    switch (choese) {
        case 1: {
            task1();
            break; 
        }
        case 2: {
            task2();
            break;
        }
        case 3: {
            task3();
            break;
        }
        case 4: {
            task4();
            break;
        }
        case 5: {
            task5();
            break;
        }
        case 6: {
            task6();
            break;
        }
        case 7: {
            task7();
            break;
        }
        case 9: {
            task9();
            break;
        }
        case 10: {
            output10();
            break;
        }
    }

}