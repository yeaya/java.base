#ifndef _custom_CustomTimeZoneNameProvider_h_
#define _custom_CustomTimeZoneNameProvider_h_
//$ class custom.CustomTimeZoneNameProvider
//$ extends java.util.spi.TimeZoneNameProvider

#include <java/lang/Array.h>
#include <java/util/spi/TimeZoneNameProvider.h>

#pragma push_macro("ID")
#undef ID
#pragma push_macro("ZONE_ID")
#undef ZONE_ID

namespace java {
	namespace util {
		class Locale;
	}
}

namespace custom {

class $export CustomTimeZoneNameProvider : public ::java::util::spi::TimeZoneNameProvider {
	$class(CustomTimeZoneNameProvider, 0, ::java::util::spi::TimeZoneNameProvider)
public:
	CustomTimeZoneNameProvider();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual $String* getDisplayName($String* ID, bool daylight, int32_t style, ::java::util::Locale* locale) override;
	virtual $String* getGenericDisplayName($String* ID, int32_t style, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	static $String* ZONE_ID;
};

} // custom

#pragma pop_macro("ID")
#pragma pop_macro("ZONE_ID")

#endif // _custom_CustomTimeZoneNameProvider_h_