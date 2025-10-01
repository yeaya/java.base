#include <sun/util/resources/CurrencyNames_en_US.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _CurrencyNames_en_US_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en_US::*)()>(&CurrencyNames_en_US::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_US_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.CurrencyNames_en_US",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_US_MethodInfo_
};

$Object* allocate$CurrencyNames_en_US($Class* clazz) {
	return $of($alloc(CurrencyNames_en_US));
}

void CurrencyNames_en_US::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_US::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("USD"_s),
		$of("$"_s)
	})});
}

CurrencyNames_en_US::CurrencyNames_en_US() {
}

$Class* CurrencyNames_en_US::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_US, name, initialize, &_CurrencyNames_en_US_ClassInfo_, allocate$CurrencyNames_en_US);
	return class$;
}

$Class* CurrencyNames_en_US::class$ = nullptr;

		} // resources
	} // util
} // sun