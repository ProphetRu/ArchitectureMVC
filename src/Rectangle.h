#pragma once

#include "Primitive.h"

/**
 * @brief The primitive rectangle.
 */
class Rectangle final : public Primitive
{
public:
    /**
     * @brief Destructor for Rectangle.
     */
	virtual ~Rectangle() noexcept override = default;

    /**
     * @brief Draw the Rectangle.
     * @return true if the Line was successfully drawn, false otherwise.
     */
	virtual bool Draw() noexcept override;
};
