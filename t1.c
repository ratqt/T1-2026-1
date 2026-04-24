// --- Requisitos Funcionais
/* Desenvolva um programa em linguagem C, seguindo o padrão ANSI, que apresente um menu
 * para resolver equações do 1º e do 2º grau. O programa deve exibir detalhadamente todos os
 * passos dos cálculos, como se fossem realizados manualmente no papel. O código-fonte deve
 * ser bem estruturado e amplamente comentado, facilitando o entendimento da lógica
 * implementada. Durante a correção, serão utilizadas quatro equações - duas do 1º grau e
 * duas do 2º grau - para testar e validar o funcionamento do programa. Tente implementar o
 * máximo de recursos que você aprendeu na disciplina de Álgebra Linear */

/* Este trabalho tem como objetivo integrar os conhecimentos das disciplinas de Algoritmos e
 * Álgebra Linear, mostrando na prática como conceitos matemáticos podem ser
 * implementados em programação */

/* Incluir uma opção chamada “Sobre o Programa” – onde vocês vão colocar o nome dos
 * alunos que desenvolveram o sistema. */

#include <stdio.h>
#include <math.h>

void equacaoPG(){
	double a = 0, b;
	printf("\nForma da equação:\nax + b = 0\n");
	while (a == 0){	//quando a for 0, repetir a pergunta.
		printf("Digite o valor de a:\n> ");
		scanf("%lf", &a);
		if (a == 0){
			printf("valor de a não pode ser 0.\n");
		}
	}
	printf("Digite o valor de b:\n> ");
	scanf("%lf", &b);


	printf("\nEquação inicial: ");

	
	//Inserindo os valores de a e b na fórmula inicial.

	if (a < 0 && b < 0)
		printf("- %.2lf * x - %.2lf ", -a, -b);
	else if (a < 0 && b > 0)
		printf("- %.2lf * x + %.2lf ", -a, b);
	else if (a > 0 && b < 0)
		printf("%.2lf * x - %.2lf ", a, -b);
	else if (a > 0 && b > 0)
		printf("%.2lf * x + %.2lf ", a, b);

	printf("= 0\n");

	printf("\n Passos:\n");
	if (a > 0 && b > 0){ //ax + b = 0
		printf("\t1) Subtrair ambos os lados por %.2lf: %.2lf * x + %.2lf - %.2lf = - %.2lf\n", b, a, b, b, b);
		printf("\t\t Após simplificá-la, a equação fica: %.2lf * x = - %.2lf\n", a, b);
		printf("\t2) Dividir ambos os lados por %.2lf: ( %.2lf * x ) / %.2lf = - %.2lf / %.2lf\n", a, a, a, b, a);
		printf("\t\t Após simplificá-la, a equação fica: x = - %.2lf / %.2lf\n", b, a);
		printf("\t3) Agora basta apenas calcular a divisão, e o resultado fica\n");
		printf("\t\t x = - %.2lf\n", b / a);
	}else if (a < 0 && b > 0){ // - ax + b = 0
		printf("\t1) Subtrair ambos os lados por %.2lf: - %.2lf * x + %.2lf - %.2lf = - %.2lf\n", b, -a, b, b, b);
		printf("\t\t Após simplificá-la, a equação fica: - %.2lf * x = - %.2lf\n", -a, b);
		printf("\t2) Dividir ambos os lados por - %.2lf: ( - %.2lf * x ) / - %.2lf = - %.2lf / ( - %.2lf )\n", -a, -a, -a, b, -a);
		printf("\t\t Após simplificá-la, a equação fica: x = - %.2lf / ( - %.2lf )\n", b, -a);
		printf("\t3) Agora basta apenas calcular a divisão, e o resultado fica\n");
		printf("\t\t x = %.2lf\n", b / -a);
	}else if (a < 0 && b < 0){ // -ax - b = 0
		printf("\t1) Somar ambos os lados por %.2lf: - %.2lf * x - %.2lf + %.2lf = %.2lf\n", -b, -a, -b, -b, -b);
		printf("\t\t Após simplificá-la, a equação fica: - %.2lf * x = %.2lf\n", -a, -b);
		printf("\t2) Dividir ambos os lados por - %.2lf: ( - %.2lf * x ) / - %.2lf = %.2lf / ( - %.2lf )\n", -a, -a, -a, b, -a);
		printf("\t\t Após simplificá-la, a equação fica: x = %.2lf / ( - %.2lf )\n", b, -a);
		printf("\t3) Agora basta apenas calcular a divisão, e o resultado fica\n");
		printf("\t\t x = - %.2lf\n", b / -a);
	}else if (a > 0 && b < 0){ // ax - b = 0
		printf("\t1) Somar ambos os lados por %.2lf: %.2lf * x - %.2lf + %.2lf = %.2lf\n", -b, a, -b, -b, -b);
		printf("\t\t Após simplificá-la, a equação fica: %.2lf * x = %.2lf\n", a, -b);
		printf("\t2) Dividir ambos os lados por %.2lf: ( %.2lf * x ) / %.2lf = %.2lf / ( %.2lf )\n", -a, -a, -a, b, -a);
		printf("\t\t Após simplificá-la, a equação fica: x = %.2lf / %.2lf\n", b, a);
		printf("\t3) Agora basta apenas calcular a divisão, e o resultado fica\n");
		printf("\t\t x = %.2lf\n", b / a);
	}else if (a > 0 && b == 0){ // ax = 0
		printf("\t1) Dividir ambos os lados por %.2lf: ( %.2lf * x ) / %.2lf = 0 / %.2lf\n", a, a, a, a);
		printf("\t\t A forma mais simplificada da equação fica: x = 0 / %.2lf\n", a);
	}else if (a < 0 && b == 0){ // - ax = 0
		printf("\t1) Dividir ambos os lados por - %.2lf: ( - %.2lf * x ) / ( - %.2lf ) = 0 / ( - %.2lf )\n", -a, -a, -a, -a);
		printf("\t\t A forma mais simplificada da equação fica: x = 0 / ( - %.2lf )\n", -a);
	}
}

void equacaoSG(){
	double a = 0, b, c;
	printf("\nForma da equação:\nax² + bx + c = 0\n");
	while (a == 0){
		printf("Digite o valor de a:\n> ");
		scanf("%lf", &a);
		if (a == 0){
			printf("valor de a não pode ser 0.\n");
		}
	}
	printf("Digite o valor de b:\n> ");
	scanf("%lf", &b);
	printf("Digite o valor de c:\n> ");
	scanf("%lf", &c);


	printf("\nEquação inicial: ( ");

	//Para imprimir a equação inicial desta vez eu fiz as partes separadas. Se fizesse como na equação de primeiro grau, seriam necessários mais if.
	//Por exemplo, a forma que fiz, (a > 0), (a < 0), (b > 0), (b < 0), (c > 0), e (c < 0), ficou com apenas 6 testes.
	//Se fosse feito um teste para cada possibilidade, seriam necessários 8: (a > 0 && b > 0 && c > 0), (a > 0 && b > 0 && c < 0), (a > 0 && b < 0 && c > 0), (a > 0 && b < 0 && c < 0), (a < 0 && b > 0 && c > 0), (a < 0 && b > 0 && c < 0), (a < 0 && b < 0 && c > 0), e (a < 0 && b < 0 && c < 0)

	if (a < 0)
		printf("- %.2lf * x )² ", -a);
	else if (a > 0)
		printf("%.2lf * x )² ", a);

	if (b < 0)
		printf("- %.2lf * x ", -b);
	else if (b > 0)
		printf("+ %.2lf * x ", b);

	if (c < 0)
		printf("- %.2lf ", -c);
	else if (c > 0)
		printf("+ %.2lf ", c);

	printf("= 0");

	printf("\n Passos:\n");

	printf("\t1) Inserir os valores na fórmula de Bhaskara:\n"); // Daqui em frente segue a mesma lógica do comentário anterior. Usei comentários aqui para ajudar a não me perder quando estava digitando.

	printf("\t\tx = ( "); // x = (

	if (b >= 0) // x = ( - b +- √( b² - 4 * 
		printf("- %.2lf +- √( %.2lf² - 4 * ", b, b);
	else
		printf("%.2lf +- √( ( - %.2lf )² - 4 * ", -b, -b);
	
	if (a > 0) {// x = ( - b +- √( b² - 4 * a * 
		printf("%.2lf * ", a);
		if (c >= 0) // x = ( - b +- √( b² - 4 * a * c ) ) / 2 * 
			printf("%.2lf ) ) / 2 * ", c);
		else
			printf("- %.2lf ) ) / 2 * ", -c);
		printf("%.2lf", a);
	}else{
		printf("- %.2lf * ", -a);
		if (c >= 0) // x = ( - b +- √( b² - 4 * a * c ) ) / 2 * 
			printf("%.2lf ) ) / 2 * ", c);
		else
			printf("- %.2lf ) ) / 2 * ", -c);
		printf("- %.2lf", -a);
	}

	printf("\n\t2) Primeiro iremos descobrir o valor de delta. Logo, o separamos do resto da equação:\n");

	printf("\t\tDelta é o valor que está dentro da raíz quadrada; Δ = "); 
	
	//b² - 4 * a * c

	if (b >= 0)
		printf("%.2lf² - 4 * ", b);
	else
		printf("( - %.2lf )² - 4 * ", b);

	if (a > 0)
		printf("%.2lf * ", a);
	else
		printf("- %.2lf * ", -a);

	if (c > 0)
		printf("%.2lf", c);
	else
		printf("- %.2lf", -c);

	
	printf("\n\t3) Agora calculamos a potência e a multiplicação:\n");
	printf("\t\t(%.2lf)² = %.2lf\n", b, b*b);
	printf("\t\t-4 * %.2lf * %.2lf = %.2lf\n", a, c, -4 * a * c);
        double delta = b*b - 4 * a * c;
	if (-4 * a * c >= 0)
		printf("\t\t%.2lf + %.2lf = %.2lf", b*b, -4 * a * c, delta);
	else
		printf("\t\t%.2lf - %.2lf = %.2lf", b*b, +4 * a * c, delta);
	
	if (delta < 0){
		printf("\n\t\tΔ é menor que zero. Logo, é impossivel encontrar suas raízes, e o valor final de x não pertence aos números reais.\n");
		return;
	}

	printf("\n\t4) Agora podemos inserir o valor de delta na equação final:\n");
	printf("\t\tx = ( "); // (-b +- √Δ) / (2 * a)

	if (b >= 0)
		printf("- %.2lf +- √%.2lf ) / 2 * ", b, delta);
	else
		printf("%.2lf +- √%.2lf ) / 2 * ", -b, delta);

	if (a > 0)
		printf("%.2lf", a);
	else
		printf("- %.2lf", -a);

	printf("\n\t5) Agora podemos fazer os cálculos para x', onde a raíz de delta é positiva:\n");
	printf("\t\tComeçamos calculando a raíz de delta, e somando-a com - b: \n\t\t");

	delta = sqrt(delta); //Decidi usar a variável chamada delta como a raíz de delta, para simplificar o uso da mesma daqui em frente.
        
	double x1 = (-b + delta) / (2*a);
        double x2 = (-b - delta) / (2*a);

	if (b >= 0)
		printf("- %.2lf + %.2lf", b, delta);
	else
		printf("%.2lf + %.2lf", -b, delta);

	printf(" = %.2lf", -b + delta);


	printf("\n\t\tAgora temos a equação:\n\t\tx' = ");
	
	if (-b + delta >= 0)
		printf("%.2lf / 2 * ", -b + delta);
	else
		printf("- %.2lf / 2 * ", -(-b + delta));
	
	if (a > 0)
		printf("%.2lf", a);
	else
		printf("- %.2lf", -a);

	printf("\n\t\tPodemos multiplicar o lado inferior da fração, conseguindo a equação:\n\t\tx' = ");

	if (-b + delta >= 0)
		printf("%.2lf / %.2lf ", -b + delta, 2 * a);
	else
		printf("- %.2lf / %.2lf ", -(-b + delta), 2 * a);


	printf("\n\t\tCom isso, temos x' = %.2lf\n", x1);



	printf("\t6) Agora podemos fazer os cálculos novamente para encontrar x\":\n");

	printf("\t\tComeçamos com a raíz de delta, e subtraindo-a de - b: \n\t\t");

	if (b >= 0)
		printf("- %.2lf - %.2lf", b, delta);
	else
		printf("%.2lf - %.2lf", -b, delta);
	
	printf(" = %.2lf", -b - delta);

	printf("\n\t\tAgora temos a equação:\n\t\t x\" = ");
	
	if (-b - delta >= 0)
		printf("%.2lf / 2 * ", -b - delta);
	else
		printf("- %.2lf / 2 * ", -(-b - delta));
	
	if (a > 0)
		printf("%.2lf", a);
	else
		printf("- %.2lf", -a);

	printf("\n\t\tPodemos multiplicar o lado inferior da fração, conseguindo a equação:\n\t\tx\" = ");

	if (-b - delta >= 0)
		printf("%.2lf / %.2lf ", -b - delta, 2 * a);
	else
		printf("- %.2lf / %.2lf ", -(-b - delta), 2 * a);

	printf("\n\t\tCom isso, temos x\" = %.2lf\n", x2);



	

}

void info(){
	printf("\nT1-2026-1: Feito por Roger Alan Torquato");
}

int main(){
	int opt = 1;
	while (opt >= 1 && opt <= 3){
		opt = 1;
		printf("\n\n||-> Bem vindo ao T1-2026-1 <=||\n");
		printf("Selecione uma opção:\n");
		printf("\t1: Resolver equação de primeiro grau\n");
		printf("\t2: Resolver equação de segundo grau\n");
		printf("\t3: Informações sobre o programa\n");
		printf("\t0: Sair\n");
		printf("> ");
		scanf("%d", &opt);
		
		switch(opt){
			case 1:
				equacaoPG();
				break;
			case 2:
				equacaoSG();
				break;
			case 3:
				info();
				break;
		}

	}
	return 0;
}
