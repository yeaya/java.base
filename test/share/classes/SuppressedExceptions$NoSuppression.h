#ifndef _SuppressedExceptions$NoSuppression_h_
#define _SuppressedExceptions$NoSuppression_h_
//$ class SuppressedExceptions$NoSuppression
//$ extends java.lang.Throwable

#include <java/lang/Throwable.h>

class SuppressedExceptions$NoSuppression : public ::java::lang::Throwable {
	$class(SuppressedExceptions$NoSuppression, $NO_CLASS_INIT, ::java::lang::Throwable)
public:
	SuppressedExceptions$NoSuppression();
	void init$(bool enableSuppression);
	SuppressedExceptions$NoSuppression(const SuppressedExceptions$NoSuppression& e);
	virtual void throw$() override;
	inline SuppressedExceptions$NoSuppression* operator ->() {
		return (SuppressedExceptions$NoSuppression*)throwing$;
	}
};

#endif // _SuppressedExceptions$NoSuppression_h_