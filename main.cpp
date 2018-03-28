/******************************************************************************
27/03/2018
Trabalho: Calculo da distancia de um projetil dado os valores altura, angulo e
velocidade inicial. 
Aluna: Bruna Granemann Mendes
*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

#define PI 3.14159265                   /*PI é usado para converter radianos para graus*/
#define g 9.8                           /*valor gravidade*/
int main()
{
    int h, teta, Vo;
    float Vya, Vxa, x;
    
    cout<<"Digite a altura: "; 
    cin>> h;                            /*Variavel que recebe altura*/
    cout<<"Digite o angulo: "; 
    cin>> teta;                          /*Variavel que recebe angulo*/
    cout<<"Digite a velocidade inicial: "; 
    cin>> Vo;                           /*Variavel que recebe Velocidade inicial*/
    
    Vya = Vo*sin(teta*PI/180);           /*Calculo da Velocidade inicial * Seno de teta (convertido para graus)*/
    Vxa = Vo*cos(teta*PI/180);           /*Calculo da Velocidade inicial * Cos de teta (convertido para graus)*/
    
    x = Vxa*(sqrt((2/g)*((pow(Vya,2)/(2*g))+h))+(Vya/g)); /*equacao*/ 
    cout<< "Distancia="<<x;             /*resultado da distancia*/
    return 0;
}
