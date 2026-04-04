#include <ReachabilityFenceTest$MyFinalizeable.h>
#include <ReachabilityFenceTest.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;

void ReachabilityFenceTest$MyFinalizeable::init$($AtomicBoolean* b) {
	$set(this, finalized, b);
}

void ReachabilityFenceTest$MyFinalizeable::finalize() {
	$Object::finalize();
	$nc(this->finalized)->set(true);
}

ReachabilityFenceTest$MyFinalizeable::ReachabilityFenceTest$MyFinalizeable() {
}

$Class* ReachabilityFenceTest$MyFinalizeable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"finalized", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(ReachabilityFenceTest$MyFinalizeable, finalized)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicBoolean;)V", nullptr, $PUBLIC, $method(ReachabilityFenceTest$MyFinalizeable, init$, void, $AtomicBoolean*)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(ReachabilityFenceTest$MyFinalizeable, finalize, void), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReachabilityFenceTest$MyFinalizeable", "ReachabilityFenceTest", "MyFinalizeable", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReachabilityFenceTest$MyFinalizeable",
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
		"ReachabilityFenceTest"
	};
	$loadClass(ReachabilityFenceTest$MyFinalizeable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReachabilityFenceTest$MyFinalizeable);
	});
	return class$;
}

$Class* ReachabilityFenceTest$MyFinalizeable::class$ = nullptr;