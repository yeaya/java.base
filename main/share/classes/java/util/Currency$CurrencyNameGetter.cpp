#include <java/util/Currency$CurrencyNameGetter.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $LocaleServiceProviderPool$LocalizedObjectGetter = ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter;

namespace java {
	namespace util {

$FieldInfo _Currency$CurrencyNameGetter_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Currency$CurrencyNameGetter, $assertionsDisabled)},
	{"INSTANCE", "Ljava/util/Currency$CurrencyNameGetter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Currency$CurrencyNameGetter, INSTANCE)},
	{}
};

$MethodInfo _Currency$CurrencyNameGetter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Currency$CurrencyNameGetter::*)()>(&Currency$CurrencyNameGetter::init$))},
	{"getObject", "(Ljava/util/spi/CurrencyNameProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT},
	{"getObject", "(Ljava/util/spi/LocaleServiceProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Currency$CurrencyNameGetter_InnerClassesInfo_[] = {
	{"java.util.Currency$CurrencyNameGetter", "java.util.Currency", "CurrencyNameGetter", $PRIVATE | $STATIC},
	{"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter", "sun.util.locale.provider.LocaleServiceProviderPool", "LocalizedObjectGetter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Currency$CurrencyNameGetter_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Currency$CurrencyNameGetter",
	"java.lang.Object",
	"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter",
	_Currency$CurrencyNameGetter_FieldInfo_,
	_Currency$CurrencyNameGetter_MethodInfo_,
	"Ljava/lang/Object;Lsun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter<Ljava/util/spi/CurrencyNameProvider;Ljava/lang/String;>;",
	nullptr,
	_Currency$CurrencyNameGetter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Currency"
};

$Object* allocate$Currency$CurrencyNameGetter($Class* clazz) {
	return $of($alloc(Currency$CurrencyNameGetter));
}

bool Currency$CurrencyNameGetter::$assertionsDisabled = false;
Currency$CurrencyNameGetter* Currency$CurrencyNameGetter::INSTANCE = nullptr;

void Currency$CurrencyNameGetter::init$() {
}

$String* Currency$CurrencyNameGetter::getObject($CurrencyNameProvider* currencyNameProvider, $Locale* locale, $String* key, $ObjectArray* params) {
	if (!Currency$CurrencyNameGetter::$assertionsDisabled && !($nc(params)->length == 1)) {
		$throwNew($AssertionError);
	}
	int32_t type = $nc(($cast($Integer, $nc(params)->get(0))))->intValue();
	switch (type) {
	case 0:
		{
			return $nc(currencyNameProvider)->getSymbol(key, locale);
		}
	case 1:
		{
			return $nc(currencyNameProvider)->getDisplayName(key, locale);
		}
	default:
		{
			if (!Currency$CurrencyNameGetter::$assertionsDisabled) {
				$throwNew($AssertionError);
			}
		}
	}
	return nullptr;
}

$Object* Currency$CurrencyNameGetter::getObject($LocaleServiceProvider* currencyNameProvider, $Locale* locale, $String* key, $ObjectArray* params) {
	return $of(this->getObject($cast($CurrencyNameProvider, currencyNameProvider), locale, key, params));
}

void clinit$Currency$CurrencyNameGetter($Class* class$) {
	$load($Currency);
	Currency$CurrencyNameGetter::$assertionsDisabled = !$Currency::class$->desiredAssertionStatus();
	$assignStatic(Currency$CurrencyNameGetter::INSTANCE, $new(Currency$CurrencyNameGetter));
}

Currency$CurrencyNameGetter::Currency$CurrencyNameGetter() {
}

$Class* Currency$CurrencyNameGetter::load$($String* name, bool initialize) {
	$loadClass(Currency$CurrencyNameGetter, name, initialize, &_Currency$CurrencyNameGetter_ClassInfo_, clinit$Currency$CurrencyNameGetter, allocate$Currency$CurrencyNameGetter);
	return class$;
}

$Class* Currency$CurrencyNameGetter::class$ = nullptr;

	} // util
} // java