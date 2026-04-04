#include <EqualityTest$AnnotationHost.h>
#include <EqualityTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void EqualityTest$AnnotationHost::init$() {
}

EqualityTest$AnnotationHost::EqualityTest$AnnotationHost() {
}

$Class* EqualityTest$AnnotationHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(EqualityTest$AnnotationHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EqualityTest$AnnotationHost", "EqualityTest", "AnnotationHost", $PRIVATE | $STATIC},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LTestAnnotation;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"EqualityTest$AnnotationHost",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"EqualityTest"
	};
	$loadClass(EqualityTest$AnnotationHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EqualityTest$AnnotationHost);
	});
	return class$;
}

$Class* EqualityTest$AnnotationHost::class$ = nullptr;