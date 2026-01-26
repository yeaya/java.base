#include <java/util/stream/Nodes$EmptyNode.h>

#include <java/util/function/IntFunction.h>
#include <java/util/stream/Nodes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntFunction = ::java::util::function::IntFunction;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Nodes$EmptyNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Nodes$EmptyNode, init$, void)},
	{"asArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC, $virtualMethod(Nodes$EmptyNode, asArray, $ObjectArray*, $IntFunction*)},
	{"copyInto", "(Ljava/lang/Object;I)V", "(TT_ARR;I)V", $PUBLIC, $virtualMethod(Nodes$EmptyNode, copyInto, void, Object$*, int32_t)},
	{"count", "()J", nullptr, $PUBLIC, $virtualMethod(Nodes$EmptyNode, count, int64_t)},
	{"forEach", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC, $virtualMethod(Nodes$EmptyNode, forEach, void, Object$*)},
	{}
};

$InnerClassInfo _Nodes$EmptyNode_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$EmptyNode", "java.util.stream.Nodes", "EmptyNode", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$EmptyNode$OfDouble", "java.util.stream.Nodes$EmptyNode", "OfDouble", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$EmptyNode$OfLong", "java.util.stream.Nodes$EmptyNode", "OfLong", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$EmptyNode$OfInt", "java.util.stream.Nodes$EmptyNode", "OfInt", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$EmptyNode$OfRef", "java.util.stream.Nodes$EmptyNode", "OfRef", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Nodes$EmptyNode_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.Nodes$EmptyNode",
	"java.lang.Object",
	"java.util.stream.Node",
	nullptr,
	_Nodes$EmptyNode_MethodInfo_,
	"<T:Ljava/lang/Object;T_ARR:Ljava/lang/Object;T_CONS:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Node<TT;>;",
	nullptr,
	_Nodes$EmptyNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$EmptyNode($Class* clazz) {
	return $of($alloc(Nodes$EmptyNode));
}

void Nodes$EmptyNode::init$() {
}

$ObjectArray* Nodes$EmptyNode::asArray($IntFunction* generator) {
	return $cast($ObjectArray, $nc(generator)->apply(0));
}

void Nodes$EmptyNode::copyInto(Object$* array, int32_t offset) {
}

int64_t Nodes$EmptyNode::count() {
	return 0;
}

void Nodes$EmptyNode::forEach(Object$* consumer) {
}

Nodes$EmptyNode::Nodes$EmptyNode() {
}

$Class* Nodes$EmptyNode::load$($String* name, bool initialize) {
	$loadClass(Nodes$EmptyNode, name, initialize, &_Nodes$EmptyNode_ClassInfo_, allocate$Nodes$EmptyNode);
	return class$;
}

$Class* Nodes$EmptyNode::class$ = nullptr;

		} // stream
	} // util
} // java