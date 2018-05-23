#include <iostream>
#include "TTY.h"

using namespace std;


int main(int argc, char *argv[])
{
    TTY tty;
    tty.Connect("COM3",9600);
    std::vector<unsigned char> second_vect(100, 0);
    cout << "\nsecond_vect.size = "<< second_vect.size() << endl;
    /*for(int i=0;i<256;i++) {

        std::vector<unsigned char> the_vectsor;
        //printf("\nFor cycle1 good.");
        the_vectsor.push_back(i);
        //printf("\nFor cycle2 good.");
        tty.Write(the_vectsor);
        tty.Read(the_vectsor);
        // 'R' отправить
        std::cout << (int)(the_vectsor[0]); //output text
    }*/


    for(int i=0; i<256; i++){
        second_vect[0] = i;
        //tty.Write(second_vect);
        // читаем из  СОМ порта
        tty.Read(second_vect);
        cout <<  (char)second_vect[i];
        //после каждой записи - читаем. Если "Привет мир"
        //std::cout << (char)(second_vect[0]); //output the text
        //tty.Read(second_vect);

        if ((second_vect[0]) == 'H'){
            std::cout << "\nSuccess!" << (int)i;
            break;
        }
        else
            cout << i << endl;
    }/**/

    for(auto i : second_vect){
        cout << i;
    }
    cout << endl;
    /*while(1){
        std::vector<unsigned char> vect;
        vect.push_back(5);
        tty.Write(vect);
        tty.Read(vect);
        std::cout << (char)(vect[0]);
        Sleep(1000);
    }*/

    tty.Disconnect();

    system("PAUSE");
    return EXIT_SUCCESS;
}

