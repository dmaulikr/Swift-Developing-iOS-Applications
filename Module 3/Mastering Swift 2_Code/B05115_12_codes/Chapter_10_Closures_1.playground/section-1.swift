// Playground - noun: a place where people can play

import UIKit

//Closure 1
let clos1 = {
    () in
    
    print("Hello World")
}

clos1()

//Closure 2
let clos2 = {
    (name: String) -> Void in
    
    print("Hello \(name)")
}

clos2("Jon")

func testClosure(handler:(String)->Void) {
    handler("Dasher")
}

testClosure(clos2)

//Closure 3
let clos3 = {
    (name: String) -> String in
    
    return "Hello \(name)"
}

print(clos3("Buddy"))

//Closure 4 - Short hand versions of closures
let clos4 = { print("Hello from Shorthand version")}

clos4()

func testFunction(num: Int, handler:()->Void) {
    for var i=0; i < num; i++ {
        handler()
    }
}


testFunction(5,handler: {print("Hello from Shorthand closure")})

func testFunction2(num: Int, handler:(name: String)->Void) {
    for var i=0; i < num; i++ {
        handler(name: "Me")
    }
}

testFunction2(5,handler: {print("Hello from \($0)")})



//Closure 5
let clos5: (String, String) ->Void = {
    print("\($0) \($1)")
}


clos5("Hello","Kara")

let clos6: () -> () = {
    print("Howdy")
}

clos6()




//Inner Functions
func counterFunc() ->(Int) ->() {
    var counter = 0
    func innerFunc(num: Int) {
        counter += num
        print("Total: \(counter)")
    }
    return innerFunc
}

var counter = counterFunc()
counter(4)
counter(6)
counter(8)


