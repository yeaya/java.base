#include <IntGenerator.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Random = ::java::util::Random;

void IntGenerator::init$() {
	$set(this, r, $new($Random, 0));
}

int32_t IntGenerator::next(int32_t max) {
	if (max <= 0) {
		return 0;
	}
	int32_t x = $nc(this->r)->nextInt();
	if (x < 0) {
		x = 0 - x;
	}
	return $mod(x, (max + 1));
}

IntGenerator::IntGenerator() {
}

$Class* IntGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"r", "Ljava/util/Random;", nullptr, 0, $field(IntGenerator, r)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntGenerator, init$, void)},
		{"next", "(I)I", nullptr, $PUBLIC, $virtualMethod(IntGenerator, next, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IntGenerator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntGenerator);
	});
	return class$;
}

$Class* IntGenerator::class$ = nullptr;