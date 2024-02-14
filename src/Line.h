#pragma once

#include "Primitive.h"

/**
 * @brief The primitive line.
 */
class Line final : public Primitive
{
public:
    /**
     * @brief Destructor for Line.
     */
    virtual ~Line() noexcept override = default;

    /**
     * @brief Draw the Line.
     * @return true if the Line was successfully drawn, false otherwise.
     */
    virtual bool Draw() noexcept override;
};
