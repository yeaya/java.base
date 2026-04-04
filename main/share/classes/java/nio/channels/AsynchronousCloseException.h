#ifndef _java_nio_channels_AsynchronousCloseException_h_
#define _java_nio_channels_AsynchronousCloseException_h_
//$ class java.nio.channels.AsynchronousCloseException
//$ extends java.nio.channels.ClosedChannelException

#include <java/nio/channels/ClosedChannelException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export AsynchronousCloseException : public ::java::nio::channels::ClosedChannelException {
	$class(AsynchronousCloseException, $NO_CLASS_INIT, ::java::nio::channels::ClosedChannelException)
public:
	AsynchronousCloseException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x5fa2622a0467666e;
	AsynchronousCloseException(const AsynchronousCloseException& e);
	virtual void throw$() override;
	inline AsynchronousCloseException* operator ->() const {
		return (AsynchronousCloseException*)throwing$;
	}
	inline operator AsynchronousCloseException*() const {
		return (AsynchronousCloseException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_AsynchronousCloseException_h_