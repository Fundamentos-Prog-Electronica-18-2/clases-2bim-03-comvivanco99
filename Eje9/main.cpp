#include <iostream>
#include <sstream>

using namespace std;


string obtenerData(int a,int b, string c){
     double promedio = 0;
     string cadena = "";
     promedio = (a + b)/2;

     if(promedio <= 10 ){
        cadena = " Insuficiente ";
     }else{
         if(promedio >= 10.1 && promedio <= 14){
            cadena = " Regular " ;
         }else{
             if(promedio >= 14.1 && promedio <= 16){
                cadena = " Bueno " ;
         }else{
             if(promedio >= 16.1 && promedio <= 18.5){
                cadena = " Muy bueno " ;
             }else{
                 if(promedio >= 18.6 && promedio <= 20){
                    cadena = " Sobresaliente " ;
                 }
             }
         }
      }
    }
    string presenta = c + " tiene una calificacion de "  + cadena + "\n";
    return presenta;
}

int main()
{
    int bimestre1[] = {20, 15, 16, 19};
    int bimestre2[] = {20, 18, 10, 10};
    string nombres[] = {"Alex", "Monica", "Alexander", "Sandra"};
    for (int i = 0; i < 4; i++){
            string data = obtenerData(bimestre1[i],bimestre2[i],nombres[i]);
            cout << data;
    }
    return 0;
}
