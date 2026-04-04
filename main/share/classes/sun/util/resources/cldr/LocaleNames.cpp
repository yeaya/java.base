#include <sun/util/resources/cldr/LocaleNames.h>
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

void LocaleNames::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"DisplayNamePattern"_s,
			"{0,choice,0#|1#{1}|2#{1} ({2})}"_s
		}),
		$$new($ObjectArray, {
			"ListKeyTypePattern"_s,
			"{0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"ListCompositionPattern"_s,
			"{0}, {1}"_s
		})
	}));
	return data;
}

LocaleNames::LocaleNames() {
}

$Class* LocaleNames::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.LocaleNames",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames);
	});
	return class$;
}

$Class* LocaleNames::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun