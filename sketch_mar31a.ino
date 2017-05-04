// each pin corresponds to an LED color:

int led0 = 12;

int led1 = 11;

int led2 = 10;



//declare internal variableschro

int brightness = 300000;

int red = 0;

int blue = 0;

int green = 0;



// this routine runs each time you hit the reset button

void setup() {                

  // declare the relevant pins to be output

  pinMode(led0, OUTPUT);    

  pinMode(led1, OUTPUT);    

  pinMode(led2, OUTPUT);     

}



// this routine loops indefinitely

void loop() {
  
  //Change the structure of this code when you get the time
  
  float x, y, z = 0;

    for (x=0;x<45; x = x + 0.0000001){
  
      red = brightness * abs(sin(x));
      for (y=0;y<45;y = y + 0.0000001) {
        blue = brightness * abs(sin(y));
        for (z=0;z<45;z = z + 0.0000001) {
          green = brightness * abs(sin(z));
          setValues();
        }
        for (z=45; z>=0; z = z - 0.0000001) {
          green = brightness * abs(sin(z));
          setValues();
        }

    }
    for (y=45;y>=0;y = y - 0.0000001) {
        blue = brightness * abs(sin(y));
        for (z=0;z<45;z = z + 0.0000001) {
          green = brightness * abs(sin(z));
          setValues();
        }
        for (z=45; z>=0; z = z - 0.0000001) {
          green = brightness * abs(sin(z));
          setValues();
        }

    }
}
for (x=45;x>=0; x = x-0.0000001){
  
      red = brightness * abs(sin(x));
      for (y=0;y<45;y = y + 0.0000001) {
        blue = brightness * abs(sin(y));
        for (z=0;z<45;z = z + 0.0000001) {
          green = brightness * abs(sin(z));
          setValues();
        }
        for (z=45; z>=0; z = z - 0.0000001) {
          green = brightness * abs(sin(z));
          setValues();
        }

    }
    for (y=45;y>=0;y = y - 0.0000001) {
        blue = brightness * abs(sin(y));
        for (z=0;z<45;z = z + 0.0000001) {
          green = brightness * abs(sin(z));
          setValues();
        }
        for (z=45; z>=0; z = z - 0.0000001) {
          green = brightness * abs(sin(z));
          setValues();
        }

    }
}
}

void setValues() {
  analogWrite(led0, blue);   // send the value to the LED

  analogWrite(led1, red);   // send the value to the LED 

  analogWrite(led2, green);   // send the value to the LED
}





