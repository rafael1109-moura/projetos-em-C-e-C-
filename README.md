📚 Projetos em C++ (Terceiro Semestre)Este repositório contém diversas atividades e exercícios desenvolvidos em C++ durante o terceiro semestre (2025.2) da faculdade. 

O foco principal destas atividades é a aplicação de conceitos de Orientação a Objetos (POO) e estruturas de dados.

🎯 Destaque do Projeto: Sistema de Biblioteca (biblioteca.cpp)O projeto principal aqui apresentado é um Sistema de Gerenciamento Básico de Biblioteca, demonstrando o uso de polimorfismo e herança em C++.

DescriçãoO projeto biblioteca.cpp simula o controle de empréstimo e cálculo de multas para diferentes tipos de itens de uma biblioteca.

Conceitos de POO AplicadosClasse Abstrata: Utilização da classe ItemBiblioteca como classe base abstrata.
Herança: As classes Livro, Revista e DVD herdam de ItemBiblioteca.
Polimorfismo: Implementação de métodos virtuais puros e virtuais (calcularMulta, exibir, emprestar, devolver).
Encapsulamento: Uso de atributos protected e métodos public para controlar o acesso aos dados.
Lógica de Multas por ItemTipo de ItemPeríodo de EmpréstimoValor da Multa (por dia de atraso)
Livro 3 dias R$ 2,00 Revista 3 dias R$ 1,00 DVD3 dias R$ 3,00🛠 

Como Compilar e ExecutarPara executar este projeto (e outros arquivos .cpp no futuro), 
siga os passos abaixo usando o compilador g++ no terminal:Compilar:Bashg++ nome_do_arquivo.cpp -o nome_do_executavel

# Exemplo: g++ biblioteca.cpp -o biblioteca.exe
Executar:Bash./nome_do_executavel
# Exemplo: ./biblioteca.exe
