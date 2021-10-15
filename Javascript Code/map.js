console.log('this is map ')


// Defination of Map function
// In React, the map() function is most commonly used for rendering a list of data to the DOM.
// To use the map() function, attach it to an array you want to iterate over.
// The map() function expects a callback as the argument and executes it once for each element in the array.

// Map Fuction takes three arguments.

// 1: Current value
// 2: Current Index
// 3: Given Array

// arr.map(info())



// separate "info" function which is defined below as inline function

// const info = (val, index)=>{
//     console.log(index,"Your first name is", val.name)
//     console.log(index,"Your last name is" , val.Fname)
//     console.log(index,"Your class name is", val.class)
//     console.log(index,"Your Roll NO is", val.Rollno)
//     console.log(index,"Your School Name is", val.school)
// }





const arr= [
    {
        name : 'zahid',
        Fname : 'ghafoor',
        class : 'I.T',
        Rollno : '406',
        school : 'Pakistan'
    },
    {
        name : 'tata',
        Fname : 'saleem',
        class : 'Bsc',
        Rollno : '420',
        school : 'India'
    },
    {
        name : 'jin',
        Fname : 'rand',
        class : 'I.t',
        Rollno : '455',
        school : 'kasur'
    },
    {
        name : 'Junaid',
        Fname : 'Latif',
        class : 'I.T',
        Rollno : '500',
        school : 'Kaisar'
    },
    
]

// console.log(arr[0].name)
// console.log(arr[0].Fname)
// console.log(arr[0].class)
// console.log(arr[0].Rollno)
// console.log(arr[0].school)

console.log(arr.map(info=(val, index)=>{
    console.log(index,"Your first name is", val.name)
    console.log(index,"Your last name is" , val.Fname)
    console.log(index,"Your class name is", val.class)
    console.log(index,"Your Roll NO is", val.Rollno)
    console.log(index,"Your School Name is", val.school)

}))
