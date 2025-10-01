#include <sun/util/locale/provider/SPILocaleProviderAdapter$DateFormatProviderDelegate.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DateFormat.h>
#include <java/text/spi/DateFormatProvider.h>
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
using $DateFormat = ::java::text::DateFormat;
using $DateFormatProvider = ::java::text::spi::DateFormatProvider;
using $AbstractMap = ::java::util::AbstractMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $SPILocaleProviderAdapter = ::sun::util::locale::provider::SPILocaleProviderAdapter;
using $SPILocaleProviderAdapter$Delegate = ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _SPILocaleProviderAdapter$DateFormatProviderDelegate_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/DateFormatProvider;>;", $PRIVATE | $FINAL, $field(SPILocaleProviderAdapter$DateFormatProviderDelegate, map)},
	{}
};

$MethodInfo _SPILocaleProviderAdapter$DateFormatProviderDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SPILocaleProviderAdapter$DateFormatProviderDelegate::*)()>(&SPILocaleProviderAdapter$DateFormatProviderDelegate::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDateInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"getDateTimeInstance", "(IILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/DateFormatProvider;>;", $PUBLIC},
	{"getTimeInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$DateFormatProviderDelegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$DateFormatProviderDelegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "DateFormatProviderDelegate", $STATIC},
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$DateFormatProviderDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.SPILocaleProviderAdapter$DateFormatProviderDelegate",
	"java.text.spi.DateFormatProvider",
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	_SPILocaleProviderAdapter$DateFormatProviderDelegate_FieldInfo_,
	_SPILocaleProviderAdapter$DateFormatProviderDelegate_MethodInfo_,
	"Ljava/text/spi/DateFormatProvider;Lsun/util/locale/provider/SPILocaleProviderAdapter$Delegate<Ljava/text/spi/DateFormatProvider;>;",
	nullptr,
	_SPILocaleProviderAdapter$DateFormatProviderDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$DateFormatProviderDelegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$DateFormatProviderDelegate));
}

int32_t SPILocaleProviderAdapter$DateFormatProviderDelegate::hashCode() {
	 return this->$DateFormatProvider::hashCode();
}

bool SPILocaleProviderAdapter$DateFormatProviderDelegate::equals(Object$* obj) {
	 return this->$DateFormatProvider::equals(obj);
}

$Object* SPILocaleProviderAdapter$DateFormatProviderDelegate::clone() {
	 return this->$DateFormatProvider::clone();
}

$String* SPILocaleProviderAdapter$DateFormatProviderDelegate::toString() {
	 return this->$DateFormatProvider::toString();
}

void SPILocaleProviderAdapter$DateFormatProviderDelegate::finalize() {
	this->$DateFormatProvider::finalize();
}

void SPILocaleProviderAdapter$DateFormatProviderDelegate::init$() {
	$DateFormatProvider::init$();
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

$Map* SPILocaleProviderAdapter$DateFormatProviderDelegate::getDelegateMap() {
	return this->map;
}

$LocaleArray* SPILocaleProviderAdapter$DateFormatProviderDelegate::getAvailableLocales() {
	return getAvailableLocalesDelegate();
}

bool SPILocaleProviderAdapter$DateFormatProviderDelegate::isSupportedLocale($Locale* locale) {
	return isSupportedLocaleDelegate(locale);
}

$DateFormat* SPILocaleProviderAdapter$DateFormatProviderDelegate::getTimeInstance(int32_t style, $Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($DateFormatProvider, dfp, $cast($DateFormatProvider, getImpl(locale)));
	return $nc(dfp)->getTimeInstance(style, locale);
}

$DateFormat* SPILocaleProviderAdapter$DateFormatProviderDelegate::getDateInstance(int32_t style, $Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($DateFormatProvider, dfp, $cast($DateFormatProvider, getImpl(locale)));
	return $nc(dfp)->getDateInstance(style, locale);
}

$DateFormat* SPILocaleProviderAdapter$DateFormatProviderDelegate::getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, $Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($DateFormatProvider, dfp, $cast($DateFormatProvider, getImpl(locale)));
	return $nc(dfp)->getDateTimeInstance(dateStyle, timeStyle, locale);
}

SPILocaleProviderAdapter$DateFormatProviderDelegate::SPILocaleProviderAdapter$DateFormatProviderDelegate() {
}

$Class* SPILocaleProviderAdapter$DateFormatProviderDelegate::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$DateFormatProviderDelegate, name, initialize, &_SPILocaleProviderAdapter$DateFormatProviderDelegate_ClassInfo_, allocate$SPILocaleProviderAdapter$DateFormatProviderDelegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$DateFormatProviderDelegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun