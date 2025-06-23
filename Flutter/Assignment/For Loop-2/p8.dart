import "Dart:io";
void main(){
	print("Enter a number:");
	int? x=int.parse(stdin.readLineSync()!);
	List num=[];
	int sum=0;
	for(int i=0;i<x;i++){
		int? element=int.parse(stdin.readLineSync()!);
		num.add(element);
		sum+=element;
	}
	print("Average: ${sum/x}");
}
