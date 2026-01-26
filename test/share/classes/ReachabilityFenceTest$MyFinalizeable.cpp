#include <ReachabilityFenceTest$MyFinalizeable.h>

#include <ReachabilityFenceTest.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;

$FieldInfo _ReachabilityFenceTest$MyFinalizeable_FieldInfo_[] = {
	{"finalized", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(ReachabilityFenceTest$MyFinalizeable, finalized)},
	{}
};

$MethodInfo _ReachabilityFenceTest$MyFinalizeable_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicBoolean;)V", nullptr, $PUBLIC, $method(ReachabilityFenceTest$MyFinalizeable, init$, void, $AtomicBoolean*)},
	{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(ReachabilityFenceTest$MyFinalizeable, finalize, void), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _ReachabilityFenceTest$MyFinalizeable_InnerClassesInfo_[] = {
	{"ReachabilityFenceTest$MyFinalizeable", "ReachabilityFenceTest", "MyFinalizeable", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ReachabilityFenceTest$MyFinalizeable_ClassInfo_ = {
	$ACC_SUPER,
	"ReachabilityFenceTest$MyFinalizeable",
	"java.lang.Object",
	nullptr,
	_ReachabilityFenceTest$MyFinalizeable_FieldInfo_,
	_ReachabilityFenceTest$MyFinalizeable_MethodInfo_,
	nullptr,
	nullptr,
	_ReachabilityFenceTest$MyFinalizeable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReachabilityFenceTest"
};

$Object* allocate$ReachabilityFenceTest$MyFinalizeable($Class* clazz) {
	return $of($alloc(ReachabilityFenceTest$MyFinalizeable));
}

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
	$loadClass(ReachabilityFenceTest$MyFinalizeable, name, initialize, &_ReachabilityFenceTest$MyFinalizeable_ClassInfo_, allocate$ReachabilityFenceTest$MyFinalizeable);
	return class$;
}

$Class* ReachabilityFenceTest$MyFinalizeable::class$ = nullptr;