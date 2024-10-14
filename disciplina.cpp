#include "disciplina.h"
#include <iostream>

                                                /*recebe vetor 2D {9.1,0}*/
Disciplina::Disciplina(string argNomeDisciplina, vector<double> notas1, vector<double> notas2, vector<double> notas3, vector<double> notas4, vector<double> notas5, vector<double> notas6, vector<double> notas7, vector<double> notas8, vector<double> notas9, vector<double> notas10, vector<double> notas11, vector<double> notas12){
    vector<vector<double>> listaNotasPeriodo = {notas1, notas2, notas3, notas4, notas5, notas6, notas7, notas8, notas9, notas10, notas11, notas12};

    for (unsigned i = 0; i < listaNotasPeriodo.size(); i++){ /*separa as notas de cada periodo com base no numero indicador do periodo*/
      if (listaNotasPeriodo[i][1] == 0){
        notas2023_2.push_back(listaNotasPeriodo[i][0]);
      }
      else if (listaNotasPeriodo[i][1] == 1){
        notas2023_1.push_back(listaNotasPeriodo[i][0]);
      }
      else if (listaNotasPeriodo[i][1] == 2){
        notas2022_2.push_back(listaNotasPeriodo[i][0]);
      }
      else if (listaNotasPeriodo[i][1] == 3){
        notas2022_1.push_back(listaNotasPeriodo[i][0]);
      }
    }
    nomeDisciplina = argNomeDisciplina;
    media2023_2 = computeMediaDoPeriodo(notas2023_2);
    media2023_1 = computeMediaDoPeriodo(notas2023_1);
    media2022_2 = computeMediaDoPeriodo(notas2022_2);
    media2022_1 = computeMediaDoPeriodo(notas2022_1);
    mediaMovel_A = (media2023_2 + media2023_1 + media2022_2)/3;
    mediaMovel_A_Menos_Um = (media2023_1 + media2022_2 +media2022_1)/3;
    melhoria = mediaMovel_A/mediaMovel_A_Menos_Um; /*razao entre a media dos ultimos periodos comecando em A e dos ultimos periodos comecando em A-1*/
    mediaDasMedias = (media2023_2+media2023_1+media2022_2+media2022_1)/4; /*media das notas finais durante todo o periodo de tempo para o item 4*/
}

string Disciplina::getNomeDisciplina(){
    return nomeDisciplina;
}

double Disciplina::getMedia2023_2(){
    return media2023_2;
}
double Disciplina::getMedia2023_1(){
    return media2023_1;
}
double Disciplina::getMedia2022_2(){
    return media2022_2;
}
double Disciplina::getMedia2022_1(){
    return media2022_1;
}

double Disciplina::computeMediaDoPeriodo(vector<double> v){ /*funcao generica para calcular a media de um periodo*/
    double media = (v[0]+v[1]+v[2])/3;
    return media;
}

double Disciplina::getMediaMovel_A(){
    return mediaMovel_A;
}

double Disciplina::getMediaMovel_A_Menos_Um(){
    return mediaMovel_A_Menos_Um;
}

double Disciplina::getMelhoria(){
    return melhoria;
}

double Disciplina::getMediaDasMedias(){
    return mediaDasMedias;
}
