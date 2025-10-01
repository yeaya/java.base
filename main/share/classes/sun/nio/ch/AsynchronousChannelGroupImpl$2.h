#ifndef _sun_nio_ch_AsynchronousChannelGroupImpl$2_h_
#define _sun_nio_ch_AsynchronousChannelGroupImpl$2_h_
//$ class sun.nio.ch.AsynchronousChannelGroupImpl$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
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

class AsynchronousChannelGroupImpl$2 : public ::java::security::PrivilegedAction {
	$class(AsynchronousChannelGroupImpl$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AsynchronousChannelGroupImpl$2();
	void init$(::sun::nio::ch::AsynchronousChannelGroupImpl* this$0, ::java::lang::Runnable* val$task);
	virtual $Object* run() override;
	::sun::nio::ch::AsynchronousChannelGroupImpl* this$0 = nullptr;
	::java::lang::Runnable* val$task = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_AsynchronousChannelGroupImpl$2_h_