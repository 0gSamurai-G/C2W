import "Dart:io";
void main(){
	int? age;
	print("Enter the age:");
	age=int.parse(stdin.readLineSync()!);
	if(age>=18){
		print("you can cast a vote");
	}else{
		print("you cannot cast a vote");
	}
}
