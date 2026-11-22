# Estudos em Linguagem C

Repositório que destinei aos meus exercícios e pequenos projetos durante o estudo dos fundamentos da linguagem C e de algoritmos.

## Objetivo

Registrar minha evolução de forma organizada, praticando programação, Git e GitHub.

## Progresso atual

- Git e GitHub Foundations: concluído.
- Linguagem C e algoritmos: em andamento.
- Assuntos já presentes nos exercícios: introdução, operadores, entrada e saída, tipos de dados, decisões, repetições e vetores.
- Rascunhos e exercícios antigos ficam separados do material da trilha atual.

## Índice dos exercícios

| Assunto | Pasta |
| --- | --- |
| Introdução | [01_introducao](exercicios/01_introducao/) |
| Operadores aritméticos | [02_operadores_aritmeticos](exercicios/02_operadores_aritmeticos/) |
| Entrada e saída | [03_entrada_saida](exercicios/03_entrada_saida/) |
| Tipos de dados e memória | [04_tipos_dados_memoria](exercicios/04_tipos_dados_memoria/) |
| Estruturas de decisão | [05_estrutura_de_decisao](exercicios/05_estrutura_de_decisao/) |
| Estruturas de repetição | [06_estrutura_de_repeticao](exercicios/06_estrutura_de_repeticao/) |
| Vetores e dados homogêneos | [07_estrutura_de_dados_homogeneas](exercicios/07_estrutura_de_dados_homogeneas/) |
| Prática das seções 1 a 4 | [exercicios_secao1_4](exercicios/exercicios_secao1_4/) |
| Prática da seção 5 | [exercicios_secao5](exercicios/exercicios_secao5/) |

## Organização

```text
exercicios/
├── 01_introducao/
├── 02_operadores_aritmeticos/
├── 03_entrada_saida/
├── 04_tipos_dados_memoria/
├── 05_estrutura_de_decisao/
├── 06_estrutura_de_repeticao/
├── 07_estrutura_de_dados_homogeneas/
├── exercicios_secao1_4/
└── exercicios_secao5/

legado_nao_revisado/
└── Exercícios antigos que ainda serão refeitos e revisados.

rascunhos/
└── Códigos incompletos ou ideias em desenvolvimento.
```

## Como compilar no PowerShell

Os exemplos abaixo consideram o GCC instalado e o terminal aberto na pasta do repositório.

```powershell
New-Item -ItemType Directory -Force build
gcc -std=c17 -Wall -Wextra -Wpedantic -g .\exercicios\01_introducao\ola_mundo.c -o .\build\ola_mundo.exe
if ($LASTEXITCODE -eq 0) {
    & .\build\ola_mundo.exe
}
```

Para compilar outro exercício, substitua o caminho do arquivo e o nome do executável.

Cada arquivo é um programa independente. Compile um exercício por vez; arquivos que usam funções de `math.h` podem precisar de `-lm` no final do comando. Execute somente quando a compilação terminar sem erros, para não rodar um executável antigo.

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
