#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){

vector<int> numeros;
    setlocale(LC_ALL, "Portuguese");
        int rep=0, soma = 0 , control= 0, i;


        numeros.push_back(6);

    cout << "Digite qualquer numero inteiro (exceto 0) para realizar uma operação ou digite [0] para sair" << endl;

    for(int i=0; i>=control; i++){

         cin >> numeros[i];

         if( numeros[i] == 0 ){

            break;

         }
    }

    int decisao=1;
    while (decisao != 0 ){

        cout << endl << endl;
        cout << "Digite [1] para: Imprimir a somatória de seus elementos\n";
        cout << "Digite [2] para: Imprimir a média de seus elementos\n";
        cout << "Digite [3] para: Imprimir a média e a somatória\n";
        cout << "Digite [4] para: Substituir por zero todos os valores negativos e imprimir a média\n";
        cout << "Digite [5] para: Substituir por zero todos os valores repetidos e imprimir a média e a somatória\n";
        cout << "Digite [6] para: Mostrar vetor ordenado\n\n";


    cin >> decisao;
    cout << endl << endl;


    switch(decisao){

    case 1:
        for(int Dyogao = 0; Dyogao < 5  ; Dyogao++)

        {
            soma += numeros[Dyogao];
        }
            cout << "A somatória de todos os elementos é: " << soma << endl;
            break;

    case 2:
        for(int Dyogao = 0; Dyogao < 5  ; Dyogao++)

        {
            soma += numeros[Dyogao];
        }

        soma = soma / numeros[i];
        cout << "";
            break;

    case 3:
        cout << "teste\n";
            break;
    default:
        cout << "Adios, volte sempre" << endl;
        break;

 }}
  return 0;
}

