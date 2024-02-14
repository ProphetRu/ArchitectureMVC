#pragma once

#include "Model.h"

/**
 * @brief The model Document.
 */
class Document final : public Model
{
public:
    /**
     * @brief Destructor for the Document.
     */
    virtual ~Document() noexcept override = default;

    /**
     * @brief Create a new document.
     */
    virtual void CreateNew() noexcept override;

    /**
     * @brief Import the document from a file.
     * @param file_name - The name of the file to import from.
     */
    virtual void ImportFromFile(std::string_view file_name) override;

    /**
     * @brief Export the document to a file.
     * @param file_name - The name of the file to export to.
     */
    virtual void ExportToFile(std::string_view file_name) override;

    /**
     * @brief Add a primitive to the document.
     * @param primitive - The primitive to add.
     */
    virtual void AddPrimitive(PrimitivePtr primitive) override;

    /**
     * @brief Remove a primitive from the document.
     * @param primitive - The primitive to remove.
     */
    virtual void RemovePrimitive(PrimitivePtr primitive) override;

    /**
     * @brief Draw all the primitives in the document.
     */
    virtual void DrawAll() override;
};
