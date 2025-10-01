#ifndef _sun_nio_ch_AsynchronousChannelGroupImpl$4_h_
#define _sun_nio_ch_AsynchronousChannelGroupImpl$4_h_
//$ class sun.nio.ch.AsynchronousChannelGroupImpl$4
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace security {
		class AccessControlContext;
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

class AsynchronousChannelGroupImpl$4 : public ::java::lang::Runnable {
	$class(AsynchronousChannelGroupImpl$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AsynchronousChannelGroupImpl$4();
	void init$(::sun::nio::ch::AsynchronousChannelGroupImpl* this$0, ::java::lang::Runnable* val$delegate, ::java::security::AccessControlContext* val$acc);
	virtual void run() override;
	::sun::nio::ch::AsynchronousChannelGroupImpl* this$0 = nullptr;
	::java::security::AccessControlContext* val$acc = nullptr;
	::java::lang::Runnable* val$delegate = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_AsynchronousChannelGroupImpl$4_h_