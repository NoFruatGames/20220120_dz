#pragma once
#include <string>
#include "GoodBasic.h"
class PC :public GoodBasic
{
private:
	std::string CPU;
	std::string GPU;
	std::string MEMORY;
	std::string STORAGE;
	std::string MB;
	std::string CASE;
public:
	PC();
	PC(int id);
	PC(int id,int price, std::string name);
	PC(int id,int price, std::string name,std::string description);
	PC(int id,int price, std::string name, std::string description, std::string CPU, std::string GPU, std::string MEMORY, std::string STORAGE, std::string MB, std::string CASE);
	void fillFields(std::string CPU = "NONE", std::string GPU = "NONE", std::string MEMORY = "NONE", std::string STORAGE = "NONE", std::string MB = "NONE", std::string CASE = "NONE");

	std::string getCPU();
	std::string getGPU();
	std::string getMEMORY();
	std::string getSTORAGE();
	std::string getMB();
	std::string getCASE();

	void setCPU(std::string CPU);
	void setGPU(std::string GPU);
	void setMEMORY(std::string MEMORY);
	void setSTORAGE(std::string STORAGE);
	void setMB(std::string MB);
	void setCASE(std::string CASE);

	void toString();
};

