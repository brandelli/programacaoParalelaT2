O objetivo do trabalho é implementar um programa paralelo utilizando OpenMP e avaliar o ganho de desempenho em um nodo multiprocessado do cluster Atlantica.

Primeiramente, definir um problema alvo a ser paralelizado. As duas opções são:

escolher um problema qualquer de interesse (neste caso, é necessário envolver o professor na discussão antes de começar a paralelizar);
utilizar o mesmo problema abordado no T1 (algoritmo Bubble sort), inclusive utilizado o mesmo programa sequencial como base.
Uma vez escolhido o problema, executar a versão sequencial em um nodo do cluster Atlantica e coletar o tempo de execução. Depois, iniciar a paralelização utilizando as diretivas do OpenMP aprendidas em aula.

Testar a versão paralela em um nodo do cluster e realizar medições variando o número de threads utilizados. Variar de 1 até N threads. O valor de N depende do problema e/ou estratégia de paralelização escolhida. Neste caso, considere N = max(16, N'), onde N' é um valor descoberto empiricamente de modo de executar o programa com um número de threads maior que N' não reduz o tempo de execução. Utilizar a planilha de cálculo de speed up disponibilizada no Moodle para reportar os tempos de execução e o gráfico speed up e eficiência.

Cada grupo, de no máximo dois integrantes, deve entregar um relatório em formato PDF de uma página com a análise dos resultados e uma página com o código (seguir modelo proposto). Anexar também todo o código fonte desenvolvido no trabalho. Caso tenha utilizado código fonte de terceiros (mesmo que uma pequena parte), referenciar explicitamente a URL da fonte original através de comentários no código.

Os itens para avaliação são:

justificativa da escolha do problema alvo;
implementação da versão paralela utilizando OpenMP;
explicação de estratégia de paralelização adotada e justificativa das diretivas do OpenMP utilizadas;
medição dos tempos de execução para a versão sequencial em uma máquina qualquer do aluno ou laboratório e da versão paralela usando um nodo alocado de modo exclusivo do cluster Atlantica totalizando 8 cores físicos (16 com Hyper-Threading);
cálculo do speed up e da eficiência para os casos de teste (variando de 1 a N, conforme descrito no enunciado do trabalho);
análise dos resultados obtidos explicando possíveis ganhos ou perdas de desempenho;
clareza do código (utilização de comentários e nomes de variáveis adequadas);
relatório no formato PDF com duas páginas (coluna dupla), uma para a análise dos resultados e outra para o código, seguindo as recomendações fornecidas no Moodle (submissão em sala de entrega Moodle até as 17:30 do dia da entrega, isto é, antes do inicio da aula);
