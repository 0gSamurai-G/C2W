import "Dart:io";
void main(){
	int? x;
	print("Enter a number:");
	x=int.parse(stdin.readLineSync()!);
	if(x<90){
		print("No charges");
	}else if(x<180){
		print("${6*x}");
	}else if(x<250){
		print("${10*x}");
	}else{
		print("${15*x}");
	}
}
