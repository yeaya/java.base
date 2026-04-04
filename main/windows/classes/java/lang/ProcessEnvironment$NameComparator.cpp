#include <java/lang/ProcessEnvironment$NameComparator.h>
#include <java/lang/Math.h>
#include <java/lang/ProcessEnvironment.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void ProcessEnvironment$NameComparator::init$() {
}

int32_t ProcessEnvironment$NameComparator::compare($String* s1, $String* s2) {
	int32_t n1 = $nc(s1)->length();
	int32_t n2 = $nc(s2)->length();
	int32_t min = $Math::min(n1, n2);
	for (int32_t i = 0; i < min; ++i) {
		char16_t c1 = s1->charAt(i);
		char16_t c2 = s2->charAt(i);
		if (c1 != c2) {
			c1 = $Character::toUpperCase(c1);
			c2 = $Character::toUpperCase(c2);
			if (c1 != c2) {
				return c1 - c2;
			}
		}
	}
	return n1 - n2;
}

int32_t ProcessEnvironment$NameComparator::compare(Object$* s1, Object$* s2) {
	return this->compare($cast($String, s1), $cast($String, s2));
}

ProcessEnvironment$NameComparator::ProcessEnvironment$NameComparator() {
}

$Class* ProcessEnvironment$NameComparator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ProcessEnvironment$NameComparator, init$, void)},
		{"compare", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $method(ProcessEnvironment$NameComparator, compare, int32_t, $String*, $String*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ProcessEnvironment$NameComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessEnvironment$NameComparator", "java.lang.ProcessEnvironment", "NameComparator", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.ProcessEnvironment$NameComparator",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessEnvironment"
	};
	$loadClass(ProcessEnvironment$NameComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessEnvironment$NameComparator);
	});
	return class$;
}

$Class* ProcessEnvironment$NameComparator::class$ = nullptr;

	} // lang
} // java