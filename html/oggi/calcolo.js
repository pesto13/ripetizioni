


function contaCifre(){

    var n = parseInt(document.getElementById("numero").value);

    var cont = 0;

    if(n==0){
        cont = 1;
    }

    while(n!=0){
        n = parseInt(n/10);
        cont++;
    }


    document.getElementById("risultato").value = cont;

}