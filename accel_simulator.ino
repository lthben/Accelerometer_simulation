const int UPDATE_RATE = 1000;
float x_val, y_val;

long prev_tick;

void setup() {
        
        Serial.begin(9600);
        
}

void loop() {
        
        if (millis() - prev_tick > UPDATE_RATE) {
                 generate_data_pair(); 
                   prev_tick = millis();      
        }

}

void generate_data_pair() {
        
         x_val += random(-10.0,10.0);
         y_val += random(-10.0,10.0);
   
           Serial.println("a string");
//            Serial.print(",");
//             Serial.print(y_val);
//              Serial.println();       
}
