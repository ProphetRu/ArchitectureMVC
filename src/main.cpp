#include <iostream>
#include "Line.h"
#include "Rectangle.h"
#include "Document.h"
#include "MainWindow.h"
#include "EditorController.h"

int main() noexcept
{
	// just for demo
	// event loop
	// handle user input and update the model and the view
	try
	{
		auto ctrl{ std::make_unique<EditorController>(std::make_unique<Document>(), std::make_unique<MainWindow>())};

		std::cout <<"Main: create new model\n";
		ctrl->HandleCreateNewModel();

		constexpr auto MODEL_FILE_NAME = "gui.mdl";
		std::cout <<"\nMain: import model from file " << MODEL_FILE_NAME << std::endl;
		ctrl->HandleImportModel(MODEL_FILE_NAME);

		std::cout <<"\nMain: export model to file " << MODEL_FILE_NAME << std::endl;
		ctrl->HandleExportModel(MODEL_FILE_NAME);

		std::cout <<"\nMain: add line and rectangle to controller\n";
		auto line = std::make_shared<Line>();
		auto rect = std::make_shared<Rectangle>();

		ctrl->HandleAddPrimitive(line);
		ctrl->HandleAddPrimitive(rect);

		std::cout << "\nMain: primitives in the model: " << ctrl->PrimitivesCount() << std::endl;
		std::cout <<"\nMain: draw all\n";
		ctrl->DrawAll();

		std::cout <<"\nMain: remove line from controller\n";
		ctrl->HandleRemovePrimitive(line);

		std::cout << "\nMain: primitives in the model: " << ctrl->PrimitivesCount() << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout <<"Error: " << ex.what() << std::endl;
		return -1;
	}

	return 0;
}
