var myName = "Muskan";
console.log(myName);//printing string

var greets = "hello";
console.log(greets + " there, " + myName + ".");//string concatenation

var myName = "Muskan";
console.log("Muskan has character length of " + myName.length); //length of string

//twitter character limit challenge

var tweet = "Write your tweet!!!";
console.log("You have written " + tweet.length + " characters " +  
"and now you have " + (140-(tweet.length)) + " number of characters left.");

//twitter charcacter enforcing

var tweet = "Compose your tweet, use some hastags for more reach, lots of love and backkkkkkkkkkkkkkkkkkkkkkkkk and love and love and love and love tiramisuuuuuuuuuuuuuuuuuuuuuuuuuuuu!!!!!!!!!!!!!!";
console.log(tweet.length);
console.log(tweet.slice(0,140));//to cut down the string

//to change case of string

console.log(myName.toUpperCase());

myName = myName.toLowerCase();
console.log(myName);

console.log("My name is " + myName.slice(0,1).toUpperCase() + myName.slice(1,myName.length) + ".");


