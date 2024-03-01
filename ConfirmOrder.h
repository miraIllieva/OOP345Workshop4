// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
// Name    Dragomira Veleva        Date  02-19-2024        ID 184787216


#ifndef SENECA_CONFIRMORDER_H
#define SENECA_CONFIRMORDER_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <utility>
#include "Toy.h"

namespace seneca
{
	class Toy;
	class ConfirmOrder
	{
		const Toy** theToys{ nullptr };
		size_t m_count{ 0 };

	public:
		ConfirmOrder();
		ConfirmOrder(const ConfirmOrder& obj);
		ConfirmOrder& operator=(const ConfirmOrder& obj);
		ConfirmOrder(ConfirmOrder&& obj);
		ConfirmOrder& operator=(ConfirmOrder&& obj);
		~ConfirmOrder();
		ConfirmOrder& operator+=(const Toy& toy);
		ConfirmOrder& operator-=(const Toy& toy);


		friend std::ostream& operator <<(std::ostream& os, const ConfirmOrder& obj);


	};
}
#endif // SENECA_CONFIRMORDER_H