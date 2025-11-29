#include <sun/util/locale/provider/SPILocaleProviderAdapter$BreakIteratorProviderDelegate.h>

#include <java/text/BreakIterator.h>
#include <java/text/spi/BreakIteratorProvider.h>
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
using $BreakIterator = ::java::text::BreakIterator;
using $BreakIteratorProvider = ::java::text::spi::BreakIteratorProvider;
using $AbstractMap = ::java::util::AbstractMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _SPILocaleProviderAdapter$BreakIteratorProviderDelegate_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/BreakIteratorProvider;>;", $PRIVATE | $FINAL, $field(SPILocaleProviderAdapter$BreakIteratorProviderDelegate, map)},
	{}
};

$MethodInfo _SPILocaleProviderAdapter$BreakIteratorProviderDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SPILocaleProviderAdapter$BreakIteratorProviderDelegate::*)()>(&SPILocaleProviderAdapter$BreakIteratorProviderDelegate::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getCharacterInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;Ljava/text/spi/BreakIteratorProvider;>;", $PUBLIC},
	{"getLineInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC},
	{"getSentenceInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC},
	{"getWordInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$BreakIteratorProviderDelegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$BreakIteratorProviderDelegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "BreakIteratorProviderDelegate", $STATIC},
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$BreakIteratorProviderDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.SPILocaleProviderAdapter$BreakIteratorProviderDelegate",
	"java.text.spi.BreakIteratorProvider",
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	_SPILocaleProviderAdapter$BreakIteratorProviderDelegate_FieldInfo_,
	_SPILocaleProviderAdapter$BreakIteratorProviderDelegate_MethodInfo_,
	"Ljava/text/spi/BreakIteratorProvider;Lsun/util/locale/provider/SPILocaleProviderAdapter$Delegate<Ljava/text/spi/BreakIteratorProvider;>;",
	nullptr,
	_SPILocaleProviderAdapter$BreakIteratorProviderDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$BreakIteratorProviderDelegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$BreakIteratorProviderDelegate));
}

int32_t SPILocaleProviderAdapter$BreakIteratorProviderDelegate::hashCode() {
	 return this->$BreakIteratorProvider::hashCode();
}

bool SPILocaleProviderAdapter$BreakIteratorProviderDelegate::equals(Object$* obj) {
	 return this->$BreakIteratorProvider::equals(obj);
}

$Object* SPILocaleProviderAdapter$BreakIteratorProviderDelegate::clone() {
	 return this->$BreakIteratorProvider::clone();
}

$String* SPILocaleProviderAdapter$BreakIteratorProviderDelegate::toString() {
	 return this->$BreakIteratorProvider::toString();
}

void SPILocaleProviderAdapter$BreakIteratorProviderDelegate::finalize() {
	this->$BreakIteratorProvider::finalize();
}

void SPILocaleProviderAdapter$BreakIteratorProviderDelegate::init$() {
	$BreakIteratorProvider::init$();
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

$Map* SPILocaleProviderAdapter$BreakIteratorProviderDelegate::getDelegateMap() {
	return this->map;
}

$LocaleArray* SPILocaleProviderAdapter$BreakIteratorProviderDelegate::getAvailableLocales() {
	return getAvailableLocalesDelegate();
}

bool SPILocaleProviderAdapter$BreakIteratorProviderDelegate::isSupportedLocale($Locale* locale) {
	return isSupportedLocaleDelegate(locale);
}

$BreakIterator* SPILocaleProviderAdapter$BreakIteratorProviderDelegate::getWordInstance($Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($BreakIteratorProvider, bip, $cast($BreakIteratorProvider, getImpl(locale)));
	return $nc(bip)->getWordInstance(locale);
}

$BreakIterator* SPILocaleProviderAdapter$BreakIteratorProviderDelegate::getLineInstance($Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($BreakIteratorProvider, bip, $cast($BreakIteratorProvider, getImpl(locale)));
	return $nc(bip)->getLineInstance(locale);
}

$BreakIterator* SPILocaleProviderAdapter$BreakIteratorProviderDelegate::getCharacterInstance($Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($BreakIteratorProvider, bip, $cast($BreakIteratorProvider, getImpl(locale)));
	return $nc(bip)->getCharacterInstance(locale);
}

$BreakIterator* SPILocaleProviderAdapter$BreakIteratorProviderDelegate::getSentenceInstance($Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$assign(locale, $CalendarDataUtility::findRegionOverride(locale));
	$var($BreakIteratorProvider, bip, $cast($BreakIteratorProvider, getImpl(locale)));
	return $nc(bip)->getSentenceInstance(locale);
}

SPILocaleProviderAdapter$BreakIteratorProviderDelegate::SPILocaleProviderAdapter$BreakIteratorProviderDelegate() {
}

$Class* SPILocaleProviderAdapter$BreakIteratorProviderDelegate::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$BreakIteratorProviderDelegate, name, initialize, &_SPILocaleProviderAdapter$BreakIteratorProviderDelegate_ClassInfo_, allocate$SPILocaleProviderAdapter$BreakIteratorProviderDelegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$BreakIteratorProviderDelegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun