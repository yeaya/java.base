#ifndef _java_nio_channels_ShutdownChannelGroupException_h_
#define _java_nio_channels_ShutdownChannelGroupException_h_
//$ class java.nio.channels.ShutdownChannelGroupException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export ShutdownChannelGroupException : public ::java::lang::IllegalStateException {
	$class(ShutdownChannelGroupException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	ShutdownChannelGroupException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xC9D2E90EFF931A53;
	ShutdownChannelGroupException(const ShutdownChannelGroupException& e);
	ShutdownChannelGroupException wrapper$();
	virtual void throwWrapper$() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_ShutdownChannelGroupException_h_