#ifndef _java_nio_channels_ClosedSelectorException_h_
#define _java_nio_channels_ClosedSelectorException_h_
//$ class java.nio.channels.ClosedSelectorException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import ClosedSelectorException : public ::java::lang::IllegalStateException {
	$class(ClosedSelectorException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	ClosedSelectorException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x59BCE6F90BE2CD1B;
	ClosedSelectorException(const ClosedSelectorException& e);
	ClosedSelectorException wrapper$();
	virtual void throwWrapper$() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_ClosedSelectorException_h_