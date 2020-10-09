#include<iostream>
#include<string>
using namespace std;


template<class T>
class myVector
{
    public:
        myVector(int); //Yapýcý (constructor) fonksiyon. Parametre olarak aldýðý deðer vektörünüzün boyutu yani numAllocated deðiþkeninin deðeridir. 
          ~myVector(); //Yýkýcý (destructor) fonksiyon.
          int size(); //Vektördeki eleman sayýsýný (numUsed) döndüren fonksiyon.
          void add(T s); //Vektörün sonuna s elemanýný eklemek için tanýmlanan fonksiyon. Kapasite doluysa çýktýda da verilen uyarý mesajýný üretmelidir. 
          T getAt(int index); //index’deki elemaný döndüren fonksiyon.
        void getElement(int index); //indexdeki elemaný ekrana yazdýran fonksiyon. Index, kapasite dýþýndaysa çýktýda da verilen uyarý mesajýný üretmelidir. 
        void remove(T s); //vektörden s elemanýný kaldýrmalý ve diðer elemanlarý kaydýrmalýdýr. Eleman bulunamadýysa hiçbir þey yapýlmayacaktýr.
        void erase(int index); //vektörün indexindeki elemanýný kaldýrmalý ve diðer elemanlarý kaydýrmalýdýr.
        void sort(); //vektördeki elemanlarý küçükten büyüðe sýralamalýdýr
    private:
        T* arr;
        int numUsed;             // vektördeki eleman sayýsý
        int numAllocated;     //vektörün alabileceði eleman sayýsý
};
