#ifndef _VerifyStackTrace$TestCase3_h_
#define _VerifyStackTrace$TestCase3_h_
//$ class VerifyStackTrace$TestCase3
//$ extends VerifyStackTrace$TestCase

#include <VerifyStackTrace$TestCase.h>

namespace java {
	namespace lang {
		class StackWalker;
	}
}

class $export VerifyStackTrace$TestCase3 : public ::VerifyStackTrace$TestCase {
	$class(VerifyStackTrace$TestCase3, $NO_CLASS_INIT, ::VerifyStackTrace$TestCase)
public:
	VerifyStackTrace$TestCase3();
	void init$();
	virtual $String* description() override;
	virtual $String* expected() override;
	virtual ::java::lang::StackWalker* walker() override;
	::java::lang::StackWalker* walker$ = nullptr;
	$String* description$ = nullptr;
	$String* expected$ = nullptr;
};

#endif // _VerifyStackTrace$TestCase3_h_