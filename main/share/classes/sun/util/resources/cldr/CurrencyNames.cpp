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

$MethodInfo _CurrencyNames_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.CurrencyNames",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_MethodInfo_
};

$Object* allocate$CurrencyNames($Class* clazz) {
	return $of($alloc(CurrencyNames));
}

void CurrencyNames::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("A$"_s)
		}),
		$$new($ObjectArray, {
			$of("BRL"_s),
			$of("R$"_s)
		}),
		$$new($ObjectArray, {
			$of("CAD"_s),
			$of("CA$"_s)
		}),
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"CN¥"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of(u"£"_s)
		}),
		$$new($ObjectArray, {
			$of("HKD"_s),
			$of("HK$"_s)
		}),
		$$new($ObjectArray, {
			$of("ILS"_s),
			$of(u"₪"_s)
		}),
		$$new($ObjectArray, {
			$of("INR"_s),
			$of(u"₹"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"JP¥"_s)
		}),
		$$new($ObjectArray, {
			$of("KRW"_s),
			$of(u"₩"_s)
		}),
		$$new($ObjectArray, {
			$of("MXN"_s),
			$of("MX$"_s)
		}),
		$$new($ObjectArray, {
			$of("NZD"_s),
			$of("NZ$"_s)
		}),
		$$new($ObjectArray, {
			$of("PHP"_s),
			$of(u"₱"_s)
		}),
		$$new($ObjectArray, {
			$of("TWD"_s),
			$of("NT$"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("US$"_s)
		}),
		$$new($ObjectArray, {
			$of("VND"_s),
			$of(u"₫"_s)
		}),
		$$new($ObjectArray, {
			$of("XAF"_s),
			$of("FCFA"_s)
		}),
		$$new($ObjectArray, {
			$of("XCD"_s),
			$of("EC$"_s)
		}),
		$$new($ObjectArray, {
			$of("XOF"_s),
			$of(u"F CFA"_s)
		}),
		$$new($ObjectArray, {
			$of("XPF"_s),
			$of("CFPF"_s)
		}),
		$$new($ObjectArray, {
			$of("XXX"_s),
			$of(u"¤"_s)
		})
	}));
	return data;
}

CurrencyNames::CurrencyNames() {
}

$Class* CurrencyNames::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames, name, initialize, &_CurrencyNames_ClassInfo_, allocate$CurrencyNames);
	return class$;
}

$Class* CurrencyNames::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun