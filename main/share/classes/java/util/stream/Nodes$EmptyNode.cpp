#include <java/util/stream/Nodes$EmptyNode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Nodes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntFunction = ::java::util::function::IntFunction;
using $Node = ::java::util::stream::Node;
using $Nodes = ::java::util::stream::Nodes;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Nodes$EmptyNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Nodes$EmptyNode::*)()>(&Nodes$EmptyNode::init$))},
	{"asArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC},
	{"copyInto", "(Ljava/lang/Object;I)V", "(TT_ARR;I)V", $PUBLIC},
	{"count", "()J", nullptr, $PUBLIC},
	{"forEach", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC},
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