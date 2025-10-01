#ifndef _sun_util_cldr_CLDRTimeZoneNameProviderImpl_h_
#define _sun_util_cldr_CLDRTimeZoneNameProviderImpl_h_
//$ class sun.util.cldr.CLDRTimeZoneNameProviderImpl
//$ extends sun.util.locale.provider.TimeZoneNameProviderImpl

#include <java/lang/Array.h>
#include <sun/util/locale/provider/TimeZoneNameProviderImpl.h>

#pragma push_macro("INDEX_STD_LONG")
#undef INDEX_STD_LONG
#pragma push_macro("INDEX_GEN_LONG")
#undef INDEX_GEN_LONG
#pragma push_macro("INDEX_GEN_SHORT")
#undef INDEX_GEN_SHORT
#pragma push_macro("NO_INHERITANCE_MARKER")
#undef NO_INHERITANCE_MARKER
#pragma push_macro("INDEX_DST_SHORT")
#undef INDEX_DST_SHORT
#pragma push_macro("INDEX_TZID")
#undef INDEX_TZID
#pragma push_macro("INDEX_DST_LONG")
#undef INDEX_DST_LONG
#pragma push_macro("INDEX_STD_SHORT")
#undef INDEX_STD_SHORT

namespace java {
	namespace util {
		class Locale;
		class Set;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleProviderAdapter$Type;
			}
		}
	}
}

namespace sun {
	namespace util {
		namespace cldr {

class $export CLDRTimeZoneNameProviderImpl : public ::sun::util::locale::provider::TimeZoneNameProviderImpl {
	$class(CLDRTimeZoneNameProviderImpl, 0, ::sun::util::locale::provider::TimeZoneNameProviderImpl)
public:
	CLDRTimeZoneNameProviderImpl();
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	void deriveFallbackName($StringArray* names, int32_t index, ::java::util::Locale* locale, bool noDST);
	void deriveFallbackNames($StringArray* names, ::java::util::Locale* locale);
	bool exists($StringArray* names, int32_t index);
	virtual $StringArray* getDisplayNameArray($String* id, ::java::util::Locale* locale) override;
	virtual $Array<::java::lang::String, 2>* getZoneStrings(::java::util::Locale* locale) override;
	::java::util::Locale* mapChineseLocale(::java::util::Locale* locale);
	bool regionFormatFallback($StringArray* names, int32_t index, ::java::util::Locale* l);
	$String* toGMTFormat($String* id, bool daylight, ::java::util::Locale* l);
	bool typeFallback($StringArray* names, int32_t index);
	static $String* NO_INHERITANCE_MARKER;
	static const int32_t INDEX_TZID = 0;
	static const int32_t INDEX_STD_LONG = 1;
	static const int32_t INDEX_STD_SHORT = 2;
	static const int32_t INDEX_DST_LONG = 3;
	static const int32_t INDEX_DST_SHORT = 4;
	static const int32_t INDEX_GEN_LONG = 5;
	static const int32_t INDEX_GEN_SHORT = 6;
};

		} // cldr
	} // util
} // sun

#pragma pop_macro("INDEX_STD_LONG")
#pragma pop_macro("INDEX_GEN_LONG")
#pragma pop_macro("INDEX_GEN_SHORT")
#pragma pop_macro("NO_INHERITANCE_MARKER")
#pragma pop_macro("INDEX_DST_SHORT")
#pragma pop_macro("INDEX_TZID")
#pragma pop_macro("INDEX_DST_LONG")
#pragma pop_macro("INDEX_STD_SHORT")

#endif // _sun_util_cldr_CLDRTimeZoneNameProviderImpl_h_