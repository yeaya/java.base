#ifndef _sun_nio_ch_DefaultSelectorProvider_h_
#define _sun_nio_ch_DefaultSelectorProvider_h_
//$ class sun.nio.ch.DefaultSelectorProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace sun {
	namespace nio {
		namespace ch {
			class SelectorProviderImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $export DefaultSelectorProvider : public ::java::lang::Object {
	$class(DefaultSelectorProvider, 0, ::java::lang::Object)
public:
	DefaultSelectorProvider();
	void init$();
	static ::sun::nio::ch::SelectorProviderImpl* get();
	static ::sun::nio::ch::SelectorProviderImpl* INSTANCE;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_nio_ch_DefaultSelectorProvider_h_