import "Dart:io";
void main(){
	print("Enter a number:");
	int? x=int.parse(stdin.readLineSync()!);
	List num1=[];
	List num2=[];
	print("List1");
	for(int i=0;i<x;i++){
		int? element1=int.parse(stdin.readLineSync()!);
		num1.add(element1);
	}
	print("List2");
	for(int i=0;i<x;i++){
		int? element2=int.parse(stdin.readLineSync()!);
		num2.add(element2);
	}
	for(int i=0;i<x;i++){
		print(num1[i]+num2[i]);
	}
}
