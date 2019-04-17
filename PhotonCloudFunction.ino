int ledg = D7;
int ledga = D1;
int ledr = D6;

int ledtoggle(String command)
{
    if (command == "red")
    {
        digitalWrite(ledr,HIGH);
        digitalWrite(ledg,LOW);
        digitalWrite(ledga,LOW);
        
        return 1;
        
    }
    else if ( command == "green") 
    {
        digitalWrite(ledg,HIGH);
        digitalWrite(ledr,LOW);
        digitalWrite(ledga,LOW);
        
        return 1;
        
    }
    else if (command == "blue")
    {
        digitalWrite(ledga,HIGH);
        digitalWrite(ledr,LOW);
        digitalWrite(ledg,LOW);
        
        return 1;
    }
    else if (command == "all")
    {
        digitalWrite(ledr,HIGH);
        digitalWrite(ledg,HIGH);
        digitalWrite(ledga,HIGH);
        return 1;
        
    }
    else
    {
        digitalWrite(ledr,LOW);
        digitalWrite(ledg,LOW);
        digitalWrite(ledga,LOW);
        return 0;
        
    }
    



    
}

void setup() {
    
    pinMode(ledr,OUTPUT);
    pinMode(ledg,OUTPUT);
    pinMode(ledga,OUTPUT);
    
    Particle.function("led",ledtoggle);
    
    
    digitalWrite(ledr,LOW);
    digitalWrite(ledg,LOW);
    digitalWrite(ledga,LOW);
    

}

void loop() {

}
