#include <iostream>
#include <string>

using namespace std;

void Add(int data, long long table[][2]);
void Query(int data, long long table[][2]);
void Print(long long table[][2]);

int m;

int main(int argc, char **argv) {
	//declaration
	cin >> m;
	long long table[m][2];

	//initialization
	for (int i = 0; i < m; ++i) {
		table[i][0] = 0;
		/*table[i][0] for a flag*/
		/*table[i][1] for data*/
	}

	while(1){
		string op;
		cin >> op;
		if(op == "Add"){
			int data;
			cin >> data;
			Add(data, table);
		}
		else if(op == "Query"){
			int data;
			cin >> data;
			Query(data, table);
		}
		else if(op == "Print"){
			Print(table);
		}
		else if(op == "End"){
			break;
		}
	}

//	//request handling
//	string op;
//	int data;
//	do{
//		cin >> op;
//		if (op == "Add") {
//			cin >> data;
//			Add(data, table);
//		}
//		else if (op == "Query") {
//			cin >> data;
//			Query(data, table);
//		}
//		else if (op == "Print") {
//			Print(table);
//		}
//	}while(op != "End");

	return 0;
}

void Add(int data, long long table[][2]){

	int key;
	int d;
	int i = 1;
	key = data;
	d = data % m;

	while(1)
	{
		if(table[d][0] != 0)
		{
			d=(key+(i*i))%m;
			i++;
		}
		else
		{
			table[d][0] = 1;
			table[d][1] = data;
			break;
		}
	}


//	//declaration
//	int start, pos;
////	start = (key % m + m) % m;
//	start = key % m;
//	pos = start;
//
////	//find position
////	for(int i = 1; table[pos][0] != 0; i ++){
////		pos = (start + i * i) % m;
////	}
//
////	//find position Version 2
////	int i = 0;
////	while(table[pos][0] != 0){
////		pos = (start + i * i) % m;
////		i ++;
////	}
//
//	//change flag and data
//	table[pos][0] = 1;
//	table[pos][1] = key;
}

void Query(int data, long long table[][2]){
	int flag = 0;
	for(int i=0;i<m;i++)
	{
		if(table[i][1] == data)
		{
			flag=1;
			break;
		}
	}

	if(flag==0)	{
		cout<<"no"<<endl;
	}
	else if(flag==1) {
		cout<<"yes"<<endl;
	}

//	//linear search!
//	for(int i = 0; i < m; i ++){
//		if(table[i][1] == data){
//			cout << "yes" << endl;
//			break;
//		}
//
//		if(i == m - 1){
//			cout << "no" << endl;
//			break;
//		}
//	}
}

void Print(long long table[][2]){
	for(int i=0;i<m;i++)
	{
		if(table[i][0] != 0)
		{
			cout<<i<<"#"<<table[i][1]<<endl;
		}
		else if(table[i][0] == 0)
		{
			cout<<i<<"#"<<"NULL"<<endl;
		}
	}
//	for (int i = 0; i < m; ++i) {
//		if(table[i][0] != 0)
//			cout << i << '#' << table[i][1] << endl;
//		else
//			cout << i << '#' << "NULL" << endl;
//	}
}
