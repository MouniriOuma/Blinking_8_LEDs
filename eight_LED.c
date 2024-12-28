void main() {
    int i;
    TRISB = 0x00;  // Configurer le port B (RB0 à RB7) comme sortie
    PORTB = 0x00;  // Initialiser le port B à 0 (toutes les LEDs éteintes)

    while (1) {
        // Phase 1 : Allumer toutes les LEDs pendant 500 ms, puis les éteindre pendant 500 ms
        PORTB = 0xFF;
        Delay_ms(500);
        PORTB = 0x00;
        Delay_ms(500);
        
        // Phase 2 : Clignoter 4 LEDs en alternance avec les 4 autres
         for (i = 0; i < 10; i++) {
            PORTB = 0x55;
            Delay_ms(200);
            PORTB = 0xAA;
            Delay_ms(200);
        }
    }
}