#include <StackTraceSerialization$TestThrowable.h>
#include <StackTraceSerialization.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StackTraceSerialization$TestThrowable::init$(bool enableSuppression, bool writableStackTrace) {
	$Throwable::init$("the medium"_s, nullptr, enableSuppression, writableStackTrace);
}

StackTraceSerialization$TestThrowable::StackTraceSerialization$TestThrowable() {
}

StackTraceSerialization$TestThrowable::StackTraceSerialization$TestThrowable(const StackTraceSerialization$TestThrowable& e) : $Throwable(e) {
}

void StackTraceSerialization$TestThrowable::throw$() {
	throw *this;
}

$Class* StackTraceSerialization$TestThrowable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZZ)V", nullptr, $PUBLIC, $method(StackTraceSerialization$TestThrowable, init$, void, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StackTraceSerialization$TestThrowable", "StackTraceSerialization", "TestThrowable", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StackTraceSerialization$TestThrowable",
		"java.lang.Throwable",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StackTraceSerialization"
	};
	$loadClass(StackTraceSerialization$TestThrowable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackTraceSerialization$TestThrowable);
	});
	return class$;
}

$Class* StackTraceSerialization$TestThrowable::class$ = nullptr;