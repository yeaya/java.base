#ifndef _sun_nio_ch_WindowsSelectorImpl$MapEntry_h_
#define _sun_nio_ch_WindowsSelectorImpl$MapEntry_h_
//$ class sun.nio.ch.WindowsSelectorImpl$MapEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace ch {
			class SelectionKeyImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsSelectorImpl$MapEntry : public ::java::lang::Object {
	$class(WindowsSelectorImpl$MapEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsSelectorImpl$MapEntry();
	void init$(::sun::nio::ch::SelectionKeyImpl* ski);
	::sun::nio::ch::SelectionKeyImpl* ski = nullptr;
	int64_t updateCount = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsSelectorImpl$MapEntry_h_