//machine teaching semana passada(guerra no rj)

//lembrando q o machineteaching nao precisa d scanf/printf/include/etc

//aula 6 d vetores

//recebe um vetor v com n elementos e retorna o maior(maioh) vetor, se encontrar um valor maioh, atualiza e retorna o >valor. n smp >=1

int maior_elemento(int v[], int n){
    int maioh = v[0];
    for(int i=1; i<n; i++){
        if (v[i] > maioh){
            maioh=v[i];
        }
    }
    return maioh;
}
