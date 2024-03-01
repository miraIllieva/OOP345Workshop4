// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
// Name    Dragomira Veleva        Date  02-19-2024        ID 184787216

#ifndef SENECA_TOY_H
#define SENECA_TOY_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include <utility>

namespace seneca {

	class Toy {
		unsigned int OrderId{ 0 };
		std::string Toy_Name{};
		double Toy_Price{ 0 };
		int itemHST{ 13 };

	public:
		size_t count{ 0 };
		Toy();
		Toy(const std::string& toy);
		void update(int numItems);
		Toy(const Toy& obj);
		Toy& operator=(const Toy& obj);

		~Toy();
		friend std::ostream& operator << (std::ostream& os, const Toy& obj);

	};


}
#endif // SENECA_TOY_H
