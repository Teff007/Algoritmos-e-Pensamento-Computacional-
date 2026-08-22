# UDF-Fluxograma
Primeiro trabalho da disciplina Algoritmo e Pensamento Computacional. 

========== CALCULADORA CIENTÍFICA ==========

1 - Adição
2 - Subtração
3 - Multiplicação
4 - Divisão
5 - Potenciação
6 - Raiz quadrada
7 - Porcentagem
8 - Módulo
9 - Seno
10 - Cosseno

11 - Sair

# 1 - Adição
O fluxograma representa um algoritmo para somar dois números inteiros. 
Primeiro, o programa inicia e mostra uma mensagem informando que será realizada uma soma. Em seguida, são declaradas três variáveis inteiras: a, b e c, sendo a responsável pelo primeiro número, b pelo segundo e c pelo resultado.

Depois, o programa pede ao usuário o primeiro valor e utiliza “Ler a” para armazená-lo na variável a. Em seguida, pede o segundo valor e utiliza “Ler b” para armazená-lo em b. 
Após receber os dois números, o programa realiza o processamento através da instrução c ← a + b, que significa somar a e b e guardar o resultado em c.

Por fim, o programa exibe na tela a mensagem informando o resultado da soma e chega ao “Fim”, encerrando a execução. 
Portanto, o fluxo segue a lógica básica de entrada → processamento → saída: recebe dois números, realiza a soma e apresenta o resultado.

# 2 - Subtração
Este módulo implementa um algoritmo simples que realiza a subtração entre dois números reais informados pelo usuário, 
exibindo o resultado ao final da execução. Ele faz parte de um projeto maior, representando a lógica de uma das operações aritméticas básicas do sistema.

O fluxo do programa segue os seguintes passos, conforme representado no fluxograma:

1.Início (Principal) Ponto de entrada do algoritmo.
2.Declaração de variáveis São declaradas três variáveis do tipo Real:
  valorA — armazena o primeiro número (minuendo)
  valorB — armazena o segundo número (subtraendo)
  resultado — armazenará o resultado da subtração
3.Entrada do primeiro valor
4.O programa exibe a mensagem "Digite o valor inicial da subtração"
5.O usuário informa o valor, que é armazenado em valorA
6.Entrada do segundo valor
7.O programa exibe a mensagem "Digite o valor a ser subtraído"
8.O usuário informa o valor, que é armazenado em valorB
9.Processamento
10.É realizado o cálculo: resultado <- valorA - valorB
11.Saída
12.O programa exibe a mensagem "O resultado é " & resultado, concatenando o texto fixo com o valor calculado
13.Fim - Encerramento da execução do algoritmo.

O algoritmo não trata validação de tipos ou valores não numéricos; assume-se que os dados de entrada são válidos.

# 3 - Multiplicação

O fluxograma inicia com a declaração da variável opção, que será utilizada para armazenar a escolha realizada pelo usuário.

  1. Primeiramente, é utilizada a propriedade “Escrever” para apresentar ao usuário o menu de operações disponíveis na calculadora:
      “Escolha a opção: 1 – adição, 2 – subtração, 3 – multiplicação, 4 – divisão, 5 – potenciação, 6 – raiz quadrada, 7 – porcentagem, 8 – módulo, 9 – seno, 10 – cosseno, 11 – sair.” 
  2. Em seguida, é utilizada a propriedade “Ler”, responsável por receber e armazenar a opção escolhida pelo usuário na variável opção.
  3. Após a leitura da opção, é utilizada a estrutura condicional “Se”, verificando se o valor informado pelo usuário corresponde à opção 03, que representa a operação de multiplicação.
  4. Caso a condição seja verdadeira, são declaradas as variáveis a, b e multiplicação, que serão utilizadas durante o cálculo.
  5. Depois, o fluxograma utiliza novamente a propriedade “Escrever” para solicitar ao usuário o primeiro valor:
      “Digite o número de a”.
  6. A propriedade “Ler” é utilizada para receber o valor informado e armazená-lo na variável a.
  7. Em seguida, utiliza-se “Escrever” para solicitar o segundo valor:
      “Digite o número de b”.
  8. Novamente, a propriedade “Ler” recebe o valor informado e o armazena na variável b.
  9. Após receber os dois valores, é utilizada a propriedade de atribuição para realizar a operação:
      multiplicação ← a × b
  10. Por fim, o fluxograma utiliza a propriedade “Escrever” para apresentar o resultado de maneira mais clara e formal ao usuário:
      “A multiplicação é igual a: " &multiplicação&""

Dessa forma, o fluxograma recebe dois números informados pelo usuário, realiza a multiplicação entre eles e apresenta o resultado final.

#4 - Divisão
Quando a condição referente à opção 03 é falsa, o fluxograma segue para uma nova estrutura condicional, responsável por verificar se a opção escolhida é a opção 04, correspondente à operação de divisão.

  1. É utilizada a estrutura “Se”, verificando se o valor da variável opção é igual a 04.
  2. Caso a condição seja verdadeira, são declaradas as variáveis a, b e divisão, que serão utilizadas para realizar o cálculo.
  3. Em seguida, o fluxograma utiliza a propriedade “Escrever” para solicitar ao usuário o primeiro número:
      “Digite o número de a”.
  4. A propriedade “Ler” recebe o valor informado e o armazena na variável a.
  5. Depois, utiliza-se novamente “Escrever” para solicitar o segundo número:
      “Digite o número de b”.
  6. A propriedade “Ler” recebe o segundo valor e o armazena na variável b.
  7. Após os dois valores serem armazenados, é utilizada a propriedade de atribuição para realizar a divisão:
      divisão ← a ÷ b
  8. Por fim, o resultado é apresentado ao usuário por meio da propriedade “Escrever”, utilizando uma mensagem mais clara e formal:
      “A divisão é igual a: ” & divisão

Assim, quando o usuário seleciona a opção 04, o fluxograma solicita os dois valores, realiza a divisão entre eles e apresenta o resultado na tela.

# 5 - Potenciação

# 6 - Raiz quadrada
  Este módulo implementa o cálculo da raiz quadrada de um número real utilizando o método iterativo de Newton-Raphson (também conhecido como método babilônico), 
  que aproxima o valor da raiz por sucessivas iterações até atingir uma margem de erro aceitável. Ele faz parte de um projeto maior, representando a lógica de uma das operações matemáticas do sistema.

O fluxo do programa segue os seguintes passos, conforme representado no fluxograma:

  1.Início (Principal) Ponto de entrada do algoritmo.
  2.Declaração de variáveis São declaradas quatro variáveis do tipo Real:
    numero — número do qual se deseja extrair a raiz quadrada
    aproxA — aproximação atual da raiz
    aproxB — nova aproximação calculada a cada iteração
    erro — diferença entre aproxA e aproxB, usada como critério de parada
  3.Entrada de dados
  4.O programa exibe a mensagem "Escreva o número ao qual quer descobrir a raiz"
  5.O usuário informa o valor, armazenado em numero
  6.Validação: número negativo
    Se numero < 0 (Verdade), o programa exibe "Não existe raiz quadrada real desse número" e encerra, pois   8.números negativos não possuem raiz quadrada real.
    Se numero >= 0 (Falso), o algoritmo segue para a próxima verificação.
  9.Validação: número igual a zero
    Se numero = 0 (Verdade), o programa exibe diretamente "A raiz é 0" e encerra, evitando divisão por zero nas iterações seguintes.
  Se numero ≠ 0 (Falso), o algoritmo segue para o processo iterativo.
  10.Inicialização da aproximação
    aproxA <- numero (chute inicial: o próprio número)
    erro <- 1 (valor inicial arbitrário, apenas para garantir a entrada no laço)
  11.Laço iterativo (repete enquanto erro > 0.000001) Enquanto o erro for maior que a precisão desejada  (0.000001):
  12.Calcula uma nova aproximação: aproxB <- (aproxA + numero/aproxA) / 2
  13.Calcula o erro entre as aproximações: erro <- aproxB - aproxA
  14.Garante que o erro seja positivo (valor absoluto):
    Se erro < 0 (Verdade): erro <- erro * -1
    Se erro >= 0 (Falso): mantém o valor
  15.Atualiza a aproximação: aproxA <- aproxB
  16.Retorna à verificação da condição do laço
  17.Saída
  18.Quando erro <= 0.000001 (condição Falsa), o laço é interrompido e o programa exibe "Raiz quadrada = " & aproxA
  19.Fim-Encerramento da execução do algoritmo.

O método converge rapidamente (convergência quadrática) para a maioria dos valores positivos, tornando o algoritmo eficiente mesmo com um critério de parada bastante rigoroso (0.000001).
  O uso do valor absoluto do erro (erro<0 → erro*-1) é necessário porque aproxB - aproxA pode ser negativo, e o critério de parada compara sempre uma grandeza positiva.
  Casos especiais (número negativo e número zero) são tratados antes do laço para evitar divisão por zero e resultados matematicamente inválidos.
  
# 7 - Porcentagem

# 8 - Módulo

# 9 - Seno

# 10 - Cosseno

# 11 - Sair

# Observações

Sara

Stéffany ( multiplicação e Divisão)
O fluxo segue inicialmente pela escolha da operação. 
Quando o usuário seleciona a opção 03, o caminho verdadeiro realiza a multiplicação. 
Caso a opção 03 seja falsa, o fluxo verifica a opção 04 e, se ela for verdadeira, realiza a divisão. 
Esse processo permite que cada operação seja executada de acordo com a escolha feita pelo usuário.

Ana Beatriz

Safira

Helena ( Subtração e Raiz Quadrada )
  Algoritmo de Subtração: Programa simples que solicita ao usuário dois valores reais, valorA e valorB, calcula a diferença entre eles (resultado <- valorA - valorB) e exibe o resultado na tela.
  Algoritmo de Cálculo de Raiz Quadrada: Programa que calcula a raiz quadrada de um número real informado pelo usuário utilizando o método iterativo de Newton-Raphson. 
  Antes de iniciar as iterações, trata os casos especiais de número negativo (sem raiz real) e número zero; nos demais casos, aproxima o valor da raiz repetidamente até que o erro entre aproximações sucessivas seja menor que 0.000001, exibindo então o resultado final.
