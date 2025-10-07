/******************************************************************
|																  |
| Projeto Prático - Sistema de Cadastro em Arquivos com Ordenação |
|																  |
| Nomes: . Arthur Fazzio Mendes                              	  |
|        . Lívia Rezende Masson                                   |
|                                                                 |
| Tema: Satélites                                                 |
|                                                                 |
*******************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
typedef string str;

void lerString(str arquivo_csv) {
	
	
	}



int main(){
	//campos do arquivo csv
	int identificador = 0;
	string nome = "";
	string paisOrigem = "";
	int anoLancamento = 0;
	string funcao = "";
	
	//variaveis auxiliares
	string linha = "";
	char lixo;
	int numRegistros = 0;
	
	//leitura do arquivo csv
	ifstream arquivo_csv("db_satelites.csv");
	
	if (not(arquivo_csv)) {
		cout << "Erro: não foi possível localizar o arquivo :(" << endl;
	}
	
	else {
		getline(arquivo_csv, linha);
		
		arquivo_csv >> numRegistros; 
		arquivo_csv.ignore();
		
		for (int i = 0; i < numRegistros; i++) {
			
			arquivo_csv >> identificador;
			arquivo_csv >> lixo; //lixo nesse caso são as vírgulas
			
			arquivo_csv >> lixo;
			getline(arquivo_csv, nome, ',');
			arquivo_csv >> lixo;
			
			getline(arquivo_csv, paisOrigem, ',');
			
			arquivo_csv >> anoLancamento;
			arquivo_csv >> lixo >> lixo;
			
			getline(arquivo_csv, funcao, '"');
			
			cout << nome << endl;
		}
	}
	
	return 0;
}
