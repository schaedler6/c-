#include <iostream>
using namespace std;

int main() {
    int opcao;
    double num1, num2;

    do {
        // Exibe o menu
        cout << "=== Calculadora ===" << endl;
        cout << "1. Adição" << endl;
        cout << "2. Subtração" << endl;
        cout << "3. Multiplicação" << endl;
        cout << "4. Divisão" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        // Verifica se a opção escolhida é para sair
        if (opcao == 5) {
            cout << "Saindo da calculadora." << endl;
            break;
        }

        // Solicita os números ao usuário
        cout << "Digite o primeiro número: ";
        cin >> num1;
        cout << "Digite o segundo número: ";
        cin >> num2;

        // Executa a operação escolhida
        switch (opcao) {
            case 1:
                cout << "Resultado: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Resultado: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Resultado: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Resultado: " << num1 / num2 << endl;
                } else {
                    cout << "Erro: Divisão por zero!" << endl;
                }
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }

        cout << endl; // Linha em branco para melhor legibilidade

    } while (true); // Loop infinito até que o usuário escolha sair

    return 0;
}