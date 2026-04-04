#include <sun/util/resources/CurrencyNames_en_US.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

void CurrencyNames_en_US::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_US::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"USD"_s,
		"$"_s
	})});
}

CurrencyNames_en_US::CurrencyNames_en_US() {
}

$Class* CurrencyNames_en_US::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_US, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_US, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.CurrencyNames_en_US",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_en_US, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_en_US);
	});
	return class$;
}

$Class* CurrencyNames_en_US::class$ = nullptr;

		} // resources
	} // util
} // sun