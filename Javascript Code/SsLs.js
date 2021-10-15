console.log('hlo')

const arr = ['mango', 'banana', 'watermaloom']

localStorage.setItem('name', 'zahid')
localStorage.setItem('name2', 'ghafoor')
localStorage.setItem('fruit', JSON.stringify(arr))




let na = localStorage.getItem('name')

na = JSON.parse(localStorage.getItem('fruit'))

console.log(na)
