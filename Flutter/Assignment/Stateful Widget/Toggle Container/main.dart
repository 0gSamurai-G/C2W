import 'package:flutter/material.dart';

void main() {
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

  bool isBlue = true;
  @override

  Widget build(BuildContext context){
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text("Toggle App"),
          centerTitle: true,
          backgroundColor: Colors.blueAccent,
        ),
        body:Center(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Container(
                height: 250,
                width: 250,
                color: isBlue ? Colors.blueAccent : Colors.redAccent,
              ),
              SizedBox(height: 20),
              ElevatedButton(onPressed:(){
                if (isBlue == true){
                  isBlue=false;
                }else{
                  isBlue=true;
                }
                setState(() {});
              },
               child: Text("Toggle",style: TextStyle(fontSize: 20),))
            ],
          )
        )
      )
    );
  }
}
