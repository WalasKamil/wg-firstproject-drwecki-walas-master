#include <iostream>
#include <vector>
#include "../QueueLib/Queue.h"


int main()
{
  

  

   /*
    Queue y, z, x,q;
  
    y.insert(1);
    y.insert(2);
    y.insert(3);
    z.insert(4);
    z.insert(5);
    z.insert(6);
    //321+654 x=321654
    x = y + z;
   
    //y=321 z=654
     //321+654=654321
   //1,2,3,4,5,6   
    std::cout << x.remove();
    std::cout << ", ";
    std::cout << x.remove();
    std::cout << ", ";
    std::cout << x.remove();
    std::cout << ", ";
    std::cout << x.remove();
    std::cout << ", ";
    std::cout << x.remove();
    std::cout << ", ";
    std::cout << x.remove();
    std::cout << std::endl;
    x = y + 7;
    //  y=321 x=10,9,8 wypisz=8,9,10
    std::cout << x.remove();
    std::cout << ", ";
    std::cout << x.remove();
    std::cout << ", ";
    std::cout << x.remove();
    std::cout << std::endl;
    x = z / 2;
    //z=654  x=3,2,2 wypisz=2,2,3
    std::cout << x.remove();
    std::cout << ", ";
    std::cout << x.remove();
    std::cout << ", ";
    std::cout << x.remove();
    std::cout << std::endl;
    q = z - 3;
    //z=654 q=3,2,1 wypisz=1,2,3
    std::cout << q.remove();
    std::cout << ", ";
    std::cout << q.remove();
    std::cout << ", ";
    std::cout << q.remove();
    std::cout << std::endl;
    */
    int ilosc;
    int liczba;
    Queue kolejka_1,kolejka_2,wynik;

    std::cout << "Podaj ile elementow chcesz wstawic do kolejki FIFO: ";
    std::cin >> ilosc;
    std::cout << std::endl;
    
    for (int i = 0; i < ilosc; i++)
    {
        std::cout << "Wstaw element: ";
        std::cin >> liczba;
        kolejka_1.insert(liczba);
    }
    std::cout << "Jaka operacje chcesz wykonac: ";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "1) Aby dodac do kolejki liczbe";
    std::cout << std::endl;
    std::cout << "2) Aby dodac do kolejki nowa kolejke";
    std::cout << std::endl;
    std::cout << "3) Aby odjac liczbe od zawartosci kolejki";
    std::cout << std::endl;
    std::cout << "4) Aby pomnozyz zawartosc kolejki przez liczbe";
    std::cout << std::endl;
    std::cout << "5) Aby podzielic zawartosc kolejki przez liczbe";
    std::cout << std::endl;
    std::cout << "Podaj numer dzialania: ";
    int dzialanie;
    std::cin >> dzialanie;
    switch (dzialanie)
    {
    case 1:
        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;
        wynik = kolejka_1 + liczba;
        std::cout << "Wynik: ";
        wynik.display();     
        break;
    case 2:
        std::cout << "Podaj ile elementow chcesz wstawic do kolejki FIFO: ";
        std::cin >> ilosc;
        std::cout << std::endl;
        std::cout << "Wstaw elementy kolejki FIFO:";
        std::cout << std::endl;
        for (int i = 0; i < ilosc; i++)
        {
            std::cout << "Wstaw element: ";
            std::cin >> liczba;
            kolejka_2.insert(liczba);
        }
        wynik = kolejka_1 + kolejka_2;
        std::cout << "Wynik: ";
        wynik.display();
        break;
    case 3:
        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;
        wynik = kolejka_1 - liczba;
        std::cout << "Wynik: ";
        wynik.display();
        break;
    case 4:
        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;
        wynik = kolejka_1 * liczba;
        std::cout << "Wynik: ";
        wynik.display();
        break;
    case 5:
        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;
        wynik = kolejka_1 / liczba;
        std::cout << "Wynik: ";
        wynik.display();
        break;   
    }
}