#ifndef _sun_nio_ch_AsynchronousChannelGroupImpl$4$1_h_
#define _sun_nio_ch_AsynchronousChannelGroupImpl$4$1_h_
//$ class sun.nio.ch.AsynchronousChannelGroupImpl$4$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace nio {
		namespace ch {
			class AsynchronousChannelGroupImpl$4;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class AsynchronousChannelGroupImpl$4$1 : public ::java::security::PrivilegedAction {
	$class(AsynchronousChannelGroupImpl$4$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AsynchronousChannelGroupImpl$4$1();
	void init$(::sun::nio::ch::AsynchronousChannelGroupImpl$4* this$1);
	virtual $Object* run() override;
	::sun::nio::ch::AsynchronousChannelGroupImpl$4* this$1 = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_AsynchronousChannelGroupImpl$4$1_h_