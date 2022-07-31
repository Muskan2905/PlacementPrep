//declaring and defining a function
function noOfDaysInWeek(){
    return 7;
}

//calling a function
console.log("Number of days in week = " + noOfDaysInWeek());



//parametic function

function noOfBottlesToBuy(cash){
    var noOfBottles = parseInt(cash/1.5);
    return "received " + noOfBottles + " bottles of milk for " + cash + " dollars.";
}

console.log("Robot got the cash and " + noOfBottlesToBuy(5));


//output giving or return type function

//bmi calc
//height in m and wt in kg
function calculateBmi(weight,height){
    return "BMI of weight " + weight + " and " + height + " is " + Math.round(weight/Math.pow(height,2));
}

console.log(calculateBmi(55,1.2));
