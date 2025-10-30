#include <java/util/concurrent/LinkedBlockingDeque$Node.h>

#include <java/util/concurrent/LinkedBlockingDeque.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedBlockingDeque = ::java::util::concurrent::LinkedBlockingDeque;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _LinkedBlockingDeque$Node_FieldInfo_[] = {
	{"item", "Ljava/lang/Object;", "TE;", 0, $field(LinkedBlockingDeque$Node, item)},
	{"prev", "Ljava/util/concurrent/LinkedBlockingDeque$Node;", "Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", 0, $field(LinkedBlockingDeque$Node, prev)},
	{"next", "Ljava/util/concurrent/LinkedBlockingDeque$Node;", "Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", 0, $field(LinkedBlockingDeque$Node, next)},
	{}
};

$MethodInfo _LinkedBlockingDeque$Node_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TE;)V", 0, $method(static_cast<void(LinkedBlockingDeque$Node::*)(Object$*)>(&LinkedBlockingDeque$Node::init$))},
	{}
};

$InnerClassInfo _LinkedBlockingDeque$Node_InnerClassesInfo_[] = {
	{"java.util.concurrent.LinkedBlockingDeque$Node", "java.util.concurrent.LinkedBlockingDeque", "Node", $STATIC | $FINAL},
	{}
};

$ClassInfo _LinkedBlockingDeque$Node_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.LinkedBlockingDeque$Node",
	"java.lang.Object",
	nullptr,
	_LinkedBlockingDeque$Node_FieldInfo_,
	_LinkedBlockingDeque$Node_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_LinkedBlockingDeque$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.LinkedBlockingDeque"
};

$Object* allocate$LinkedBlockingDeque$Node($Class* clazz) {
	return $of($alloc(LinkedBlockingDeque$Node));
}

void LinkedBlockingDeque$Node::init$(Object$* x) {
	$set(this, item, x);
}

LinkedBlockingDeque$Node::LinkedBlockingDeque$Node() {
}

$Class* LinkedBlockingDeque$Node::load$($String* name, bool initialize) {
	$loadClass(LinkedBlockingDeque$Node, name, initialize, &_LinkedBlockingDeque$Node_ClassInfo_, allocate$LinkedBlockingDeque$Node);
	return class$;
}

$Class* LinkedBlockingDeque$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java