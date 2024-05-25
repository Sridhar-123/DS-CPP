
// let arr =[3,457,5,2,6,43,90]
function mergeSort(arr){
    // base case
      if(arr.length <=1){ return arr;}
      

      let mid = Math.floor(arr.length / 2);
      let left = mergeSort(arr.slice(0,mid));
      let right = mergeSort(arr.slice(mid));
    
      return merge(left,right);
      
    }
    function merge(left,right){
      let sortedArr = [];
      while(left.length && right.length){
        if(left[0]<right[0]){
          sortedArr.push(left.shift());
        }
        else{
          sortedArr.push(right.shift());
        }
      }
    
    
      return [...sortedArr,...left,...right]
    }
    
    console.log(mergeSort([8, 3, 5, 4, 7, 6, 1, 2]));