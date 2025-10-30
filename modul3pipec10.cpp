#include "pipec10.h"
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int sum(int arr[], int n1) {
    int s = 0;
    for (int i = 0; i < n1; i++) {
        s = s + arr[i];
    }
    return s;
}
void task1() {
    int n; 
    int mas[n];
    cout << "Введите кол-во эл-ов в массиве" << endl;
    cin >> n;
    cout << "Введите эл-ты: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    cout << sum(mas, n) << endl;
}

int couteven(int mas[],int n2) {
    int k = 0;
    for (int i = 0; i < n2; i++) {
        if (mas[i] % 2 == 0) {
            k++;
        }
    }
    return k;
}

void task2() {
    int n; 
    int mas[n];
    cout << "Введите кол-во эл-ов в массиве" << endl;
    cin >> n;
    cout << "Введите эл-ты: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    cout << couteven(mas, n) << endl;
}

int maxel(int mas[], int n3) {
    int maximum, nmax;
    nmax = 0;
    for (int i = 1; i <=n3; i++) {
        if (mas[i] > nmax) {
            nmax = mas[i];
        }
    }
    return nmax;
}

int minel(int mas[], int n3) {
    int minimum, nmin;
    nmin = 10;
    for (int i = 1; i <= n3; i++) {
        if (mas[i] < nmin) {
            nmin = mas[i];
        }
    }
    return nmin;
}

void task3() {
    int n; 
    int mas[n];
    cout << "Введите кол-во эл-ов в массиве" << endl;
    cin >> n;
    cout << "Введите эл-ты: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    cout << "минимальный эл-т массива:" << endl;
    cout << minel(mas, n) << endl;
    cout << "максимальный эл-т массива: " << endl;
    cout << maxel(mas, n) << endl;
}


int average(int mas[], int n1) {
    int s = 0, p;
    for (int i = 0; i < n1; i++) {
        s = s + mas[i];
    }
    p = s / n1;
    return p;
}

void task4() {
    int n; 
    int mas[n];
    cout << "Введите кол-во эл-ов в массиве" << endl;
    cin >> n;
    cout << "Введите эл-ты: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    cout << "Среднее арифметическое:" << endl;
    cout << average(mas, n) << endl;
}

void count_pos_neg(int mas[], int n5) {
    int nol = 0, pol = 0, otr = 0, s;
    for (int i = 0; i < n5; i++) {
        if (mas[i] == 0) {
            nol++;
        }
        if (mas[i] > 0) {
            pol++;
        }
        if (mas[i] < 0) {
            otr++;
        }
    }
    cout << "Кол-во отрицательных чисел: " << otr << endl;
    cout << "Кол-во положительных чисел: " << pol << endl;
    cout << "Кол-во чисел равных нулю: " << nol << endl;
}

void task5() {
    int n; 
    int mas[n];
    cout << "Введите кол-во эл-ов в массиве" << endl;
    cin >> n;
    cout << "Введите эл-ты: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    cout << "Кол-во положительных отрицательных чисел: " << endl;
    count_pos_neg(mas, n);
}

void reversep(int mas[], int n6) {
    int p, r, o, s;
    for (int i = 0; i < n6 / 2; i++) {
        int v = mas[i];
        mas[i] = mas[n6 - 1 - i];
        mas[n6 - 1 - i] = v;
    }
    for (int j = 0; j < n6; j++) {
        cout << mas[j] << " ";
    }
}

void task6() {
    int n; 
    int mas[n];
    cout << "Введите кол-во эл-ов в массиве" << endl;
    cin >> n;
    cout << "Введите эл-ты: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    cout << "Перевернутый массив: " << endl;
    reversep(mas, n); 
}

void totalmax(int mas[], int n7) {
    int c, p;
    for (int i = 0; i < n7; i++) {
        if (mas[i+1] > mas[i+2]) {
            c++;
        }
    }
    cout << "Кол-во локальных максимумов: " << c << endl;
}

void task7() {
    int n; 
    int mas[n];
    cout << "Введите кол-во эл-ов в массиве" << endl;
    cin >> n;
    cout << "Введите эл-ты: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    totalmax(mas, n); 
}

vector<int> vec(const vector<int> &a, const vector<int> &b) {
    vector<int> resultat;
    for (int i = 0; i < a.size(); i++) {
        resultat.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++) {
        resultat.push_back(b[i]);
    }
    return resultat;
}


void task9() {
    vector<int> a, b;
    int n, m, num;
    cout << "Введите кол-во эл-ов в массиве a" << endl;
    cin >> n;
    cout << "Введите эл-ты 1 массива: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> num;
        a.push_back(num);
    }
    cout << "Введите кол-во эл-ов в массиве b" << endl;
    cin >> m;
    cout << "Введите эл-ты 2 массива: " << endl;
    for (int i = 0; i < m; i++) {
        cin >> num;
        b.push_back(num);
    }
    vector<int> resultat = vec(a, b);
    cout << "Объедененный массив: " << endl;
    for (int i = 0; i < resultat.size(); i++) {
        cout << resultat[i] << " ";
    }
    cout << endl;
}


//10
vector<int> writevct(){
    int size10, num;
    vector<int> arr10;
    std::cout << "введите кол-во элемнтов: ";
    std::cin >> size10;
    std::cout << "введите " << size10 << "чисел: ";
    for (; size10 > 0; size10--){
        std::cin >> num;
        arr10.push_back(num);
    }
    return arr10;
}
void dell_zero(vector<int>& arr10){
    for (int i = 0; i < arr10.size(); ){
        if (arr10[i] == 0){
            arr10.erase(arr10.begin() + i);// ?
        }else{
            i++;
        }
    }
}
void output10(){
    vector<int> arr10 = writevct();
    dell_zero(arr10);
    std::cout << "измененный массив: ";
    for (int i : arr10){
        std::cout << i << " ";
    }
}
