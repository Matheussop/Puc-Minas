## Lista 3 da materia de FTC 
5 período Puc Minas  
Aluno: Matheus Luiz Oliveira Spindula  
Matricula: 623473   

Questão 1. Dê a gramática para as seguintes linguagens:

a) {a $a^nb^n$ | n $\ge 0$}  
    S → aSb  

------------------------    
b) { $a^nb^kc^m$   |  k = n+m ex}  
    &emsp; $a^nb^kc^m$ = $a^nb^nb^mc^m$   
    S → AB   
    A → aAb | $\lambda$  
    B → bBc | $\lambda$  

------------------------    
c) { $a^nb^kc^m$   |  k = 2n+m }  
    S →  AB  
    A → aaAb | $\lambda$  
    B → bBc | $\lambda$  

------------------------  
d) { $a^mb^nc^i$    |  $m > n + i$}  
    S → A  
    A → aB  | $\lambda$  
    B → aBb | C | $\lambda$  
    C → aCc | $\lambda$

------------------------    
e) { w  ∈  { a, b }*  |  w  não contenha o substring aba }  
    S → AB  
    A → aA | bB | $\lambda$    
    B → bB | bA | $\lambda$  

------------------------    
f) { w  |  w  contenha um número igual de a´s e b´s  }

S → A  
A → aAB | $\lambda$  
B → bA   

------------------------
g) { wwR   |  w ∈  { a, b }* }  
 ?   
 Não consegui fazer

------------------------    
Questão 2. Para cada uma das gramáticas a seguir, descreva a linguagem gerada pela gramática:

a)  
S  → aaSB  |  λ  
B  → bB  |   λ  

----------------------
Resp = {$(aa)^n(b^m)^n$ | $n \ e \ m \ge 0$}

----------------------
b)  
S  → aSbb  |  A  
A  → cA  |  c  

----------------------

Resp = {$a^nc^m(bb)^n$ | $n \ge 0$,   $m \ge 1$}

----------------------

c)  
S  → aS  |  bS  |  A  
A  → cA  |  c  |   λ  

----------------------
Resp = {$(a^nb^mc^a)^p$ | $m, \ n \ e \ p \ge 0, a \ge 1$}

----------------------

d)  
S  → abSdc  | A  
A  → cdAba  |  λ  

----------------------
Resp = {$(ab)^n(((cd)^m \ (ba^m)^A) \ (dc)^n)$ | $n, \ m \ e\ A \ge 0$}

----------------------
e)  
S →  aA  |  λ  
A →  bS   

----------------------
Resp = {$a(b^m)^n$ | $n \ e \ m \ge 0$}

----------------------

Questão 3. Para cada uma das gramáticas a seguir, obtenha uma gramática essencialmente não contrátil. 

a)   
S →  aS  |  bS  |  B  
B →  bb   |  C  |  λ  
C →  cC  |   λ

----------------------

S'→ S  
S →  aS  |  bS  |  B  
B →  bb   |  C  |  λ  
C →  cC  |   λ  
Anuláveis {C,B,S,S'}

---------------------

Anulando {C, B}

S'→ S  |
S →  aS | bS | B  
B →  bb | C    
C → cC | c

---------------------

Anulando {S, S'}

S'→ S  | λ   
S →  aS | bS | B | a | b   
B → bb | C    
C → cC | c

---------------------
b) 
S →  ABC  |  λ  
A →  aA  |   λ  
B →  bB  |   λ  
C →  cC  |   λ  

---------------------
S'→ S
S →  ABC  |  λ  
A →  aA  |   λ  
B →  bB  |   λ  
C →  cC  |   λ  
Anuláveis {C,B,A,S,S'}

---------------------
S'→ S | λ  
S →  ABC  |  ab | ac | bc | a | b | c     
A →  aA  |  a   
B →  bB  |  b  
C →  cC  |  c  

---------------------
c)  
S →  BSA  |  A  
A →  aA  |   λ  
B →  Bba  |   λ  

---------------------
S'→ S
S →  BSA  |  A  
A →  aA   |  λ 
B →  Bba  |   λ  

Anuláveis {A,B,S,S'}

---------------------

S'→ S |  λ  
S →  BSA  | A | BS | SA  
A →  aA  |  a    
B →  Bba  |  ba    

Questão 4. Para cada uma das gramáticas a seguir, obtenha uma gramática equivalente sem regras de cadeia. 

a)  
S →  AS  |  A    
A →  aA   |  bB  |  C  
B →  bB   |  b  
C →  cC  |  B  

---------------------
Retirando cadeia de {B,C,A,S,S'}

S'→ AS  | aA   |  bB  |  cC  |  bB | b   
S →  AS  | aA   |  bB  |  cC  |  bB | b  
A →  aA  |  bB  |  cC  |  bB | b    
B →  bB  |  b  
C →  cC  |  bB | b  

---------------------

b)  
S →  A  |  B |  C   
A →  aa |  B  
B →  bb |  C  
C →  cc |  A  

---------------------

Retirando cadeia de {B,C,A,S,S'}

S'→  aa |  bb | cc  
S →  aa |  bb | cc   
A →  aa |  bb | cc |     
B →  bb |  cc | aa  
C →  cc |  aa | bb  

---------------------
Questão 5. Para cada uma das gramáticas a seguir, obtenha uma gramática equivalente na FNC. 

a)  
S →  aAbB |  ABC  |  a   
A →  aA   |  a  
B →  bBcC |  b  
C →  abc  

---------------------
1. Aumentar a gramatica se necessário    
    S →  aAbB |  ABC  |  a   
    A →  aA   |  a  
    B →  bBcC |  b  
    C →  abc  
---------------------
2. Eliminar produções lambdas  
    S →  aAbB |  ABC  |  a   
    A →  aA   |  a  
    B →  bBcC |  b  
    C →  abc  
---------------------
3. Eliminar as cadeias   
    S →  aAbB |  ABC  |  a   
    A →  aA   |  a  
    B →  bBcC |  b  
    C →  abc  
---------------------
4. Eliminar símbolos inúteis    
    4.1 Não produzem terminal.  
        S →  aAbB |  ABC  |  a   
        A →  aA   |  a  
        B →  bBcC |  b  
        C →  abc  

    --------------------
    4.2 Eliminar as variáveis que não são alcançáveis
        S →  aAbB |  ABC  |  a   
        A →  aA   |  a  
        B →  bBcC |  b  
        C →  abc  

--------------------
b)  
S →  A  |  ABa |  AbA  
A →  Aa   |   λ  
B →  Bb   |  BC  
C →  CB  |  CA  |  bB  

---------------------
   1. Aumentar a gramatica se necessário
    S →  A  |  ABa |  AbA  
    A →  Aa   |   λ  
    B →  Bb   |  BC  
    C →  CB  |  CA  |  bB  

---------------------
   2. Eliminar produções lambdas   
    S →  A  |  ABa |  AbA | Ba | Ab | bA | b   
    A →  Aa  |  a   
    B →  Bb  |  BC    
    C →  CB  |  CA  |  bB   
   
--------------------
   3. Eliminar as cadeias 
    S →  A  |  ABa |  AbA | Ba | Ab | bA | b   
    A →  Aa  |  a   
    B →  Bb  |  BC    
    C →  CB  |  CA  |  bB 
    Cadeias {S}
    
        ---------------------
        S →  Aa | a | ABa | AbA | Ba | Ab | bA | b   
        A →  Aa  |  a   
        B →  Bb  |  BC    
        C →  CB  |  CA  |  bB 

---------------------
   4. Eliminar símbolos inúteis    
       4.1 Não produzem terminal.  
            S →  Aa | a | ABa | AbA | Ba | Ab | bA | b   
            A →  Aa  |  a   

       --------------------
       4.2 Eliminar as variáveis que não são alcançáveis
            S →  A | AbA | Ab | bA | b   
            A →  Aa| a   
---------------------
c)  
S →  ABC  
A →  a   
B →  b   |  bb  
C →  BaB   |  c  

---------------------
1. Aumentar a gramatica se necessário
    S →  ABC  
    A →  a   
    B →  b   |  bb  
    C →  BaB   |  c  
---------------------
2. Eliminar produções lambdas  
    S →  ABC  
    A →  a   
    B →  b   |  bb  
    C →  BaB   |  c  
---------------------
3. Eliminar as cadeias  
    S →  ABC  
    A →  a   
    B →  b   |  bb  
    C →  BaB   |  c 
---------------------
4. Eliminar símbolos inúteis  
    4.1 Não produzem terminal.   
    &emsp;Expressões que produzem, T = {S,A,B,C}  
    S →  ABC  
    A →  a   
    B →  b  |  bb  
    C →  BaB|  c 

    ---------------------
    4.2 Eliminar as variáveis que não são alcançáveis  
    S →  ABC  
    A →  a   
    B →  b  |  bb  
    C →  BaB|  c 

---------------------
d)  
S →  ADE  |  ABa |  AbA   
A →  Aa   |   λ  
B →  Bb   |  BC  
C →  CB  |  CA  |  bB  
D →  EdD  | E  
E →  bcdE  | D  

---------------------
1. Aumentar a gramatica se necessário
   
    S →  ADE  |  ABa |  AbA   
    A →  Aa   |   λ  
    B →  Bb   |  BC  
    C →  CB  |  CA  |  bB  
    D →  EdD  | E  
    E →  bcdE  | D

---------------------
2. Eliminar produções lambdas
   
    Anuláveis {A}  

    S →  ADE | ABa | AbA | DE | Ba | bA | Ab | b   
    A →  Aa  | a  
    B →  Bb  | BC   
    C →  CB  | CA | bB   
    D →  EdD | E   
    E →  bcdE | D  

---------------------
3. Eliminar as cadeias  
    Cadeias {E,D}  
    S →  ADE | ABa | AbA | DE | Ba | bA | Ab | b     
    A →  Aa  | a  
    B →  Bb  | BC   
    C →  CB  | CA | bB      
    D →  EdD | bcdE   
    E →  bcdE | EdD | bcdE 

---------------------
4. Eliminar símbolos inúteis  
    4.1 Não produzem terminal.   
    &emsp;Expressões que produzem, T = {S,A}  
    S →  ADE | ABa | AbA | DE | Ba | bA | Ab | b       
    A →  Aa  | a  
    B →  Bb  | BC   
    C →  CB  | CA | bB      
    D →  EdD | bcdE   
    E →  bcdE| EdD | bcdE  

    ---------------------  
    S →  AbA | bA | Ab | b     
    A →  Aa  | a

    ---------------------
    4.2 Eliminar as variáveis que não são alcançáveis  
    R = {S,A}  
    S →  AbA | bA | Ab | b     
    A →  Aa  | a

---------------------
