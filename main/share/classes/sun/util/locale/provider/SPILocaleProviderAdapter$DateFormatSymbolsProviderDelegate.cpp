#include <sun/util/locale/provider/SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate.h>

#include <java/text/DateFormatSymbols.h>
#include <java/text/spi/DateFormatSymbolsProvider.h>
#include <java/util/AbstractMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $DateFormatSymbolsProvider = ::java::text::spi::DateFormatSymbolsProvider;
using $AbstractMap = ::java::util::AbstractMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/DateFormatSymbolsProvider;>;", $PRIVATE | $FINAL, $field(SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate, map)},
	{}
};

$MethodInfo _SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::*)()>(&SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/DateFormatSymbolsProvider;>;", $PUBLIC},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/DateFormatSymbols;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "DateFormatSymbolsProviderDelegate", $STATIC},
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate",
	"java.text.spi.DateFormatSymbolsProvider",
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	_SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate_FieldInfo_,
	_SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate_MethodInfo_,
	"Ljava/text/spi/DateFormatSymbolsProvider;Lsun/util/locale/provider/SPILocaleProviderAdapter$Delegate<Ljava/text/spi/DateFormatSymbolsProvider;>;",
	nullptr,
	_SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate));
}

int32_t SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::hashCode() {
	 return this->$DateFormatSymbolsProvider::hashCode();
}

bool SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::equals(Object$* obj) {
	 return this->$DateFormatSymbolsProvider::equals(obj);
}

$Object* SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::clone() {
	 return this->$DateFormatSymbolsProvider::clone();
}

$String* SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::toString() {
	 return this->$DateFormatSymbolsProvider::toString();
}

void SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::finalize() {
	this->$DateFormatSymbolsProvider::finalize();
}

void SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::init$() {
	$DateFormatSymbolsProvider::init$();
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

$Map* SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::getDelegateMap() {
	return this->map;
}

$LocaleArray* SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::getAvailableLocales() {
	return getAvailableLocalesDelegate();
}

bool SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::isSupportedLocale($Locale* locale) {
	return isSupportedLocaleDelegate(locale);
}

$DateFormatSymbols* SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::getInstance($Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($DateFormatSymbolsProvider, dfsp, $cast($DateFormatSymbolsProvider, getImpl(locale)));
	return $nc(dfsp)->getInstance(locale);
}

SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate() {
}

$Class* SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate, name, initialize, &_SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate_ClassInfo_, allocate$SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun