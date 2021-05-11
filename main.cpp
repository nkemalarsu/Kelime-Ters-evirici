#include <iostream>

using namespace std;

void metinCeviri(){
string metin;

cout << " Ters Çevirmek İstediğiniz Metni Giriniz: \n ";
getline(cin, metin);

metin = string(metin.rbegin(), metin.rend());
                                              //String sinifinda bulunan rbegin(ters başlangıç) ve rend(ters uç) komutlariyla metni ters cevirebiliriz.
cout << " \n " << metin ;
}

int main(){
    metinCeviri();
  return 0;
}

