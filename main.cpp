#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iterator>
#include <set>


using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::set;
using std::fstream;

void OpenFile(set <string> &words,string filename);
//Nome: Dione Jessé Mendes Silva
int main(){
    set<string> palavras;
    set<string>::iterator pos_set;
    map<string, string> dic;
    map<string, string>::iterator pos_map;
    string filename;
    string busca;
    char ans;
    
    while (cin >> filename and filename != "0"){ 
        OpenFile(palavras,filename);
        for (pos_set = palavras.begin(); pos_set != palavras.end(); ++pos_set) {
            dic[*pos_set] += filename + "\n";
        }
        palavras.clear();
    }
    
    do{
        cout << "Digite uma palavra a ser encontrada: ";
        cin >> busca;
        cout << dic[busca] << endl;
        cout << "Gostaria de realizar outra pesquisa?(s/n)";
        cin >> ans;
    }while(ans == 's' || ans == 'S');
    
	return 0;
}



void OpenFile(set <string> &palavras,string filename){
    try{
        fstream file(filename);
        string palavra;
        if (file.is_open()){
            while(file >> palavra){
                palavras.insert(palavra);
            }
            file.close();
        }else{
            throw 0;
        }
    }catch(int valor){
        cout << "Arquivo nao encontrado!" << endl;
    }
}