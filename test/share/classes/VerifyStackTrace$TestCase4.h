#ifndef _VerifyStackTrace$TestCase4_h_
#define _VerifyStackTrace$TestCase4_h_
//$ class VerifyStackTrace$TestCase4
//$ extends VerifyStackTrace$TestCase3

#include <VerifyStackTrace$TestCase3.h>

namespace java {
	namespace lang {
		class StackWalker;
	}
}

class $export VerifyStackTrace$TestCase4 : public ::VerifyStackTrace$TestCase3 {
	$class(VerifyStackTrace$TestCase4, $NO_CLASS_INIT, ::VerifyStackTrace$TestCase3)
public:
	VerifyStackTrace$TestCase4();
	void init$();
	virtual $String* description() override;
	virtual ::java::lang::StackWalker* walker() override;
	::java::lang::StackWalker* walker$ = nullptr;
	$String* description$ = nullptr;
};

#endif // _VerifyStackTrace$TestCase4_h_