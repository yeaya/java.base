#include <java/util/LinkedList$Node.h>

#include <java/util/LinkedList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedList = ::java::util::LinkedList;

namespace java {
	namespace util {

$FieldInfo _LinkedList$Node_FieldInfo_[] = {
	{"item", "Ljava/lang/Object;", "TE;", 0, $field(LinkedList$Node, item)},
	{"next", "Ljava/util/LinkedList$Node;", "Ljava/util/LinkedList$Node<TE;>;", 0, $field(LinkedList$Node, next)},
	{"prev", "Ljava/util/LinkedList$Node;", "Ljava/util/LinkedList$Node<TE;>;", 0, $field(LinkedList$Node, prev)},
	{}
};

$MethodInfo _LinkedList$Node_MethodInfo_[] = {
	{"<init>", "(Ljava/util/LinkedList$Node;Ljava/lang/Object;Ljava/util/LinkedList$Node;)V", "(Ljava/util/LinkedList$Node<TE;>;TE;Ljava/util/LinkedList$Node<TE;>;)V", 0, $method(static_cast<void(LinkedList$Node::*)(LinkedList$Node*,Object$*,LinkedList$Node*)>(&LinkedList$Node::init$))},
	{}
};

$InnerClassInfo _LinkedList$Node_InnerClassesInfo_[] = {
	{"java.util.LinkedList$Node", "java.util.LinkedList", "Node", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LinkedList$Node_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.LinkedList$Node",
	"java.lang.Object",
	nullptr,
	_LinkedList$Node_FieldInfo_,
	_LinkedList$Node_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_LinkedList$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.LinkedList"
};

$Object* allocate$LinkedList$Node($Class* clazz) {
	return $of($alloc(LinkedList$Node));
}

void LinkedList$Node::init$(LinkedList$Node* prev, Object$* element, LinkedList$Node* next) {
	$set(this, item, element);
	$set(this, next, next);
	$set(this, prev, prev);
}

LinkedList$Node::LinkedList$Node() {
}

$Class* LinkedList$Node::load$($String* name, bool initialize) {
	$loadClass(LinkedList$Node, name, initialize, &_LinkedList$Node_ClassInfo_, allocate$LinkedList$Node);
	return class$;
}

$Class* LinkedList$Node::class$ = nullptr;

	} // util
} // java