#include <sun/nio/cs/CharsetMapping$2.h>
#include <sun/nio/cs/CharsetMapping$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharsetMapping$Entry = ::sun::nio::cs::CharsetMapping$Entry;

namespace sun {
	namespace nio {
		namespace cs {

void CharsetMapping$2::init$() {
}

int32_t CharsetMapping$2::compare($CharsetMapping$Entry* m1, $CharsetMapping$Entry* m2) {
	return $nc(m1)->bs - $nc(m2)->bs;
}

bool CharsetMapping$2::equals(Object$* obj) {
	return $equals(this, obj);
}

int32_t CharsetMapping$2::compare(Object$* m1, Object$* m2) {
	return this->compare($cast($CharsetMapping$Entry, m1), $cast($CharsetMapping$Entry, m2));
}

CharsetMapping$2::CharsetMapping$2() {
}

$Class* CharsetMapping$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CharsetMapping$2, init$, void)},
		{"compare", "(Lsun/nio/cs/CharsetMapping$Entry;Lsun/nio/cs/CharsetMapping$Entry;)I", nullptr, $PUBLIC, $virtualMethod(CharsetMapping$2, compare, int32_t, $CharsetMapping$Entry*, $CharsetMapping$Entry*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CharsetMapping$2, compare, int32_t, Object$*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CharsetMapping$2, equals, bool, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.cs.CharsetMapping",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.CharsetMapping$2", nullptr, nullptr, 0},
		{"sun.nio.cs.CharsetMapping$Entry", "sun.nio.cs.CharsetMapping", "Entry", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.CharsetMapping$2",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Lsun/nio/cs/CharsetMapping$Entry;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.CharsetMapping"
	};
	$loadClass(CharsetMapping$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharsetMapping$2);
	});
	return class$;
}

$Class* CharsetMapping$2::class$ = nullptr;

		} // cs
	} // nio
} // sun