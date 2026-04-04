#include <sun/nio/cs/CharsetMapping$4.h>
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

void CharsetMapping$4::init$() {
}

int32_t CharsetMapping$4::compare($CharsetMapping$Entry* m1, $CharsetMapping$Entry* m2) {
	int32_t v = $nc(m1)->cp - $nc(m2)->cp;
	if (v == 0) {
		v = m1->cp2 - m2->cp2;
	}
	return v;
}

bool CharsetMapping$4::equals(Object$* obj) {
	return $equals(this, obj);
}

int32_t CharsetMapping$4::compare(Object$* m1, Object$* m2) {
	return this->compare($cast($CharsetMapping$Entry, m1), $cast($CharsetMapping$Entry, m2));
}

CharsetMapping$4::CharsetMapping$4() {
}

$Class* CharsetMapping$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CharsetMapping$4, init$, void)},
		{"compare", "(Lsun/nio/cs/CharsetMapping$Entry;Lsun/nio/cs/CharsetMapping$Entry;)I", nullptr, $PUBLIC, $virtualMethod(CharsetMapping$4, compare, int32_t, $CharsetMapping$Entry*, $CharsetMapping$Entry*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CharsetMapping$4, compare, int32_t, Object$*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CharsetMapping$4, equals, bool, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.cs.CharsetMapping",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.CharsetMapping$4", nullptr, nullptr, 0},
		{"sun.nio.cs.CharsetMapping$Entry", "sun.nio.cs.CharsetMapping", "Entry", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.CharsetMapping$4",
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
	$loadClass(CharsetMapping$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharsetMapping$4);
	});
	return class$;
}

$Class* CharsetMapping$4::class$ = nullptr;

		} // cs
	} // nio
} // sun