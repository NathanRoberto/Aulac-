#include <iostream>
#include <list>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string.h>

using namespace std;

#define MaxTam 20

typedef int apontador;

typedef struct EstruturaDados{
    int codigo; //inserir
    int cod; // busca
    char nome[20];
};

typedef struct EstruturaLista{
    EstruturaDados dados[MaxTam];
    apontador inicio;
    apontador fim;
    apontador tam;
};

void settar(EstruturaLista &lista){
    lista.inicio = 0;
    lista.fim = 0;
}

void InserirNaLista(EstruturaDados aux, EstruturaLista &lista){
    if(lista.fim > MaxTam){
        system("cls");
        getchar();
        cout << "Lista cheia\n";
        getchar();
        system("pause");
    }else{
    lista.dados[lista.fim] = aux;
    lista.fim++;
    }
}

void Imprimir(EstruturaLista &lista){
    int i;
    for(i = lista.inicio; i < lista.fim; i++){
        cout << "Local da musica:  " << lista.dados[i].codigo << "\n";
        cout << "Nome da musica: " << lista.dados[i].nome << "\n";
    }
}
void busca( EstruturaDados, EstruturaLista &lista){
//   int i, buscar;
//   for (i=0; i < MAX; i++){
//    if(vetor[i] == busca){
//        cout << ("\n Encontrou o numero %d",busca);
//        cout <<(" na posicao %d\n",i);
//    }else{
//        printf("%d != %d\n",busca,vetor[i]);
//    }
//}
}

int menu(){
    
    int opcao;
        
    do{
        system("cls");

        cout << "Escolha uma opcao:\n";
        cout << "1 - Inserir musicas\n";
        cout << "2 - Buscar musicas\n";
        cout << "3 - Remover musicas\n";
        cout << "4 - Imprimir musicas\n";
        cout << "5 - Sair...\n";
        cout << "\n Opcao: ";
            cin >> opcao;

    }while(opcao < 0 || opcao > 5);
    return opcao;
}

// Função Principal

int main(){
    EstruturaDados aux;
    EstruturaDados cod1;
    EstruturaLista lista;
    int opcao;
    

    settar(lista);
    
    opcao = menu();

    while(opcao != 5){
        switch(opcao){
            case 1:
                system("cls");
                cout << "Digite o codigo da musica: ";
                    cin >> aux.codigo;
                    getchar();
                cout << "Digite o nome da musica: ";
                cin.getline(aux.nome, 20);

                InserirNaLista(aux, lista);
            break;

            case 2:
                getchar();
                system("cls");
                cout <<"Qual codigo da musica que quer buscar? ";
                cin >> cod1.cod; 
                getchar();
                busca(cod1, lista);
                system("pause");                      

            break;
            
            case 3:
                getchar();
                system("cls");
                cout <<"Qual codigo da musica que quer remover? ";
                getchar();
                system("cls");
                cout << "Removido\n";
                cout << "";
                system("pause");
            break;

            case 4:
                cout << "\nMusicas:\n";
                system("cls");
                Imprimir(lista);
                system("pause");
            break;
        }
        opcao = menu();
    }
    cout << "\n---- Bye Bye ---- \n";
    return EXIT_SUCCESS;
}   