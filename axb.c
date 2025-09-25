Conversation opened. 5 messages. 1 message unread.

Skip to content
Using Gmail with screen readers
Conversations
0% of 15 GB used
Terms · Privacy · Program Policies
Last account activity: 0 minutes ago
Open in 2 other locations · Details
#include <stdio.h>
int main() {
    int A, B;
    printf("Entrez la valeur de A : ");
    scanf("%d", &A);
    printf("Entrez la valeur de B : ");
    scanf("%d", &B);
    if ((A > 0 && B > 0) || (A < 0 && B < 0)) {
        if (A < 0) A = -A;
        if (B < 0) B = -B;
        int produit = 0;
        for (int i = 0; i < B; i++) {
            for (int j = 0; j < A; j++) {
                produit += 1;
            }
        }
        printf("Le produit de A × B est : %d\n", produit);
    } else {
        printf("Erreur : le produit AB doit être strictement positif (AB > 0).\n");
    }
    return 0;
}
programme a_b 3.c
Displaying programme a_b 3.c.