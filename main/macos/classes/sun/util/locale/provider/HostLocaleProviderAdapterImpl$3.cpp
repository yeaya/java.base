#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$3.h>

#include <java/lang/ref/SoftReference.h>
#include <java/text/DateFormatSymbols.h>
#include <java/text/spi/DateFormatSymbolsProvider.h>
#include <java/util/Locale$Category.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <jcpp.h>

#undef FORMAT

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $DateFormatSymbolsProvider = ::java::text::spi::DateFormatSymbolsProvider;
using $Locale = ::java::util::Locale;
using $Locale$Category = ::java::util::Locale$Category;
using $Set = ::java::util::Set;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$3::*)()>(&HostLocaleProviderAdapterImpl$3::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/DateFormatSymbols;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$3_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getDateFormatSymbolsProvider",
	"()Ljava/text/spi/DateFormatSymbolsProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$3_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$3",
	"java.text.spi.DateFormatSymbolsProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$3_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$3_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$3($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$3));
}

void HostLocaleProviderAdapterImpl$3::init$() {
	$DateFormatSymbolsProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$3::getAvailableLocales() {
	$init($Locale$Category);
	if (isSupportedLocale($($Locale::getDefault($Locale$Category::FORMAT)))) {
		$init($HostLocaleProviderAdapterImpl);
		return $HostLocaleProviderAdapterImpl::supportedLocale;
	}
	return $new($LocaleArray, 0);
}

bool HostLocaleProviderAdapterImpl$3::isSupportedLocale($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, base, $nc(locale)->stripExtensions());
	$init($HostLocaleProviderAdapterImpl);
	if ($nc($HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains(base)) {
		return $nc($($HostLocaleProviderAdapterImpl::getCalendarID($(locale->toLanguageTag()))))->equals("gregorian"_s);
	}
	return false;
}

$DateFormatSymbols* HostLocaleProviderAdapterImpl$3::getInstance($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($DateFormatSymbols, dateFormatSymbols, nullptr);
	$init($HostLocaleProviderAdapterImpl);
	$var($SoftReference, ref, $cast($SoftReference, $nc($HostLocaleProviderAdapterImpl::dateFormatSymbolsMap)->get(locale)));
	if (ref == nullptr || ($assign(dateFormatSymbols, $cast($DateFormatSymbols, $nc(ref)->get()))) == nullptr) {
		$assign(dateFormatSymbols, $new($DateFormatSymbols, locale));
		$var($String, langTag, $nc(locale)->toLanguageTag());
		dateFormatSymbols->setAmPmStrings($($HostLocaleProviderAdapterImpl::getAmPmStrings(langTag, $(dateFormatSymbols->getAmPmStrings()))));
		dateFormatSymbols->setEras($($HostLocaleProviderAdapterImpl::getEras(langTag, $(dateFormatSymbols->getEras()))));
		dateFormatSymbols->setMonths($($HostLocaleProviderAdapterImpl::getMonths(langTag, $(dateFormatSymbols->getMonths()))));
		dateFormatSymbols->setShortMonths($($HostLocaleProviderAdapterImpl::getShortMonths(langTag, $(dateFormatSymbols->getShortMonths()))));
		dateFormatSymbols->setWeekdays($($HostLocaleProviderAdapterImpl::getWeekdays(langTag, $(dateFormatSymbols->getWeekdays()))));
		dateFormatSymbols->setShortWeekdays($($HostLocaleProviderAdapterImpl::getShortWeekdays(langTag, $(dateFormatSymbols->getShortWeekdays()))));
		$assign(ref, $new($SoftReference, dateFormatSymbols));
		$nc($HostLocaleProviderAdapterImpl::dateFormatSymbolsMap)->put(locale, ref);
	}
	return $cast($DateFormatSymbols, $nc(dateFormatSymbols)->clone());
}

HostLocaleProviderAdapterImpl$3::HostLocaleProviderAdapterImpl$3() {
}

$Class* HostLocaleProviderAdapterImpl$3::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$3, name, initialize, &_HostLocaleProviderAdapterImpl$3_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$3);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$3::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun