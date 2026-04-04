#include <sun/util/resources/LocaleNames_en.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

void LocaleNames_en::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_en::getContents() {
	return $new($ObjectArray2, 0);
}

LocaleNames_en::LocaleNames_en() {
}

$Class* LocaleNames_en::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.LocaleNames_en",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_en, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_en);
	});
	return class$;
}

$Class* LocaleNames_en::class$ = nullptr;

		} // resources
	} // util
} // sun