#ifndef _sun_util_locale_LocaleEquivalentMaps_h_
#define _sun_util_locale_LocaleEquivalentMaps_h_
//$ class sun.util.locale.LocaleEquivalentMaps
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace util {
		namespace locale {

class LocaleEquivalentMaps : public ::java::lang::Object {
	$class(LocaleEquivalentMaps, 0, ::java::lang::Object)
public:
	LocaleEquivalentMaps();
	void init$();
	static ::java::util::Map* singleEquivMap;
	static ::java::util::Map* multiEquivsMap;
	static ::java::util::Map* regionVariantEquivMap;
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_LocaleEquivalentMaps_h_