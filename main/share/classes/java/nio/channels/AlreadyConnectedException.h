#ifndef _java_nio_channels_AlreadyConnectedException_h_
#define _java_nio_channels_AlreadyConnectedException_h_
//$ class java.nio.channels.AlreadyConnectedException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export AlreadyConnectedException : public ::java::lang::IllegalStateException {
	$class(AlreadyConnectedException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	AlreadyConnectedException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x9a3fe01ee431b9d3;
	AlreadyConnectedException(const AlreadyConnectedException& e);
	virtual void throw$() override;
	inline AlreadyConnectedException* operator ->() const {
		return (AlreadyConnectedException*)throwing$;
	}
	inline operator AlreadyConnectedException*() const {
		return (AlreadyConnectedException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_AlreadyConnectedException_h_