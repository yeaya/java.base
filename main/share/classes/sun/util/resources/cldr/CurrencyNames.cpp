#include <sun/util/resources/cldr/CurrencyNames.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames::*)()>(&CurrencyNames::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
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
			$of(u"CN\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"\u20ac"_s)
		}),
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of(u"\u00a3"_s)
		}),
		$$new($ObjectArray, {
			$of("HKD"_s),
			$of("HK$"_s)
		}),
		$$new($ObjectArray, {
			$of("ILS"_s),
			$of(u"\u20aa"_s)
		}),
		$$new($ObjectArray, {
			$of("INR"_s),
			$of(u"\u20b9"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"JP\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("KRW"_s),
			$of(u"\u20a9"_s)
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
			$of(u"\u20b1"_s)
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
			$of(u"\u20ab"_s)
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
			$of(u"F\u202fCFA"_s)
		}),
		$$new($ObjectArray, {
			$of("XPF"_s),
			$of("CFPF"_s)
		}),
		$$new($ObjectArray, {
			$of("XXX"_s),
			$of(u"\u00a4"_s)
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