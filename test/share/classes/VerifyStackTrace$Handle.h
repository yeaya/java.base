#ifndef _VerifyStackTrace$Handle_h_
#define _VerifyStackTrace$Handle_h_
//$ class VerifyStackTrace$Handle
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class $export VerifyStackTrace$Handle : public ::java::lang::Runnable {
	$class(VerifyStackTrace$Handle, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	VerifyStackTrace$Handle();
	void init$(::java::lang::Runnable* run);
	virtual void execute(::java::lang::Runnable* run);
	virtual void run() override;
	::java::lang::Runnable* impl = nullptr;
};

#endif // _VerifyStackTrace$Handle_h_