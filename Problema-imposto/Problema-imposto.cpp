#include <iostream>
#include <stdio.h>
#include <math.h>


int main()
{
    double ganhoSalario, ganhoServicos, ganhoCapital, gastoMedico, gastoEducacao;
    double impostoSalario, impostoServico, impostoCapital;
    double impostoBruto, maximoDedutivel, gastosDedutiveis;



// 1 LEITURA DOS DADOS

    printf ( "Renda anual com salario: ");
    scanf ("%lf",&ganhoSalario);
    printf ( "Renda anual com prestação de servico: ");
    scanf  ("%lf",&ganhoServicos);
    printf ( "Renda anual com ganho de capital: ");
    scanf ("%lf",&ganhoCapital);
    printf ( "Gastos medicos: ");
    scanf ("%lf",&gastoMedico);
    printf ( "Gastos educacionais: ");
    scanf ("%lf",&gastoEducacao);

    // 2 CALCULOS CONSOLIDADO DE RENDA

    double   salarioMensal = (ganhoSalario / 12.0);

    if (salarioMensal < 3000.0)
    {
        impostoSalario = 0.0;
    }
    else if (salarioMensal < 5000.0)
    {
        impostoSalario = (ganhoSalario * 0.1);
    }
    else
    {
        impostoSalario = (ganhoSalario * 0.2);
    }
    impostoServico = (ganhoServicos * 0.15);
    impostoCapital = (ganhoCapital * 0.2);

    // CALCULO DAS DEDUCOES

    impostoBruto = impostoSalario + impostoServico + impostoCapital;

    maximoDedutivel = impostoBruto * 0.3;

    gastosDedutiveis = gastoEducacao + gastoMedico;


    // RELATORIO

    printf ("\n\nRELATÓRIO DE IMPOSTO DE RENDA\n\n");
    printf ("CONSOLIDADO DE RENDA:\n");
    printf ( "Imposto sobre salario: %.2lf\n", impostoSalario);
    printf ( "Imposto sobre servicos: %.2lf\n", impostoServico);
    printf ( "Imposto sobre ganho de capital: %.2lf\n", impostoCapital);

    //DEDUCOES

    printf("\n\nDEDUCOES:\n");
    printf("Maximo dedutivel: %.2lf\n", maximoDedutivel);
    printf("Gastos dedutiveis: %.2lf\n", gastosDedutiveis);


    return 0;
}
