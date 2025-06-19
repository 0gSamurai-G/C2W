import "Dart:io";
void main(){
	String str;
	print("Enter a character:");
	str=stdin.readLineSync()!;
	if(str=="A" || str=="E" || str=="I" || str=="O" || str=="U"){
	
		print("$str is a vowel");
	}else{
		print("$str is a consonant");
	}
}
