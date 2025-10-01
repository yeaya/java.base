#include <sun/util/locale/provider/SPILocaleProviderAdapter$TimeZoneNameProviderDelegate.h>

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
#include <java/util/spi/LocaleServiceProvider.h>
#include <java/util/spi/TimeZoneNameProvider.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter.h>
#include <jcpp.h>

#undef ID

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $TimeZoneNameProvider = ::java::util::spi::TimeZoneNameProvider;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $SPILocaleProviderAdapter = ::sun::util::locale::provider::SPILocaleProviderAdapter;
using $SPILocaleProviderAdapter$Delegate = ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _SPILocaleProviderAdapter$TimeZoneNameProviderDelegate_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/util/spi/TimeZoneNameProvider;>;", $PRIVATE | $FINAL, $field(SPILocaleProviderAdapter$TimeZoneNameProviderDelegate, map)},
	{}
};

$MethodInfo _SPILocaleProviderAdapter$TimeZoneNameProviderDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::*)()>(&SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;Ljava/util/spi/TimeZoneNameProvider;>;", $PUBLIC},
	{"getDisplayName", "(Ljava/lang/String;ZILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getGenericDisplayName", "(Ljava/lang/String;ILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$TimeZoneNameProviderDelegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$TimeZoneNameProviderDelegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "TimeZoneNameProviderDelegate", $STATIC},
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$TimeZoneNameProviderDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.SPILocaleProviderAdapter$TimeZoneNameProviderDelegate",
	"java.util.spi.TimeZoneNameProvider",
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	_SPILocaleProviderAdapter$TimeZoneNameProviderDelegate_FieldInfo_,
	_SPILocaleProviderAdapter$TimeZoneNameProviderDelegate_MethodInfo_,
	"Ljava/util/spi/TimeZoneNameProvider;Lsun/util/locale/provider/SPILocaleProviderAdapter$Delegate<Ljava/util/spi/TimeZoneNameProvider;>;",
	nullptr,
	_SPILocaleProviderAdapter$TimeZoneNameProviderDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$TimeZoneNameProviderDelegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$TimeZoneNameProviderDelegate));
}

int32_t SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::hashCode() {
	 return this->$TimeZoneNameProvider::hashCode();
}

bool SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::equals(Object$* obj) {
	 return this->$TimeZoneNameProvider::equals(obj);
}

$Object* SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::clone() {
	 return this->$TimeZoneNameProvider::clone();
}

$String* SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::toString() {
	 return this->$TimeZoneNameProvider::toString();
}

void SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::finalize() {
	this->$TimeZoneNameProvider::finalize();
}

void SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::init$() {
	$TimeZoneNameProvider::init$();
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

$Map* SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::getDelegateMap() {
	return this->map;
}

$LocaleArray* SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::getAvailableLocales() {
	return getAvailableLocalesDelegate();
}

bool SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::isSupportedLocale($Locale* locale) {
	return isSupportedLocaleDelegate(locale);
}

$String* SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::getDisplayName($String* ID, bool daylight, int32_t style, $Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($TimeZoneNameProvider, tznp, $cast($TimeZoneNameProvider, getImpl(locale)));
	return $nc(tznp)->getDisplayName(ID, daylight, style, locale);
}

$String* SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::getGenericDisplayName($String* ID, int32_t style, $Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($TimeZoneNameProvider, tznp, $cast($TimeZoneNameProvider, getImpl(locale)));
	return $nc(tznp)->getGenericDisplayName(ID, style, locale);
}

SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::SPILocaleProviderAdapter$TimeZoneNameProviderDelegate() {
}

$Class* SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$TimeZoneNameProviderDelegate, name, initialize, &_SPILocaleProviderAdapter$TimeZoneNameProviderDelegate_ClassInfo_, allocate$SPILocaleProviderAdapter$TimeZoneNameProviderDelegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$TimeZoneNameProviderDelegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun