// resizing vector
#include <iostream>
#include <vector>
#include "classToFile.h"
#include <stdlib.h> // rand(), srand()
#include <time.h> //time

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
    sumOfX();

    return 0;
}

void sumOfX()
{
    srand(time(NULL));
    int arrSize = 4;
    int sum = 0;
    int arr[arrSize][arrSize];
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

    // Äëÿ ïîääåðæêè ìàñøòàáèðîâàíèÿ
    // ìàòðèöû íóæíî
    // ïîñ÷èòàòü ñíà÷àëà äèàãîíàëü,
    // ïîòîì äâå ñòîðîíû.
    /*
    ñ÷èòàåì äèàãîíàëü:
    sum += arr[arrSize-4][arrSize-1] +
    arr[arrSize-3][arrSize-2] +
    arr[arrSize-2][arrSize-3] +
    arr[arrSize-1][arrSize-4];
    */

    // array viewer
    cout << "\nAn array: " << endl;
    // this cycle is wrong
    /*
    for (int i=0; i<arrSize; i++)
    {
        //cout << i << ' ';
        for (int j=0; j<arrSize; j++)
        {
            // ñ÷èòàåì ïîáî÷íóþ äèàãîíàëü
            if(i == arrSize-j-1)
                sum += arr[i][j];
            // ñ÷èòàåì ñòîðîíû ìàòðèöû
            // íèç ìàòðèöû
            if(i == arrSize-1)
                sum += arr[i][j+1];
            // ïðàâàÿ ñòîðîíà ìàòðèöû
            if(j == arrSize-1)
                sum += arr[i][j];
            // ýëåìåíòû íà ïåðåñå÷åíèè äèàãîíàëè è ñòîðîí
            // 3 øò. ïðîãðàììà ñ÷èòàåò äâàæäû
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }*/
    
        
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
}
