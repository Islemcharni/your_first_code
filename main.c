
 int main() {
    
    char *jours[] = {
        "lundi",
        "Mardi",
        "mercredi",
        "jeudi",
        "vendredi",
        "samedi",
        "dimanche"
    };
    for (int i = 0; i < 7; i++) {
        printf("Day %d: %s\n", i+1, jours[i]);
    }

    return 0;
}
