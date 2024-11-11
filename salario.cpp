#include <iostream>
using namespace std;
int main(){
    const float IRS = 0.15;
    const float SS = 0.11;
    float horasTrabalhadas, salarioBruto;
    const float VHora = 6.0;
    cout << "Quantas horas trabalhadas: ";
    cin >> horasTrabalhadas;
    salarioBruto = VHora*horasTrabalhadas;
    cout << "Salario bruto: " << salarioBruto << endl;
    cout << "----------------------------------------" << endl;
    cout << "IRS: " << salarioBruto*IRS << endl;
    cout << "SS: " << salarioBruto*SS << endl;
    cout << "----------------------------------------" << endl;
    float IRSSalario = salarioBruto*IRS;
    float SSSalario = salarioBruto*SS;
    cout << "Salario final " << salarioBruto-(IRSSalario+SSSalario) << endl;
    
    return 0;
}