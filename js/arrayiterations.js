const array=[1,2,3,4,5,6];

console.log("method-1: using- foreach")
const result1= array.forEach(function(item,index){
    console.log(item,index);
});

console.log("method-2: using- map")
const double= array.map(function(item){
    console.log(item*2);
    return item*2;
});

console.log(double);


console.log("method-3: using- filter")
const nums = array.filter(function(item){
    return item%2===0;
}) 
console.log(nums);

console.log("printing array");
for(let i=0;i<array.length;i++)
{
    console.log(array[i]);
}

console.log("method-4: using- reduce")
const sum=array.reduce(function(result,item){
    return result+item;
},10);

console.log("sum="+ sum);

console.log("method-5: using- some")
const hasNegative = array.some(function(item){
    return item<0;
});

console.log(hasNegative);

console.log("method-6: using- every")

const ever= array.every(function(item){
    return item>0;
})
console.log(ever);

console.log("method-7: using- find");

const objects=[{id:'a'},{id:'b'},{id:'c'},{id:'d'},{id:'e'}];

const test = objects.find(function(item){
    return item.id==='b';
})
console.log(test);

console.log("method-8: using- find-index")

const test1= objects.findIndex(function(item){
    return item.id==='c';
});

console.log(test1);