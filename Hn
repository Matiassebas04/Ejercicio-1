#include <stdio.h>

int main() {
    char respuesta;
    do {
        // Declaración de variables
        float horas_trabajadas, valor_por_hora, ventas, salario_bruto, bonificacion, salario_neto, aporte_iess;
        
        // Ingreso de datos
        printf("Ingrese el total de horas trabajadas: ");
        scanf("%f", &horas_trabajadas);
        
        printf("Ingrese el valor por hora: ");
        scanf("%f", &valor_por_hora);
        
        printf("Ingrese el monto de ventas: ");
        scanf("%f", &ventas);
        
        // Verificación de datos ingresados
        if (horas_trabajadas <= 0 || valor_por_hora <= 0 || ventas < 0) {
            printf("Error: Los datos ingresados no son válidos.\n");
            continue; // Volver al inicio del bucle do-while
        }
        
        // Cálculo del salario bruto
        if (horas_trabajadas <= 40) {
            salario_bruto = horas_trabajadas * valor_por_hora;
        } else if (horas_trabajadas <= 50) {
            salario_bruto = 40 * valor_por_hora + (horas_trabajadas - 40) * valor_por_hora * 1.1;
        } else if (horas_trabajadas <= 55) {
            salario_bruto = 40 * valor_por_hora + 10 * valor_por_hora * 1.1 + (horas_trabajadas - 50) * valor_por_hora * 1.15;
        } else {
            salario_bruto = 40 * valor_por_hora + 10 * valor_por_hora * 1.1 + 5 * valor_por_hora * 1.15 + (horas_trabajadas - 55) * valor_por_hora * 1.2;
        }
        
        // Cálculo de la bonificación
        if (ventas <= 800) {
            bonificacion = ventas * 0.02;
        } else if (ventas <= 1500) {
            bonificacion = 800 * 0.02 + (ventas - 800) * 0.04;
        } else if (ventas <= 3000) {
            bonificacion = 800 * 0.02 + 700 * 0.04 + (ventas - 1500) * 0.06;
        } else {
            bonificacion = 800 * 0.02 + 700 * 0.04 + 1500 * 0.06 + (ventas - 3000) * 0.08;
        }
        
        // Cálculo del salario neto
        aporte_iess = salario_bruto * 0.0945;
        salario_neto = salario_bruto - aporte_iess + bonificacion;
        
        // Mostrar resultados
        printf("Salario bruto: $%.2f\n", salario_bruto);
        printf("Bonificación: $%.2f\n", bonificacion);
        printf("Salario neto: $%.2f\n", salario_neto);
        
        // Preguntar si desea volver a correr el programa
        printf("¿Desea ingresar los datos de otro empleado? (s/n): ");
        scanf(" %c", &respuesta);
    } while (respuesta == 's' || respuesta == 'S');
    
    return 0;
}
