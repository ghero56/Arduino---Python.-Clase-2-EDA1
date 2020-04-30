// Variables
int boton=0;
int Nivel=4; // 4 cambios al presionar el boton

void setup(){
    // Pin de entrada
    pinMode(8, INPUT);
    // Pines de salida
    pinMode(7, OUTPUT);
    pinMode(4, OUTPUT);
}

void loop(){
    boton=digitalRead(8); // se lee el estado del pin 8 (boton)

    if(boton==HIGH){
        Nivel--; // cada que cambia el estado cambia el valor a imprimir
        delay(300); // delay para que el cambio no sea instantaneo
        if(Nivel<1){ // cuando el valor llega a 0
            Nivel=4; // se regresa a 4
        }
    }

    if(Nivel==4){ // modo 1
        digitalWrite(4,LOW); // apagado
        digitalWrite(7,HIGH); // encendido
        delay(20);
    }
    else if(Nivel==3){ // modo 2
        digitalWrite(4,HIGH); // prendido
        digitalWrite(7,LOW); // apagado
        delay(20);
    }
    else if(Nivel==2){ // modo 3
        digitalWrite(4,HIGH); // prendido
        digitalWrite(7,HIGH); // prendido
        delay(20);
    }
    else if(Nivel==1){ // modo 4
        digitalWrite(4,LOW); // apagado
        digitalWrite(7,LOW); // apagado
        delay(20);
    }
}
