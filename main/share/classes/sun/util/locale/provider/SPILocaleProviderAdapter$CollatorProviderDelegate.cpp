#include <sun/util/locale/provider/SPILocaleProviderAdapter$CollatorProviderDelegate.h>

#include <java/text/Collator.h>
#include <java/text/spi/CollatorProvider.h>
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
using $Collator = ::java::text::Collator;
using $CollatorProvider = ::java::text::spi::CollatorProvider;
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

$FieldInfo _SPILocaleProviderAdapter$CollatorProviderDelegate_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/CollatorProvider;>;", $PRIVATE | $FINAL, $field(SPILocaleProviderAdapter$CollatorProviderDelegate, map)},
	{}
};

$MethodInfo _SPILocaleProviderAdapter$CollatorProviderDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SPILocaleProviderAdapter$CollatorProviderDelegate::*)()>(&SPILocaleProviderAdapter$CollatorProviderDelegate::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/CollatorProvider;>;", $PUBLIC},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/Collator;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$CollatorProviderDelegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$CollatorProviderDelegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "CollatorProviderDelegate", $STATIC},
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$CollatorProviderDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.SPILocaleProviderAdapter$CollatorProviderDelegate",
	"java.text.spi.CollatorProvider",
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	_SPILocaleProviderAdapter$CollatorProviderDelegate_FieldInfo_,
	_SPILocaleProviderAdapter$CollatorProviderDelegate_MethodInfo_,
	"Ljava/text/spi/CollatorProvider;Lsun/util/locale/provider/SPILocaleProviderAdapter$Delegate<Ljava/text/spi/CollatorProvider;>;",
	nullptr,
	_SPILocaleProviderAdapter$CollatorProviderDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$CollatorProviderDelegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$CollatorProviderDelegate));
}

int32_t SPILocaleProviderAdapter$CollatorProviderDelegate::hashCode() {
	 return this->$CollatorProvider::hashCode();
}

bool SPILocaleProviderAdapter$CollatorProviderDelegate::equals(Object$* obj) {
	 return this->$CollatorProvider::equals(obj);
}

$Object* SPILocaleProviderAdapter$CollatorProviderDelegate::clone() {
	 return this->$CollatorProvider::clone();
}

$String* SPILocaleProviderAdapter$CollatorProviderDelegate::toString() {
	 return this->$CollatorProvider::toString();
}

void SPILocaleProviderAdapter$CollatorProviderDelegate::finalize() {
	this->$CollatorProvider::finalize();
}

void SPILocaleProviderAdapter$CollatorProviderDelegate::init$() {
	$CollatorProvider::init$();
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

$Map* SPILocaleProviderAdapter$CollatorProviderDelegate::getDelegateMap() {
	return this->map;
}

$LocaleArray* SPILocaleProviderAdapter$CollatorProviderDelegate::getAvailableLocales() {
	return getAvailableLocalesDelegate();
}

bool SPILocaleProviderAdapter$CollatorProviderDelegate::isSupportedLocale($Locale* locale) {
	return isSupportedLocaleDelegate(locale);
}

$Collator* SPILocaleProviderAdapter$CollatorProviderDelegate::getInstance($Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($CollatorProvider, cp, $cast($CollatorProvider, getImpl(locale)));
	return $nc(cp)->getInstance(locale);
}

SPILocaleProviderAdapter$CollatorProviderDelegate::SPILocaleProviderAdapter$CollatorProviderDelegate() {
}

$Class* SPILocaleProviderAdapter$CollatorProviderDelegate::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$CollatorProviderDelegate, name, initialize, &_SPILocaleProviderAdapter$CollatorProviderDelegate_ClassInfo_, allocate$SPILocaleProviderAdapter$CollatorProviderDelegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$CollatorProviderDelegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun