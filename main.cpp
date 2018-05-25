// resizing vector
#include <iostream>
#include <vector>
#include "classToFile.h"
#include <stdlib.h> // rand(), srand()
#include <time.h> //time
#include <iomanip>

using namespace std;
void sumOfX();

class myClass{
public:
    myClass(string nm){
        setName(nm);
    }

    void setName(string x){
        name = x;
    }

    string getName(){
        return name;
    }

    //~myClass();

private:
    string name;

};

int main()
{
    clock_t start = clock();
    // code for vector resizing
    /*std::vector<int> myvector;

     set some initial content:
    for (int i=1; i<10; i++)
        myvector.push_back(i);

    myvector.resize(5);
    myvector.resize(8,100);
    myvector.resize(12);
    std::cout << "\nmyvector contains: ";
    for (int i=0; i<myvector.size(); i++)
        std::cout << ' ' << myvector[i];
    std::cout << '\n';*/

    // code from sololearn
    myClass ob1("David");
    myClass ob2("Amy");
    cout << ob1.getName();
    cout << ob2.getName();
    //classToFile obj;
    //obj.myPrint();
    /*
    We can also use a pointer to
    access the object`s members.
    The following pointer points to
    the obj object:
    */
    //classToFile obj1;
    //classToFile *ptr = &obj1;
    /*
    The arrow member selection
    operator (->) is used to access
    an object`s members with
    a pointer.
    */
    //ptr->myPrint();
    /*
    When working with an object, use
    the dot member selection operator(.).
    Whe working with a pointer to the
    object, use the arrow member
    selection operator (->).
    */
    //const classToFile obj2;
    //obj2.myPrint();
//    auto start = std::chrono::steady_clock::now();// initial time
    cout << "\nstartTime: " << start << endl;
    sumOfX();
    clock_t theEnd = clock(); // end time
    cout << "\nend time: " << theEnd << endl;
    double requiredTime = (double)(theEnd - start) - CLOCKS_PER_SEC;
    cout << "\nRequiredTime: " << requiredTime << endl;


    return 0;
}

void sumOfX()
{
    srand(time(NULL));
    int arrSize = 700;
    int sum = 0;
    // change to vector<vector<type_T>> var(N, vector<type_T>(N,0))
    // посчитать время выполнения алгоритма (подсчёта матрицы)
    // посчитать время прохода по каждой ячейке матрицы (с помощью for(auto i: var))
    unsigned int arr[arrSize][arrSize];
    /*{
        {0, 45, 0, 2,},
        {0, 0, 1, 1,},
        {15, 5, 0, 3,},
        {1, 1, 1, 1}
    };*/
    // array initialization and filling
    for(int i=0; i<arrSize; i++)
    {
        for(int j=0; j<arrSize; j++)
            arr[i][j] = rand() %100;
    }
    /*
    needed values:
    a[0][3];
    a[1][2], a[1][3];
    a[2][1], a[2][3];
    a[3][0] - a[3][3].
    */

    // Для поддержки масштабирования
    // матрицы нужно
    // посчитать сначала диагональ,
    // потом две стороны.
    /*
    считаем диагональ:
    sum += arr[arrSize-4][arrSize-1] +
    arr[arrSize-3][arrSize-2] +
    arr[arrSize-2][arrSize-3] +
    arr[arrSize-1][arrSize-4];
    */

    // array viewer
    cout << "\nAn array: " << endl;
   /* for (int i=0; i<arrSize; i++)
    {
        //cout << i << ' ';
        for (int j=0; j<arrSize; j++)
        {
          /*  // считаем побочную диагональ
            if(i == arrSize-j-1)
                sum += arr[i][j];
            // считаем стороны матрицы
            // низ матрицы
            if(i == arrSize-1)
                sum += arr[i][j+1];
            // правая сторона матрицы
            if(j == arrSize-1)
                sum += arr[i][j];
            // элементы на пересечении диагонали и сторон
            // 3 шт. программа считает дважды
            cout << setw(2) << arr[i][j] << ' ';
        }
        cout << endl;
    }*/
    // we consider collateral diagonal
    for(int i=0, j=arrSize-1; i<arrSize-1, j>=0; i++,j--){
        sum += arr[i][j];
        //cout << "\ncollateral diagonal: " << arr[i][j] << endl;
    }
    // we consider sides of matrix
    // a bottom of the matrix
    for(int i=arrSize-1, j=1; j<arrSize; j++){
        sum += arr[i][j];
        //cout << "\n+a bottom of the matrix " << arr[i][j] << endl;
    }
    // a right side of the matrix
    for(int i=1, j=arrSize-1; i<arrSize-1; i++){
        sum += arr[i][j];
        //cout << "\n+a right side of the matrix " << arr[i][j] << endl;
    }

    /*sum -= arr[0][arrSize-1] -
    arr[arrSize-1][0] -
    arr[arrSize-1][arrSize-1];
    //sum += arr[0][3] + arr[1][2] + arr[1][3] +
    //arr[2][1] + arr[2][3] + arr[3][0] + arr[3][1] + arr[3][2] + arr[3][3];
    sum += arr[0][arrSize-1] +
    arr[arrSize-3][arrSize-2] + arr[arrSize-3][arrSize-1] +
    arr[arrSize-2][arrSize-3] + arr[arrSize-2][arrSize-1] +
    arr[arrSize-1][0] + arr[arrSize-1][arrSize-3] + arr[arrSize-1][arrSize-2] + arr[arrSize-1][arrSize-1];*/
    cout << "\nSum equal: " << sum << endl;
    //system("pause");
}
