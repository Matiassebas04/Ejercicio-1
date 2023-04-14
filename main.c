#include <stdio.h>

int main() {
    int horas_trabajadas;
    float valor_por_hora, monto_ventas, salario_bruto, valor_bonificacion, salario_neto, aporte_IESS;
    
    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horas_trabajadas);
    
    printf("Ingrese el valor por hora: ");
    scanf("%f", &valor_por_hora);
    
    printf("Ingrese el monto de ventas: ");
    scanf("%f", &monto_ventas);
    
    if (horas_trabajadas <= 40) {
        salario_bruto = horas_trabajadas * valor_por_hora;
    } else if (horas_trabajadas <= 50) {
        salario_bruto = 40 * valor_por_hora + (horas_trabajadas - 40) * valor_por_hora * 1.1;
    } else if (horas_trabajadas <= 55) {
        salario_bruto = 40 * valor_por_hora + 10 * valor_por_hora * 1.1 + (horas_trabajadas - 50) * valor_por_hora * 1.15;
    } else {
        salario_bruto = 40 * valor_por_hora + 10 * valor_por_hora * 1.1 + 5 * valor_por_hora * 1.15 + (horas_trabajadas - 55) * valor_por_hora * 1.2;
    }
    
    if (monto_ventas <= 800) {
        valor_bonificacion = monto_ventas * 0.02;
    } else if (monto_ventas <= 1500) {
        valor_bonificacion = 800 * 0.02 + (monto_ventas - 800) * 0.04;
    } else if (monto_ventas <= 3000) {
        valor_bonificacion = 800 * 0.02 + 700 * 0.04 + (monto_ventas - 1500) * 0.06;
    } else {
        valor_bonificacion = 800 * 0.02 + 700 * 0.04 + 1500 * 0.06 + (monto_ventas - 3000) * 0.08;
    }
    
    aporte_IESS = salario_bruto * 0.0945;
    salario_neto = salario_bruto - aporte_IESS + valor_bonificacion;
    
    printf("Salario bruto: $%.2f\n", salario_bruto);
    printf("Valor de bonificación: $%.2f\n", valor_bonificacion);
    printf("Salario neto: $%.2f\n", salario_neto);
    
    return 0;
}
