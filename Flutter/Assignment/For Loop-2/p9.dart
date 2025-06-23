import "Dart:io";
void main(){
	print("Enter a number:");
	int? x=int.parse(stdin.readLineSync()!);
	List num=[];
	for(int i=0;i<x;i++){
		int? element=int.parse(stdin.readLineSync()!);
		num.add(element);
	}

	print("Enter a number to search:");
	int? search=int.parse(stdin.readLineSync()!);
	int flag=0;
	for(int i=0;i<x;i++){
		if(search==num[i]){
			flag=1;	
		}
	}
	if(flag==1){
		print("$search exists in the list");
	}else{
		print("$search does not exixt in the list");
	}
}
