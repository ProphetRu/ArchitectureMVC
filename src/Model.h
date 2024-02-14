#pragma once

#include <string_view>
#include <vector>
#include "Primitive.h"

class Model;
using ModelPtr = std::unique_ptr<Model>;

/**
 * @brief The interface for models.
 */
class Model
{
public:
    /**
     * @brief Virtual destructor for Model.
     */
    virtual ~Model() noexcept = default;

    /**
     * @brief Create a new model.
     */
    virtual void CreateNew() noexcept = 0;

    /**
     * @brief Import the model from a file.
     * @param file_name - The name of the file to import from.
     */
    virtual void ImportFromFile(std::string_view file_name) = 0;

    /**
     * @brief Export the model to a file.
     * @param file_name - The name of the file to export to.
     */
    virtual void ExportToFile(std::string_view file_name) = 0;

    /**
     * @brief Add a primitive to the model.
     * @param primitive - The primitive to add.
     */
    virtual void AddPrimitive(PrimitivePtr primitive) = 0;

    /**
     * @brief Remove a primitive from the model.
     * @param primitive - The primitive to remove.
     */
    virtual void RemovePrimitive(PrimitivePtr primitive) = 0;

    /**
     * @brief Draw all the primitives in the model.
     */
    virtual void DrawAll() = 0;

    /**
     * @brief Get the number of primitives in the model.
     * @return The number of primitives in the model.
     */
    [[nodiscard]] size_t PrimitivesCount() const noexcept { return m_Primitives.size(); }

protected:
    std::vector<PrimitivePtr> m_Primitives; /**< The list of primitives in the model. */
};
