#include <LCD_I2C.h>
// Make sure the LCD_I2C library is installed

LCD_I2C lcd(0x27);
// Most I2C 1602 modules use the address 0x27, though it may not always be the case

void typewriterPrint(const char *text) {
  while (*text) {
    lcd.print(*text);
    text++;             
    delay(100);
  }
}

void setup() {
  lcd.begin();
  lcd.backlight();
  
  lcd.setCursor(0, 0);
  typewriterPrint("Your"); // Change this to your first line of text

  lcd.setCursor(0, 1);
  typewriterPrint("Text"); // Change this to your second line of text
}
