import "Dart:io";
void main(){
	
	stdout.write("Enter a number: ");
	int? x=int.parse(stdin.readLineSync()!);
	int esum=0;
	int osum=0;
	for(int i=1;i<=x;i++){
		if(i%2==0){
			esum+=i;
		}else{
			osum+=i;
		}
	}

	print("even sum: $esum");
	print("odd sum: $osum");
}
