#include <java/util/stream/Nodes$ArrayNode.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/Arrays.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Nodes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$ArrayNode_FieldInfo_[] = {
	{"array", "[Ljava/lang/Object;", "[TT;", $FINAL, $field(Nodes$ArrayNode, array)},
	{"curSize", "I", nullptr, 0, $field(Nodes$ArrayNode, curSize)},
	{}
};

$MethodInfo _Nodes$ArrayNode_MethodInfo_[] = {
	{"<init>", "(JLjava/util/function/IntFunction;)V", "(JLjava/util/function/IntFunction<[TT;>;)V", 0, $method(static_cast<void(Nodes$ArrayNode::*)(int64_t,$IntFunction*)>(&Nodes$ArrayNode::init$))},
	{"<init>", "([Ljava/lang/Object;)V", "([TT;)V", 0, $method(static_cast<void(Nodes$ArrayNode::*)($ObjectArray*)>(&Nodes$ArrayNode::init$))},
	{"asArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC},
	{"copyInto", "([Ljava/lang/Object;I)V", "([TT;I)V", $PUBLIC},
	{"count", "()J", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$ArrayNode_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$ArrayNode", "java.util.stream.Nodes", "ArrayNode", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Nodes$ArrayNode_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Nodes$ArrayNode",
	"java.lang.Object",
	"java.util.stream.Node",
	_Nodes$ArrayNode_FieldInfo_,
	_Nodes$ArrayNode_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Node<TT;>;",
	nullptr,
	_Nodes$ArrayNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$ArrayNode($Class* clazz) {
	return $of($alloc(Nodes$ArrayNode));
}

void Nodes$ArrayNode::init$(int64_t size, $IntFunction* generator) {
	if (size >= (int64_t)2147483639) {
		$throwNew($IllegalArgumentException, "Stream size exceeds max array size"_s);
	}
	$set(this, array, $cast($ObjectArray, $nc(generator)->apply((int32_t)size)));
	this->curSize = 0;
}

void Nodes$ArrayNode::init$($ObjectArray* array) {
	$set(this, array, array);
	this->curSize = $nc(array)->length;
}

$Spliterator* Nodes$ArrayNode::spliterator() {
	return $Arrays::spliterator(this->array, 0, this->curSize);
}

void Nodes$ArrayNode::copyInto($ObjectArray* dest, int32_t destOffset) {
	$System::arraycopy(this->array, 0, dest, destOffset, this->curSize);
}

$ObjectArray* Nodes$ArrayNode::asArray($IntFunction* generator) {
	if ($nc(this->array)->length == this->curSize) {
		return this->array;
	} else {
		$throwNew($IllegalStateException);
	}
}

int64_t Nodes$ArrayNode::count() {
	return this->curSize;
}

void Nodes$ArrayNode::forEach($Consumer* consumer) {
	for (int32_t i = 0; i < this->curSize; ++i) {
		$nc(consumer)->accept($nc(this->array)->get(i));
	}
}

$String* Nodes$ArrayNode::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("ArrayNode[%d][%s]"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($nc(this->array)->length - this->curSize))),
		$($of($Arrays::toString(this->array)))
	}));
}

Nodes$ArrayNode::Nodes$ArrayNode() {
}

$Class* Nodes$ArrayNode::load$($String* name, bool initialize) {
	$loadClass(Nodes$ArrayNode, name, initialize, &_Nodes$ArrayNode_ClassInfo_, allocate$Nodes$ArrayNode);
	return class$;
}

$Class* Nodes$ArrayNode::class$ = nullptr;

		} // stream
	} // util
} // java