import "Dart:io";
void main(){
	int? x;
	print("Enter a number");
	x=int.parse(stdin.readLineSync()!);
	if(x%3==0 && x%5==0){
		print("Divisible by both 3 and 5");
	}else if(x%3==0){
		print("Divisible by 3");
	}else if(x%5==0){
		print("Divisible by 5");
	}else{
		print("Not divisible by both 3 and 5");
	}
}
