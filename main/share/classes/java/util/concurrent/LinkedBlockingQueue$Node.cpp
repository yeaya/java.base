#include <java/util/concurrent/LinkedBlockingQueue$Node.h>

#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _LinkedBlockingQueue$Node_FieldInfo_[] = {
	{"item", "Ljava/lang/Object;", "TE;", 0, $field(LinkedBlockingQueue$Node, item)},
	{"next", "Ljava/util/concurrent/LinkedBlockingQueue$Node;", "Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;", 0, $field(LinkedBlockingQueue$Node, next)},
	{}
};

$MethodInfo _LinkedBlockingQueue$Node_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TE;)V", 0, $method(LinkedBlockingQueue$Node, init$, void, Object$*)},
	{}
};

$InnerClassInfo _LinkedBlockingQueue$Node_InnerClassesInfo_[] = {
	{"java.util.concurrent.LinkedBlockingQueue$Node", "java.util.concurrent.LinkedBlockingQueue", "Node", $STATIC},
	{}
};

$ClassInfo _LinkedBlockingQueue$Node_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.LinkedBlockingQueue$Node",
	"java.lang.Object",
	nullptr,
	_LinkedBlockingQueue$Node_FieldInfo_,
	_LinkedBlockingQueue$Node_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_LinkedBlockingQueue$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.LinkedBlockingQueue"
};

$Object* allocate$LinkedBlockingQueue$Node($Class* clazz) {
	return $of($alloc(LinkedBlockingQueue$Node));
}

void LinkedBlockingQueue$Node::init$(Object$* x) {
	$set(this, item, x);
}

LinkedBlockingQueue$Node::LinkedBlockingQueue$Node() {
}

$Class* LinkedBlockingQueue$Node::load$($String* name, bool initialize) {
	$loadClass(LinkedBlockingQueue$Node, name, initialize, &_LinkedBlockingQueue$Node_ClassInfo_, allocate$LinkedBlockingQueue$Node);
	return class$;
}

$Class* LinkedBlockingQueue$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java