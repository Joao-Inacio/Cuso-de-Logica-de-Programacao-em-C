// 7. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. 
// As condições para aposentadoria são:
// • Ter pelo menos 65 anos;
// • Ou ter trabalhado pelo menos 30 anos ;
// • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
#include <stdio.h>


int main(){
    int idade, tempo_servico;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digita o tempo de servico: ");
    scanf("%d", &tempo_servico);

    if (idade >= 65 || tempo_servico >= 30){
        printf("Com a idade de %d anos ou com o tempo de servico de %d anos voce pode se aposentar", idade, tempo_servico);
    }
    else{
        if (idade >= 60 && tempo_servico >= 25)
        {
            printf("Com a idade de %d anos ou com o tempo de servico de %d anos voce pode se aposentar", idade, tempo_servico);
        }
        else{
            printf(
                "Com a idade de %d anos ou com o tempo de servico de %d anos "
                "voce pode nao pode se aposentar"
                , idade, tempo_servico
            );
        }
        
    }
    

}
