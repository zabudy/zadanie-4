#include <iostream>
#include <ctime>
using namespace std;

int one(int a, int g, int i) {
    return (a + g * i);
}
void two(int* a2, int* b) {
    int t = *a2; 
    *a2 = *b; 
    *b = t; 
}
int three(int a) {
    if (a % 2 == 0) { return 1; }
    else { return 0; }
}
void print_array(int array[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int a1[10];
    cout << endl << "Первая задача" << endl << "Введите первый член арифмитической прогрессии a1=";
    int g;
    cin >> a1[0];
    cout << "Введите g= ";
    cin >> g;
    int i;
    for ( i = 1; i <= 9; i++) {
        a1[i] = one(a1[0], g, i);
    }
    print_array(a1, 10);
    int N;
    cout << endl << "Вторая задача" << endl;
    const int n = 10;
    int a2[n];
    for (i = 0; i < n; i++) {
        a2[i] = i + 1;
    }
    print_array(a2, n);
    for (i = n - 1; i > 0; i--) {
        two(&a2[i], &a2[rand() % i]);
    }
    print_array(a2, n);
    cout << endl << "Третья задача" << endl;
    int a3[n];
    for (i = 0; i < 10; i++) {
        a3[i] = (rand() % 1000)+1000;
    }
    print_array(a3, n);
    int k = 0;
    for (i = 0; i < n; i++) {
        k = k + three((a3[i]%100)/10);
    }
    cout << k;
    return 0;
}