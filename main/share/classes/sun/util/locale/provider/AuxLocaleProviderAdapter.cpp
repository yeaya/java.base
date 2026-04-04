#include <sun/util/locale/provider/AuxLocaleProviderAdapter.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/text/spi/BreakIteratorProvider.h>
#include <java/text/spi/CollatorProvider.h>
#include <java/text/spi/DateFormatProvider.h>
#include <java/text/spi/DateFormatSymbolsProvider.h>
#include <java/text/spi/DecimalFormatSymbolsProvider.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/spi/CalendarDataProvider.h>
#include <java/util/spi/CalendarNameProvider.h>
#include <java/util/spi/CurrencyNameProvider.h>
#include <java/util/spi/LocaleNameProvider.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <java/util/spi/TimeZoneNameProvider.h>
#include <sun/text/spi/JavaTimeDateTimePatternProvider.h>
#include <sun/util/locale/provider/AuxLocaleProviderAdapter$NullProvider.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool.h>
#include <sun/util/spi/CalendarProvider.h>
#include <jcpp.h>

#undef NULL_PROVIDER

using $LocaleArray = $Array<::java::util::Locale>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $BreakIteratorProvider = ::java::text::spi::BreakIteratorProvider;
using $CollatorProvider = ::java::text::spi::CollatorProvider;
using $DateFormatProvider = ::java::text::spi::DateFormatProvider;
using $DateFormatSymbolsProvider = ::java::text::spi::DateFormatSymbolsProvider;
using $DecimalFormatSymbolsProvider = ::java::text::spi::DecimalFormatSymbolsProvider;
using $NumberFormatProvider = ::java::text::spi::NumberFormatProvider;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CalendarDataProvider = ::java::util::spi::CalendarDataProvider;
using $CalendarNameProvider = ::java::util::spi::CalendarNameProvider;
using $CurrencyNameProvider = ::java::util::spi::CurrencyNameProvider;
using $LocaleNameProvider = ::java::util::spi::LocaleNameProvider;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $TimeZoneNameProvider = ::java::util::spi::TimeZoneNameProvider;
using $JavaTimeDateTimePatternProvider = ::sun::text::spi::JavaTimeDateTimePatternProvider;
using $AuxLocaleProviderAdapter$NullProvider = ::sun::util::locale::provider::AuxLocaleProviderAdapter$NullProvider;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;
using $LocaleServiceProviderPool = ::sun::util::locale::provider::LocaleServiceProviderPool;
using $CalendarProvider = ::sun::util::spi::CalendarProvider;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class AuxLocaleProviderAdapter$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(AuxLocaleProviderAdapter$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return AuxLocaleProviderAdapter::lambda$static$0();
	}
};
$Class* AuxLocaleProviderAdapter$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuxLocaleProviderAdapter$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.AuxLocaleProviderAdapter$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(AuxLocaleProviderAdapter$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuxLocaleProviderAdapter$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* AuxLocaleProviderAdapter$$Lambda$lambda$static$0::class$ = nullptr;

$LocaleArray* AuxLocaleProviderAdapter::availableLocales = nullptr;
$AuxLocaleProviderAdapter$NullProvider* AuxLocaleProviderAdapter::NULL_PROVIDER = nullptr;

void AuxLocaleProviderAdapter::init$() {
	$LocaleProviderAdapter::init$();
	$set(this, providersMap, $new($ConcurrentHashMap));
}

$LocaleServiceProvider* AuxLocaleProviderAdapter::getLocaleServiceProvider($Class* c) {
	$var($LocaleServiceProvider, lsp, $cast($LocaleServiceProvider, this->providersMap->get(c)));
	if (lsp == nullptr) {
		$assign(lsp, findInstalledProvider(c));
		this->providersMap->putIfAbsent(c, lsp == nullptr ? $cast($LocaleServiceProvider, AuxLocaleProviderAdapter::NULL_PROVIDER) : lsp);
	}
	return lsp;
}

$BreakIteratorProvider* AuxLocaleProviderAdapter::getBreakIteratorProvider() {
	$load($BreakIteratorProvider);
	return $cast($BreakIteratorProvider, getLocaleServiceProvider($BreakIteratorProvider::class$));
}

$CollatorProvider* AuxLocaleProviderAdapter::getCollatorProvider() {
	$load($CollatorProvider);
	return $cast($CollatorProvider, getLocaleServiceProvider($CollatorProvider::class$));
}

$DateFormatProvider* AuxLocaleProviderAdapter::getDateFormatProvider() {
	$load($DateFormatProvider);
	return $cast($DateFormatProvider, getLocaleServiceProvider($DateFormatProvider::class$));
}

$DateFormatSymbolsProvider* AuxLocaleProviderAdapter::getDateFormatSymbolsProvider() {
	$load($DateFormatSymbolsProvider);
	return $cast($DateFormatSymbolsProvider, getLocaleServiceProvider($DateFormatSymbolsProvider::class$));
}

$DecimalFormatSymbolsProvider* AuxLocaleProviderAdapter::getDecimalFormatSymbolsProvider() {
	$load($DecimalFormatSymbolsProvider);
	return $cast($DecimalFormatSymbolsProvider, getLocaleServiceProvider($DecimalFormatSymbolsProvider::class$));
}

$NumberFormatProvider* AuxLocaleProviderAdapter::getNumberFormatProvider() {
	$load($NumberFormatProvider);
	return $cast($NumberFormatProvider, getLocaleServiceProvider($NumberFormatProvider::class$));
}

$CurrencyNameProvider* AuxLocaleProviderAdapter::getCurrencyNameProvider() {
	$load($CurrencyNameProvider);
	return $cast($CurrencyNameProvider, getLocaleServiceProvider($CurrencyNameProvider::class$));
}

$LocaleNameProvider* AuxLocaleProviderAdapter::getLocaleNameProvider() {
	$load($LocaleNameProvider);
	return $cast($LocaleNameProvider, getLocaleServiceProvider($LocaleNameProvider::class$));
}

$TimeZoneNameProvider* AuxLocaleProviderAdapter::getTimeZoneNameProvider() {
	$load($TimeZoneNameProvider);
	return $cast($TimeZoneNameProvider, getLocaleServiceProvider($TimeZoneNameProvider::class$));
}

$CalendarDataProvider* AuxLocaleProviderAdapter::getCalendarDataProvider() {
	$load($CalendarDataProvider);
	return $cast($CalendarDataProvider, getLocaleServiceProvider($CalendarDataProvider::class$));
}

$CalendarNameProvider* AuxLocaleProviderAdapter::getCalendarNameProvider() {
	$load($CalendarNameProvider);
	return $cast($CalendarNameProvider, getLocaleServiceProvider($CalendarNameProvider::class$));
}

$CalendarProvider* AuxLocaleProviderAdapter::getCalendarProvider() {
	$load($CalendarProvider);
	return $cast($CalendarProvider, getLocaleServiceProvider($CalendarProvider::class$));
}

$LocaleResources* AuxLocaleProviderAdapter::getLocaleResources($Locale* locale) {
	return nullptr;
}

$JavaTimeDateTimePatternProvider* AuxLocaleProviderAdapter::getJavaTimeDateTimePatternProvider() {
	$load($JavaTimeDateTimePatternProvider);
	return $cast($JavaTimeDateTimePatternProvider, getLocaleServiceProvider($JavaTimeDateTimePatternProvider::class$));
}

$LocaleArray* AuxLocaleProviderAdapter::getAvailableLocales() {
	$useLocalObjectStack();
	if (AuxLocaleProviderAdapter::availableLocales == nullptr) {
		$var($List, avail, $new($ArrayList));
		{
			$init($LocaleServiceProviderPool);
			$var($ClassArray, arr$, $LocaleServiceProviderPool::spiClasses);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$Class* c = arr$->get(i$);
				{
					$var($LocaleServiceProvider, lsp, getLocaleServiceProvider(c));
					if (lsp != nullptr) {
						avail->addAll($($Arrays::asList($(lsp->getAvailableLocales()))));
					}
				}
			}
		}
		$assignStatic(AuxLocaleProviderAdapter::availableLocales, $cast($LocaleArray, avail->toArray($$new($LocaleArray, 0))));
	}
	return AuxLocaleProviderAdapter::availableLocales;
}

$AuxLocaleProviderAdapter$NullProvider* AuxLocaleProviderAdapter::lambda$static$0() {
	$init(AuxLocaleProviderAdapter);
	return $new($AuxLocaleProviderAdapter$NullProvider);
}

void AuxLocaleProviderAdapter::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(AuxLocaleProviderAdapter::availableLocales, nullptr);
	$assignStatic(AuxLocaleProviderAdapter::NULL_PROVIDER, $cast($AuxLocaleProviderAdapter$NullProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(AuxLocaleProviderAdapter$$Lambda$lambda$static$0)))));
}

AuxLocaleProviderAdapter::AuxLocaleProviderAdapter() {
}

$Class* AuxLocaleProviderAdapter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.util.locale.provider.AuxLocaleProviderAdapter$$Lambda$lambda$static$0")) {
			return AuxLocaleProviderAdapter$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"providersMap", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Class<+Ljava/util/spi/LocaleServiceProvider;>;Ljava/util/spi/LocaleServiceProvider;>;", $PRIVATE | $FINAL, $field(AuxLocaleProviderAdapter, providersMap)},
		{"availableLocales", "[Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $staticField(AuxLocaleProviderAdapter, availableLocales)},
		{"NULL_PROVIDER", "Lsun/util/locale/provider/AuxLocaleProviderAdapter$NullProvider;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuxLocaleProviderAdapter, NULL_PROVIDER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuxLocaleProviderAdapter, init$, void)},
		{"findInstalledProvider", "(Ljava/lang/Class;)Ljava/util/spi/LocaleServiceProvider;", "<P:Ljava/util/spi/LocaleServiceProvider;>(Ljava/lang/Class<TP;>;)TP;", $PROTECTED | $ABSTRACT, $virtualMethod(AuxLocaleProviderAdapter, findInstalledProvider, $LocaleServiceProvider*, $Class*)},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getAvailableLocales, $LocaleArray*)},
		{"getBreakIteratorProvider", "()Ljava/text/spi/BreakIteratorProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getBreakIteratorProvider, $BreakIteratorProvider*)},
		{"getCalendarDataProvider", "()Ljava/util/spi/CalendarDataProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getCalendarDataProvider, $CalendarDataProvider*)},
		{"getCalendarNameProvider", "()Ljava/util/spi/CalendarNameProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getCalendarNameProvider, $CalendarNameProvider*)},
		{"getCalendarProvider", "()Lsun/util/spi/CalendarProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getCalendarProvider, $CalendarProvider*)},
		{"getCollatorProvider", "()Ljava/text/spi/CollatorProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getCollatorProvider, $CollatorProvider*)},
		{"getCurrencyNameProvider", "()Ljava/util/spi/CurrencyNameProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getCurrencyNameProvider, $CurrencyNameProvider*)},
		{"getDateFormatProvider", "()Ljava/text/spi/DateFormatProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getDateFormatProvider, $DateFormatProvider*)},
		{"getDateFormatSymbolsProvider", "()Ljava/text/spi/DateFormatSymbolsProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getDateFormatSymbolsProvider, $DateFormatSymbolsProvider*)},
		{"getDecimalFormatSymbolsProvider", "()Ljava/text/spi/DecimalFormatSymbolsProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getDecimalFormatSymbolsProvider, $DecimalFormatSymbolsProvider*)},
		{"getJavaTimeDateTimePatternProvider", "()Lsun/text/spi/JavaTimeDateTimePatternProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getJavaTimeDateTimePatternProvider, $JavaTimeDateTimePatternProvider*)},
		{"getLocaleNameProvider", "()Ljava/util/spi/LocaleNameProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getLocaleNameProvider, $LocaleNameProvider*)},
		{"getLocaleResources", "(Ljava/util/Locale;)Lsun/util/locale/provider/LocaleResources;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getLocaleResources, $LocaleResources*, $Locale*)},
		{"getLocaleServiceProvider", "(Ljava/lang/Class;)Ljava/util/spi/LocaleServiceProvider;", "<P:Ljava/util/spi/LocaleServiceProvider;>(Ljava/lang/Class<TP;>;)TP;", $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getLocaleServiceProvider, $LocaleServiceProvider*, $Class*)},
		{"getNumberFormatProvider", "()Ljava/text/spi/NumberFormatProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getNumberFormatProvider, $NumberFormatProvider*)},
		{"getTimeZoneNameProvider", "()Ljava/util/spi/TimeZoneNameProvider;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter, getTimeZoneNameProvider, $TimeZoneNameProvider*)},
		{"lambda$static$0", "()Lsun/util/locale/provider/AuxLocaleProviderAdapter$NullProvider;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AuxLocaleProviderAdapter, lambda$static$0, $AuxLocaleProviderAdapter$NullProvider*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.AuxLocaleProviderAdapter$NullProvider", "sun.util.locale.provider.AuxLocaleProviderAdapter", "NullProvider", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.util.locale.provider.AuxLocaleProviderAdapter",
		"sun.util.locale.provider.LocaleProviderAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.util.locale.provider.AuxLocaleProviderAdapter$NullProvider"
	};
	$loadClass(AuxLocaleProviderAdapter, name, initialize, &classInfo$$, AuxLocaleProviderAdapter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuxLocaleProviderAdapter);
	});
	return class$;
}

$Class* AuxLocaleProviderAdapter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun