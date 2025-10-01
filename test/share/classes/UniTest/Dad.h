#ifndef _UniTest_Dad_h_
#define _UniTest_Dad_h_
//$ class UniTest.Dad
//$ extends UniTest.Grandpa

#include <UniTest/Grandpa.h>

namespace UniTest {

class Dad : public ::UniTest::Grandpa {
	$class(Dad, $NO_CLASS_INIT, ::UniTest::Grandpa)
public:
	Dad();
	void init$();
};

} // UniTest

#endif // _UniTest_Dad_h_