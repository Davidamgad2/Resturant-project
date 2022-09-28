#include<iostream>
#include<string>
using namespace std;

struct address {
	string city;
	int sn; //streat number
};

struct Food {
	long id;
	string name;
	float ap; //avarage price
};

struct rest {
	long id1;
	string name1;
	int pn; //phone number
	address adr; //adress
	string df; //day off
	Food f; //food 
};

//definition of restrunts//r --> restruant variable
rest define(rest r[10]) {
	for (int i = 0; i < 10; i++) {
		cout << "\nid of restaurant:";
		cin >> r[i].id1;
		cout << "\nname of restaurant:";
		getline(cin, r[i].name1);
		getline(cin, r[i].name1);
		cout << "\nphone number of restaurant:";
		cin >> r[i].pn;
		cout << "\ncity:";
		cin >> r[i].adr.city;
		cout << "\nstreet number:";
		cin >> r[i].adr.sn;
		cout << "\ndayoff of restaurant:";
		getline(cin, r[i].df);
		cout << "\nid of food:";
		cin >> r[i].f.id;
		cout << "\nfood  type name:";
		getline(cin, r[i].f.name);
		getline(cin, r[i].f.name);
		cout << "\navarage price:";
		cin >> r[i].f.ap;
	}
	return r[10];
}

//printing 
int print(rest r[10]) {
	for (int i = 0; i < 10; i++) {
		cout << "id of restaurant:" << r[i].id1 << endl;
		cout << "name of restaurant:" << r[i].name1 << endl;
		cout << "phone number of restaurant:" << r[i].pn << endl;
		cout << "city:" << r[i].adr.city << endl;
		cout << "street number:" << r[i].adr.sn << endl;
		cout << "dayoff of restaurant:" << r[i].df << endl;
		cout << "id of food:" << r[i].f.id << endl;
		cout << "food  type name:" << r[i].f.name << endl;
		cout << "avarage price:" << r[i].f.ap << endl;
	}
	return 0;
}

//searching for food
int s_f(string x, rest r[10]) {
	int flag = 0;
	for (int i = 0; i < 10; i++) {
		if (r[i].f.name == x) {
			cout << "found in " << r[i].name1 << endl;;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << x << " not found in any places" << endl;
	return 0;
}

//searching for resturant in place
int s_r(string y, rest r[10]) {
	int flag = 0;
	for (int i = 0; i < 10; i++) {
		if (r[i].adr.city == y) {
			cout << "found calls  " << r[i].name1 << endl;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "there is not resturant in cairo" << endl;
	return 0;
}

//searchinf for price +500
int s_p(rest r[10]) {
	int flag = 0;
	for (int i = 0; i < 10; i++) {
		if (r[i].f.ap > 500) {
			cout << "found calls  " << r[i].f.name << "in" << r[i].name1;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "there is no food type greater than 500 " << endl;
	return 0;
}

//search for working sunday 
int s_o(rest r[10]) {
	int flag = 0;
	for (int i = 0; i < 10; i++) {
		if (r[i].df != "sunday" && r[i].df != "Sunday") {
			cout << "found calls  " << r[i].name1 << endl;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "no one works on sunday" << endl;;
	return 0;

}

//search with id for restraunt
int s_i(rest r[10], long v) {
	int flag = 0;
	for (int i = 0; i < 10; i++) {
		if (r[i].id1 == v) {
			cout << "found restraunt calls  " << r[i].name1 << endl;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "there is no resturant with this id:" << v << endl;;
	return 0;

}

//search with id for food type
int s_i2(rest r[10], long v) {
	int flag = 0;
	for (int i = 0; i < 10; i++) {
		if (r[i].f.id == v) {
			cout << "found food type calls  " << r[i].f.name << endl;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "there is no food type with this id:" << v << endl;;
	return 0;

}