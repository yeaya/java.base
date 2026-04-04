#ifndef _java_nio_channels_IllegalBlockingModeException_h_
#define _java_nio_channels_IllegalBlockingModeException_h_
//$ class java.nio.channels.IllegalBlockingModeException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import IllegalBlockingModeException : public ::java::lang::IllegalStateException {
	$class(IllegalBlockingModeException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	IllegalBlockingModeException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xd1b4f2588bf48fb6;
	IllegalBlockingModeException(const IllegalBlockingModeException& e);
	virtual void throw$() override;
	inline IllegalBlockingModeException* operator ->() const {
		return (IllegalBlockingModeException*)throwing$;
	}
	inline operator IllegalBlockingModeException*() const {
		return (IllegalBlockingModeException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_IllegalBlockingModeException_h_