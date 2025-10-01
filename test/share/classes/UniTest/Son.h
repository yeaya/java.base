#ifndef _UniTest_Son_h_
#define _UniTest_Son_h_
//$ class UniTest.Son
//$ extends UniTest.Dad

#include <UniTest/Dad.h>

namespace UniTest {

class Son : public ::UniTest::Dad {
	$class(Son, $NO_CLASS_INIT, ::UniTest::Dad)
public:
	Son();
	void init$();
};

} // UniTest

#endif // _UniTest_Son_h_