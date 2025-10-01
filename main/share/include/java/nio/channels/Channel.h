#ifndef _java_nio_channels_Channel_h_
#define _java_nio_channels_Channel_h_
//$ interface java.nio.channels.Channel
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace java {
	namespace nio {
		namespace channels {

class $import Channel : public ::java::io::Closeable {
	$interface(Channel, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	virtual void close() override {}
	virtual bool isOpen() {return false;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_Channel_h_