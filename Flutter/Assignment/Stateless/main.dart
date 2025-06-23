import 'package:flutter/material.dart';

void main(){
  runApp(MyApp());
}

class MyApp extends StatelessWidget{
  Widget build(BuildContext context){
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text("IPL"),
          backgroundColor: Colors.blueAccent,
          centerTitle: true,
        ),
        body: Center(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Container(height: 200,
              width: 200,
              child: Image.network("https://documents.iplt20.com/ipl/IPLHeadshot2025/6.png",
              
              ),
              ),
              const SizedBox(height: 30),
              const Text("Rohit Sharma",style: TextStyle(fontSize: 30),),
            ],
          ),
        ),
      )
    );
  }
}