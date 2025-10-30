#ifndef _java_nio_channels_IllegalChannelGroupException_h_
#define _java_nio_channels_IllegalChannelGroupException_h_
//$ class java.nio.channels.IllegalChannelGroupException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import IllegalChannelGroupException : public ::java::lang::IllegalArgumentException {
	$class(IllegalChannelGroupException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	IllegalChannelGroupException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xDD5FD53CDCFB7583;
	IllegalChannelGroupException(const IllegalChannelGroupException& e);
	virtual void throw$() override;
	inline IllegalChannelGroupException* operator ->() {
		return (IllegalChannelGroupException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_IllegalChannelGroupException_h_