import 'package:flutter/material.dart';

void main(){
  runApp(MyApp());
}

class MyApp extends StatelessWidget{

  const MyApp({super.key});

  @override
  Widget build(BuildContext context){

    return MaterialApp(
      home:Scaffold(
        appBar: AppBar(
          title:const Text("First App"),
          backgroundColor: Colors.blue,
          centerTitle: true,
        ),
        body:Center(
          child:Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Text("Hello Flutter",style: TextStyle(fontSize: 30),)
            ],
          )
        )

      )
    );
  }
}