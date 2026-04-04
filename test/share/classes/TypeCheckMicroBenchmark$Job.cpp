#include <TypeCheckMicroBenchmark$Job.h>
#include <TypeCheckMicroBenchmark.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TypeCheckMicroBenchmark$Job::init$($String* name) {
	$set(this, name$, name);
}

$String* TypeCheckMicroBenchmark$Job::name() {
	return this->name$;
}

TypeCheckMicroBenchmark$Job::TypeCheckMicroBenchmark$Job() {
}

$Class* TypeCheckMicroBenchmark$Job::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TypeCheckMicroBenchmark$Job, name$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(TypeCheckMicroBenchmark$Job, init$, void, $String*)},
		{"name", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(TypeCheckMicroBenchmark$Job, name, $String*)},
		{"work", "()V", nullptr, $ABSTRACT, $virtualMethod(TypeCheckMicroBenchmark$Job, work, void), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"TypeCheckMicroBenchmark$Job",
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
		"TypeCheckMicroBenchmark"
	};
	$loadClass(TypeCheckMicroBenchmark$Job, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeCheckMicroBenchmark$Job);
	});
	return class$;
}

$Class* TypeCheckMicroBenchmark$Job::class$ = nullptr;