#include <sun/util/resources/LocaleNamesBundle.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {

void LocaleNamesBundle::init$() {
	$OpenListResourceBundle::init$();
}

LocaleNamesBundle::LocaleNamesBundle() {
}

$Class* LocaleNamesBundle::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(LocaleNamesBundle, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.util.resources.LocaleNamesBundle",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNamesBundle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNamesBundle);
	});
	return class$;
}

$Class* LocaleNamesBundle::class$ = nullptr;

		} // resources
	} // util
} // sun