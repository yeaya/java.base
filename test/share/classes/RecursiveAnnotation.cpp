#include <RecursiveAnnotation.h>
#include <Rat.h>
#include <jcpp.h>

using $Rat = ::Rat;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void RecursiveAnnotation::init$() {
}

void RecursiveAnnotation::main($StringArray* args) {
	$load(RecursiveAnnotation);
	$load($Rat);
	if (!RecursiveAnnotation::class$->isAnnotationPresent($Rat::class$)) {
		$throwNew($RuntimeException, "RecursiveAnnotation"_s);
	}
	if (!$Rat::class$->isAnnotationPresent($Rat::class$)) {
		$throwNew($RuntimeException, "Rat"_s);
	}
}

RecursiveAnnotation::RecursiveAnnotation() {
}

$Class* RecursiveAnnotation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RecursiveAnnotation, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RecursiveAnnotation, main, void, $StringArray*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LRat;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"RecursiveAnnotation",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(RecursiveAnnotation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RecursiveAnnotation);
	});
	return class$;
}

$Class* RecursiveAnnotation::class$ = nullptr;