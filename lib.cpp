//
// Created by Enrico Muller on 29/11/2021.
//

char funzione (char a){
    if (a >= 97 && a <= 122 || a >= 65 && a <= 90){ //lettera
        return 0;
    }else{
        return 1;
    }
}

char convertitore (char a){
    char risultato;
    if (a >= 97 && a <= 122){ //minuscola
        //diventa maiuscola
        risultato = (a - 32);
    }else { //maiuscola
        //diventa minuscola
       risultato = (a + 32) ;
    }
    return risultato;
}
