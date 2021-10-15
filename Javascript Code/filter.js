console.log("This is our filter file")


const restuarents=[
    {
        name: "driver",
        openTime: "8",
    },
    {
        name: "Farooq",
        openTime: "9",
    },
    {
        name: "Shafiq",
        openTime: "7",
    },
    {
        name: "payara bhi",
        openTime: "11",
    }
]


// The filter() method creates an array filled with all array alements that pass by provided function & it take some condition to create new array
// It does not change the orignal array


// array.filter(function(currentValue, index, arr), thisValue)

const arr =[2,3,4,-5,8,-2,5]

const filtered = arr.filter(number=>{
    return number>=0
})



console.log(filtered)


const openRes= restuarents.filter((val,arr)=>{
    return(
        val.openTime>=8
    )
    })

console.log(openRes)