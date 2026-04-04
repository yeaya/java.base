#include <sun/util/resources/cldr/CurrencyNames.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

void CurrencyNames::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AUD"_s,
			"A$"_s
		}),
		$$new($ObjectArray, {
			"BRL"_s,
			"R$"_s
		}),
		$$new($ObjectArray, {
			"CAD"_s,
			"CA$"_s
		}),
		$$new($ObjectArray, {
			"CNY"_s,
			u"CN¥"_s
		}),
		$$new($ObjectArray, {
			"EUR"_s,
			u"€"_s
		}),
		$$new($ObjectArray, {
			"GBP"_s,
			u"£"_s
		}),
		$$new($ObjectArray, {
			"HKD"_s,
			"HK$"_s
		}),
		$$new($ObjectArray, {
			"ILS"_s,
			u"₪"_s
		}),
		$$new($ObjectArray, {
			"INR"_s,
			u"₹"_s
		}),
		$$new($ObjectArray, {
			"JPY"_s,
			u"JP¥"_s
		}),
		$$new($ObjectArray, {
			"KRW"_s,
			u"₩"_s
		}),
		$$new($ObjectArray, {
			"MXN"_s,
			"MX$"_s
		}),
		$$new($ObjectArray, {
			"NZD"_s,
			"NZ$"_s
		}),
		$$new($ObjectArray, {
			"PHP"_s,
			u"₱"_s
		}),
		$$new($ObjectArray, {
			"TWD"_s,
			"NT$"_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			"US$"_s
		}),
		$$new($ObjectArray, {
			"VND"_s,
			u"₫"_s
		}),
		$$new($ObjectArray, {
			"XAF"_s,
			"FCFA"_s
		}),
		$$new($ObjectArray, {
			"XCD"_s,
			"EC$"_s
		}),
		$$new($ObjectArray, {
			"XOF"_s,
			u"F CFA"_s
		}),
		$$new($ObjectArray, {
			"XPF"_s,
			"CFPF"_s
		}),
		$$new($ObjectArray, {
			"XXX"_s,
			u"¤"_s
		})
	}));
	return data;
}

CurrencyNames::CurrencyNames() {
}

$Class* CurrencyNames::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.CurrencyNames",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames);
	});
	return class$;
}

$Class* CurrencyNames::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun