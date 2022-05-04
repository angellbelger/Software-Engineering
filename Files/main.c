#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");

    int option, vote, vote_two;
    int vote_joao, vote_maria, vote_ze, vote_gomes, vote_zureta;
    vote_joao = vote_maria = vote_ze = vote_gomes = vote_zureta = 0;

    do
    {
        printf("\n\n---------- Voting ----------\n\n");
        printf("\n1 - To vote\n2 - Counting of votes\n3 - Exit\n");
        printf("\nOption: ");
        scanf("%i", &option);
        printf("\n\n----------------------------\n\n");

        switch (option)
        {
            case 1:
                printf("\nTo city councilor.\n");
                printf("\n111 - Joao do Frete\n222 - Maria da Pamonha\n333 - Ze da Farmacia\n444 - Para anular\n");
                printf("\nVote: ");
                scanf("%i", &vote);
                switch (vote)
                {
                    case 111:
                        vote_joao++;
                        break;
                    case 222:
                        vote_maria++;
                        break;
                    case 333:
                        vote_ze++;
                        break;
                    case 444:
                        printf("\nVote void.\n");
                        break;
                    default:
                        printf("\nInvalid vote.\n");
                        break;
                }
                printf("\nTo Mayor.\n");
                printf("\n11 - Dr. Zureta\n22 - Mr. Gomes\n44 - Para anular\n");
                printf("\nVote: ");
                scanf("%i", &vote_two);
                if ( vote_two == 11 )
                {
                    vote_zureta++;
                    break;
                }
                if ( vote_two == 22 )
                {
                    vote_gomes++;
                    break;
                }
                if ( vote_two == 44 )
                {
                    printf("\nVote void.\n");
                    break;
                }
                else
                {
                    printf("\nInvalid vote.\n");
                    break;
                }
            case 2:
                printf("\n\n---------- Resulte ----------\n\n");
                printf("To city councilor.\n");
                printf("\nJoao do Frete: %i\nMaria da Pamonha: %i\nZe da Farmacia: %i\n", vote_joao, vote_maria, vote_ze);
                printf("\n-----------------------------\n");
                printf("\nTo Mayor.\n");
                printf("\nDr. Zureta: %i\nMr. Gomes: %i\n", vote_zureta, vote_gomes);
                break;
            case 3:
                printf("\nExiting...\n");
                break;
            
            default:
                printf("\nInvalid Option");
                break;
        }
    }
    while ( option != 3 );

    return 0;
}