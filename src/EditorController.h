#pragma once

#include "Controller.h"

/**
 * @brief The EditorController controller.
 */
class EditorController final : public Controller
{
public:
    /**
     * @brief Constructor for the EditorController.
     * @param model The model to be controlled.
     * @param view The view to be controlled.
     */
    EditorController(ModelPtr model, ViewPtr view) noexcept;

    /**
     * @brief Virtual destructor for the EditorController.
     */
    ~EditorController() noexcept override = default;

    /**
     * @brief Handle the creation of a new model.
     */
    virtual void HandleCreateNewModel() noexcept override;

    /**
     * @brief Handle the import of a model.
     * @param file_name The name of the file to import.
     */
    virtual void HandleImportModel(std::string_view file_name) override;

    /**
     * @brief Handle the export of a model.
     * @param file_name The name of the file to export.
     */
    virtual void HandleExportModel(std::string_view file_name) override;

    /**
     * @brief Handle the addition of a primitive to the model.
     * @param primitive The primitive to add.
     */
    virtual void HandleAddPrimitive(PrimitivePtr primitive) override;

    /**
     * @brief Handle the removal of a primitive from the model.
     * @param primitive The primitive to remove.
     */
    virtual void HandleRemovePrimitive(PrimitivePtr primitive) override;

    /**
     * @brief Get the number of primitives in the model.
     * @return The number of primitives in the model.
     */
    [[nodiscard]] virtual size_t PrimitivesCount() const noexcept override;

    /**
     * @brief Draw all primitives in the model.
     */
    virtual void DrawAll() override;
};
