#ifndef _VerifyStackTrace$TestCase2_h_
#define _VerifyStackTrace$TestCase2_h_
//$ class VerifyStackTrace$TestCase2
//$ extends VerifyStackTrace$TestCase

#include <VerifyStackTrace$TestCase.h>

namespace java {
	namespace lang {
		class StackWalker;
	}
}

class $export VerifyStackTrace$TestCase2 : public ::VerifyStackTrace$TestCase {
	$class(VerifyStackTrace$TestCase2, $NO_CLASS_INIT, ::VerifyStackTrace$TestCase)
public:
	VerifyStackTrace$TestCase2();
	void init$();
	virtual $String* description() override;
	virtual $String* expected() override;
	virtual ::java::lang::StackWalker* walker() override;
	::java::lang::StackWalker* walker$ = nullptr;
	$String* description$ = nullptr;
	$String* expected$ = nullptr;
};

#endif // _VerifyStackTrace$TestCase2_h_