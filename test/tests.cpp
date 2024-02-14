#include <gtest/gtest.h>

#include "Line.h"
#include "Line.cpp"

#include "Rectangle.h"
#include "Rectangle.cpp"

#include "Document.h"
#include "Document.cpp"

TEST(Line, Draw) 
{
    // Arrange
    Line line;

    // Act
	//

    // Assert
    ASSERT_EQ(line.Draw(), true);
}

TEST(Rectangle, Draw) 
{
    // Arrange
    Rectangle rect;

    // Act
	//

    // Assert
    ASSERT_EQ(rect.Draw(), true);
}

TEST(Document, ImportFromFile) 
{
    // Arrange
    Document doc;

    // Act
	//

    // Assert
    ASSERT_THROW(doc.ImportFromFile(""), std::invalid_argument);
}

TEST(Document, ExportToFile) 
{
    // Arrange
    Document doc;

    // Act
	//

    // Assert
    ASSERT_THROW(doc.ExportToFile(""), std::invalid_argument);
}

TEST(Document, AddPrimitive) 
{
    // Arrange
    Document doc;

    // Act
	//

    // Assert
    ASSERT_THROW(doc.AddPrimitive(nullptr), std::invalid_argument);
}

TEST(Document, RemovePrimitive) 
{
    // Arrange
    Document doc;

    // Act
	//

    // Assert
    ASSERT_THROW(doc.RemovePrimitive(nullptr), std::invalid_argument);
}

TEST(Document, DrawAll) 
{
    // Arrange
    Document doc;

    // Act
	//

    // Assert
    ASSERT_THROW(doc.DrawAll(), std::runtime_error);
}

int main(int argc, char** argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
