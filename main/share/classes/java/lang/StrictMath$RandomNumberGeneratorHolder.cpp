#include <java/lang/StrictMath$RandomNumberGeneratorHolder.h>
#include <java/lang/StrictMath.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Random = ::java::util::Random;

namespace java {
	namespace lang {

$Random* StrictMath$RandomNumberGeneratorHolder::randomNumberGenerator = nullptr;

void StrictMath$RandomNumberGeneratorHolder::init$() {
}

void StrictMath$RandomNumberGeneratorHolder::clinit$($Class* clazz) {
	$assignStatic(StrictMath$RandomNumberGeneratorHolder::randomNumberGenerator, $new($Random));
}

StrictMath$RandomNumberGeneratorHolder::StrictMath$RandomNumberGeneratorHolder() {
}

$Class* StrictMath$RandomNumberGeneratorHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"randomNumberGenerator", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(StrictMath$RandomNumberGeneratorHolder, randomNumberGenerator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StrictMath$RandomNumberGeneratorHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.StrictMath$RandomNumberGeneratorHolder", "java.lang.StrictMath", "RandomNumberGeneratorHolder", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.StrictMath$RandomNumberGeneratorHolder",
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
		"java.lang.StrictMath"
	};
	$loadClass(StrictMath$RandomNumberGeneratorHolder, name, initialize, &classInfo$$, StrictMath$RandomNumberGeneratorHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StrictMath$RandomNumberGeneratorHolder);
	});
	return class$;
}

$Class* StrictMath$RandomNumberGeneratorHolder::class$ = nullptr;

	} // lang
} // java