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
  bool isVirat = true;
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
              SizedBox(
                height: 250,
                width: 250,
                child:
                isVirat ? Image.network("https://documents.iplt20.com/ipl/IPLHeadshot2025/6.png") : Image.network("https://documents.iplt20.com/ipl/IPLHeadshot2025/2.png"),
              ),
              SizedBox(height: 20),
              ElevatedButton(onPressed:(){
                if (isVirat == true){
                  isVirat=false;
                }else{
                  isVirat=true;
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
