#include "EditorController.h"

EditorController::EditorController(ModelPtr model, ViewPtr view) noexcept :
	Controller(std::move(model), std::move(view))
{
}

void EditorController::HandleCreateNewModel() noexcept
{
	m_Model->CreateNew();
	m_View->CreateNewModel();
}

void EditorController::HandleImportModel(std::string_view file_name)
{
	m_Model->ImportFromFile(file_name);
	m_View->ImportModel();
}

void EditorController::HandleExportModel(std::string_view file_name)
{
	m_Model->ExportToFile(file_name);
	m_View->ExportModel();
}

void EditorController::HandleAddPrimitive(PrimitivePtr primitive)
{
	m_Model->AddPrimitive(primitive);
	m_View->AddPrimitive();
}

void EditorController::HandleRemovePrimitive(PrimitivePtr primitive)
{
	m_Model->RemovePrimitive(primitive);
	m_View->RemovePrimitive();
}

size_t EditorController::PrimitivesCount() const noexcept
{
	return m_Model->PrimitivesCount();
}

void EditorController::DrawAll()
{
	m_Model->DrawAll();
}
