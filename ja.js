
function one(){
    
    two();
    console.log('one');
}

function two(){
   
    three();
    console.log('two');
}

function three(){
   
    four();
    console.log('three');
}

function four(){
   
    five();
    console.log('four');
}

function five(){
    console.log('five');
}

one();
