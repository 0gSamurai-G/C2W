import "Dart:io";
void main(){
	print("Enter a number:");
	int? x=int.parse(stdin.readLineSync()!);
	int fact=1;
	for(int i=2;i<=x;i++){
		fact*=i;
	}
	print("Factorial of $x: $fact");
}
