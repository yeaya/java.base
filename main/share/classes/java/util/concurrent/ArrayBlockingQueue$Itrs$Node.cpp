#include <java/util/concurrent/ArrayBlockingQueue$Itrs$Node.h>

#include <java/lang/ref/WeakReference.h>
#include <java/util/concurrent/ArrayBlockingQueue$Itr.h>
#include <java/util/concurrent/ArrayBlockingQueue$Itrs.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ArrayBlockingQueue$Itr = ::java::util::concurrent::ArrayBlockingQueue$Itr;
using $ArrayBlockingQueue$Itrs = ::java::util::concurrent::ArrayBlockingQueue$Itrs;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ArrayBlockingQueue$Itrs$Node_FieldInfo_[] = {
	{"this$1", "Ljava/util/concurrent/ArrayBlockingQueue$Itrs;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayBlockingQueue$Itrs$Node, this$1)},
	{"next", "Ljava/util/concurrent/ArrayBlockingQueue$Itrs$Node;", "Ljava/util/concurrent/ArrayBlockingQueue<TE;>.Itrs.Node;", 0, $field(ArrayBlockingQueue$Itrs$Node, next)},
	{}
};

$MethodInfo _ArrayBlockingQueue$Itrs$Node_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ArrayBlockingQueue$Itrs;Ljava/util/concurrent/ArrayBlockingQueue$Itr;Ljava/util/concurrent/ArrayBlockingQueue$Itrs$Node;)V", "(Ljava/util/concurrent/ArrayBlockingQueue<TE;>.Itr;Ljava/util/concurrent/ArrayBlockingQueue<TE;>.Itrs.Node;)V", 0, $method(ArrayBlockingQueue$Itrs$Node, init$, void, $ArrayBlockingQueue$Itrs*, $ArrayBlockingQueue$Itr*, ArrayBlockingQueue$Itrs$Node*)},
	{}
};

$InnerClassInfo _ArrayBlockingQueue$Itrs$Node_InnerClassesInfo_[] = {
	{"java.util.concurrent.ArrayBlockingQueue$Itrs", "java.util.concurrent.ArrayBlockingQueue", "Itrs", 0},
	{"java.util.concurrent.ArrayBlockingQueue$Itrs$Node", "java.util.concurrent.ArrayBlockingQueue$Itrs", "Node", $PRIVATE},
	{"java.util.concurrent.ArrayBlockingQueue$Itr", "java.util.concurrent.ArrayBlockingQueue", "Itr", $PRIVATE},
	{}
};

$ClassInfo _ArrayBlockingQueue$Itrs$Node_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ArrayBlockingQueue$Itrs$Node",
	"java.lang.ref.WeakReference",
	nullptr,
	_ArrayBlockingQueue$Itrs$Node_FieldInfo_,
	_ArrayBlockingQueue$Itrs$Node_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Ljava/util/concurrent/ArrayBlockingQueue<TE;>.Itr;>;",
	nullptr,
	_ArrayBlockingQueue$Itrs$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ArrayBlockingQueue"
};

$Object* allocate$ArrayBlockingQueue$Itrs$Node($Class* clazz) {
	return $of($alloc(ArrayBlockingQueue$Itrs$Node));
}

void ArrayBlockingQueue$Itrs$Node::init$($ArrayBlockingQueue$Itrs* this$1, $ArrayBlockingQueue$Itr* iterator, ArrayBlockingQueue$Itrs$Node* next) {
	$set(this, this$1, this$1);
	$WeakReference::init$(iterator);
	$set(this, next, next);
}

ArrayBlockingQueue$Itrs$Node::ArrayBlockingQueue$Itrs$Node() {
}

$Class* ArrayBlockingQueue$Itrs$Node::load$($String* name, bool initialize) {
	$loadClass(ArrayBlockingQueue$Itrs$Node, name, initialize, &_ArrayBlockingQueue$Itrs$Node_ClassInfo_, allocate$ArrayBlockingQueue$Itrs$Node);
	return class$;
}

$Class* ArrayBlockingQueue$Itrs$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java