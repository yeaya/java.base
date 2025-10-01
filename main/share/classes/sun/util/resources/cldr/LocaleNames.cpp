#include <sun/util/resources/cldr/LocaleNames.h>

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

$MethodInfo _LocaleNames_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames::*)()>(&LocaleNames::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.LocaleNames",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_MethodInfo_
};

$Object* allocate$LocaleNames($Class* clazz) {
	return $of($alloc(LocaleNames));
}

void LocaleNames::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("DisplayNamePattern"_s),
			$of("{0,choice,0#|1#{1}|2#{1} ({2})}"_s)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of("{0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of("{0}, {1}"_s)
		})
	}));
	return data;
}

LocaleNames::LocaleNames() {
}

$Class* LocaleNames::load$($String* name, bool initialize) {
	$loadClass(LocaleNames, name, initialize, &_LocaleNames_ClassInfo_, allocate$LocaleNames);
	return class$;
}

$Class* LocaleNames::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun