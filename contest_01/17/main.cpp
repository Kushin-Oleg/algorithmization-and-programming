package main
import (
	"fmt"
	"math"
)

func main(){
	var n int;
	var a float64;
	fmt.Scan(&n);
	ostrow := make([]float64, n);
	for i:=0; i<n; i++{
		fmt.Scan(&a);
		ostrow[i] = a;	
	}
	var left, right int = 0, len(ostrow)-1
	var max_left, max_right = ostrow[left], ostrow[right];
	var water float64 = 0;
	for left<right{
		if max_left>=max_right{
			water+=max_right-ostrow[right];
			right--;
			max_right=math.Max(max_right, ostrow[right]);
		} else {
			water+=max_left-ostrow[left];
			left++;
			max_left=math.Max(max_left, ostrow[left]);
		}
	}
	fmt.Print(int64(water))
}
