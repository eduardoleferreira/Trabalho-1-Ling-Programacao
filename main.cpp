#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "aluno.h"
#include "disciplina.h"

using namespace std;

void show (vector<string> v){ /*funcao que mostra as string dentro de um vector*/
    if (v.size() != 0){
        cout << "[";
        for(unsigned i = 0; i < v.size() - 1; i++){
            cout << v[i] << ", ";
        }
        cout << v[v.size()-1] << "]";
    }
    cout << endl;
    cout << endl;
}


double valorMaximo (vector<double> lista){ /*funcao que obtem o maior valor dentro de um vector*/
    double valor = lista[0];
    for (unsigned i = 1; i < lista.size(); i++) {
        if (lista[i] > valor){
            valor = lista[i];
        }
    }
    return valor;
}


/*void showVector (vector<double> v){ funcao comentada para imprimir um vetor caso queira testar ou conferir algo
        for(unsigned i = 0; i < v.size(); i++){
            cout << v[i] << endl;
        }
        cout <<endl;
}*/


int main()
{
    Aluno aluno1({{10.0, 0},{8.1, 3}, {7.9, 2}, {6.6, 1}, {9.4, 0}}, "Eduardo");
    Aluno aluno2({{9.5, 0},{8.5, 3}, {6.1, 2}, {6.9, 1}, {8.0, 0}}, "Gabriel");
    Aluno aluno3({{7.0, 0},{8.0, 3}, {7.0, 2}, {9.0, 1}, {8.0, 0}}, "Aryane");
    Aluno aluno4({{6.0, 1},{3.0, 0}, {2.0, 3}, {5.5, 2}, {6.5, 1}}, "Julia");
    Aluno aluno5({{9.0, 1},{5.5, 0}, {8.0, 3}, {9.5, 2}, {4.5, 1}}, "Anne");
    Aluno aluno6({{10.0, 1},{5.0, 0}, {7.5, 3}, {5.5, 2}, {5.0, 1}}, "Yuri");
    Aluno aluno7({{5.0, 2},{4.0, 1}, {3.0, 0}, {5.5, 3}, {7.5, 2}}, "Nicholas");
    Aluno aluno8({{7.0, 2},{4.5, 1}, {7.5, 0}, {6.5, 3}, {6.5, 2}}, "Lucca");
    Aluno aluno9({{9.0, 2},{2.5, 1}, {3.0, 0}, {5.2, 3}, {6.8, 2}}, "Renan");
    Aluno aluno10({{6.0, 3},{8.0, 2}, {6.0, 1}, {7.5, 0}, {7.5, 3}}, "Laura");
    Aluno aluno11({{9.2, 3},{6.1, 2}, {6.9, 1}, {5.5, 0}, {8.8, 3}}, "Erick");
    Aluno aluno12({{7.3, 3},{3.7, 2}, {6.0, 1}, {7.1, 0}, {5.9, 3}}, "Fernanda");

    /*lembrete: aluno.getNotas() pega uma lista de listas; a disciplina recebe no construtor um vetor 2D onde o primeiro elemento eh a nota e o segundo eh o periodo*/
    Disciplina disciplina1("Ling. Prog.", (aluno1.getNotas())[0], (aluno2.getNotas())[0], (aluno3.getNotas())[0], (aluno4.getNotas())[0], (aluno5.getNotas())[0], (aluno6.getNotas())[0], (aluno7.getNotas())[0], (aluno8.getNotas())[0], (aluno9.getNotas())[0], (aluno10.getNotas())[0], (aluno11.getNotas())[0], (aluno12.getNotas())[0]);
    Disciplina disciplina2("Fisica", (aluno1.getNotas())[1], (aluno2.getNotas())[1], (aluno3.getNotas())[1], (aluno4.getNotas())[1], (aluno5.getNotas())[1], (aluno6.getNotas())[1], (aluno7.getNotas())[1], (aluno8.getNotas())[1], (aluno9.getNotas())[1], (aluno10.getNotas())[1], (aluno11.getNotas())[1], (aluno12.getNotas())[1]);
    Disciplina disciplina3("Calculo", (aluno1.getNotas())[2], (aluno2.getNotas())[2], (aluno3.getNotas())[2], (aluno4.getNotas())[2], (aluno5.getNotas())[2], (aluno6.getNotas())[2], (aluno7.getNotas())[2], (aluno8.getNotas())[2], (aluno9.getNotas())[2], (aluno10.getNotas())[2], (aluno11.getNotas())[2], (aluno12.getNotas())[2]);
    Disciplina disciplina4("Fisexp", (aluno1.getNotas())[3], (aluno2.getNotas())[3], (aluno3.getNotas())[3], (aluno4.getNotas())[3], (aluno5.getNotas())[3], (aluno6.getNotas())[3], (aluno7.getNotas())[3], (aluno8.getNotas())[3], (aluno9.getNotas())[3], (aluno10.getNotas())[3], (aluno11.getNotas())[3], (aluno12.getNotas())[3]);
    Disciplina disciplina5("Eletronica", (aluno1.getNotas())[4], (aluno2.getNotas())[4], (aluno3.getNotas())[4], (aluno4.getNotas())[4], (aluno5.getNotas())[4], (aluno6.getNotas())[4], (aluno7.getNotas())[4], (aluno8.getNotas())[4], (aluno9.getNotas())[4], (aluno10.getNotas())[4], (aluno11.getNotas())[4], (aluno12.getNotas())[4]);

    /*lista de todas as disciplinas e alunos para facilitar a aplicacao de metodos*/
    vector<Aluno> listaAlunos = {aluno1, aluno2, aluno3, aluno4, aluno5, aluno6, aluno7, aluno8, aluno9, aluno10, aluno11, aluno12};
    vector<Disciplina> listaDisciplinas = {disciplina1, disciplina2, disciplina3, disciplina4, disciplina5};


    int condicao = 1;
        while (condicao == 1){
            cout << "Menu "<< endl;
            cout << endl;
            cout << "1) Media das disciplinas nos ultimos 3 anos" << endl;
            cout << "2) Melhoria, piora ou estabilidade das disciplinas" << endl;
            cout << "3) Melhoria, piora ou estabilidade dos alunos" << endl;
            cout << "4) Disciplina com maior media de notas finais durante todo o intervalo de tempo" << endl;
            cout << "5) Disciplina que teve a maior evolucao no ultimo periodo em relacao as notas finais." << endl;
            cout << "6) Melhor aluno do periodo 2023.2" << endl;
            cout << "7) Sair do programa " << endl;
            cout << endl;
            int entrada;
            cout << "Digite o numero correspondente ao item: " << endl;
            cin >> entrada;
            cout << endl;

            if (entrada == 1){
                cout << "Media dos periodos 2023.2, 2023.1 e 2022.2:" << endl;
                cout << endl;
                for (unsigned i = 0; i < listaDisciplinas.size(); i++){
                    cout << listaDisciplinas[i].getNomeDisciplina() << ": " << listaDisciplinas[i].getMediaMovel_A() << endl;
                }
                cout << endl;
            }

            else if (entrada == 2){
                vector <string> listaMelhoria;
                vector <string> listaPiora;
                vector <string> listaEstavel;

                /*adicionar em uma lista para cada caso*/
                for (unsigned i = 0; i < listaDisciplinas.size(); i++){
                    if (listaDisciplinas[i].getMelhoria() >= 1.05){
                        listaMelhoria.push_back(listaDisciplinas[i].getNomeDisciplina());
                    }
                    else if (listaDisciplinas[i].getMelhoria() <= 0.95){
                        listaPiora.push_back(listaDisciplinas[i].getNomeDisciplina());
                    }
                    else{
                        listaEstavel.push_back(listaDisciplinas[i].getNomeDisciplina());
                    }
                }
                cout << "Melhoria:";
                show(listaMelhoria);
                cout << "Piora:";
                show(listaPiora);
                cout << "Estabilidade:";
                show(listaEstavel);
            }

            else if (entrada == 3){

                vector <string> listaMelhoria;
                vector <string> listaPiora;
                vector <string> listaEstavel;

                /*adicionar em uma lista para cada caso*/
                for (unsigned i = 0; i < listaAlunos.size(); i++){
                    if (listaAlunos[i].getMelhoria() >= 1.05){
                        listaMelhoria.push_back(listaAlunos[i].getNomeDoAluno());
                    }
                    else if (listaAlunos[i].getMelhoria() <= 0.95){
                        listaPiora.push_back(listaAlunos[i].getNomeDoAluno());
                    }
                    else{
                        listaEstavel.push_back(listaAlunos[i].getNomeDoAluno());
                    }
                }

                cout << "Melhoria:";
                show(listaMelhoria);
                cout << "Piora:";
                show(listaPiora);
                cout << "Estabilidade:";
                show(listaEstavel);
            }

            else if(entrada == 4){
                vector<double> listaMediaNotasFinais ;

                for (unsigned i = 0; i < listaDisciplinas.size(); i++){ /*faz uma lista das medias das notas finais (2023.2, 2023.1, 2022.2 e 2022.1)*/
                    listaMediaNotasFinais.push_back(listaDisciplinas[i].getMediaDasMedias());
                }

                double maiorMediaFinal = valorMaximo(listaMediaNotasFinais);
                cout << "Disciplina com maior media de notas finais durante todo o intervalo de tempo: ";
                for (unsigned i = 0; i < listaDisciplinas.size(); i++){ /*obtem a disciplina que possui a media*/
                    if ((listaDisciplinas[i].getMediaDasMedias()) == maiorMediaFinal){
                        cout << listaDisciplinas[i].getNomeDisciplina() << " (" << listaDisciplinas[i].getMediaDasMedias() << ")" << endl;
                        cout << endl;
                    }
                    else if ((listaDisciplinas[i].getMediaDasMedias()) == maiorMediaFinal){
                        cout << listaDisciplinas[i].getNomeDisciplina() << ": " << listaDisciplinas[i].getMediaDasMedias() << endl;
                        cout << endl;
                    }
                    else if ((listaDisciplinas[i].getMediaDasMedias()) == maiorMediaFinal){
                        cout << listaDisciplinas[i].getNomeDisciplina() << ": " << listaDisciplinas[i].getMediaDasMedias() << endl;
                        cout << endl;
                    }
                    else if ((listaDisciplinas[i].getMediaDasMedias()) == maiorMediaFinal){
                        cout << listaDisciplinas[i].getNomeDisciplina() << ": " << listaDisciplinas[i].getMediaDasMedias() << endl;
                        cout << endl;
                    }
                }
            }

            else if (entrada == 5){
                vector<double> listaMelhoria;
                for (unsigned i = 0; i < listaDisciplinas.size(); i++){
                    listaMelhoria.push_back(listaDisciplinas[i].getMelhoria()); /*lista de todas as melhorias => (media ultimos periodos comecando em N/ media ultimos periodos comecando em N-1)*/
                }
                double maiorEvoluacao = valorMaximo(listaMelhoria); /*maior melhoria*/
                cout << "Disciplina que teve a maior evolucao no ultimo periodo em relacao as notas finais: ";
                for (unsigned i = 0; i < listaDisciplinas.size(); i++){
                    if (listaDisciplinas[i].getMelhoria() == maiorEvoluacao){
                        cout << listaDisciplinas[i].getNomeDisciplina() << " (" << listaDisciplinas[i].getMelhoria() << ")" << endl;
                        cout << endl;
                    }
                }

            }

            else if (entrada == 6){
                vector<double> listaMedias2023_2;
                for (unsigned i = 0; i < listaAlunos.size(); i++){
                    listaMedias2023_2.push_back(listaAlunos[i].getMediaAluno2023_2()); /*lista de todas as medias de 2023.2*/
                }
                double melhorMedia2023_2 = valorMaximo(listaMedias2023_2); /*maior media*/
                cout << "Aluno que teve a melhor media em 2023.2: ";
                for (unsigned i = 0; i < listaAlunos.size(); i++){
                    if (listaAlunos[i].getMediaAluno2023_2() == melhorMedia2023_2){ /*obtem qual aluno teve a maior media*/
                        cout << listaAlunos[i].getNomeDoAluno() << " (" << listaAlunos[i].getMediaAluno2023_2() << ")" << endl;
                        cout << endl;
                    }
                }

            }
            else if (entrada == 7){
                cout << "Fim do programa" << endl;
                condicao = 0;
            }
        }
    return 0;
}
