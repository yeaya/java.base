#include <java/util/SimpleTimeZone$Cache.h>
#include <java/util/SimpleTimeZone.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void SimpleTimeZone$Cache::init$(int64_t year, int64_t start, int64_t end) {
	this->year = year;
	this->start = start;
	this->end = end;
}

SimpleTimeZone$Cache::SimpleTimeZone$Cache() {
}

$Class* SimpleTimeZone$Cache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"year", "J", nullptr, $FINAL, $field(SimpleTimeZone$Cache, year)},
		{"start", "J", nullptr, $FINAL, $field(SimpleTimeZone$Cache, start)},
		{"end", "J", nullptr, $FINAL, $field(SimpleTimeZone$Cache, end)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JJJ)V", nullptr, 0, $method(SimpleTimeZone$Cache, init$, void, int64_t, int64_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.SimpleTimeZone$Cache", "java.util.SimpleTimeZone", "Cache", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.SimpleTimeZone$Cache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.SimpleTimeZone"
	};
	$loadClass(SimpleTimeZone$Cache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleTimeZone$Cache);
	});
	return class$;
}

$Class* SimpleTimeZone$Cache::class$ = nullptr;

	} // util
} // java