#include <java/util/stream/Nodes$AbstractConcNode.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::java::util::stream::Node;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$AbstractConcNode_FieldInfo_[] = {
	{"left", "Ljava/util/stream/Node;", "TT_NODE;", $PROTECTED | $FINAL, $field(Nodes$AbstractConcNode, left)},
	{"right", "Ljava/util/stream/Node;", "TT_NODE;", $PROTECTED | $FINAL, $field(Nodes$AbstractConcNode, right)},
	{"size", "J", nullptr, $PRIVATE | $FINAL, $field(Nodes$AbstractConcNode, size)},
	{}
};

$MethodInfo _Nodes$AbstractConcNode_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Node;Ljava/util/stream/Node;)V", "(TT_NODE;TT_NODE;)V", 0, $method(static_cast<void(Nodes$AbstractConcNode::*)($Node*,$Node*)>(&Nodes$AbstractConcNode::init$))},
	{"count", "()J", nullptr, $PUBLIC},
	{"getChild", "(I)Ljava/util/stream/Node;", "(I)TT_NODE;", $PUBLIC},
	{"getChildCount", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$AbstractConcNode_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$AbstractConcNode", "java.util.stream.Nodes", "AbstractConcNode", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$AbstractConcNode_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.Nodes$AbstractConcNode",
	"java.lang.Object",
	"java.util.stream.Node",
	_Nodes$AbstractConcNode_FieldInfo_,
	_Nodes$AbstractConcNode_MethodInfo_,
	"<T:Ljava/lang/Object;T_NODE::Ljava/util/stream/Node<TT;>;>Ljava/lang/Object;Ljava/util/stream/Node<TT;>;",
	nullptr,
	_Nodes$AbstractConcNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$AbstractConcNode($Class* clazz) {
	return $of($alloc(Nodes$AbstractConcNode));
}

void Nodes$AbstractConcNode::init$($Node* left, $Node* right) {
	$set(this, left, left);
	$set(this, right, right);
	int64_t var$0 = $nc(left)->count();
	this->size = var$0 + $nc(right)->count();
}

int32_t Nodes$AbstractConcNode::getChildCount() {
	return 2;
}

$Node* Nodes$AbstractConcNode::getChild(int32_t i) {
	if (i == 0) {
		return this->left;
	}
	if (i == 1) {
		return this->right;
	}
	$throwNew($IndexOutOfBoundsException);
}

int64_t Nodes$AbstractConcNode::count() {
	return this->size;
}

Nodes$AbstractConcNode::Nodes$AbstractConcNode() {
}

$Class* Nodes$AbstractConcNode::load$($String* name, bool initialize) {
	$loadClass(Nodes$AbstractConcNode, name, initialize, &_Nodes$AbstractConcNode_ClassInfo_, allocate$Nodes$AbstractConcNode);
	return class$;
}

$Class* Nodes$AbstractConcNode::class$ = nullptr;

		} // stream
	} // util
} // java