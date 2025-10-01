#ifndef _java_nio_channels_ClosedChannelException_h_
#define _java_nio_channels_ClosedChannelException_h_
//$ class java.nio.channels.ClosedChannelException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export ClosedChannelException : public ::java::io::IOException {
	$class(ClosedChannelException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	ClosedChannelException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x0C40412C49960BC1;
	ClosedChannelException(const ClosedChannelException& e);
	ClosedChannelException wrapper$();
	virtual void throwWrapper$() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_ClosedChannelException_h_