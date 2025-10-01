#include <sun/util/locale/provider/SPILocaleProviderAdapter$CalendarNameProviderDelegate.h>

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
#include <java/util/spi/CalendarNameProvider.h>
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
using $CalendarNameProvider = ::java::util::spi::CalendarNameProvider;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $SPILocaleProviderAdapter = ::sun::util::locale::provider::SPILocaleProviderAdapter;
using $SPILocaleProviderAdapter$Delegate = ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _SPILocaleProviderAdapter$CalendarNameProviderDelegate_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/util/spi/CalendarNameProvider;>;", $PRIVATE | $FINAL, $field(SPILocaleProviderAdapter$CalendarNameProviderDelegate, map)},
	{}
};

$MethodInfo _SPILocaleProviderAdapter$CalendarNameProviderDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SPILocaleProviderAdapter$CalendarNameProviderDelegate::*)()>(&SPILocaleProviderAdapter$CalendarNameProviderDelegate::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;Ljava/util/spi/CalendarNameProvider;>;", $PUBLIC},
	{"getDisplayName", "(Ljava/lang/String;IIILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayNames", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map;", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$CalendarNameProviderDelegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$CalendarNameProviderDelegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "CalendarNameProviderDelegate", $STATIC},
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$CalendarNameProviderDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.SPILocaleProviderAdapter$CalendarNameProviderDelegate",
	"java.util.spi.CalendarNameProvider",
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	_SPILocaleProviderAdapter$CalendarNameProviderDelegate_FieldInfo_,
	_SPILocaleProviderAdapter$CalendarNameProviderDelegate_MethodInfo_,
	"Ljava/util/spi/CalendarNameProvider;Lsun/util/locale/provider/SPILocaleProviderAdapter$Delegate<Ljava/util/spi/CalendarNameProvider;>;",
	nullptr,
	_SPILocaleProviderAdapter$CalendarNameProviderDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$CalendarNameProviderDelegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$CalendarNameProviderDelegate));
}

int32_t SPILocaleProviderAdapter$CalendarNameProviderDelegate::hashCode() {
	 return this->$CalendarNameProvider::hashCode();
}

bool SPILocaleProviderAdapter$CalendarNameProviderDelegate::equals(Object$* obj) {
	 return this->$CalendarNameProvider::equals(obj);
}

$Object* SPILocaleProviderAdapter$CalendarNameProviderDelegate::clone() {
	 return this->$CalendarNameProvider::clone();
}

$String* SPILocaleProviderAdapter$CalendarNameProviderDelegate::toString() {
	 return this->$CalendarNameProvider::toString();
}

void SPILocaleProviderAdapter$CalendarNameProviderDelegate::finalize() {
	this->$CalendarNameProvider::finalize();
}

void SPILocaleProviderAdapter$CalendarNameProviderDelegate::init$() {
	$CalendarNameProvider::init$();
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

$Map* SPILocaleProviderAdapter$CalendarNameProviderDelegate::getDelegateMap() {
	return this->map;
}

$LocaleArray* SPILocaleProviderAdapter$CalendarNameProviderDelegate::getAvailableLocales() {
	return getAvailableLocalesDelegate();
}

bool SPILocaleProviderAdapter$CalendarNameProviderDelegate::isSupportedLocale($Locale* locale) {
	return isSupportedLocaleDelegate(locale);
}

$String* SPILocaleProviderAdapter$CalendarNameProviderDelegate::getDisplayName($String* calendarType, int32_t field, int32_t value, int32_t style, $Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($CalendarNameProvider, cdp, $cast($CalendarNameProvider, getImpl(locale)));
	return $nc(cdp)->getDisplayName(calendarType, field, value, style, locale);
}

$Map* SPILocaleProviderAdapter$CalendarNameProviderDelegate::getDisplayNames($String* calendarType, int32_t field, int32_t style, $Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($CalendarNameProvider, cdp, $cast($CalendarNameProvider, getImpl(locale)));
	return $nc(cdp)->getDisplayNames(calendarType, field, style, locale);
}

SPILocaleProviderAdapter$CalendarNameProviderDelegate::SPILocaleProviderAdapter$CalendarNameProviderDelegate() {
}

$Class* SPILocaleProviderAdapter$CalendarNameProviderDelegate::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$CalendarNameProviderDelegate, name, initialize, &_SPILocaleProviderAdapter$CalendarNameProviderDelegate_ClassInfo_, allocate$SPILocaleProviderAdapter$CalendarNameProviderDelegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$CalendarNameProviderDelegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun