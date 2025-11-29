#include <sun/util/locale/provider/SPILocaleProviderAdapter$LocaleNameProviderDelegate.h>

#include <java/util/AbstractMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/spi/LocaleNameProvider.h>
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
using $LocaleNameProvider = ::java::util::spi::LocaleNameProvider;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _SPILocaleProviderAdapter$LocaleNameProviderDelegate_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/util/spi/LocaleNameProvider;>;", $PRIVATE | $FINAL, $field(SPILocaleProviderAdapter$LocaleNameProviderDelegate, map)},
	{}
};

$MethodInfo _SPILocaleProviderAdapter$LocaleNameProviderDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SPILocaleProviderAdapter$LocaleNameProviderDelegate::*)()>(&SPILocaleProviderAdapter$LocaleNameProviderDelegate::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;Ljava/util/spi/LocaleNameProvider;>;", $PUBLIC},
	{"getDisplayCountry", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayLanguage", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayScript", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayUnicodeExtensionKey", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayUnicodeExtensionType", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayVariant", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$LocaleNameProviderDelegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$LocaleNameProviderDelegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "LocaleNameProviderDelegate", $STATIC},
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$LocaleNameProviderDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.SPILocaleProviderAdapter$LocaleNameProviderDelegate",
	"java.util.spi.LocaleNameProvider",
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	_SPILocaleProviderAdapter$LocaleNameProviderDelegate_FieldInfo_,
	_SPILocaleProviderAdapter$LocaleNameProviderDelegate_MethodInfo_,
	"Ljava/util/spi/LocaleNameProvider;Lsun/util/locale/provider/SPILocaleProviderAdapter$Delegate<Ljava/util/spi/LocaleNameProvider;>;",
	nullptr,
	_SPILocaleProviderAdapter$LocaleNameProviderDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$LocaleNameProviderDelegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$LocaleNameProviderDelegate));
}

int32_t SPILocaleProviderAdapter$LocaleNameProviderDelegate::hashCode() {
	 return this->$LocaleNameProvider::hashCode();
}

bool SPILocaleProviderAdapter$LocaleNameProviderDelegate::equals(Object$* obj) {
	 return this->$LocaleNameProvider::equals(obj);
}

$Object* SPILocaleProviderAdapter$LocaleNameProviderDelegate::clone() {
	 return this->$LocaleNameProvider::clone();
}

$String* SPILocaleProviderAdapter$LocaleNameProviderDelegate::toString() {
	 return this->$LocaleNameProvider::toString();
}

void SPILocaleProviderAdapter$LocaleNameProviderDelegate::finalize() {
	this->$LocaleNameProvider::finalize();
}

void SPILocaleProviderAdapter$LocaleNameProviderDelegate::init$() {
	$LocaleNameProvider::init$();
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

$Map* SPILocaleProviderAdapter$LocaleNameProviderDelegate::getDelegateMap() {
	return this->map;
}

$LocaleArray* SPILocaleProviderAdapter$LocaleNameProviderDelegate::getAvailableLocales() {
	return getAvailableLocalesDelegate();
}

bool SPILocaleProviderAdapter$LocaleNameProviderDelegate::isSupportedLocale($Locale* locale) {
	return isSupportedLocaleDelegate(locale);
}

$String* SPILocaleProviderAdapter$LocaleNameProviderDelegate::getDisplayLanguage($String* languageCode, $Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($LocaleNameProvider, lnp, $cast($LocaleNameProvider, getImpl(locale)));
	return $nc(lnp)->getDisplayLanguage(languageCode, locale);
}

$String* SPILocaleProviderAdapter$LocaleNameProviderDelegate::getDisplayScript($String* scriptCode, $Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($LocaleNameProvider, lnp, $cast($LocaleNameProvider, getImpl(locale)));
	return $nc(lnp)->getDisplayScript(scriptCode, locale);
}

$String* SPILocaleProviderAdapter$LocaleNameProviderDelegate::getDisplayCountry($String* countryCode, $Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($LocaleNameProvider, lnp, $cast($LocaleNameProvider, getImpl(locale)));
	return $nc(lnp)->getDisplayCountry(countryCode, locale);
}

$String* SPILocaleProviderAdapter$LocaleNameProviderDelegate::getDisplayVariant($String* variant, $Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($LocaleNameProvider, lnp, $cast($LocaleNameProvider, getImpl(locale)));
	return $nc(lnp)->getDisplayVariant(variant, locale);
}

$String* SPILocaleProviderAdapter$LocaleNameProviderDelegate::getDisplayUnicodeExtensionKey($String* key, $Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($LocaleNameProvider, lnp, $cast($LocaleNameProvider, getImpl(locale)));
	return $nc(lnp)->getDisplayUnicodeExtensionKey(key, locale);
}

$String* SPILocaleProviderAdapter$LocaleNameProviderDelegate::getDisplayUnicodeExtensionType($String* extType, $String* key, $Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($LocaleNameProvider, lnp, $cast($LocaleNameProvider, getImpl(locale)));
	return $nc(lnp)->getDisplayUnicodeExtensionType(extType, key, locale);
}

SPILocaleProviderAdapter$LocaleNameProviderDelegate::SPILocaleProviderAdapter$LocaleNameProviderDelegate() {
}

$Class* SPILocaleProviderAdapter$LocaleNameProviderDelegate::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$LocaleNameProviderDelegate, name, initialize, &_SPILocaleProviderAdapter$LocaleNameProviderDelegate_ClassInfo_, allocate$SPILocaleProviderAdapter$LocaleNameProviderDelegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$LocaleNameProviderDelegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun