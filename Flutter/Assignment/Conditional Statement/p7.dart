import "Dart:io";
void main(){
	int? x;
	print("Enter a number:");
	x=int.parse(stdin.readLineSync()!);
	if(x==1){
		print("january has 31 days");
	}else if(x==2){
		print("February has 28 or 29 days");
	}else if(x==3){
		print("March has 31 days");
	}else if(x==4){
		print("April has 30 days");
	}else if(x==5){
		print("May has 31 days");
	}else if (x==6){
		print("june has 30 days");
	}else if(x==7){
		print("july has 31 days");
	}else if(x==8){
		print("August has 31 days");
	}else if(x==9){
		print("september has 30 days");
	}else if(x==10){
		print("October has 31 days");
	}else if(x==11){
		print("November has 30 days");
	}else if(x==12){
		print("December has 31 days");
	}else{
		print("invaid number");
	}
}
