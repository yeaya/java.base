#include <java/util/Calendar$AvailableCalendarTypes.h>
#include <java/util/Calendar.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef SET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

namespace java {
	namespace util {

$Set* Calendar$AvailableCalendarTypes::SET = nullptr;

void Calendar$AvailableCalendarTypes::init$() {
}

void Calendar$AvailableCalendarTypes::clinit$($Class* clazz) {
	{
		$var($Set, set, $new($HashSet, 3));
		set->add("gregory"_s);
		set->add("buddhist"_s);
		set->add("japanese"_s);
		$assignStatic(Calendar$AvailableCalendarTypes::SET, $Collections::unmodifiableSet(set));
	}
}

Calendar$AvailableCalendarTypes::Calendar$AvailableCalendarTypes() {
}

$Class* Calendar$AvailableCalendarTypes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SET", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Calendar$AvailableCalendarTypes, SET)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Calendar$AvailableCalendarTypes, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Calendar$AvailableCalendarTypes", "java.util.Calendar", "AvailableCalendarTypes", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Calendar$AvailableCalendarTypes",
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
		"java.util.Calendar"
	};
	$loadClass(Calendar$AvailableCalendarTypes, name, initialize, &classInfo$$, Calendar$AvailableCalendarTypes::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Calendar$AvailableCalendarTypes);
	});
	return class$;
}

$Class* Calendar$AvailableCalendarTypes::class$ = nullptr;

	} // util
} // java