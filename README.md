# Trabalho-1-Ling-Programacao
Enunciado do trabalho: 

O programa deverá apresentar dados referentes ao desempenho das últimas turmas de um
dado subconjunto de disciplinas da graduação. Para isso, um menu contendo as seguintes
opções deve ser disponibilizado:
1. Exibir a evolução da média das notas finais dos alunos de cinco disciplinas (o
nome das disciplinas é livre) nos últimos períodos. Considere que cada turma
tenha no máximo 10 alunos para que, dessa forma, a nota final seja calculada como
a média das notas dos alunos da turma. Por exemplo, se a turma tem três alunos
com notas 1,0, 2,0 e 3,0, a média final dessa disciplina em um dado período é (1,0 + 2,0 + 3,0)/3 = 2,0.
A ideia é acompanhar a evolução da nota final das disciplinas
ao longo dos últimos N períodos, usando a estratégia de média móvel. A média móvel

![image](https://github.com/user-attachments/assets/55824b21-9dc2-40f1-8d83-5a2ea4489c4b)

onde ma é a média de uma disciplina no período atual, ma-1 é a média de uma
disciplina no período anterior ao atual, ma-2 é a média de uma disciplina no período
anterior ao período ma-1 e assim por diante. Calcule a média móvel das notas finais
para no mínimo os últimos três períodos (ou seja, usando N=3), para cada uma das
disciplinas. Assumir que o programa tem acesso a dados referentes às notas em
todas as disciplinas nos últimos N+1 períodos e que N é no máximo igual a 7;

2. Exibir de forma agrupada as disciplinas que apresentaram melhoria de desempenho
em relação às notas finais do último período. Uma disciplina teve melhoria de
desempenho segundo a razão entre a média móvel calculada no período atual (I
calculada no item 1) e a média móvel calculada no período anterior (para calcular a
média móvel do período anterior faça: ma <- ma-1). Utilize como limiar de definição
o valor de 5%, sendo que qualquer disciplina com aumento na média das notas
superior a 5% teve melhora no desempenho. Mostre também as disciplinas com
piora de desempenho, ou seja, aquelas com redução na média das notas no último
período. Por fim, mostre as disciplinas que estão estáveis, ou seja, que não atendem
aos dois critérios anteriores.
3. Repetir o item 2, sendo que a melhora ou piora de desempenho, ou estabilidade
deve considerar os alunos individualmente. A ideia é mostrar como está o
desempenho de cada aluno considerando a média de suas notas em todos as
disciplinas cursadas ao longo dos períodos;
4. Exibir a disciplina com maior média de notas finais durante todo o intervalo de tempo
considerado;
5. Mostrar a disciplina que teve a maior evolução no último período em relação às notas
finais. Use os resultados calculados para o item 2.
6. Mostrar o melhor aluno no período. O melhor aluno será aquele que possuir a melhor
média de notas finais entre todas as disciplinas cursadas no último período.
O programa deve prever a implementação de uma classe Aluno e uma classe Disciplina,
na qual a classe Disciplina é composta por objetos da classe Aluno. Cada objeto da
classe Aluno deve representar um aluno e, como tal, deve gerenciar individualmente as
suas notas nas disciplinas cursadas ao longo dos períodos durante o intervalo de tempo
escolhido. Note que os dados da série histórica de notas podem ser arbitrários, ou seja, não
necessariamente precisam representar a realidade, desde que estejam entre 0 e 10,0. Os
dados da série podem ser inicializados junto com cada objetos da classe Aluno, sem
necessidade de inserção ou remoção de dados através de opção do menu ou leitura de
arquivo. Considere que todos os alunos fizeram as mesmas disciplinas durante o intervalo
de tempo escolhido.
Dica: Verifique a possibilidade do uso de um array ou de um objeto da classe vector para
armazenamento dos objetos da classe Aluno pela classe Disciplina e de uma estrutura
do tipo vector para cada aluno armazenar suas notas em todas as disciplinas cursadas ao
longo dos últimos períodos.
