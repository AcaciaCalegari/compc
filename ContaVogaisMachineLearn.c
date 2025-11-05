//contar qnts vogais maiusculas e minusculas aparecem no vetor 
//Ainda a lista 6 d vetores do machine teaching d smn passada
//lembrando q o machine teaching não precisa d intmain, printf, etc...

//1:58am o.O 05/11/2025



int conta_vogais(char v[], int n) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u' ||
            v[i] == 'A' || v[i] == 'E' || v[i] == 'I' || v[i] == 'O' || v[i] == 'U') {
            cont++;
        }
    }
    return cont;
}
