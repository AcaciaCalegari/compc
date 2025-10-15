int validar_data(int dia, int mes, int ano) {

    if (mes < 1 || mes > 12) {
        return 0;
    }
    
    if (dia < 1 || dia > 31) {
        return 0;
    }
  
    return 1;
}