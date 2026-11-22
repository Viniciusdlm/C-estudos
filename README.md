# Estudos em Linguagem C

Repositório que destinei aos meus exercícios e pequenos projetos durante o estudo dos fundamentos da linguagem C e de algoritmos.

## Objetivo

Registrar minha evolução no estudo da linguagem C e de algoritmos.

## Progresso atual

- Linguagem C e algoritmos: em andamento.
- Assuntos já presentes nos exercícios: introdução, operadores, entrada e saída, tipos de dados, decisões, repetições e vetores.
- Matrizes: pasta preparada para as próximas aulas.
- Rascunhos separados por assunto, incluindo estudos de strings, funções, ponteiros e alocação de memória.

## Índice dos exercícios

| Assunto | Pasta |
| --- | --- |
| Introdução | [01_Introducao](Exercicios/01_Introducao/) |
| Operadores aritméticos | [02_Operadores_aritmeticos](Exercicios/02_Operadores_aritmeticos/) |
| Entrada e saída | [03_Entrada_saida](Exercicios/03_Entrada_saida/) |
| Tipos de dados e memória | [04_Tipos_dados_memoria](Exercicios/04_Tipos_dados_memoria/) |
| Estruturas de decisão | [05_Estrutura_de_decisao](Exercicios/05_Estrutura_de_decisao/) |
| Estruturas de repetição | [06_Estrutura_de_repeticao](Exercicios/06_Estrutura_de_repeticao/) |
| Vetores e dados homogêneos | [07_Estrutura_de_dados_homogeneas](Exercicios/07_Estrutura_de_dados_homogeneas/) |
| Matrizes | [08_Estrutura_de_dados_matrizes](Exercicios/08_Estrutura_de_dados_matrizes/) |

As pastas acima reúnem os exemplos das aulas. A numeração organiza os assuntos dentro deste repositório.

## Exercícios das seções

As listas ficam em [Exercicios_das_secoes](Exercicios_das_secoes/README.md), mantendo os agrupamentos que eu já usava:

- [Seções 1 a 4](Exercicios_das_secoes/Secoes_01_a_04/): exercícios de introdução, operações e entrada e saída.
- [Seção 5](Exercicios_das_secoes/Secao_05/): exercícios de decisão e seleção.

As tentativas e a prática sem seção identificada ficam em [Rascunhos](Rascunhos/README.md), separadas por assunto.

## Organização

```text
Exercicios/
├── 01_Introducao/
├── 02_Operadores_aritmeticos/
├── 03_Entrada_saida/
├── 04_Tipos_dados_memoria/
├── 05_Estrutura_de_decisao/
├── 06_Estrutura_de_repeticao/
├── 07_Estrutura_de_dados_homogeneas/
└── 08_Estrutura_de_dados_matrizes/

Exercicios_das_secoes/
├── Secoes_01_a_04/
└── Secao_05/

Rascunhos/
├── Introducao/
├── Decisao/
├── Repeticao/
├── Vetores/
├── Strings/
├── Funcoes_e_escopo/
├── Ponteiros/
└── Alocacao_dinamica/
```

## Como compilar no PowerShell

Os exemplos abaixo consideram o GCC instalado e o terminal aberto na pasta do repositório.

```powershell
New-Item -ItemType Directory -Force build
gcc -std=c17 -Wall -Wextra -Wpedantic -g .\Exercicios\01_Introducao\Ola_mundo.c -o .\build\Ola_mundo.exe
if ($LASTEXITCODE -eq 0) {
    & .\build\Ola_mundo.exe
}
```

Para compilar outro exercício, substitua o caminho do arquivo e o nome do executável.

Cada arquivo é um programa independente. Compile um exercício por vez; arquivos que usam funções de `math.h` podem precisar de `-lm` no final do comando. Execute somente quando a compilação terminar sem erros, para não rodar um executável antigo.

## Convenções adotadas

- Pastas e arquivos C com inicial maiúscula, sem acentos e usando `_` entre palavras.
- `.gitignore`, `.gitattributes`, `LICENSE` e `README.md` mantêm os nomes convencionais.
- Um assunto principal por exercício.
- Código compilável nas pastas de exercícios.
- Rascunhos ficam no assunto correspondente até serem revisados.

## Materiais de estudo

- Curso [Programe seu Futuro: Programação com a Linguagem C](https://www.udemy.com/course/programe-seu-futuro-curso-de-programacao-com-a-linguagem-c/), de Wagner Gaspar.
- Livro *Introdução à programação em C: os primeiros passos de um desenvolvedor*, de Maurício Aniche.

## Licença

Este repositório utiliza a licença MIT. Consulte o arquivo [LICENSE](LICENSE).
