# amo-matematica-discreta
Ao ser retirado do grad2 por conta de uma monitoria de matemática discreta, Lucas lembrou que esta foi uma das melhores disciplinas do curso. Então, ele decidiu relembrar um tema que gostou muito: Teorema fundamental da aritmética.

“O Teorema Fundamental da Aritmética sustenta que todos os números inteiros positivos maiores que 1 podem ser decompostos num produto de números primos, sendo esta decomposição única a menos de permutações dos fatores.” [https://pt.wikipedia.org/wiki/Teorema_fundamental_da_aritmética]

Então ele pensou no seguinte problema:

Dados 3 primos (p1, p2 e p3) e dois inteiros l e r, Lucas gostaria de saber:

    Quantos números x existem, de forma que l <= x <= r e a fatoração prima de x contém somente os primos dados.

    O menor x, tal que l <= x <= r e a fatoração prima de x contém somente os primos dados.

    O maior x, tal que l <= x <= r e a fatoração prima de x contém somente os primos dados.


Dicas:

Um número x só contém os primos dados na fatoração prima se x = p1 ^ i * p2 ^ j * p3 ^ k

Formato de entrada

5 inteiros em uma linha, separados por espaço, p1 p2 p3 l r, nesta ordem.

2 <= p1, p2, p3, l, r <= 10^6

Formato de saída

Três inteiros separados por espaços, a resposta para a pergunta 1 seguido da resposta para pergunta 2 seguido da resposta para a pergunta 3.
