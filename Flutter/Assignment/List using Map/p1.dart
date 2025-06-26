import "Dart:io";
void main(){
	print("Enter the size of the list:");
	int? size=int.parse(stdin.readLineSync()!);
	List num=[];
	for(int i=0;i<size;i++){
		int? x=int.parse(stdin.readLineSync()!);
		num.add(x);
	}
	print("Enter an index to search:");
	int? index=int.parse(stdin.readLineSync()!);
	if(index >=0 && index<num.length ){

		print("${num[index]} is present at index $index");
		num.removeAt(index);
		print("Element removed");
	}else{
		print("index out of bound");
	}
}
