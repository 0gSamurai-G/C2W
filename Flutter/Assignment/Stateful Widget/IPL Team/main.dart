import "package:flutter/material.dart";

void main(){
  runApp(MyApp());
}

class MyApp extends StatefulWidget{
  const MyApp({super.key});

@override
State<MyApp> createState() => _MyAppState();
}

class _MyAppState extends State<MyApp>{
  List<String> imageList = [
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/6.png",
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/54.png",
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/9.png",
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/66.png",
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/174.png",
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/743.png",
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/3567.png",
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/993.png",
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/3103.png",
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/3569.png",
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/3568.png"

  ];

  Map<int,String> obj = {0:"Rohit Sharma",1:"Hardik Pandya",2:"Jasprit Bumrah",3:"Trent Boult",
  4:"Suryakumar Yadav",5:"Ryan Rickelton",6:"Bevon Jacobs",7:"Tilak Varma",8:"Robin Minz",
  9:"Ashwani Kumar",10:"V. Satyanarayana Penmetsa"};

  int currentIndex = 0;

  @override
  Widget build(BuildContext context){
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text("MUMBAI INDIANS",style: TextStyle(fontSize: 20),),
          backgroundColor: const Color.fromARGB(255, 97, 143, 221),
          centerTitle: true,
        ),

        body: Center(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children:[
              Image.network(
                imageList[currentIndex],
                height: 300,
                width: 300,
              ),

              SizedBox(height: 20),

              Text("${obj[currentIndex]}",
              style: TextStyle(fontSize: 25),),

              SizedBox(height: 20),

              ElevatedButton(onPressed: (){

                if(currentIndex < imageList.length -1){
                  currentIndex++;
                }else{
                  currentIndex = 0;
                }
                setState(() {});
              }, 
              child: Text("Next",style: TextStyle(fontSize: 30),),
              )
            ]
          ))
      )
    );
  }
}