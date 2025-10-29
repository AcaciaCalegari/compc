//29-10
//machine teaching antigo

float calculadora(float a, float b, char operador) {
    switch (operador) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b == 0) {
                return -9999;  // Divisão por zero
            }
            return a / b;
        default:
            return -9999;  // Operador inválido
    }
}
