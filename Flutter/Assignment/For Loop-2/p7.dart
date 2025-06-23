import "Dart:io";
void main(){
	print("Enter a number:");
	int? x=int.parse(stdin.readLineSync()!);
	List num=[];
	for(int i=0;i<x;i++){
		int? element=int.parse(stdin.readLineSync()!);
		num.add(element);
	}
	int count=0;
	for(int i=0;i<x;i++){
		if(num[i]>50){
			count++;
		}	
	}
	print("Count of numbers > 50: $count");
}
