#include <java/util/stream/Nodes$ToArrayTask$OfPrimitive.h>

#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$ToArrayTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::java::util::stream::Node;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes$ToArrayTask = ::java::util::stream::Nodes$ToArrayTask;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$ToArrayTask$OfPrimitive_FieldInfo_[] = {
	{"array", "Ljava/lang/Object;", "TT_ARR;", $PRIVATE | $FINAL, $field(Nodes$ToArrayTask$OfPrimitive, array)},
	{}
};

$MethodInfo _Nodes$ToArrayTask$OfPrimitive_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Node$OfPrimitive;Ljava/lang/Object;I)V", "(TT_NODE;TT_ARR;I)V", $PRIVATE, $method(Nodes$ToArrayTask$OfPrimitive, init$, void, $Node$OfPrimitive*, Object$*, int32_t)},
	{"<init>", "(Ljava/util/stream/Nodes$ToArrayTask$OfPrimitive;Ljava/util/stream/Node$OfPrimitive;I)V", "(Ljava/util/stream/Nodes$ToArrayTask$OfPrimitive<TT;TT_CONS;TT_ARR;TT_SPLITR;TT_NODE;>;TT_NODE;I)V", $PRIVATE, $method(Nodes$ToArrayTask$OfPrimitive, init$, void, Nodes$ToArrayTask$OfPrimitive*, $Node$OfPrimitive*, int32_t)},
	{"copyNodeToArray", "()V", nullptr, 0, $virtualMethod(Nodes$ToArrayTask$OfPrimitive, copyNodeToArray, void)},
	{"makeChild", "(II)Ljava/util/stream/Nodes$ToArrayTask$OfPrimitive;", "(II)Ljava/util/stream/Nodes$ToArrayTask$OfPrimitive<TT;TT_CONS;TT_ARR;TT_SPLITR;TT_NODE;>;", 0, $virtualMethod(Nodes$ToArrayTask$OfPrimitive, makeChild, Nodes$ToArrayTask$OfPrimitive*, int32_t, int32_t)},
	{}
};

$InnerClassInfo _Nodes$ToArrayTask$OfPrimitive_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$ToArrayTask", "java.util.stream.Nodes", "ToArrayTask", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$ToArrayTask$OfPrimitive", "java.util.stream.Nodes$ToArrayTask", "OfPrimitive", $PRIVATE | $STATIC},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$OfPrimitive", "java.util.stream.Node", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$ToArrayTask$OfPrimitive_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Nodes$ToArrayTask$OfPrimitive",
	"java.util.stream.Nodes$ToArrayTask",
	nullptr,
	_Nodes$ToArrayTask$OfPrimitive_FieldInfo_,
	_Nodes$ToArrayTask$OfPrimitive_MethodInfo_,
	"<T:Ljava/lang/Object;T_CONS:Ljava/lang/Object;T_ARR:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;T_NODE::Ljava/util/stream/Node$OfPrimitive<TT;TT_CONS;TT_ARR;TT_SPLITR;TT_NODE;>;>Ljava/util/stream/Nodes$ToArrayTask<TT;TT_NODE;Ljava/util/stream/Nodes$ToArrayTask$OfPrimitive<TT;TT_CONS;TT_ARR;TT_SPLITR;TT_NODE;>;>;",
	nullptr,
	_Nodes$ToArrayTask$OfPrimitive_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$ToArrayTask$OfPrimitive($Class* clazz) {
	return $of($alloc(Nodes$ToArrayTask$OfPrimitive));
}

void Nodes$ToArrayTask$OfPrimitive::init$($Node$OfPrimitive* node, Object$* array, int32_t offset) {
	$Nodes$ToArrayTask::init$(node, offset);
	$set(this, array, array);
}

void Nodes$ToArrayTask$OfPrimitive::init$(Nodes$ToArrayTask$OfPrimitive* parent, $Node$OfPrimitive* node, int32_t offset) {
	$Nodes$ToArrayTask::init$(parent, node, offset);
	$set(this, array, $nc(parent)->array);
}

Nodes$ToArrayTask$OfPrimitive* Nodes$ToArrayTask$OfPrimitive::makeChild(int32_t childIndex, int32_t offset) {
	return $new(Nodes$ToArrayTask$OfPrimitive, this, $($cast($Node$OfPrimitive, $nc(($cast($Node$OfPrimitive, this->node)))->getChild(childIndex))), offset);
}

void Nodes$ToArrayTask$OfPrimitive::copyNodeToArray() {
	$nc(($cast($Node$OfPrimitive, this->node)))->copyInto(this->array, this->offset);
}

Nodes$ToArrayTask$OfPrimitive::Nodes$ToArrayTask$OfPrimitive() {
}

$Class* Nodes$ToArrayTask$OfPrimitive::load$($String* name, bool initialize) {
	$loadClass(Nodes$ToArrayTask$OfPrimitive, name, initialize, &_Nodes$ToArrayTask$OfPrimitive_ClassInfo_, allocate$Nodes$ToArrayTask$OfPrimitive);
	return class$;
}

$Class* Nodes$ToArrayTask$OfPrimitive::class$ = nullptr;

		} // stream
	} // util
} // java