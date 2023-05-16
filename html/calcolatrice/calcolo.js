


function calcolaRisultato(){

    var n1 = parseInt(document.getElementById("n1").value);
    var n2 = parseInt(document.getElementById("n2").value);
    var risultato = 0;
    
    var op = 0

    var radios = document.getElementsByName('operazione_scelta');




    for (var i = 0, length = radios.length; i < length; i++) {
        if (radios[i].checked) {
            // do whatever you want with the checked radio
            
            op = i
            // only one radio can be logically checked, don't check the rest
            break;
        }
    }
    

    if(op === 0){
        risultato = n1 + n2;
    }
    else if(op === 1){
        risultato = n1 - n2;
    }
    else if(op === 2){
        risultato = n1 * n2;
    }
    else if(op === 3 && n2!=0){
        risultato = n1 / n2;
    }


    document.getElementById("risultato").value = risultato;


}