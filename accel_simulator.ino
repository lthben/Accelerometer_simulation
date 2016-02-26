const int UPDATE_RATE = 100;
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

  x_val += random(-10.0, 10.0);
  y_val += random(-10.0, 10.0);

  x_val = constrain(x_val, -90.0, 90.0);
  y_val = constrain(y_val, -90.0, 90.0);

  Serial.print(x_val);
  Serial.print(",");
  Serial.print(y_val);
  Serial.println();
}



