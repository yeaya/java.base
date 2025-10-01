#include <java/util/concurrent/ConcurrentLinkedDeque$Node.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentLinkedDeque.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentLinkedDeque = ::java::util::concurrent::ConcurrentLinkedDeque;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentLinkedDeque$Node_FieldInfo_[] = {
	{"prev", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $VOLATILE, $field(ConcurrentLinkedDeque$Node, prev)},
	{"item", "Ljava/lang/Object;", "TE;", $VOLATILE, $field(ConcurrentLinkedDeque$Node, item)},
	{"next", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $VOLATILE, $field(ConcurrentLinkedDeque$Node, next)},
	{}
};

$MethodInfo _ConcurrentLinkedDeque$Node_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ConcurrentLinkedDeque$Node::*)()>(&ConcurrentLinkedDeque$Node::init$))},
	{}
};

$InnerClassInfo _ConcurrentLinkedDeque$Node_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentLinkedDeque$Node", "java.util.concurrent.ConcurrentLinkedDeque", "Node", $STATIC | $FINAL},
	{}
};

$ClassInfo _ConcurrentLinkedDeque$Node_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentLinkedDeque$Node",
	"java.lang.Object",
	nullptr,
	_ConcurrentLinkedDeque$Node_FieldInfo_,
	_ConcurrentLinkedDeque$Node_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ConcurrentLinkedDeque$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentLinkedDeque"
};

$Object* allocate$ConcurrentLinkedDeque$Node($Class* clazz) {
	return $of($alloc(ConcurrentLinkedDeque$Node));
}

void ConcurrentLinkedDeque$Node::init$() {
}

ConcurrentLinkedDeque$Node::ConcurrentLinkedDeque$Node() {
}

$Class* ConcurrentLinkedDeque$Node::load$($String* name, bool initialize) {
	$loadClass(ConcurrentLinkedDeque$Node, name, initialize, &_ConcurrentLinkedDeque$Node_ClassInfo_, allocate$ConcurrentLinkedDeque$Node);
	return class$;
}

$Class* ConcurrentLinkedDeque$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java