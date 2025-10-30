#ifndef _java_nio_channels_NonWritableChannelException_h_
#define _java_nio_channels_NonWritableChannelException_h_
//$ class java.nio.channels.NonWritableChannelException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export NonWritableChannelException : public ::java::lang::IllegalStateException {
	$class(NonWritableChannelException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	NonWritableChannelException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x9DDDF155FD37AEDB;
	NonWritableChannelException(const NonWritableChannelException& e);
	virtual void throw$() override;
	inline NonWritableChannelException* operator ->() {
		return (NonWritableChannelException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_NonWritableChannelException_h_