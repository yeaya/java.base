#ifndef _sun_nio_ch_Cancellable_h_
#define _sun_nio_ch_Cancellable_h_
//$ interface sun.nio.ch.Cancellable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace ch {
			class PendingFuture;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Cancellable : public ::java::lang::Object {
	$interface(Cancellable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void onCancel(::sun::nio::ch::PendingFuture* task) {}
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Cancellable_h_