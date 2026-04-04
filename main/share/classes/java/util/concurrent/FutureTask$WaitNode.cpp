#include <java/util/concurrent/FutureTask$WaitNode.h>
#include <java/util/concurrent/FutureTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void FutureTask$WaitNode::init$() {
	$set(this, thread, $Thread::currentThread());
}

FutureTask$WaitNode::FutureTask$WaitNode() {
}

$Class* FutureTask$WaitNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"thread", "Ljava/lang/Thread;", nullptr, $VOLATILE, $field(FutureTask$WaitNode, thread)},
		{"next", "Ljava/util/concurrent/FutureTask$WaitNode;", nullptr, $VOLATILE, $field(FutureTask$WaitNode, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FutureTask$WaitNode, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.FutureTask$WaitNode", "java.util.concurrent.FutureTask", "WaitNode", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.FutureTask$WaitNode",
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
		"java.util.concurrent.FutureTask"
	};
	$loadClass(FutureTask$WaitNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FutureTask$WaitNode);
	});
	return class$;
}

$Class* FutureTask$WaitNode::class$ = nullptr;

		} // concurrent
	} // util
} // java