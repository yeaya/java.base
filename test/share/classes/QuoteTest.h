#ifndef _QuoteTest_h_
#define _QuoteTest_h_
//$ class QuoteTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export QuoteTest : public ::java::lang::Object {
	$class(QuoteTest, 0, ::java::lang::Object)
public:
	QuoteTest();
	void init$();
	static void main($StringArray* args);
	static $String* testStr;
};

#endif // _QuoteTest_h_