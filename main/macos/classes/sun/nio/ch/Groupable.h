#ifndef _sun_nio_ch_Groupable_h_
#define _sun_nio_ch_Groupable_h_
//$ interface sun.nio.ch.Groupable
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class Groupable : public ::java::lang::Object {
	$interface(Groupable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::nio::ch::AsynchronousChannelGroupImpl* group() {return nullptr;}
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Groupable_h_