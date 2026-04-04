#include <java/util/Currency$CurrencyNameGetter.h>
#include <java/lang/AssertionError.h>
#include <java/util/Currency.h>
#include <java/util/Locale.h>
#include <java/util/spi/CurrencyNameProvider.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

#undef INSTANCE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Currency = ::java::util::Currency;
using $Locale = ::java::util::Locale;
using $CurrencyNameProvider = ::java::util::spi::CurrencyNameProvider;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace util {

bool Currency$CurrencyNameGetter::$assertionsDisabled = false;
Currency$CurrencyNameGetter* Currency$CurrencyNameGetter::INSTANCE = nullptr;

void Currency$CurrencyNameGetter::init$() {
}

$String* Currency$CurrencyNameGetter::getObject($CurrencyNameProvider* currencyNameProvider, $Locale* locale, $String* key, $ObjectArray* params) {
	if (!Currency$CurrencyNameGetter::$assertionsDisabled && !($nc(params)->length == 1)) {
		$throwNew($AssertionError);
	}
	int32_t type = $nc($cast($Integer, $nc(params)->get(0)))->intValue();
	switch (type) {
	case 0:
		return $nc(currencyNameProvider)->getSymbol(key, locale);
	case 1:
		return $nc(currencyNameProvider)->getDisplayName(key, locale);
	default:
		if (!Currency$CurrencyNameGetter::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
	}
	return nullptr;
}

$Object* Currency$CurrencyNameGetter::getObject($LocaleServiceProvider* currencyNameProvider, $Locale* locale, $String* key, $ObjectArray* params) {
	return $of(this->getObject($cast($CurrencyNameProvider, currencyNameProvider), locale, key, params));
}

void Currency$CurrencyNameGetter::clinit$($Class* clazz) {
	$load($Currency);
	Currency$CurrencyNameGetter::$assertionsDisabled = !$Currency::class$->desiredAssertionStatus();
	$assignStatic(Currency$CurrencyNameGetter::INSTANCE, $new(Currency$CurrencyNameGetter));
}

Currency$CurrencyNameGetter::Currency$CurrencyNameGetter() {
}

$Class* Currency$CurrencyNameGetter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Currency$CurrencyNameGetter, $assertionsDisabled)},
		{"INSTANCE", "Ljava/util/Currency$CurrencyNameGetter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Currency$CurrencyNameGetter, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Currency$CurrencyNameGetter, init$, void)},
		{"getObject", "(Ljava/util/spi/CurrencyNameProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(Currency$CurrencyNameGetter, getObject, $String*, $CurrencyNameProvider*, $Locale*, $String*, $ObjectArray*)},
		{"getObject", "(Ljava/util/spi/LocaleServiceProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Currency$CurrencyNameGetter, getObject, $Object*, $LocaleServiceProvider*, $Locale*, $String*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Currency$CurrencyNameGetter", "java.util.Currency", "CurrencyNameGetter", $PRIVATE | $STATIC},
		{"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter", "sun.util.locale.provider.LocaleServiceProviderPool", "LocalizedObjectGetter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Currency$CurrencyNameGetter",
		"java.lang.Object",
		"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Lsun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter<Ljava/util/spi/CurrencyNameProvider;Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Currency"
	};
	$loadClass(Currency$CurrencyNameGetter, name, initialize, &classInfo$$, Currency$CurrencyNameGetter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Currency$CurrencyNameGetter);
	});
	return class$;
}

$Class* Currency$CurrencyNameGetter::class$ = nullptr;

	} // util
} // java