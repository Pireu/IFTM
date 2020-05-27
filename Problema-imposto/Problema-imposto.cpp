#include <iostream>
#include <stdio.h>
#include <math.h>


int main()
{
    double ganhoSalario, ganhoServicos, ganhoCapital, gastoMedico, gastoEducacao;
    double impostoSalario, impostoServico, impostoCapital;
    scanf ("%lf %lf %lf %lf %lf", &ganhoSalario, &ganhoServicos, &ganhoCapital, &gastoMedico, &gastoEducacao);

// 1 LEITURA DOS DADOS

    printf ( "Renda anual com salário: \n");
    scanf ("%lf",&ganhoSalario);
    printf ( "Renda anual com prestação de serviço: \n");
    scanf  ("%lf",&ganhoServicos);
    printf ( "Renda anual com ganho de capital: \n");
    scanf ("%lf",&ganhoCapital);
    printf ( "Gastos médicos: \n");
    scanf ("%lf",&gastoMedico);
    printf ( "Gastos educacionais: \n");
    scanf ("%lf",&gastoEducacao);

    // 2 CALCULOS CONSOLIDADO DE RENDA

    double salarioMensal = ganhoSalario / 12.0;

    if (salarioMensal < 3000.0)
    {
        impostoSalario = 0.0;
    }
    else if (salarioMensal <5000.0)
    {
        impostoSalario = ganhoSalario * 0.1;
    }
    else
    {
        impostoSalario = ganhoSalario * 0.2;
    }
    impostoServico = ganhoServicos * 0.15;
    impostoCapital = ganhoCapital * 0.2;

    // RELATORIO

    printf ("RELATÓRIO DE IMPOSTO DE RENDA\n");    
    printf ("CONSOLIDADO DE RENDA:");
    printf ( "Imposto sobre salario: \n");
    printf ( "Imposto sobre servicos: \n");
    printf ( "Imposto sobre ganho de capital: \n");
    
    return 0;
}
