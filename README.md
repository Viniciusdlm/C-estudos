# Estudos em Linguagem C

Repositório destinado aos meus exercícios e pequenos projetos durante o estudo dos fundamentos da linguagem C e de algoritmos.

## Objetivo

Registrar minha evolução de forma organizada, praticando programação, Git e GitHub sem transformar o repositório em uma coleção de códigos copiados ou commits artificiais.

## Progresso atual

- Git e GitHub Foundations: concluído.
- Linguagem C e algoritmos: em andamento.
- Conteúdo atual: operadores aritméticos.

## Organização

```text
exercicios/
├── 01_introducao/
└── 02_operadores_aritmeticos/

legado_nao_revisado/
└── Exercícios antigos que ainda serão refeitos e revisados.

rascunhos/
└── Códigos incompletos ou ideias em desenvolvimento.
```

## Como compilar no PowerShell

Os exemplos abaixo consideram o GCC instalado e o terminal aberto na pasta do repositório.

```powershell
New-Item -ItemType Directory -Force build
gcc .\exercicios\01_introducao\ola_mundo.c -o .\build\ola_mundo.exe
.\build\ola_mundo.exe
```

Para compilar outro exercício, substitua o caminho do arquivo e o nome do executável.

## Convenções adotadas

- Arquivos com nomes descritivos, em letras minúsculas e usando `_`.
- Um assunto principal por exercício.
- Código compilável nas pastas de exercícios.
- Commits pequenos, naturais e relacionados a uma mudança real.
- Exercícios antigos separados até que sejam refeitos conscientemente.

## Materiais de estudo

- Curso [Programe seu Futuro: Programação com a Linguagem C](https://www.udemy.com/course/programe-seu-futuro-curso-de-programacao-com-a-linguagem-c/), de Wagner Gaspar.
- Livro *Introdução à programação em C: os primeiros passos de um desenvolvedor*, de Maurício Aniche.

## Licença

Este repositório utiliza a licença MIT. Consulte o arquivo [LICENSE](LICENSE).
