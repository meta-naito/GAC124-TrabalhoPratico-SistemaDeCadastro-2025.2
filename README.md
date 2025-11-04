# Trabalho Prático Sistema de Cadastro

Matéria: GAC124 - Introdução Aos Algoritmos.
Professor: Marluce Rodrigues Pereira

Trbalho sobre a implementação de um sistema de cadastro (com recursos para busca e alteração de dados) com armazenamento dos dados em arquivos. 

O tema escolhido pelo grupo foi satélites, com os campos de registro na base de dados sendo:
- Identificador (inteiro)
- Nome (string)
- País de Origem (string)
- Ano de Lançamento (inteiro)
- Função (string)

## Requisitos

- Implementado em C++;
- Entrega pelo Campus Virtual do código-fonte da aplicação desenvolvida, o arquivo csv de entrada inicial e um relatório.
- Os arquivos de entrada e exemplo deverão conter ao menos 50 itens cadastrados em cada, o ideal é ter ao menos 100.
- Passível de compilação e execução em um Linux genérico qualquer.
- Sem uso de `goto`;
- Sem uso de `break` fora de `switch`;
- Não usar `continue`;
- Evitar uso de variáveis globais desnecessárias;
- Utilize e respeite um uníco estilo de identação;
- Código-fonte seja entregue com cabeçalho identificando os membros da equipe e o tema do trabalho
- Variáveis, tipos e funções desenvolvidas pelo grupo devem ter nomes adequados;
- Evitar comentários desnecessários;
- Variáveis, tipos e funções desenvolvidas pelo grupo devem ter nomes adequados;
- Entrega do projeto deve ser feita atravś de um único arquivo compactado (formato escolhido pelo grupo foi tar.gz).

Não a restrição sobre as bibliotecas que podem ser utilizadas, mas conhecimento sobre alocação dinâmica, redimensionamento de vetores, ordenação e busca eficiente em vetores, deve ser demonstrado.

### Descrição relatório

O relatório deve conter:
- Uma breve introdução sobre o trabalho em si;
- Uma descrição em alto nível (isto é, sem código) de todas as estruturas utilizadas explicando a lógica do programa;
- Uma descrição da ordem dos dados armazenados no arquivo;
- Abordar de forma sucinta e objetiva os acertos e erros durante o desenvolvimento do trabalho;
- Fazer uma conclusão, apresentando os resultados obtidos.

### Características da aplicação

1. A aplicação deverá inicialmente carregar os dados do arquivo csv em um vetor alocado dinamicamente. O tamanho inicial do vetor deverá ser capaz de suportar 40 elementos, sendo redimensionado de acordo com a necessidade. A operação de redimensionamento deve adicionar 5 ou 10 posições a cada operação.
2. Deve ser possível inserir um novo elemento. Nesse caso, a inserção será realizada no final do vetor. Opcionalmente, vocês também podem optar por fazer uma inserção ordenada, para facilitar o uso de busca binária (ou seja, o elemento é inserido de forma a manter os dados ordenados).
3. A aplicação deverá ser capaz de remover dados existentes. A remoção pode ser feita de forma lógica, ou seja: o objeto não é apagado diretamente, mas apenas marcado (com uma chave negativa, por exemplo). O elemento também deve ser removido totalmente quando o arquivo for gravado novamente.
4. Antes do término da aplicação, deve haver uma opção para permitir gravar as novas alterações (remoções e inserções realizadas). Essa opção poderá fazer parte do menu principal da aplicação ou pode ser oferecida logo após a inserção ou remoção dos dados, a critério da equipe.
5. Deve ser possível buscar um registro, utilizando-se um dos campos. Nesse caso, deve ser possível fazer a busca por pelo menos duas formas diferentes  (no nosso exemplo: por nome ou por idade ou por endereço). Para cada um desses campos, deve ser implementada a busca binária (recursiva ou iterativa). Note, que para fazer busca binária, os dados deverão estar ordenados.
6. Deve ser possível mostrar na tela tanto o arquivo inteiro, como um trecho informado pelo usuário. Por exemplo, deve ser possível mostrar do décimo ao vigésimo elemento do arquivo. A impressão deve ser realizada na ordem em que estão armazenados.
7. Deve ser possível ordenar os dados por pelo menos dois dos campos  do registro. No exemplo dado, a aplicação poderia dar a opção de ordenar por nome ou idade. A ordenação deverá ser feita em memória (todos os dados do arquivo são lidos em um vetor na memória e então ordenados). Como já comentado anteriormente, antes do término da aplicação (ou logo após a ordenação), deve haver a opção de gravar as alterações no arquivo. Para ordenação, deverá ser utilizado um dos métodos apresentados em sala de aula. Não é permitido utilizar o bubblesort ou suas variantes.

### Opcional

- Interface gráfica, mas se você quiser implementá-la, faça-o de forma que o sistema final fique portável.

## Grupo 

Turma: 10B
- Arthur Fazzio Mendes
- Lívia Rezende Masson
  
## Documentos

- [Planejamento](https://www.notion.so/2a1bd7ba892d803c877bde20c649f714?v=2a1bd7ba892d80d1adc7000c970c800d)
- [Documento de requisitos](https://docs.google.com/document/d/1LOT9nAZFC94iCbE1Ji6yrija84EMX5Cz3dLRbLsJ8Sk/edit?tab=t.0).
