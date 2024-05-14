// projeto pessoal para treinar
#include <iostream>
using namespace std;

int main()
{
	int velocidade;
	cout << "Bem vindo ao programa de velocidade.\n";
	cout << "Informe uma velocidade: ";
	cin >> velocidade;

	if (velocidade < 50)
	{
		cout << "Velocidade baixa.\n";
	}

	if (velocidade == 50)
	{
		cout << "Velocidade segura.\n";
	}

	if (velocidade > 50)
	{
		cout << "Alta velocidade ! Acima do valor permitido.\n";
	}
	else
	{
		cout << "Valor informado incorreto...\n";
		cout << "Nossos computadors nao conseguiram fazer a leitura. Encerrando o programa.\n";
	}

	system("pause");
	return 0;
}