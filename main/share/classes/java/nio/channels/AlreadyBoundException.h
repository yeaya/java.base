#ifndef _java_nio_channels_AlreadyBoundException_h_
#define _java_nio_channels_AlreadyBoundException_h_
//$ class java.nio.channels.AlreadyBoundException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export AlreadyBoundException : public ::java::lang::IllegalStateException {
	$class(AlreadyBoundException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	AlreadyBoundException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x5E50805F0694BBB8;
	AlreadyBoundException(const AlreadyBoundException& e);
	virtual void throw$() override;
	inline AlreadyBoundException* operator ->() {
		return (AlreadyBoundException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_AlreadyBoundException_h_