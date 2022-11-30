#include <wiringPi.h>               // Biblioteca para pinagem
#include <lcd.h>                    // Biblioteca para manipular o LCD
#include <stdio.h>        

// Configuração da pinagem do LCD usando WiringPi

#define LCD_RS  13               //Registrador de seleção PIN
#define LCD_E   18               //Enable PIN
#define LCD_D4  21               //DADO PIN D4
#define LCD_D5  24               //DADO PIN D5
#define LCD_D6  26               //DADO PIN D6
#define LCD_D7  27               //DADO PIN D7

// Cofiguração dos 3 botões 
#define BUTTON_1 19 // Usado pra avançar
#define BUTTON_2 23 // Usado pra voltar
#define BUTTON_3 25 // Usado como clique/seleconar 
