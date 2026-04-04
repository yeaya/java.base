#ifndef _java_nio_channels_NotYetConnectedException_h_
#define _java_nio_channels_NotYetConnectedException_h_
//$ class java.nio.channels.NotYetConnectedException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import NotYetConnectedException : public ::java::lang::IllegalStateException {
	$class(NotYetConnectedException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	NotYetConnectedException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x413038843a2118f8;
	NotYetConnectedException(const NotYetConnectedException& e);
	virtual void throw$() override;
	inline NotYetConnectedException* operator ->() const {
		return (NotYetConnectedException*)throwing$;
	}
	inline operator NotYetConnectedException*() const {
		return (NotYetConnectedException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_NotYetConnectedException_h_