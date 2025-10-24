# Desafio-nivel-novato
Criar uma struct chamada Territorio que armazenará informações como nome, cor do exército e quantidade de tropas. O sistema permitirá o cadastro de 5 territórios e exibirá seus dados logo após o preenchimento.

Requisitos funcionais ⬇️

Veja os passos para criar e manipular uma estrutura que representa territórios em um sistema simples.

Criação da struct: definir uma struct chamada Territorio com os campos char nome[30], char cor[10] e int tropas.
Cadastro dos territórios: o sistema deve permitir que o usuário cadastre cinco territórios informando o nome, cor do exército e o número de tropas de cada um.
Exibição dos dados: o sistema deve exibir as informações de todos os territórios registrados após o cadastro.
Requisitos não funcionais

Inclua também os seguintes critérios para ter um código funcional, eficiente e fácil de entender:
 
Usabilidade: a interface de entrada deve ser simples e clara, com mensagens que orientem o usuário sobre o que digitar.
Desempenho: o sistema deve apresentar os dados logo após o cadastro, com tempo de resposta inferior a 2 segundos.
Documentação: o código deve conter comentários explicativos sobre a criação da struct, entrada e exibição de dados.
Manutenibilidade: os nomes das variáveis e funções devem ser claros e representativos, facilitando a leitura e manutenção do código.
Instruções detalhadas


Siga os passos a seguir para implementar o programa de cadastro de territórios.
 

Bibliotecas necessárias: inclua as bibliotecas stdio.h e string.h.
Definição da struct: crie a struct Territorio com os campos mencionados.
Declaração de vetor de structs: crie um vetor com capacidade para armazenar 5 estruturas do tipo Territorio.
Entrada dos dados: utilize um laço for para preencher os dados dos 5 territórios.
Exibição: percorra, após o cadastro, o vetor e exiba os dados de cada território com formatação clara.
Requisitos técnicos adicionais

Aqui estão algumas orientações adicionais para uma implementação correta e bem documentada:
 
Use scanf para ler o nome e o número de tropas.
Utilize fgets ou scanf("%s", ...) com cuidado para strings.
Comente seu código explicando a criação e o uso da struct e a lógica do laço de entrada e saída.
