# cpp

comentários
```c++
// linhas

/* varias
linhas */
```

pausar programa
```c++
system ("pause");
```

retorno de função
```c++
//por padrão precisa retornar alguma coisa
main() {
    // função
    return 0;
}

//precisa retornar um int
int main() {
    // função
    return 0;
}

//void não retorna nada
void main() {
    // função
}
```

quebra de linha
```c++
endl;
```

Sequência
Equivale a
 \n
 Nova linha
 \t
 Tabulação
 \b
 Backspace
 \"
 Aspa dupla
 \'
 Aspa simples
 \?
 Ponto de interrogação
 \\
 Barra invertida
booleano
```c++
bool logico1 = true; // True significa verdadeiro em Inglês
bool logico2 = false; // False significa falso em Inglês
bool logico3 = 0; // Atribui-se o inteiro 0 (zero) equivale a 'false'
bool logico4 = 189; // Qualquer valor diferente de 0 (zero) é interpretado como 'true'
```

char
```c++
char umCaractere = 'a';
```

inteiro
```c++
int inteiro = 500;
```

float 
```c++
float real = 1.15479637; // poucas casas decimais.
```

double
```c++
double numero = 558749.16846516487975132156857452131274127412974812794812794812798412;
// precisão acurada.
```

string
```c++
#include <iostream>
using namespace std;
#include <string>

void main() {
    string frase; // uma string construída usando a biblioteca <string>
    frase = "Testes com strings";
}
```

vetor
```c++
float registro[10]; // declaração de um vetor de 10 números reais;

registro[0] = 3.50;
registro[1] = 3.59;
registro[2] = 3.72;

registro[9] = 4.84;
```

```c++
// [tipo] [nome][quantidade de registros (entre colchetes)];
```

matriz
```c++
int matriz[10][20]; // uma matriz 10 colunas e 20 linhas.

matriz[0][0] = 1; // primeira célula da primeira coluna.
matriz[0][1] = 2; // segunda célula da primeira coluna.

matriz[9][19]; // última célula da última coluna.
```

```c++
int matriz[5][6][7];
// uma matriz com 210 campos, formada por 5 colunas, cada coluna com 6 linhas,
// e cada linha contendo 7 campos.
```