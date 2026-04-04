#include <TypeCheckMicroBenchmark$1.h>
#include <TypeCheckMicroBenchmark.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

void TypeCheckMicroBenchmark$1::init$($CountDownLatch* val$drained) {
	$set(this, val$drained, val$drained);
}

void TypeCheckMicroBenchmark$1::finalize() {
	$nc(this->val$drained)->countDown();
}

TypeCheckMicroBenchmark$1::TypeCheckMicroBenchmark$1() {
}

$Class* TypeCheckMicroBenchmark$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$drained", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$1, val$drained)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, 0, $method(TypeCheckMicroBenchmark$1, init$, void, $CountDownLatch*)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(TypeCheckMicroBenchmark$1, finalize, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TypeCheckMicroBenchmark",
		"collectAllGarbage",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeCheckMicroBenchmark$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TypeCheckMicroBenchmark$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TypeCheckMicroBenchmark"
	};
	$loadClass(TypeCheckMicroBenchmark$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeCheckMicroBenchmark$1);
	});
	return class$;
}

$Class* TypeCheckMicroBenchmark$1::class$ = nullptr;