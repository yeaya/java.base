#include <sun/util/locale/provider/SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate.h>

#include <java/text/DecimalFormatSymbols.h>
#include <java/text/spi/DecimalFormatSymbolsProvider.h>
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
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $DecimalFormatSymbolsProvider = ::java::text::spi::DecimalFormatSymbolsProvider;
using $AbstractMap = ::java::util::AbstractMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/DecimalFormatSymbolsProvider;>;", $PRIVATE | $FINAL, $field(SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate, map)},
	{}
};

$MethodInfo _SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::*)()>(&SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/DecimalFormatSymbolsProvider;>;", $PUBLIC},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "DecimalFormatSymbolsProviderDelegate", $STATIC},
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate",
	"java.text.spi.DecimalFormatSymbolsProvider",
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	_SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate_FieldInfo_,
	_SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate_MethodInfo_,
	"Ljava/text/spi/DecimalFormatSymbolsProvider;Lsun/util/locale/provider/SPILocaleProviderAdapter$Delegate<Ljava/text/spi/DecimalFormatSymbolsProvider;>;",
	nullptr,
	_SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate));
}

int32_t SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::hashCode() {
	 return this->$DecimalFormatSymbolsProvider::hashCode();
}

bool SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::equals(Object$* obj) {
	 return this->$DecimalFormatSymbolsProvider::equals(obj);
}

$Object* SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::clone() {
	 return this->$DecimalFormatSymbolsProvider::clone();
}

$String* SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::toString() {
	 return this->$DecimalFormatSymbolsProvider::toString();
}

void SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::finalize() {
	this->$DecimalFormatSymbolsProvider::finalize();
}

void SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::init$() {
	$DecimalFormatSymbolsProvider::init$();
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

$Map* SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::getDelegateMap() {
	return this->map;
}

$LocaleArray* SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::getAvailableLocales() {
	return getAvailableLocalesDelegate();
}

bool SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::isSupportedLocale($Locale* locale) {
	return isSupportedLocaleDelegate(locale);
}

$DecimalFormatSymbols* SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::getInstance($Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($DecimalFormatSymbolsProvider, dfsp, $cast($DecimalFormatSymbolsProvider, getImpl(locale)));
	return $nc(dfsp)->getInstance(locale);
}

SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate() {
}

$Class* SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate, name, initialize, &_SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate_ClassInfo_, allocate$SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun