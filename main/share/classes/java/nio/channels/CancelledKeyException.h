#ifndef _java_nio_channels_CancelledKeyException_h_
#define _java_nio_channels_CancelledKeyException_h_
//$ class java.nio.channels.CancelledKeyException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export CancelledKeyException : public ::java::lang::IllegalStateException {
	$class(CancelledKeyException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	CancelledKeyException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x8AE6167A21767044;
	CancelledKeyException(const CancelledKeyException& e);
	virtual void throw$() override;
	inline CancelledKeyException* operator ->() {
		return (CancelledKeyException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_CancelledKeyException_h_