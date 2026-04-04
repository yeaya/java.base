#ifndef _java_nio_channels_ClosedSelectorException_h_
#define _java_nio_channels_ClosedSelectorException_h_
//$ class java.nio.channels.ClosedSelectorException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export ClosedSelectorException : public ::java::lang::IllegalStateException {
	$class(ClosedSelectorException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	ClosedSelectorException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x59bce6f90be2cd1b;
	ClosedSelectorException(const ClosedSelectorException& e);
	virtual void throw$() override;
	inline ClosedSelectorException* operator ->() const {
		return (ClosedSelectorException*)throwing$;
	}
	inline operator ClosedSelectorException*() const {
		return (ClosedSelectorException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_ClosedSelectorException_h_