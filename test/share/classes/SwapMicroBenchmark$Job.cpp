#include <SwapMicroBenchmark$Job.h>
#include <SwapMicroBenchmark.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SwapMicroBenchmark$Job::init$($String* name) {
	$set(this, name$, name);
}

$String* SwapMicroBenchmark$Job::name() {
	return this->name$;
}

SwapMicroBenchmark$Job::SwapMicroBenchmark$Job() {
}

$Class* SwapMicroBenchmark$Job::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SwapMicroBenchmark$Job, name$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SwapMicroBenchmark$Job, init$, void, $String*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SwapMicroBenchmark$Job, name, $String*)},
		{"work", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwapMicroBenchmark$Job, work, void), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SwapMicroBenchmark$Job", "SwapMicroBenchmark", "Job", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"SwapMicroBenchmark$Job",
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
		"SwapMicroBenchmark"
	};
	$loadClass(SwapMicroBenchmark$Job, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwapMicroBenchmark$Job);
	});
	return class$;
}

$Class* SwapMicroBenchmark$Job::class$ = nullptr;