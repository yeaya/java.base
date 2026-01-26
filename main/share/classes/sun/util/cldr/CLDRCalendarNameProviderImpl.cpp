#include <sun/util/cldr/CLDRCalendarNameProviderImpl.h>

#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <sun/util/locale/provider/CalendarNameProviderImpl.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <jcpp.h>

#undef CLDR
#undef ROOT

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $CalendarNameProviderImpl = ::sun::util::locale::provider::CalendarNameProviderImpl;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;

namespace sun {
	namespace util {
		namespace cldr {

$MethodInfo _CLDRCalendarNameProviderImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(CLDRCalendarNameProviderImpl, init$, void, $LocaleProviderAdapter$Type*, $Set*)},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(CLDRCalendarNameProviderImpl, isSupportedLocale, bool, $Locale*)},
	{}
};

$ClassInfo _CLDRCalendarNameProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.cldr.CLDRCalendarNameProviderImpl",
	"sun.util.locale.provider.CalendarNameProviderImpl",
	nullptr,
	nullptr,
	_CLDRCalendarNameProviderImpl_MethodInfo_
};

$Object* allocate$CLDRCalendarNameProviderImpl($Class* clazz) {
	return $of($alloc(CLDRCalendarNameProviderImpl));
}

void CLDRCalendarNameProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$CalendarNameProviderImpl::init$(type, langtags);
}

bool CLDRCalendarNameProviderImpl::isSupportedLocale($Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$init($Locale);
	if ($nc($Locale::ROOT)->equals(locale)) {
		return true;
	}
	$var($String, calendarType, nullptr);
	if ($nc(locale)->hasExtensions()) {
		$assign(calendarType, locale->getUnicodeLocaleType("ca"_s));
		$assign(locale, locale->stripExtensions());
	}
	if (calendarType != nullptr) {
		{
			$var($String, s2126$, calendarType);
			int32_t tmp2126$ = -1;
			switch (s2126$->hashCode()) {
			case (int32_t)0xA1C2EDB5:
				{
					if (s2126$->equals("buddhist"_s)) {
						tmp2126$ = 0;
					}
					break;
				}
			case (int32_t)0xD3223FB1:
				{
					if (s2126$->equals("japanese"_s)) {
						tmp2126$ = 1;
					}
					break;
				}
			case 0x10EA1509:
				{
					if (s2126$->equals("gregory"_s)) {
						tmp2126$ = 2;
					}
					break;
				}
			case 0x7CCB45C8:
				{
					if (s2126$->equals("islamic"_s)) {
						tmp2126$ = 3;
					}
					break;
				}
			case 0x0001B9C6:
				{
					if (s2126$->equals("roc"_s)) {
						tmp2126$ = 4;
					}
					break;
				}
			}
			switch (tmp2126$) {
			case 0:
				{}
			case 1:
				{}
			case 2:
				{}
			case 3:
				{}
			case 4:
				{
					break;
				}
			default:
				{
					return false;
				}
			}
		}
	}
	$init($LocaleProviderAdapter$Type);
	return $nc($($LocaleProviderAdapter::forType($LocaleProviderAdapter$Type::CLDR)))->isSupportedProviderLocale(locale, this->langtags);
}

CLDRCalendarNameProviderImpl::CLDRCalendarNameProviderImpl() {
}

$Class* CLDRCalendarNameProviderImpl::load$($String* name, bool initialize) {
	$loadClass(CLDRCalendarNameProviderImpl, name, initialize, &_CLDRCalendarNameProviderImpl_ClassInfo_, allocate$CLDRCalendarNameProviderImpl);
	return class$;
}

$Class* CLDRCalendarNameProviderImpl::class$ = nullptr;

		} // cldr
	} // util
} // sun