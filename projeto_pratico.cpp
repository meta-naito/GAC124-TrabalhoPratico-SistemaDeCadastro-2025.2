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

struct infoSatelite {
	int identificador;
	string nome;
	string paisOrigem;
	int anoLancamento;
	string funcao;
};

void lerString(string arquivo_csv) {
	
	
}

int main(){
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
		getline(arquivo_csv, linha); //leitura da linha de campos
		
		arquivo_csv >> numRegistros;
		arquivo_csv.ignore();
		
		infoSatelite *satelites = new infoSatelite[numRegistros];
		
		for (int i = 0; i < numRegistros; i++) {
			
			arquivo_csv >> satelites[i].identificador;
			arquivo_csv >> lixo; //lixo nesse caso são as vírgulas
			
			arquivo_csv >> lixo;
			getline(arquivo_csv, satelites[i].nome, '"');
			arquivo_csv >> lixo;
			
			arquivo_csv >> lixo;
			getline(arquivo_csv, satelites[i].paisOrigem, '"');
			arquivo_csv >> lixo;
			
			arquivo_csv >> satelites[i].anoLancamento;
			arquivo_csv >> lixo >> lixo;
			
			getline(arquivo_csv, satelites[i].funcao, '"');
			
			cout << satelites[i].anoLancamento << endl;
		}
		
		delete [] satelites;
	}

	return 0;
}
