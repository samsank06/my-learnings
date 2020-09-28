//splice method on array

var nums=[1,2,3,4,5,6,7,8];
console.log("size of array nums before splice",nums.length);
console.log(nums.splice(1,2));
console.log("size of array nums before splice",nums.length);

nums.forEach(function(elements,index){
    console.log(elements);
});

/*
.splice() takes three parameters: the beginning index, the size of things to be
removed, and the new elements to add. New elements are added at the position
specified by the first parameter. It returns the removed elements.
*/
console.log("nums2");
var nums2 =Array.from(nums);
nums2.splice(4);

nums2.forEach(function(elements,index){
    console.log(elements);
});

console.log("nums2 after removing from 1 to 2 and adding new elements");
nums2.splice(1,2,2,3,4,5);
nums2.forEach(function(elements,index){
    console.log(elements);
});



//concat arrays
console.log("concat function");
var elems=[1,2,3,4,5];
elems.concat([2,3,4]);

for(var i in elems)
    console.log(elems[i]);

console.log("after concat");
console.log(elems.concat([10,20,30]));

//length function

console.log("length of elems ="+elems.length);
elems.length=4;
console.log("assigned new length by elems.length=4");
console.log("length of elems ="+elems.length);

for(var i in elems)
    console.log(elems[i]);

console.log("after again concat ",elems.concat([100,200,300]));