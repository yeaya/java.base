#ifndef _sun_util_locale_provider_CalendarNameProviderImpl$LengthBasedComparator_h_
#define _sun_util_locale_provider_CalendarNameProviderImpl$LengthBasedComparator_h_
//$ class sun.util.locale.provider.CalendarNameProviderImpl$LengthBasedComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class CalendarNameProviderImpl$LengthBasedComparator : public ::java::util::Comparator {
	$class(CalendarNameProviderImpl$LengthBasedComparator, 0, ::java::util::Comparator)
public:
	CalendarNameProviderImpl$LengthBasedComparator();
	void init$();
	virtual int32_t compare($String* o1, $String* o2);
	virtual int32_t compare(Object$* o1, Object$* o2) override;
	static ::sun::util::locale::provider::CalendarNameProviderImpl$LengthBasedComparator* INSTANCE;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_util_locale_provider_CalendarNameProviderImpl$LengthBasedComparator_h_