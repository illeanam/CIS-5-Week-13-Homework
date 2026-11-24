#include <iostream>
#include <string>

// Practice 13 · Part 2 — Illeana Martinez
// CIS 5 Week 13 · The struct your final needs

// TODO: rename this struct and its fields to fit your track.
struct Account {
	std::string name;
	double balance;
};

void printAccount(const Account& a) {
	// TODO: print every field on one line, then "\n"
	std::cout << a.name << " " << a.balance << "\n";
}

int main() {
	// TODO: make two records with braces, then print both with your helper
	Account account1{ "Ada", 50.25 };
	Account account2{ "Ben", 120.5 };

	printAccount(account1);
	printAccount(account2);


	return 0;
}