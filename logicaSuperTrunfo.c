int main (){

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int pontoturisticos, opcao1;
    unsigned long int populacao;
    float pib,area,percapita,densidade;
    char nome[100], codigo[100], estado[100];

    //variaveis da segunda carta

    int pontoturisticos2,opcao2;
    unsigned long int populacao2;
    float pib2,area2,percapita2,densidade2;
    char nome2[100], codigo2[100], estado2[100];

    //layout do menu do Jogo
    printf("-=-=-=-= BEN-VINDO AO SUPER TRUNFO PAISES -=-=-=-=\n\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Selecione uma opção:\n");
    printf("1. INICIAR JOGO.\n");
    printf("2. INFORMAÇÕES SOBRE O JOGO.\n");
    printf("3. SAIR DO JOGO.\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    //entrada da escola do usuario
    printf("OPÇÃO: ");
    scanf("%d", &opcao1);

        switch (opcao1)
        {
        case 1:
             // Cadastro das Cartas:
            // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
            // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
            printf ("\nCarta 1:\n");

            printf("\nDigite o estado: ");
            scanf("%s", &estado);

            printf ("Digite o codigo da carta: ");
            scanf("%s", &codigo);

            printf ("Digite o nome da cidade: ");
            scanf("%s", &nome);

            printf ("Digite o numero da populaçao: ");
            scanf (" %d", &populacao);

            printf ("digite a area: ");
            scanf(" %f", &area);

            printf ("Digite o PIB: ");
            scanf ("%f", &pib);

            printf ("Digite o numero de prontos turisticos: ");
             scanf ("%d", &pontoturisticos);

            densidade = (float) populacao / area;
            percapita = (float) pib / populacao;

            int superpoder,superpoder2;

            superpoder = (float) populacao + area + pib + pontoturisticos + percapita + densidade ;
            superpoder2 = (float) populacao2 + area2 + pib2 + pontoturisticos2 + percapita2 + densidade2;



            //cadastro da segunda carta

            printf ("\n\nCarta 2:");

            printf("\nDigite o estado: ");
            scanf("%s", &estado2);

            printf ("Digite o codigo da carta: ");
            scanf("%s", &codigo2);

            printf ("Digite o nome da cidade: ");
            scanf("%s", &nome2);

            printf ("Digite o numero da populaçao: ");
            scanf (" %d", &populacao2);

            printf ("digite a area: ");
            scanf(" %f", &area2);

            printf ("Digite o PIB: ");
            scanf ("%f", &pib2);

            printf ("Digite o numero de prontos turisticos: ");
            scanf ("%d", &pontoturisticos2);

            densidade2 = (float) populacao2 / area2;
            percapita2 = (float) pib2 / populacao2;

            // Exibição dos Dados das Cartas:
            // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
            // Exiba os valores inseridos para cada atributo da cidade, um por linha.
            // ao adicionar ".2" a uma variavel do tipo float, indica quantas linhas depois da virgula vai ser exibido

                printf ("\nCarta 1: \nEstado:%s\nNome da cidade: %s \nCodigo %s",estado, nome, codigo);
                printf ("\n Area da cidade: %.2f KM² \nPIB; %.2f",area, pib);
                printf ("\n Numero da população: %d \npontos turisticos: %d\n", populacao, pontoturisticos);
                printf("Densidade Populacional:%.2f\n",densidade);
                printf("PIB per Capita:%.2f reais\n",percapita);
                printf("Super Poder: %f\n\n",superpoder);

            //exibiçao dos dados da segunda carta

                printf ("\nCarta 2: \nestado:%s\nNome da cidade: %s \nCodigo %s",estado2, nome2, codigo2);
                printf ("\n Area da cidade: %.2f KM² \nPIB; %.2f",area2, pib2);
                printf ("\n Numero da população: %d \npontos turisticos: %d\n", populacao2, pontoturisticos2);
                printf("Densidade Populacional:%.2f\n",densidade2);
                printf("PIB per Capita:%.2f reais\n",percapita2);
                printf("Super Poder: %f\n\n",superpoder2);

            // layout de escolha de cartas a ser comparada
                printf("#### HORA DE LUTAS!! ####\n");
                printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("Selecione uma propriedade para a luta.\n");
                printf("1. População.\n");
                printf("2. Area\n");
                printf("3. PIB.\n");
                printf("4. Numero de pontos turisticos.\n");
                printf("5. Densidade demográfica.\n");
                printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

                printf("Opção: ");
                scanf("%d", &opcao2);


                switch (opcao2)
                {
                case 1://Comparar População
                    printf("Carta 1: %s\nCidade: %s\n",estado,nome);
                    printf("Carta 2: %s\nCidade: %s\n\n", estado2,nome2);
                        if (populacao == populacao2)
                        {
                            printf("carta 1: População %d - ",populacao);
                            printf("Carta 2: População: %d\n", populacao2);
                            printf("EMPATOU!!!!");

                        }
                        else if (populacao > populacao2)
                        {
                            printf("carta 1: População %d - ",populacao);
                            printf("Carta 2: População: %d\n", populacao2);
                            printf("Carta 1 VENCEU !!!");
                        }
                        else{
                            printf("carta 1: População %d - ",populacao);
                            printf("Carta 2: População: %d\n", populacao2);
                            printf("Carta 2 VENCEU !!!!");
                        }
                    break;

                case 2://Comparar Area
                    printf("Carta 1: %s\nCidade: %s\n",estado,nome);
                    printf("Carta 2: %s\nCidade: %s\n\n", estado2,nome2);
                        if (area == area2)
                        {
                            printf("carta 1: Area %2.f - ",area);
                            printf("Carta 2: Area %2.f\n", area2);
                            printf("EMPATOU!!!!");

                        }
                        else if (area > area2)
                        {
                            printf("carta 1: Area %2.f - ",area);
                            printf("Carta 2: Area %2.f\n", area2);
                            printf("Carta 1 VENCEU !!!");
                        }
                        else{
                            printf("carta 1: Area %2.f - ",area);                            
                            printf("Carta 2: Area %2.f\n", area2);
                            printf("Carta 2 VENCEU !!!!");
                        }
                    break;

                case 3://Comparar PIB
                    printf("Carta 1: %s\nCidade: %s\n",estado,nome);
                    printf("Carta 2: %s\nCidade: %s\n\n", estado2,nome2);
                        if (pib == pib2)
                        {
                            printf("carta 1: PIB %2.f - ",pib);
                            printf("Carta 2: PIB %2.f\n", pib2);
                            printf("EMPATOU!!!!");

                        }
                        else if (pib > pib2)
                        {
                            printf("carta 1: PIB %2.f - ",pib);
                            printf("Carta 2: PIB %2.f\n", pib2);
                            printf("Carta 1 VENCEU !!!");
                        }
                        else{
                            printf("carta 1: PIB %2.f - ",pib);
                            printf("Carta 2: PIB %2.f\n", pib2);
                            printf("Carta 2 VENCEU !!!!");
                        }
                    break;

                case 4://Comparar Número de pontos turísticos
                    printf("Carta 1: %s\nCidade: %s\n",estado,nome);
                    printf("Carta 2: %s\nCidade: %s\n\n", estado2,nome2);
                        if (pontoturisticos == pontoturisticos2)
                        {
                            printf("carta 1: Número de pontos turísticos %d - ",pontoturisticos);
                            printf("Carta 2: Número de pontos turísticos %d\n", pontoturisticos2);
                            printf("EMPATOU!!!!\n");

                        }
                        else if (pontoturisticos > pontoturisticos2)
                        {
                            printf("carta 1: Número de pontos turísticos %d - ",pontoturisticos);
                            printf("Carta 2: Número de pontos turísticos %d\n", pontoturisticos2);
                            printf("Carta 1 VENCEU !!!\n");
                        }
                        else{
                            printf("carta 1: Número de pontos turísticos %d - ",pontoturisticos);
                            printf("Carta 2: Número de pontos turísticos %d\n", pontoturisticos2);
                            printf("Carta 2 VENCEU !!!!\n");
                        }
                    break;

                case 5://Densidade demográfica
                    printf("Carta 1: %s\nCidade: %s\n",estado,nome);
                    printf("Carta 2: %s\nCidade: %s\n\n", estado2,nome2);
                        if (densidade == densidade2)
                        {
                            printf("carta 1: Densidade demográfica %2.f - ",densidade);
                            printf("Carta 2: Densidade demográfica %2.f\n", densidade2);
                            printf("EMPATOU!!!!");

                        }
                        else if (densidade > densidade2)
                        {
                            printf("carta 1: Densidade demográfica %2.f - ",densidade);
                            printf("Carta 2: Densidade demográfica %2.f\n", densidade2);
                            printf("Carta 2 VENCEU !!!");
                        }
                        else{
                            printf("carta 1: Densidade demográfica %2.f - ",densidade);
                            printf("Carta 2: Densidade demográfica %2.f\n", densidade2);
                            printf("Carta 1 VENCEU !!!!");
                        }
                    break;    

                default:
                    printf("Opção invalida.\n");
                    break;
                }

            break;

        case 2://informaçoes sobre o Jogo.
            printf("Bem-vindo ao desafio 'Super Trunfo - Países'!\n No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar a mais forte. \nO tema deste Super Trunfo é 'Países,' onde você comparará as propriedades das cidades.\n");
            printf("Criar cartas representando cidades, contendo as seguintes propriedades:\n- **População**\n- **Área**\n- **PIB**\n- **Número de pontos turísticos**\n");
            printf("O sistema Tambem calculará automaticamente a Densidade Populacional e o PIB per Capita com base nos dados inseridos.\n- Essas novas propriedades serão adicionadas às informações exibidas para cada cidade\n");
            printf("Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n\n");
            break;

        case 3:// opçao de sair do jogo
            printf("Saindo do Jogo...");
            break;        

        default:// para caso o usuario use uma opçao nao existente
            printf("Voce selecionou uma opção invalida.");
            break;
        }



    return 0;
}