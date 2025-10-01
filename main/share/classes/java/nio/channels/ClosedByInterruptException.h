#ifndef _java_nio_channels_ClosedByInterruptException_h_
#define _java_nio_channels_ClosedByInterruptException_h_
//$ class java.nio.channels.ClosedByInterruptException
//$ extends java.nio.channels.AsynchronousCloseException

#include <java/nio/channels/AsynchronousCloseException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export ClosedByInterruptException : public ::java::nio::channels::AsynchronousCloseException {
	$class(ClosedByInterruptException, $NO_CLASS_INIT, ::java::nio::channels::AsynchronousCloseException)
public:
	ClosedByInterruptException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xC1B6BD9213BA0862;
	ClosedByInterruptException(const ClosedByInterruptException& e);
	ClosedByInterruptException wrapper$();
	virtual void throwWrapper$() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_ClosedByInterruptException_h_