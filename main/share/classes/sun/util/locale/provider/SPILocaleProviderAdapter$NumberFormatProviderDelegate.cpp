#include <sun/util/locale/provider/SPILocaleProviderAdapter$NumberFormatProviderDelegate.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/NumberFormat$Style.h>
#include <java/text/NumberFormat.h>
#include <java/text/spi/NumberFormatProvider.h>
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
using $NumberFormat = ::java::text::NumberFormat;
using $NumberFormat$Style = ::java::text::NumberFormat$Style;
using $NumberFormatProvider = ::java::text::spi::NumberFormatProvider;
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

$FieldInfo _SPILocaleProviderAdapter$NumberFormatProviderDelegate_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/NumberFormatProvider;>;", $PRIVATE | $FINAL, $field(SPILocaleProviderAdapter$NumberFormatProviderDelegate, map)},
	{}
};

$MethodInfo _SPILocaleProviderAdapter$NumberFormatProviderDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SPILocaleProviderAdapter$NumberFormatProviderDelegate::*)()>(&SPILocaleProviderAdapter$NumberFormatProviderDelegate::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getCompactNumberInstance", "(Ljava/util/Locale;Ljava/text/NumberFormat$Style;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/NumberFormatProvider;>;", $PUBLIC},
	{"getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$NumberFormatProviderDelegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$NumberFormatProviderDelegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "NumberFormatProviderDelegate", $STATIC},
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$NumberFormatProviderDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.SPILocaleProviderAdapter$NumberFormatProviderDelegate",
	"java.text.spi.NumberFormatProvider",
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	_SPILocaleProviderAdapter$NumberFormatProviderDelegate_FieldInfo_,
	_SPILocaleProviderAdapter$NumberFormatProviderDelegate_MethodInfo_,
	"Ljava/text/spi/NumberFormatProvider;Lsun/util/locale/provider/SPILocaleProviderAdapter$Delegate<Ljava/text/spi/NumberFormatProvider;>;",
	nullptr,
	_SPILocaleProviderAdapter$NumberFormatProviderDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$NumberFormatProviderDelegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$NumberFormatProviderDelegate));
}

int32_t SPILocaleProviderAdapter$NumberFormatProviderDelegate::hashCode() {
	 return this->$NumberFormatProvider::hashCode();
}

bool SPILocaleProviderAdapter$NumberFormatProviderDelegate::equals(Object$* obj) {
	 return this->$NumberFormatProvider::equals(obj);
}

$Object* SPILocaleProviderAdapter$NumberFormatProviderDelegate::clone() {
	 return this->$NumberFormatProvider::clone();
}

$String* SPILocaleProviderAdapter$NumberFormatProviderDelegate::toString() {
	 return this->$NumberFormatProvider::toString();
}

void SPILocaleProviderAdapter$NumberFormatProviderDelegate::finalize() {
	this->$NumberFormatProvider::finalize();
}

void SPILocaleProviderAdapter$NumberFormatProviderDelegate::init$() {
	$NumberFormatProvider::init$();
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

$Map* SPILocaleProviderAdapter$NumberFormatProviderDelegate::getDelegateMap() {
	return this->map;
}

$LocaleArray* SPILocaleProviderAdapter$NumberFormatProviderDelegate::getAvailableLocales() {
	return getAvailableLocalesDelegate();
}

bool SPILocaleProviderAdapter$NumberFormatProviderDelegate::isSupportedLocale($Locale* locale) {
	return isSupportedLocaleDelegate(locale);
}

$NumberFormat* SPILocaleProviderAdapter$NumberFormatProviderDelegate::getCurrencyInstance($Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($NumberFormatProvider, nfp, $cast($NumberFormatProvider, getImpl(locale)));
	return $nc(nfp)->getCurrencyInstance(locale);
}

$NumberFormat* SPILocaleProviderAdapter$NumberFormatProviderDelegate::getIntegerInstance($Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($NumberFormatProvider, nfp, $cast($NumberFormatProvider, getImpl(locale)));
	return $nc(nfp)->getIntegerInstance(locale);
}

$NumberFormat* SPILocaleProviderAdapter$NumberFormatProviderDelegate::getNumberInstance($Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($NumberFormatProvider, nfp, $cast($NumberFormatProvider, getImpl(locale)));
	return $nc(nfp)->getNumberInstance(locale);
}

$NumberFormat* SPILocaleProviderAdapter$NumberFormatProviderDelegate::getPercentInstance($Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($NumberFormatProvider, nfp, $cast($NumberFormatProvider, getImpl(locale)));
	return $nc(nfp)->getPercentInstance(locale);
}

$NumberFormat* SPILocaleProviderAdapter$NumberFormatProviderDelegate::getCompactNumberInstance($Locale* locale$renamed, $NumberFormat$Style* style) {
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($NumberFormatProvider, nfp, $cast($NumberFormatProvider, getImpl(locale)));
	return $nc(nfp)->getCompactNumberInstance(locale, style);
}

SPILocaleProviderAdapter$NumberFormatProviderDelegate::SPILocaleProviderAdapter$NumberFormatProviderDelegate() {
}

$Class* SPILocaleProviderAdapter$NumberFormatProviderDelegate::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$NumberFormatProviderDelegate, name, initialize, &_SPILocaleProviderAdapter$NumberFormatProviderDelegate_ClassInfo_, allocate$SPILocaleProviderAdapter$NumberFormatProviderDelegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$NumberFormatProviderDelegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun