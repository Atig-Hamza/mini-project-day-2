#include <stdio.h>
#include <string.h>

char T1[100][100], T2[100][100];
int T3[100];
int T4[100];
int totaldelivre = 0;


    void ajoutercontact(){
        printf("Entre Nom: ");
        scanf("%[^\n]", &T1[totaldelivre]);
        while(getchar() != '\n');
        printf("Adresse e-mail: ");
        scanf("%[^\n]", &T2[totaldelivre]);
        while(getchar() != '\n');
        printf("Numero de telephone: +212/");
        scanf("%d", &T3[totaldelivre]);
        printf("les info ont enregistrait avec seccess\n");
        

        totaldelivre++;
    }



    void affichcontact(){
        if (totaldelivre == 0) {
        printf("Auccun Contact a etait enrigistrait\n");
    } else {
        printf("\ncontact disponibles :\n");
        for (int i = 0; i < totaldelivre; i++) {
            printf("Nom: %s\nNumero de telephone: +212%d\nAdresse e-mail:  %s\n",
                   T1[i], T3[i], T2[i]);
        }
    }
    }



    void recherch(){
        char titreRecherche[100];
        printf("Entrez le Nom du contact a rechercher: ");
        fgets(titreRecherche, sizeof(titreRecherche), stdin);
        titreRecherche[strcspn(titreRecherche, "\n")] = '\0';

        for (int i = 0; i < totaldelivre; i++) {
            if (strcmp(T1[i], titreRecherche) == 0) {
                printf("Nom: %s\nNumero de telephone: +212%d\nAdresse e-mail:  %s\n",T1[i], T3[i], T2[i]);
            return;
        }
    }
    printf("Contact Non trouver.\n");
    }



    void suppcontact() {
    char titreSuppression[100];
    printf("Entrez le nome du contact a supprimer: ");
    fgets(titreSuppression, sizeof(titreSuppression), stdin);
    titreSuppression[strcspn(titreSuppression, "\n")] = '\0';

    for (int i = 0; i < totaldelivre; i++) {
        if (strcmp(T1[i], titreSuppression) == 0) {
            for (int j = i; j < totaldelivre - 1; j++) {
                strcpy(T1[j], T1[j + 1]);
                strcpy(T2[j], T2[j + 1]);
                T3[j] = T3[j + 1];
                T4[j] = T4[j + 1];
            }
            totaldelivre--;
            printf("contact supprime avec succes.\n");
            return;
        }
    }
    printf("contact non trouve.\n");
}


    void modifieNom(){
        char titreMiseAJour[100];
        printf("Entrez le contact pour la modifie: ");
        fgets(titreMiseAJour, sizeof(titreMiseAJour), stdin);
        titreMiseAJour[strcspn(titreMiseAJour, "\n")] = '\0';

        for (int i = 0; i < totaldelivre; i++) {
            if (strcmp(T1[i], titreMiseAJour) == 0) {
                printf("Entrez le neuvaux nom: ");
                scanf("%d", &T1[i]);
                getchar();
                printf("la modification effectue avec succes.\n");
                return;
        }
    }
    printf("contact non trouve.\n");
    }

    void modifieNtele(){
        char titreMiseAJour[100];
        printf("Entrez le contact pour la modifie: ");
        fgets(titreMiseAJour, sizeof(titreMiseAJour), stdin);
        titreMiseAJour[strcspn(titreMiseAJour, "\n")] = '\0';

        for (int i = 0; i < totaldelivre; i++) {
            if (strcmp(T1[i], titreMiseAJour) == 0) {
                printf("Entrez le neuvaux numero de telephone: +212/");
                scanf("%d", &T3[i]);
                getchar();
                printf("la modification effectue avec succes.\n");
                return;
        }
    }
    printf("contact non trouve.\n");
    }


    void modifieemail(){
        char titreMiseAJour[100];
        printf("Entrez le contact pour la modifie: ");
        fgets(titreMiseAJour, sizeof(titreMiseAJour), stdin);
        titreMiseAJour[strcspn(titreMiseAJour, "\n")] = '\0';

        for (int i = 0; i < totaldelivre; i++) {
            if (strcmp(T1[i], titreMiseAJour) == 0) {
                printf("Entrez le neuvaux e-mail: ");
                scanf("%d", &T2[i]);
                getchar();
                printf("la modification effectue avec succes.\n");
                return;
        }
    }
    printf("contact non trouve.\n");
    }


    void choixMod(){
        int choi;
    
    while (1) {
        printf("1. Modifie le nom\n");
        printf("2. Moditie le N de tele\n");
        printf("3. modifie e-mail\n");
        printf("4. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choi);
        getchar();
        
        switch (choi) {
            case 1:
                modifieNom();
                break;
            case 2:
                modifieNtele();
                break;
            case 3:
                modifieemail();
                break;
            case 4:
                main();
            default:
                printf("Choix invalide veuillez reessayer.\n");
        }
    }

    }





int main() {
    int choice;
    
    while (1) {
        printf("\t\t\t\t\tSystème de Gestion de Contacts\n");
        printf("1. Ajouter un Contact\n");
        printf("2. Afficher Tous les Contacts\n");
        printf("3. Rechercher un Contact\n");
        printf("4. Modifier un Contact\n");
        printf("5. Supprimer un Contact\n");
        printf("6. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choice);
        getchar();
        
        switch (choice) {
            case 1:
                ajoutercontact();
                break;
            case 2:
                affichcontact();
                break;
            case 3:
                recherch();
                break;
            case 4:
                choixMod();
                break;
            case 5:
                suppcontact();
                break;
            case 6:
                return 0;
            default:
                printf("Choix invalide veuillez reessayer.\n");
        }
    }
    
    return 0;
}
