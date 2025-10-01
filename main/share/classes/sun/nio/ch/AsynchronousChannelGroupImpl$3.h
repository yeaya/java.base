#ifndef _sun_nio_ch_AsynchronousChannelGroupImpl$3_h_
#define _sun_nio_ch_AsynchronousChannelGroupImpl$3_h_
//$ class sun.nio.ch.AsynchronousChannelGroupImpl$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace nio {
		namespace ch {
			class AsynchronousChannelGroupImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class AsynchronousChannelGroupImpl$3 : public ::java::security::PrivilegedAction {
	$class(AsynchronousChannelGroupImpl$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AsynchronousChannelGroupImpl$3();
	void init$(::sun::nio::ch::AsynchronousChannelGroupImpl* this$0);
	virtual $Object* run() override;
	::sun::nio::ch::AsynchronousChannelGroupImpl* this$0 = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_AsynchronousChannelGroupImpl$3_h_