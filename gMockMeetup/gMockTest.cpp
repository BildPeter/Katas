
#include "MockTurtle.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "MockDrawer.h"
using ::testing::AtLeast;

TEST(PainterTest, CanDrawSomething) {
    MockTurtle mockTurtle;
    EXPECT_CALL( mockTurtle, PenDown() ).Times( AtLeast( 1 ) );
    mockTurtle.PenDown();
}

TEST( DrawTest, drawing )
{
    Drawer mockDrawer;
    auto mNum = std::vector<Number>(1);

//    EXPECT_CALL( mockDrawer, draw( testing::A<std::vector<Number> >(), testing::An< int >() ) ).Times( AtLeast( 1 ) );
    mockDrawer.draw( mNum, 1 );
//    std::cout << mNum.size() << "\n";
}

int main(int argc, char** argv) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}