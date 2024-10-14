#include "aluno.h"


Aluno::Aluno(vector<vector<double>> argNotas, string argNomeDoAluno){ /* argNotas eh uma lista de listas, onde cada sublista eh um vetor 2D. ex: {{9.8, 0}, {3.6, 1}, {5.6, 3}}*/
    notas = argNotas;                                                  /*nesse vetor 2D, o primeiro elemento eh a nota e o segundo eh o indice correspondente ao periodo*/
    nomeDoAluno = argNomeDoAluno;

    vector<double> listaNotas2023_2; /*listas auxiliares para separar as notas de cada período*/
    vector<double> listaNotas2023_1;
    vector<double> listaNotas2022_2;
    vector<double> listaNotas2022_1;

    /*o numero de indice 1 da lista 2D representa um periodo*/
    for (unsigned i = 0; i < notas.size(); i++){
        if (notas[i][1] == 0){
            listaNotas2023_2.push_back(notas[i][0]);
        }
        else if (notas[i][1] == 1){
            listaNotas2023_1.push_back(notas[i][0]);
        }
        else if (notas[i][1] == 2){
            listaNotas2022_2.push_back(notas[i][0]);
        }
        else if (notas[i][1] == 3){
            listaNotas2022_1.push_back(notas[i][0]);
        }
    }

    for (unsigned i = 0; i < listaNotas2023_2.size(); i++){  /*somando as notas do periodo 2023.2 e fazendo a media*/
        mediaAluno2023_2 += listaNotas2023_2[i];
    }
    mediaAluno2023_2 = mediaAluno2023_2/(listaNotas2023_2.size());

    for (unsigned i = 0; i < listaNotas2023_1.size(); i++){  /*somando as notas do periodo 2023.1 e fazendo a media*/
        mediaAluno2023_1 += listaNotas2023_1[i];
    }
    mediaAluno2023_1 = mediaAluno2023_1/(listaNotas2023_1.size());

    for (unsigned i = 0; i < listaNotas2022_2.size(); i++){  /*somando as notas do periodo 2022.2 e fazendo a media*/
        mediaAluno2022_2 += listaNotas2022_2[i];
    }
    mediaAluno2022_2 = mediaAluno2022_2/(listaNotas2022_2.size());

    for (unsigned i = 0; i < listaNotas2022_1.size(); i++){  /*somando as notas do periodo 2022.2 e fazendo a media*/
        mediaAluno2022_1 += listaNotas2022_1[i];
    }
    mediaAluno2022_1 = mediaAluno2022_1/(listaNotas2022_1.size());

    melhoria = ((mediaAluno2023_2+mediaAluno2023_1+mediaAluno2022_2)/3)/((mediaAluno2023_1+mediaAluno2022_2+mediaAluno2022_1)/3); /*razao entre a media dos ultimos periodos comecando em N e dos ultimos periodos comecando em N-1*/
}



vector<vector<double>> Aluno::getNotas(){
    return notas;
}

string Aluno::getNomeDoAluno(){
    return nomeDoAluno;
}

double Aluno::getMelhoria(){
    return melhoria;
}

double Aluno::getMediaAluno2023_2(){
    return mediaAluno2023_2;
}
