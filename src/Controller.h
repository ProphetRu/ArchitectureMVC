#pragma once

#include "Model.h"
#include "View.h"

/**
 * @brief The interface for controllers.
 */
class Controller
{
public:
    /**
     * @brief Constructor for the Controller.
     * @param model The model to be controlled.
     * @param view The view to be controlled.
     */
    Controller(ModelPtr model, ViewPtr view) noexcept :
        m_Model(std::move(model)),
        m_View(std::move(view))
    {
    }

    /**
     * @brief Virtual destructor for the Controller.
     */
    virtual ~Controller() noexcept = default;

    /**
     * @brief Handle the creation of a new model.
     */
    virtual void HandleCreateNewModel() noexcept = 0;

    /**
     * @brief Handle the import of a model.
     * @param file_name The name of the file to import.
     */
    virtual void HandleImportModel(std::string_view file_name) = 0;

    /**
     * @brief Handle the export of a model.
     * @param file_name The name of the file to export.
     */
    virtual void HandleExportModel(std::string_view file_name) = 0;

    /**
     * @brief Handle the addition of a primitive to the model.
     * @param primitive The primitive to add.
     */
    virtual void HandleAddPrimitive(PrimitivePtr primitive) = 0;

    /**
     * @brief Handle the removal of a primitive from the model.
     * @param primitive The primitive to remove.
     */
    virtual void HandleRemovePrimitive(PrimitivePtr primitive) = 0;

    /**
     * @brief Get the number of primitives in the model.
     * @return The number of primitives in the model.
     */
    [[nodiscard]] virtual size_t PrimitivesCount() const noexcept = 0;

    /**
     * @brief Draw all primitives in the model.
     */
    virtual void DrawAll() = 0;

protected:
    ModelPtr m_Model; /**< The model to be controlled. */
    ViewPtr  m_View; /**< The view to be controlled. */
};
