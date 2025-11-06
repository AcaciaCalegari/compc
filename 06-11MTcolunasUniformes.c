//questao 3 do mt d ontem a tarde
//06-11-2025 00:07h

int colunas_uniformes(int m[][10], int l, int c) {
    int count = 0;
    
    for (int j = 0; j < c; j++) {
        int uniforme = 1;
        for (int i = 1; i < l; i++) {
            if (m[i][j] != m[0][j]) {
                uniforme = 0;
                break;
            }
        }
        if (uniforme) {
            count++;
        }
    }
    
    return count;
}
