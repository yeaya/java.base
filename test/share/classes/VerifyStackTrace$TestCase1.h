#ifndef _VerifyStackTrace$TestCase1_h_
#define _VerifyStackTrace$TestCase1_h_
//$ class VerifyStackTrace$TestCase1
//$ extends VerifyStackTrace$TestCase

#include <VerifyStackTrace$TestCase.h>

namespace java {
	namespace lang {
		class StackWalker;
	}
}

class $export VerifyStackTrace$TestCase1 : public ::VerifyStackTrace$TestCase {
	$class(VerifyStackTrace$TestCase1, $NO_CLASS_INIT, ::VerifyStackTrace$TestCase)
public:
	VerifyStackTrace$TestCase1();
	void init$();
	virtual $String* description() override;
	virtual $String* expected() override;
	virtual ::java::lang::StackWalker* walker() override;
	::java::lang::StackWalker* walker$ = nullptr;
	$String* description$ = nullptr;
	$String* expected$ = nullptr;
};

#endif // _VerifyStackTrace$TestCase1_h_