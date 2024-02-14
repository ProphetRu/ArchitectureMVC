#pragma once

#include "View.h"

/**
 * @brief The MainWindow view.
 */
class MainWindow final : public View
{
public:
    /**
     * @brief Destructor for the MainWindow.
     */
    ~MainWindow() noexcept override = default;

    /**
     * @brief Create a new model.
     */
    virtual void CreateNewModel() noexcept override;

    /**
     * @brief Import the model.
     */
    virtual void ImportModel() noexcept override;

    /**
     * @brief Export the model.
     */
    virtual void ExportModel() noexcept override;

    /**
     * @brief Add a primitive to the model.
     */
    virtual void AddPrimitive() noexcept override;

    /**
     * @brief Remove a primitive from the model.
     */
    virtual void RemovePrimitive() noexcept override;
};
