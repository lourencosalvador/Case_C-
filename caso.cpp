#include <iostream>
using namespace std;

int main{
    float hora_dia, salario_liquido,salario_bruto, descontos, hora_mes, desconto_ins, desconto_ftgs, desconto_ir;
    cout<<"Digite o número de horas trabalhados por dia: ";
    cin>>salario_hora_dia;
    hora_mes = salario_hora_dia * 5 * 4;
    salario_bruto = hora_dia * hora_mes;
    cout<<"De acordo a hora diaria, vc trabalha "<<hora_mes<<" horas pro mês. E o seu salario bruto é "<<salario_bruto;
    desconto_ir = salario_bruto * 0.05;
    desconto_ins = salario_bruto * 0.10;
    desconto_ftgs = salario_bruto * 0.11;
    descontos = desconto_ins + desconto_ir;
    salario_liquido = salario_bruto - descontos;
    cout<<"O salrio com desconto INS é "<<desconto_ins<<"$"<<endl;
    cout<<"O salario com desconto IR é "<<desconto_ir<<"$"<<endl;
    cout<<"O salario com o total de descontos é "<<descontos<<"$"<<endl;
    cout<<"O salari0 liquido é "<<salario_liquido<<"$"<<endl; 

    return 0;
    
} 