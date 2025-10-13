#ifndef _sun_util_resources_LocaleData_h_
#define _sun_util_resources_LocaleData_h_
//$ class sun.util.resources.LocaleData
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CANDIDATES_MAP")
#undef CANDIDATES_MAP
#pragma push_macro("DOTCLDR")
#undef DOTCLDR

namespace java {
	namespace util {
		class Locale;
		class Map;
		class ResourceBundle;
		class ResourceBundle$Control;
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
		namespace resources {
			class OpenListResourceBundle;
			class ParallelListResourceBundle;
			class TimeZoneNamesBundle;
		}
	}
}

namespace sun {
	namespace util {
		namespace resources {

class $import LocaleData : public ::java::lang::Object {
	$class(LocaleData, 0, ::java::lang::Object)
public:
	LocaleData();
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type);
	virtual ::java::util::ResourceBundle* getBreakIteratorInfo(::java::util::Locale* locale);
	virtual ::java::util::ResourceBundle* getBreakIteratorResources(::java::util::Locale* locale);
	static ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* locale);
	virtual ::java::util::ResourceBundle* getCalendarData(::java::util::Locale* locale);
	virtual ::java::util::ResourceBundle* getCollationData(::java::util::Locale* locale);
	virtual ::sun::util::resources::OpenListResourceBundle* getCurrencyNames(::java::util::Locale* locale);
	virtual ::java::util::ResourceBundle* getDateFormatData(::java::util::Locale* locale);
	virtual ::sun::util::resources::OpenListResourceBundle* getLocaleNames(::java::util::Locale* locale);
	virtual ::java::util::ResourceBundle* getNumberFormatData(::java::util::Locale* locale);
	static ::sun::util::resources::OpenListResourceBundle* getSupplementary($String* baseName, ::java::util::Locale* locale);
	virtual ::sun::util::resources::TimeZoneNamesBundle* getTimeZoneNames(::java::util::Locale* locale);
	virtual void setSupplementary(::sun::util::resources::ParallelListResourceBundle* formatData);
	bool setSupplementary($String* suppName, ::sun::util::resources::ParallelListResourceBundle* formatData);
	static ::java::util::ResourceBundle$Control* defaultControl;
	static $String* DOTCLDR;
	static ::java::util::Map* CANDIDATES_MAP;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
};

		} // resources
	} // util
} // sun

#pragma pop_macro("CANDIDATES_MAP")
#pragma pop_macro("DOTCLDR")

#endif // _sun_util_resources_LocaleData_h_