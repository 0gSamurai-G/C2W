import "Dart:io";
void main(){
	print("Enter a number:");
	int? x=int.parse(stdin.readLineSync()!);
	List num=[];
	for(int i=0;i<x;i++){
		int? element=int.parse(stdin.readLineSync()!);
		num.add(element);
	}
	for(int i=x-1;i>=0;i--){
		print(num[i]);
	}
}
