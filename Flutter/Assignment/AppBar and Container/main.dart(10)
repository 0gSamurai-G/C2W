import 'package:flutter/material.dart';

void main(){
  runApp(MyApp());
}

class MyApp extends StatelessWidget{
  const MyApp({super.key});

  @override
  Widget build(BuildContext context){
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text("Circle"),
          backgroundColor: Colors.cyanAccent,
          centerTitle: true,
        ),
        body: Center(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Container(
               height: 300,
               width:300,
               decoration: BoxDecoration(
                color: Colors.blueAccent,
                borderRadius: BorderRadius.all(Radius.circular(150)),
               ), 
               alignment: Alignment.center,
               child: Text("Hello Incubators",
               style: TextStyle(color: Colors.white,fontSize: 20)),
 
              )
            ]         
          ),
        )
        
        ),
      );
  }
}