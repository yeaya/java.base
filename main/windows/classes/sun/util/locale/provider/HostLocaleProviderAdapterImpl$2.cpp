#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$2.h>

#include <java/lang/ref/SoftReference.h>
#include <java/text/DateFormatSymbols.h>
#include <java/text/spi/DateFormatSymbolsProvider.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $DateFormatSymbolsProvider = ::java::text::spi::DateFormatSymbolsProvider;
using $Locale = ::java::util::Locale;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$2::*)()>(&HostLocaleProviderAdapterImpl$2::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/DateFormatSymbols;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$2_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getDateFormatSymbolsProvider",
	"()Ljava/text/spi/DateFormatSymbolsProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$2_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$2",
	"java.text.spi.DateFormatSymbolsProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$2_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$2_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$2($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$2));
}

void HostLocaleProviderAdapterImpl$2::init$() {
	$DateFormatSymbolsProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$2::getAvailableLocales() {
	return $HostLocaleProviderAdapterImpl::getSupportedCalendarLocales();
}

bool HostLocaleProviderAdapterImpl$2::isSupportedLocale($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::isSupportedCalendarLocale(locale);
}

$DateFormatSymbols* HostLocaleProviderAdapterImpl$2::getInstance($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($DateFormatSymbols, dfs, nullptr);
	$init($HostLocaleProviderAdapterImpl);
	$var($SoftReference, ref, $cast($SoftReference, $nc($HostLocaleProviderAdapterImpl::dateFormatSymbolsCache)->get(locale)));
	if (ref == nullptr || ($assign(dfs, $cast($DateFormatSymbols, $nc(ref)->get()))) == nullptr) {
		$assign(dfs, $new($DateFormatSymbols, locale));
		$var($String, langTag, $nc($($HostLocaleProviderAdapterImpl::removeExtensions(locale)))->toLanguageTag());
		dfs->setAmPmStrings($($HostLocaleProviderAdapterImpl::getAmPmStrings(langTag, $(dfs->getAmPmStrings()))));
		dfs->setEras($($HostLocaleProviderAdapterImpl::getEras(langTag, $(dfs->getEras()))));
		dfs->setMonths($($HostLocaleProviderAdapterImpl::getMonths(langTag, $(dfs->getMonths()))));
		dfs->setShortMonths($($HostLocaleProviderAdapterImpl::getShortMonths(langTag, $(dfs->getShortMonths()))));
		dfs->setWeekdays($($HostLocaleProviderAdapterImpl::getWeekdays(langTag, $(dfs->getWeekdays()))));
		dfs->setShortWeekdays($($HostLocaleProviderAdapterImpl::getShortWeekdays(langTag, $(dfs->getShortWeekdays()))));
		$assign(ref, $new($SoftReference, dfs));
		$nc($HostLocaleProviderAdapterImpl::dateFormatSymbolsCache)->put(locale, ref);
	}
	return $cast($DateFormatSymbols, $nc(dfs)->clone());
}

HostLocaleProviderAdapterImpl$2::HostLocaleProviderAdapterImpl$2() {
}

$Class* HostLocaleProviderAdapterImpl$2::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$2, name, initialize, &_HostLocaleProviderAdapterImpl$2_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$2);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$2::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun