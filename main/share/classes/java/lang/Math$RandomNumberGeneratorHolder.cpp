#include <java/lang/Math$RandomNumberGeneratorHolder.h>
#include <java/lang/Math.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Random = ::java::util::Random;

namespace java {
	namespace lang {

$Random* Math$RandomNumberGeneratorHolder::randomNumberGenerator = nullptr;

void Math$RandomNumberGeneratorHolder::init$() {
}

void Math$RandomNumberGeneratorHolder::clinit$($Class* clazz) {
	$assignStatic(Math$RandomNumberGeneratorHolder::randomNumberGenerator, $new($Random));
}

Math$RandomNumberGeneratorHolder::Math$RandomNumberGeneratorHolder() {
}

$Class* Math$RandomNumberGeneratorHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"randomNumberGenerator", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(Math$RandomNumberGeneratorHolder, randomNumberGenerator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Math$RandomNumberGeneratorHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Math$RandomNumberGeneratorHolder", "java.lang.Math", "RandomNumberGeneratorHolder", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.Math$RandomNumberGeneratorHolder",
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
		"java.lang.Math"
	};
	$loadClass(Math$RandomNumberGeneratorHolder, name, initialize, &classInfo$$, Math$RandomNumberGeneratorHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Math$RandomNumberGeneratorHolder);
	});
	return class$;
}

$Class* Math$RandomNumberGeneratorHolder::class$ = nullptr;

	} // lang
} // java