#include <sun/util/locale/provider/SPILocaleProviderAdapter$CalendarDataProviderDelegate.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/spi/CalendarDataProvider.h>
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
using $CalendarDataProvider = ::java::util::spi::CalendarDataProvider;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $SPILocaleProviderAdapter = ::sun::util::locale::provider::SPILocaleProviderAdapter;
using $SPILocaleProviderAdapter$Delegate = ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _SPILocaleProviderAdapter$CalendarDataProviderDelegate_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/util/spi/CalendarDataProvider;>;", $PRIVATE | $FINAL, $field(SPILocaleProviderAdapter$CalendarDataProviderDelegate, map)},
	{}
};

$MethodInfo _SPILocaleProviderAdapter$CalendarDataProviderDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SPILocaleProviderAdapter$CalendarDataProviderDelegate::*)()>(&SPILocaleProviderAdapter$CalendarDataProviderDelegate::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;Ljava/util/spi/CalendarDataProvider;>;", $PUBLIC},
	{"getFirstDayOfWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC},
	{"getMinimalDaysInFirstWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$CalendarDataProviderDelegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$CalendarDataProviderDelegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "CalendarDataProviderDelegate", $STATIC},
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$CalendarDataProviderDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.SPILocaleProviderAdapter$CalendarDataProviderDelegate",
	"java.util.spi.CalendarDataProvider",
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	_SPILocaleProviderAdapter$CalendarDataProviderDelegate_FieldInfo_,
	_SPILocaleProviderAdapter$CalendarDataProviderDelegate_MethodInfo_,
	"Ljava/util/spi/CalendarDataProvider;Lsun/util/locale/provider/SPILocaleProviderAdapter$Delegate<Ljava/util/spi/CalendarDataProvider;>;",
	nullptr,
	_SPILocaleProviderAdapter$CalendarDataProviderDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$CalendarDataProviderDelegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$CalendarDataProviderDelegate));
}

int32_t SPILocaleProviderAdapter$CalendarDataProviderDelegate::hashCode() {
	 return this->$CalendarDataProvider::hashCode();
}

bool SPILocaleProviderAdapter$CalendarDataProviderDelegate::equals(Object$* obj) {
	 return this->$CalendarDataProvider::equals(obj);
}

$Object* SPILocaleProviderAdapter$CalendarDataProviderDelegate::clone() {
	 return this->$CalendarDataProvider::clone();
}

$String* SPILocaleProviderAdapter$CalendarDataProviderDelegate::toString() {
	 return this->$CalendarDataProvider::toString();
}

void SPILocaleProviderAdapter$CalendarDataProviderDelegate::finalize() {
	this->$CalendarDataProvider::finalize();
}

void SPILocaleProviderAdapter$CalendarDataProviderDelegate::init$() {
	$CalendarDataProvider::init$();
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

$Map* SPILocaleProviderAdapter$CalendarDataProviderDelegate::getDelegateMap() {
	return this->map;
}

$LocaleArray* SPILocaleProviderAdapter$CalendarDataProviderDelegate::getAvailableLocales() {
	return getAvailableLocalesDelegate();
}

bool SPILocaleProviderAdapter$CalendarDataProviderDelegate::isSupportedLocale($Locale* locale) {
	return isSupportedLocaleDelegate(locale);
}

int32_t SPILocaleProviderAdapter$CalendarDataProviderDelegate::getFirstDayOfWeek($Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($CalendarDataProvider, cdp, $cast($CalendarDataProvider, getImpl(locale)));
	return $nc(cdp)->getFirstDayOfWeek(locale);
}

int32_t SPILocaleProviderAdapter$CalendarDataProviderDelegate::getMinimalDaysInFirstWeek($Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($CalendarDataProvider, cdp, $cast($CalendarDataProvider, getImpl(locale)));
	return $nc(cdp)->getMinimalDaysInFirstWeek(locale);
}

SPILocaleProviderAdapter$CalendarDataProviderDelegate::SPILocaleProviderAdapter$CalendarDataProviderDelegate() {
}

$Class* SPILocaleProviderAdapter$CalendarDataProviderDelegate::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$CalendarDataProviderDelegate, name, initialize, &_SPILocaleProviderAdapter$CalendarDataProviderDelegate_ClassInfo_, allocate$SPILocaleProviderAdapter$CalendarDataProviderDelegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$CalendarDataProviderDelegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun