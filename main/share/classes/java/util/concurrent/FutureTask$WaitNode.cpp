#include <java/util/concurrent/FutureTask$WaitNode.h>

#include <java/util/concurrent/FutureTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FutureTask = ::java::util::concurrent::FutureTask;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _FutureTask$WaitNode_FieldInfo_[] = {
	{"thread", "Ljava/lang/Thread;", nullptr, $VOLATILE, $field(FutureTask$WaitNode, thread)},
	{"next", "Ljava/util/concurrent/FutureTask$WaitNode;", nullptr, $VOLATILE, $field(FutureTask$WaitNode, next)},
	{}
};

$MethodInfo _FutureTask$WaitNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FutureTask$WaitNode::*)()>(&FutureTask$WaitNode::init$))},
	{}
};

$InnerClassInfo _FutureTask$WaitNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.FutureTask$WaitNode", "java.util.concurrent.FutureTask", "WaitNode", $STATIC | $FINAL},
	{}
};

$ClassInfo _FutureTask$WaitNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.FutureTask$WaitNode",
	"java.lang.Object",
	nullptr,
	_FutureTask$WaitNode_FieldInfo_,
	_FutureTask$WaitNode_MethodInfo_,
	nullptr,
	nullptr,
	_FutureTask$WaitNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.FutureTask"
};

$Object* allocate$FutureTask$WaitNode($Class* clazz) {
	return $of($alloc(FutureTask$WaitNode));
}

void FutureTask$WaitNode::init$() {
	$set(this, thread, $Thread::currentThread());
}

FutureTask$WaitNode::FutureTask$WaitNode() {
}

$Class* FutureTask$WaitNode::load$($String* name, bool initialize) {
	$loadClass(FutureTask$WaitNode, name, initialize, &_FutureTask$WaitNode_ClassInfo_, allocate$FutureTask$WaitNode);
	return class$;
}

$Class* FutureTask$WaitNode::class$ = nullptr;

		} // concurrent
	} // util
} // java