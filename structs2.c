#include <stdio.h>
#include <string.h>

struct DataPedido{
	int dia;
	int mes;
	int ano;
};

struct ItemsPedidos{
	int codigoProduto;
	char nome[50];
	int qtd;
	float valor;
};

struct Pedido{
	int codigo;
	struct DataPedido umaDataPedido;
	float valorTotal;
	struct ItemsPedidos osItemsPedidos;
};

main(){
	struct Pedido umPedido;
	printf("Digite o codigo do pedido: ");
	scanf("%d", &umPedido.codigo);
	printf("\nDigite a data do pedido: ");
	printf("\nDia: ");
	scanf("%d", &umPedido.umaDataPedido.dia);
	printf("Mes: ");
	scanf("%d", &umPedido.umaDataPedido.mes);
	printf("Ano: ");
	scanf("%d", &umPedido.umaDataPedido.ano);
	printf("\nDigite o codigo do produto: ");
	scanf("%d", &umPedido.osItemsPedidos.codigoProduto);
	fflush(stdin);
	printf("\nDigite o nome do produto: ");
	gets(umPedido.osItemsPedidos.nome);
	fflush(stdin);
	printf("\nDigite a quantidade do produto: ");
	scanf("%d", &umPedido.osItemsPedidos.qtd);
	printf("\nDigite o valor do produto: ");
	scanf("%f", &umPedido.osItemsPedidos.valor);
	float res;
	
	res = umPedido.osItemsPedidos.qtd * umPedido.osItemsPedidos.valor;
	
	printf("\nCodigo do Pedido: %d", umPedido.codigo);
	printf("\nData do Pedido: %d/%d/%d", umPedido.umaDataPedido.dia, umPedido.umaDataPedido.mes, umPedido.umaDataPedido.ano);
	printf("\nCodigo do Produto: %d", umPedido.osItemsPedidos.codigoProduto);
	printf("\nNome do Produto: ");
	puts(umPedido.osItemsPedidos.nome);
	printf("\nQuantidade: %d", umPedido.osItemsPedidos.qtd);
	printf("\nValor do Produto: %.2f", umPedido.osItemsPedidos.valor);
	printf("\nValor Total: %.2f", res);
}
