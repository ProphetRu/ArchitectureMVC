#include "Document.h"
#include <stdexcept>
#include <iostream> // just for demo

void Document::CreateNew() noexcept
{
	std::cout <<"Document: create new document\n"; // just for demo
}

void Document::ImportFromFile(std::string_view file_name) 
{
	if (file_name.empty())
	{
		throw std::invalid_argument("File name is empty");
	}

	std::cout << "Document: import document from file: " << file_name << std::endl; // just for demo
}

void Document::ExportToFile(std::string_view file_name) 
{
	if (file_name.empty())
	{
		throw std::invalid_argument("File name is empty");
	}

	std::cout <<"Document: export document to file: " << file_name << std::endl; // just for demo
}

void Document::AddPrimitive(PrimitivePtr primitive) 
{
	if (!primitive)
	{
		throw std::invalid_argument("Primitive is null");
	}

	std::cout <<"Document: add primitive\n"; // just for demo
	m_Primitives.emplace_back(primitive);
}

void Document::RemovePrimitive(PrimitivePtr primitive) 
{
	if (!primitive)
	{
		throw std::invalid_argument("Primitive is null");
	}

	std::cout <<"Document: remove primitive\n"; // just for demo
	std::erase(m_Primitives, primitive);

}

void Document::DrawAll()
{
	if (m_Primitives.empty())
	{
		throw std::runtime_error("There is no primitives");
	}

	for (const auto& prim : m_Primitives)
	{
		prim->Draw();
	}
}
