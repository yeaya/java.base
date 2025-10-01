#include <java/util/spi/CurrencyNameProvider.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

#undef FORMAT_DEFAULT

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace util {
		namespace spi {

$MethodInfo _CurrencyNameProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(CurrencyNameProvider::*)()>(&CurrencyNameProvider::init$))},
	{"getDisplayName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSymbol", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CurrencyNameProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.spi.CurrencyNameProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_CurrencyNameProvider_MethodInfo_
};

$Object* allocate$CurrencyNameProvider($Class* clazz) {
	return $of($alloc(CurrencyNameProvider));
}

void CurrencyNameProvider::init$() {
	$LocaleServiceProvider::init$();
}

$String* CurrencyNameProvider::getDisplayName($String* currencyCode, $Locale* locale) {
	if (currencyCode == nullptr || locale == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($chars, charray, $nc(currencyCode)->toCharArray());
	if (charray->length != 3) {
		$throwNew($IllegalArgumentException, "The currencyCode is not in the form of three upper-case letters."_s);
	}
	{
		$var($chars, arr$, charray);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			char16_t c = arr$->get(i$);
			{
				if (c < u'A' || c > u'Z') {
					$throwNew($IllegalArgumentException, "The currencyCode is not in the form of three upper-case letters."_s);
				}
			}
		}
	}
	$init($ResourceBundle$Control);
	$var($ResourceBundle$Control, c, $ResourceBundle$Control::getNoFallbackControl($ResourceBundle$Control::FORMAT_DEFAULT));
	{
		$var($LocaleArray, arr$, getAvailableLocales());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, l, arr$->get(i$));
			{
				if ($nc($($nc(c)->getCandidateLocales(""_s, l)))->contains(locale)) {
					return nullptr;
				}
			}
		}
	}
	$throwNew($IllegalArgumentException, "The locale is not available"_s);
}

CurrencyNameProvider::CurrencyNameProvider() {
}

$Class* CurrencyNameProvider::load$($String* name, bool initialize) {
	$loadClass(CurrencyNameProvider, name, initialize, &_CurrencyNameProvider_ClassInfo_, allocate$CurrencyNameProvider);
	return class$;
}

$Class* CurrencyNameProvider::class$ = nullptr;

		} // spi
	} // util
} // java