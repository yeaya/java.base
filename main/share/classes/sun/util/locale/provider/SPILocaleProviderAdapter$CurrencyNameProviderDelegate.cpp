#include <sun/util/locale/provider/SPILocaleProviderAdapter$CurrencyNameProviderDelegate.h>

#include <java/util/AbstractMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/spi/CurrencyNameProvider.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CurrencyNameProvider = ::java::util::spi::CurrencyNameProvider;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $SPILocaleProviderAdapter = ::sun::util::locale::provider::SPILocaleProviderAdapter;
using $SPILocaleProviderAdapter$Delegate = ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _SPILocaleProviderAdapter$CurrencyNameProviderDelegate_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/util/spi/CurrencyNameProvider;>;", $PRIVATE | $FINAL, $field(SPILocaleProviderAdapter$CurrencyNameProviderDelegate, map)},
	{}
};

$MethodInfo _SPILocaleProviderAdapter$CurrencyNameProviderDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SPILocaleProviderAdapter$CurrencyNameProviderDelegate::*)()>(&SPILocaleProviderAdapter$CurrencyNameProviderDelegate::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;Ljava/util/spi/CurrencyNameProvider;>;", $PUBLIC},
	{"getDisplayName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSymbol", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$CurrencyNameProviderDelegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$CurrencyNameProviderDelegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "CurrencyNameProviderDelegate", $STATIC},
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$CurrencyNameProviderDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.SPILocaleProviderAdapter$CurrencyNameProviderDelegate",
	"java.util.spi.CurrencyNameProvider",
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	_SPILocaleProviderAdapter$CurrencyNameProviderDelegate_FieldInfo_,
	_SPILocaleProviderAdapter$CurrencyNameProviderDelegate_MethodInfo_,
	"Ljava/util/spi/CurrencyNameProvider;Lsun/util/locale/provider/SPILocaleProviderAdapter$Delegate<Ljava/util/spi/CurrencyNameProvider;>;",
	nullptr,
	_SPILocaleProviderAdapter$CurrencyNameProviderDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$CurrencyNameProviderDelegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$CurrencyNameProviderDelegate));
}

int32_t SPILocaleProviderAdapter$CurrencyNameProviderDelegate::hashCode() {
	 return this->$CurrencyNameProvider::hashCode();
}

bool SPILocaleProviderAdapter$CurrencyNameProviderDelegate::equals(Object$* obj) {
	 return this->$CurrencyNameProvider::equals(obj);
}

$Object* SPILocaleProviderAdapter$CurrencyNameProviderDelegate::clone() {
	 return this->$CurrencyNameProvider::clone();
}

$String* SPILocaleProviderAdapter$CurrencyNameProviderDelegate::toString() {
	 return this->$CurrencyNameProvider::toString();
}

void SPILocaleProviderAdapter$CurrencyNameProviderDelegate::finalize() {
	this->$CurrencyNameProvider::finalize();
}

void SPILocaleProviderAdapter$CurrencyNameProviderDelegate::init$() {
	$CurrencyNameProvider::init$();
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

$Map* SPILocaleProviderAdapter$CurrencyNameProviderDelegate::getDelegateMap() {
	return this->map;
}

$LocaleArray* SPILocaleProviderAdapter$CurrencyNameProviderDelegate::getAvailableLocales() {
	return getAvailableLocalesDelegate();
}

bool SPILocaleProviderAdapter$CurrencyNameProviderDelegate::isSupportedLocale($Locale* locale) {
	return isSupportedLocaleDelegate(locale);
}

$String* SPILocaleProviderAdapter$CurrencyNameProviderDelegate::getSymbol($String* currencyCode, $Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($CurrencyNameProvider, cnp, $cast($CurrencyNameProvider, getImpl(locale)));
	return $nc(cnp)->getSymbol(currencyCode, locale);
}

$String* SPILocaleProviderAdapter$CurrencyNameProviderDelegate::getDisplayName($String* currencyCode, $Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($CurrencyNameProvider, cnp, $cast($CurrencyNameProvider, getImpl(locale)));
	return $nc(cnp)->getDisplayName(currencyCode, locale);
}

SPILocaleProviderAdapter$CurrencyNameProviderDelegate::SPILocaleProviderAdapter$CurrencyNameProviderDelegate() {
}

$Class* SPILocaleProviderAdapter$CurrencyNameProviderDelegate::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$CurrencyNameProviderDelegate, name, initialize, &_SPILocaleProviderAdapter$CurrencyNameProviderDelegate_ClassInfo_, allocate$SPILocaleProviderAdapter$CurrencyNameProviderDelegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$CurrencyNameProviderDelegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun