#include <iostream>
#include <algorithm>

using namespace std;

int minimo_dezenas;
int maximo_dezenas;
string jogo;

//MINIMO DE APOSTAS NA MEGA-SENA É 6, MAXIMO E 15
// Variavel dezena_jogos referente as dezenas de cada tipo de jogo, tipo mega-sena ...

todos_os_jogos( int tipo_jogo ){
int dezenas_jogos;
int numero_de_apostas;
    do{
        cout << "Deseja apostar quantas vezes"<<endl;
        cin >> numero_de_apostas;
         system("cls");
         if( numero_de_apostas < 0){
             cout << "* Numero invalido *"<<endl;
         }
    }while( numero_de_apostas < 0);

    for(int i = 1 ; numero_de_apostas >= i; i++){
     int contador_apostas = ++ i;
        int dezenas_apostar = 0;
            do{cout << "Aposta numero "<< contador_apostas<< " quantas dezenas deseja apostas"<<endl;
                cin >> dezenas_apostar;
                if (dezenas_apostar > dezenas_jogos){
                    cout << "Numero maximo de dezenas para a"<< jogo << "é "<<maximo_dezenas<< " e o minimo é "<< minimo_dezenas<<endl;
                }
                if (maximo_dezenas == 50){
                    
                }
                
            }while(dezenas_apostar > maximo_dezenas || dezenas_apostar < minimo_dezenas);


}
}

int main (){
setlocale(LC_ALL, "Portuguese");
int jogo_apostar;

do{cout << "Digite o numero da opção que deseja jogar"<<endl;
    cout << " [1] Mega-Sena "<<endl<< " [2] Quina"<<endl<<" [3] Lotomania"<<endl<<" [4] Lotofacil"<<endl;
    cin >> jogo_apostar;
        system("cls");
            if (jogo_apostar != 1 && jogo_apostar != 2 && jogo_apostar != 3 && jogo_apostar != 4){
                cout << "* Numero invalido *"<<endl;
            }
}while (jogo_apostar != 1 && jogo_apostar != 2 && jogo_apostar != 3 && jogo_apostar != 4);
    switch (jogo_apostar){
        case 1 :{
            jogo = " Mega-Sena ";
            maximo_dezenas = 15;
            minimo_dezenas = 6;
        }
        case 2 :{
            jogo = " Quina ";
            maximo_dezenas = 15;
            minimo_dezenas = 5;
        }
        case 3 :{
            jogo = " Lotomania ";
            maximo_dezenas = 50;
            minimo_dezenas = 50;
        }
        case 4 :{
            jogo = " Lotofacil ";
            maximo_dezenas = 18;
            minimo_dezenas = 15;
        }
}

    todos_os_jogos( jogo_apostar);


 return 0;
}
