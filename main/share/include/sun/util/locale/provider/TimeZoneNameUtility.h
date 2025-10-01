#ifndef _sun_util_locale_provider_TimeZoneNameUtility_h_
#define _sun_util_locale_provider_TimeZoneNameUtility_h_
//$ class sun.util.locale.provider.TimeZoneNameUtility
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
		class Map;
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $import TimeZoneNameUtility : public ::java::lang::Object {
	$class(TimeZoneNameUtility, 0, ::java::lang::Object)
public:
	TimeZoneNameUtility();
	void init$();
	static ::java::util::Optional* canonicalTZID($String* id);
	static ::java::util::Optional* convertLDMLShortID($String* shortID);
	static $Array<::java::lang::String, 2>* getZoneStrings(::java::util::Locale* locale);
	static $Array<::java::lang::String, 2>* loadZoneStrings(::java::util::Locale* locale);
	static $String* retrieveDisplayName($String* id, bool daylight, int32_t style, ::java::util::Locale* locale);
	static $StringArray* retrieveDisplayNames($String* id, ::java::util::Locale* locale);
	static $StringArray* retrieveDisplayNamesImpl($String* id, ::java::util::Locale* locale);
	static $String* retrieveGenericDisplayName($String* id, int32_t style, ::java::util::Locale* locale);
	static ::java::util::concurrent::ConcurrentHashMap* cachedZoneData;
	static ::java::util::Map* cachedDisplayNames;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_TimeZoneNameUtility_h_