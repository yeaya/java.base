#ifndef _java_nio_channels_NonReadableChannelException_h_
#define _java_nio_channels_NonReadableChannelException_h_
//$ class java.nio.channels.NonReadableChannelException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import NonReadableChannelException : public ::java::lang::IllegalStateException {
	$class(NonReadableChannelException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	NonReadableChannelException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xD39410261BA4CB96;
	NonReadableChannelException(const NonReadableChannelException& e);
	virtual void throw$() override;
	inline NonReadableChannelException* operator ->() {
		return (NonReadableChannelException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_NonReadableChannelException_h_