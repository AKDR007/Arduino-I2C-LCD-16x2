#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C dis =  LiquidCrystal_I2C(0x27, 16, 2);


void setup(){
    
   dis.init();
   dis.backlight();
    
}
void loop(){
    
    dis.setCursor(1,0);
    dis.print("Hello");
    delay(1000);
    dis.clear();
    dis.setCursor(2,1);
    dis.print("Riyazur Rahman");
    delay(1000);
    dis.clear();
    
    }