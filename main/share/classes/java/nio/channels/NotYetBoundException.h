#ifndef _java_nio_channels_NotYetBoundException_h_
#define _java_nio_channels_NotYetBoundException_h_
//$ class java.nio.channels.NotYetBoundException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export NotYetBoundException : public ::java::lang::IllegalStateException {
	$class(NotYetBoundException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	NotYetBoundException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x4068244722C97582;
	NotYetBoundException(const NotYetBoundException& e);
	virtual void throw$() override;
	inline NotYetBoundException* operator ->() {
		return (NotYetBoundException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_NotYetBoundException_h_