import "package:flutter/material.dart";

void main(){
  runApp(MyApp());
}

class MyApp extends StatefulWidget{
  const MyApp({super.key});
  
  @override
  State createState(){
    return MyAppState();
  }
}

class MyAppState extends State{
  int currentIndex = 1;
  int number = 2;

  List<int> tableList = [];
  @override
  Widget build(BuildContext context){
    return MaterialApp(
      home: Scaffold(
        body: Center(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Text("Table: $tableList",
              style: TextStyle(fontSize: 20),
              ),
              SizedBox(height: 30,),
              ElevatedButton(onPressed: (){
                int nextNumber = number * currentIndex;
                tableList.add(nextNumber);
                currentIndex++;
                setState((){});
              }, child: Text("Add"))
            ],
          ),
        ),
      ),
    );
  }
}


