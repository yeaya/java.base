#ifndef _StackTraceSerialization$TestThrowable_h_
#define _StackTraceSerialization$TestThrowable_h_
//$ class StackTraceSerialization$TestThrowable
//$ extends java.lang.Throwable

#include <java/lang/Throwable.h>

class StackTraceSerialization$TestThrowable : public ::java::lang::Throwable {
	$class(StackTraceSerialization$TestThrowable, $NO_CLASS_INIT, ::java::lang::Throwable)
public:
	StackTraceSerialization$TestThrowable();
	void init$(bool enableSuppression, bool writableStackTrace);
	StackTraceSerialization$TestThrowable(const StackTraceSerialization$TestThrowable& e);
	virtual void throw$() override;
	inline StackTraceSerialization$TestThrowable* operator ->() {
		return (StackTraceSerialization$TestThrowable*)throwing$;
	}
};

#endif // _StackTraceSerialization$TestThrowable_h_