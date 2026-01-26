#include <java/util/concurrent/ConcurrentLinkedQueue$Node.h>

#include <java/lang/invoke/VarHandle.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <jcpp.h>

#undef ITEM
#undef NEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $ConcurrentLinkedQueue = ::java::util::concurrent::ConcurrentLinkedQueue;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentLinkedQueue$Node_FieldInfo_[] = {
	{"item", "Ljava/lang/Object;", "TE;", $VOLATILE, $field(ConcurrentLinkedQueue$Node, item)},
	{"next", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node;", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node<TE;>;", $VOLATILE, $field(ConcurrentLinkedQueue$Node, next)},
	{}
};

$MethodInfo _ConcurrentLinkedQueue$Node_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TE;)V", 0, $method(ConcurrentLinkedQueue$Node, init$, void, Object$*)},
	{"<init>", "()V", nullptr, 0, $method(ConcurrentLinkedQueue$Node, init$, void)},
	{"appendRelaxed", "(Ljava/util/concurrent/ConcurrentLinkedQueue$Node;)V", "(Ljava/util/concurrent/ConcurrentLinkedQueue$Node<TE;>;)V", 0, $method(ConcurrentLinkedQueue$Node, appendRelaxed, void, ConcurrentLinkedQueue$Node*)},
	{"casItem", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TE;TE;)Z", 0, $method(ConcurrentLinkedQueue$Node, casItem, bool, Object$*, Object$*)},
	{}
};

$InnerClassInfo _ConcurrentLinkedQueue$Node_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentLinkedQueue$Node", "java.util.concurrent.ConcurrentLinkedQueue", "Node", $STATIC | $FINAL},
	{}
};

$ClassInfo _ConcurrentLinkedQueue$Node_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentLinkedQueue$Node",
	"java.lang.Object",
	nullptr,
	_ConcurrentLinkedQueue$Node_FieldInfo_,
	_ConcurrentLinkedQueue$Node_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ConcurrentLinkedQueue$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentLinkedQueue"
};

$Object* allocate$ConcurrentLinkedQueue$Node($Class* clazz) {
	return $of($alloc(ConcurrentLinkedQueue$Node));
}

void ConcurrentLinkedQueue$Node::init$(Object$* item) {
	$init($ConcurrentLinkedQueue);
	$nc($ConcurrentLinkedQueue::ITEM)->set($$new($ObjectArray, {$of(this), item}));
}

void ConcurrentLinkedQueue$Node::init$() {
}

void ConcurrentLinkedQueue$Node::appendRelaxed(ConcurrentLinkedQueue$Node* next) {
	$init($ConcurrentLinkedQueue);
	$nc($ConcurrentLinkedQueue::NEXT)->set($$new($ObjectArray, {$of(this), $of(next)}));
}

bool ConcurrentLinkedQueue$Node::casItem(Object$* cmp, Object$* val) {
	$init($ConcurrentLinkedQueue);
	return $nc($ConcurrentLinkedQueue::ITEM)->compareAndSet($$new($ObjectArray, {$of(this), cmp, val}));
}

ConcurrentLinkedQueue$Node::ConcurrentLinkedQueue$Node() {
}

$Class* ConcurrentLinkedQueue$Node::load$($String* name, bool initialize) {
	$loadClass(ConcurrentLinkedQueue$Node, name, initialize, &_ConcurrentLinkedQueue$Node_ClassInfo_, allocate$ConcurrentLinkedQueue$Node);
	return class$;
}

$Class* ConcurrentLinkedQueue$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java