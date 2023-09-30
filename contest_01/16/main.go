package main
import "fmt"

func main(){
    var n int;
    fmt.Scan(&n);
    var line []float64 = make([]float64, n);
    for i:=1; i<=n;i++{
        fmt.Scan(&line[i-1])
    }
    new_line := make([]float64,0,n);
    new_line = append(new_line, line[0])
    for i:=1;i<n-1;i++{
        new_line = append(new_line, (line[i-1]+line[i]+line[i+1])/3);
    }
    new_line = append(new_line, line[n-1])
    for j:=0; j<n;j++{
        fmt.Print(new_line[j]," ")
    }
}
