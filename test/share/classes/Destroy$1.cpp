#include <Destroy$1.h>
#include <Destroy.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

void Destroy$1::init$($String* arg0, $AtomicInteger* val$nbr, $ThreadGroup* val$root) {
	$set(this, val$nbr, val$nbr);
	$set(this, val$root, val$root);
	$Thread::init$(arg0);
}

void Destroy$1::run() {
	$var($ThreadArray, threads, $new($ThreadArray, 42));
	$nc(this->val$nbr)->addAndGet($nc(this->val$root)->enumerate(threads, true));
}

Destroy$1::Destroy$1() {
}

$Class* Destroy$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$root", "Ljava/lang/ThreadGroup;", nullptr, $FINAL | $SYNTHETIC, $field(Destroy$1, val$root)},
		{"val$nbr", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(Destroy$1, val$nbr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/util/concurrent/atomic/AtomicInteger;Ljava/lang/ThreadGroup;)V", nullptr, 0, $method(Destroy$1, init$, void, $String*, $AtomicInteger*, $ThreadGroup*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Destroy$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Destroy",
		"testDestroyChild",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Destroy$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Destroy$1",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Destroy"
	};
	$loadClass(Destroy$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Destroy$1);
	});
	return class$;
}

$Class* Destroy$1::class$ = nullptr;