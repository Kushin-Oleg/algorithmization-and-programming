package main
import (
    "fmt"
    "math"
    )

func main(){
    var oxig_man float64 = 0.5
    oxig_man *= 365
    var topol float64 = 32 
    topol = oxig_man / topol
    var dub float64 = 20
    dub = oxig_man / dub 
    fmt.Println(oxig_man, "",math.Round(topol),"", math.Ceil(dub))
}
