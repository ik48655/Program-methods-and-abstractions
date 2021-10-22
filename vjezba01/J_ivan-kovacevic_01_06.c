#include <stdio.h>
int main(void)
{
    int kune,pet,dvije,jedna;
    printf("Unesite iznos u kunama: ");
    scanf("%d",&kune);
    pet=kune/5;
    dvije=(kune%5)/2;
    jedna=dvije%2;
    printf("U kovanicama je: %d kovanica od pet kuna, %d kovanica od 2 kune i %d kovanica od 1 kune",pet,dvije,jedna);
    return 0;
}
