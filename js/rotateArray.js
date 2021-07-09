function rotate(array,n){
    let temp = array[n-1];
    for(let i =n-1;i>=0;i--){
        array[i]=array[i-1];
    }
    array[0]=temp;
    console.log(array);
};
let arr = [1,2,3,4,5,6];
let len = arr.length;
rotate(arr,len);