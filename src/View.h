#pragma once

#include <memory>

class View;
using ViewPtr = std::unique_ptr<View>;

/**
 * @brief The interface for views.
 */
class View
{
public:
    /**
     * @brief Virtual destructor for the View.
     */
    virtual ~View() noexcept = default;

    /**
     * @brief Create a new model.
     */
    virtual void CreateNewModel() noexcept = 0;

    /**
     * @brief Import the model.
     */
    virtual void ImportModel() noexcept = 0;

    /**
     * @brief Export the model.
     */
    virtual void ExportModel() noexcept = 0;

    /**
     * @brief Add a primitive to the model.
     */
    virtual void AddPrimitive() noexcept = 0;

    /**
     * @brief Remove a primitive from the model.
     */
    virtual void RemovePrimitive() noexcept = 0;
};
