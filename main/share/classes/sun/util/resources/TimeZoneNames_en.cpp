#include <sun/util/resources/TimeZoneNames_en.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

void TimeZoneNames_en::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en::getContents() {
	return $new($ObjectArray2, 0);
}

TimeZoneNames_en::TimeZoneNames_en() {
}

$Class* TimeZoneNames_en::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.TimeZoneNames_en",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_en, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_en);
	});
	return class$;
}

$Class* TimeZoneNames_en::class$ = nullptr;

		} // resources
	} // util
} // sun