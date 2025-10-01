#ifndef _sun_util_cldr_CLDRCalendarNameProviderImpl_h_
#define _sun_util_cldr_CLDRCalendarNameProviderImpl_h_
//$ class sun.util.cldr.CLDRCalendarNameProviderImpl
//$ extends sun.util.locale.provider.CalendarNameProviderImpl

#include <sun/util/locale/provider/CalendarNameProviderImpl.h>

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

class $import CLDRCalendarNameProviderImpl : public ::sun::util::locale::provider::CalendarNameProviderImpl {
	$class(CLDRCalendarNameProviderImpl, $NO_CLASS_INIT, ::sun::util::locale::provider::CalendarNameProviderImpl)
public:
	CLDRCalendarNameProviderImpl();
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

		} // cldr
	} // util
} // sun

#endif // _sun_util_cldr_CLDRCalendarNameProviderImpl_h_