console.log("1st defination");

// The reduce() method reduces the array to a single value.
// The reduce() method executes a provided function( reducer fuction) for each value of the array
// The return value of the function is stored in an accumulator (result/total).

// for example
// var arr= [1,2,34,5,56,6]
// single value like sum , average or muliplication of this array
// so we use reduce method

// Reducer Fuction takes four arguments.

// 1: Accumulator
// 2: Current value
// 3: Current Index
// 4: Given Array

var arr = [5, 5,4,5,5,6,7];
let len = arr.length

let sum = arr.reduce((accum, curVal) => {
   return accum + curVal;

});


let average = arr.reduce((accum, curval , array)=>{

  let total = accum + curval

  return(total/len)

})

console.log("The sum of given array is",sum);

console.log("The Average = ",average)
