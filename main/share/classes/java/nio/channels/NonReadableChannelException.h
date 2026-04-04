#ifndef _java_nio_channels_NonReadableChannelException_h_
#define _java_nio_channels_NonReadableChannelException_h_
//$ class java.nio.channels.NonReadableChannelException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export NonReadableChannelException : public ::java::lang::IllegalStateException {
	$class(NonReadableChannelException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	NonReadableChannelException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xd39410261ba4cb96;
	NonReadableChannelException(const NonReadableChannelException& e);
	virtual void throw$() override;
	inline NonReadableChannelException* operator ->() const {
		return (NonReadableChannelException*)throwing$;
	}
	inline operator NonReadableChannelException*() const {
		return (NonReadableChannelException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_NonReadableChannelException_h_