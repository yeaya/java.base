#ifndef _sun_nio_ch_WindowsSelectorImpl$FdMap_h_
#define _sun_nio_ch_WindowsSelectorImpl$FdMap_h_
//$ class sun.nio.ch.WindowsSelectorImpl$FdMap
//$ extends java.util.HashMap

#include <java/util/HashMap.h>

namespace sun {
	namespace nio {
		namespace ch {
			class SelectionKeyImpl;
			class WindowsSelectorImpl$MapEntry;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsSelectorImpl$FdMap : public ::java::util::HashMap {
	$class(WindowsSelectorImpl$FdMap, $NO_CLASS_INIT, ::java::util::HashMap)
public:
	WindowsSelectorImpl$FdMap();
	using ::java::util::HashMap::get;
	void init$();
	::sun::nio::ch::WindowsSelectorImpl$MapEntry* get(int32_t desc);
	using ::java::util::HashMap::put;
	::sun::nio::ch::WindowsSelectorImpl$MapEntry* put(::sun::nio::ch::SelectionKeyImpl* ski);
	using ::java::util::HashMap::remove;
	::sun::nio::ch::WindowsSelectorImpl$MapEntry* remove(::sun::nio::ch::SelectionKeyImpl* ski);
	static const int64_t serialVersionUID = (int64_t)0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsSelectorImpl$FdMap_h_