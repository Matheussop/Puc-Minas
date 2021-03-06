## Lista 3 da materia de FTC 
5 período Puc Minas  
Aluno: Matheus Luiz Oliveira Spindula  
Matricula: 623473   

Questão 1. Dê a gramática para as seguintes linguagens:

a) {a a<sup>n</sup>b<sup>n</sup> | n &ge; 0}  
    S → aSb  

------------------------    
b) { a<sup>n</sup>b<sup>k</sup>c<sup>m</sup>   |  k = n+m ex}  
    &emsp; a<sup>n</sup>b<sup>k</sup>c<sup>m</sup> = a<sup>n</sup>b<sup>n</sup>b<sup>m</sup>c<sup>m</sup>  
    S → AB   
    A → aAb | λ
    B → bBc | λ

------------------------    
c) { a<sup>n</sup>b<sup>k</sup>c<sup>m</sup>   |  k = 2n+m }  
    S →  AB  
    A → aaAb | λ 
    B → bBc | λ

------------------------  
d) { a<sup>m</sup>b<sup>n</sup>c<sup>i</sup>    |  $m > n + i}  
    S → A  
    A → aB  | λ
    B → aBb | C | λ
    C → aCc | λ
    
------------------------    
e) { w  ∈  { a, b }*  |  w  não contenha o substring aba }  
    S → AB  
    A → aA | bB | λ  
    B → bB | bA | λ

------------------------    
f) { w  |  w  contenha um número igual de a´s e b´s  }

S → A  
A → aAB | λ 
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
Resp = {(aa)<sup>n</sup>(b<sup>m</sup>)<sup>n</sup> | n  e  m &ge; 0}

----------------------
b)  
S  → aSbb  |  A  
A  → cA  |  c  

----------------------

Resp = {a<sup>n</sup>c<sup>m</sup>(bb)<sup>n</sup> | n &ge; 0,   m &ge; 1}

----------------------

c)  
S  → aS  |  bS  |  A  
A  → cA  |  c  |   λ  

----------------------
Resp = {(a<sup>n</sup>b<sup>m</sup>c<sup>a</sup>)<sup>p</sup> | m, n  e  p &ge; 0, a &ge; 1}

----------------------

d)  
S  → abSdc  | A  
A  → cdAba  |  λ  

----------------------
Resp = { (ab)<sup>n</sup>(((cd)<sup>m</sup> \ (ba<sup>m</sup>)<sup>A</sup>) \ (dc)<sup>n</sup>) | n, m e A &ge; 0}

----------------------
e)  
S →  aA  |  λ  
A →  bS   

----------------------
Resp = {</up>a</sup>(b<sup>^</sup>m)<sup>n</sup> | n  e  m &ge; 0}

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
        S →  AbB |  ABC  |  A   
        A →  aA   |  a  
        B →  bBcC |  b    
        C →  abc  

--------------------
5.           
    S →  AB<sub>1</sub> |  AB<sub>3</sub>  |  a   
    A →  A<sub>1</sub>A   
    A<sub>1</sub> →  a  
    B →  B<sub>1</sub>C |  b   
    B<sub>1</sub> →  B<sub>2</sub>B  
    B<sub>2</sub> → b  
    B<sub>3</sub> → BC  
    C → C<sub>3</sub>C<sub>2</sub>    
    C<sub>3</sub> → c    
    C<sub>2</sub> → C<sub>1</sub>C  
    C<sub>1</sub> → AB  
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
5. 
    S → A | BA | B | BA  | b   
    A → AA<sub>1</sub>|  A<sub>1</sub>   
    A<sub>1</sub> → a  
    B<sub>1</sub> → B<sub>2</sub>A   
    B<sub>2</sub> → b  

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
    B →  b  
    C →  BaB|  c 

---------------------
5.     
    S →  ABC  
    A →  a   
    B →  b   
    C →  C<sub>1</sub>B|  c   
    C<sub>1</sub> → BA
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
5.  
    S →  AB | B<sub>1</sub>A<sub>1</sub> | AB<sub>1</sub> | b     
    A →  AA<sub>1</sub>  | A<sub>1</sub>  
    A<sub>1</sub> →  a  
    B → AB<sub>1</sub>    
    B<sub>1</sub> → b  
--------------------- 

Questão 6. Prove usando o pumping lemma que as seguintes linguagens não são livres de contexto:

a. { a<sup>n</sup>b<sup>n</sup>a<sup>n</sup>b<sup>n</sup>    |  n > 0 }
