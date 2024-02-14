#pragma once

#include <memory>

class Primitive;
using PrimitivePtr = std::shared_ptr<Primitive>;

/**
 * @brief The interface for primitives.
 */
class Primitive
{
public:
    /**
     * @brief Virtual destructor for Primitive.
     */
    virtual ~Primitive() noexcept = default;

    /**
     * @brief Virtual function to draw the primitive.
     * @return true if the primitive was successfully drawn, false otherwise.
     */
    virtual bool Draw() noexcept = 0;
};
