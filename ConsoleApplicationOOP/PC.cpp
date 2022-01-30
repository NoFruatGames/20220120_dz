#include "PC.h"
void PC::fillFields(std::string CPU, std::string GPU, std::string MEMORY, std::string STORAGE, std::string MB, std::string CASE)
{
	this->CPU = CPU;
	this->GPU = GPU;
	this->MEMORY = MEMORY;
	this->STORAGE = STORAGE;
	this->MB = MB;
	this->CASE = CASE;
}
PC::PC() :GoodBasic{ 0,0,"NONE","NONE" }
{
	fillFields();
}
PC::PC(int id) : GoodBasic(id, 0, "NONE", "NONE")
{
	fillFields();
}
PC::PC(int id, int price, std::string name) : GoodBasic(id, price, name, "NONE")
{
	fillFields();
}
PC::PC(int id, int price, std::string name, std::string description) : GoodBasic(id, price, name, description)
{
	fillFields();
}
PC::PC(int id, int price, std::string name, std::string description, std::string CPU, std::string GPU, std::string MEMORY, std::string STORAGE, std::string MB, std::string CASE) : GoodBasic(id, price, name, description)
{
	fillFields(CPU, GPU, MEMORY, STORAGE, MB, CASE);
}
std::string PC::getCASE()
{
	return CASE;
}
std::string PC::getCPU()
{
	return CPU;
}
std::string PC::getGPU()
{
	return GPU;
}
std::string PC::getMB()
{
	return MB;
}
std::string PC::getMEMORY()
{
	return MEMORY;
}
std::string PC::getSTORAGE()
{
	return STORAGE;
}

void PC::setCPU(std::string CPU)
{
	this->CPU = CPU;
}
void PC::setGPU(std::string GPU)
{
	this->GPU = GPU;
}
void PC::setMEMORY(std::string MEMORY)
{
	this->MEMORY = MEMORY;
}
void PC::setSTORAGE(std::string STORAGE)
{
	this->STORAGE = STORAGE;
}
void PC::setMB(std::string MB)
{
	this->MB = MB;
}
void PC::setCASE(std::string CASE)
{
	this->CASE = CASE;
}

void  PC::toString() {
	cout << "toString:" << getItemId() << " " << getPrice() << " " << getName() << " " << getDescription() << getCPU() << " " << getGPU() << " " << getMEMORY() << " " << getSTORAGE() << " " << getMB() << " " << getMEMORY() << "\n";
}