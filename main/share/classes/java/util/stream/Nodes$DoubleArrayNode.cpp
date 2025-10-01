#include <java/util/stream/Nodes$DoubleArrayNode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/Nodes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $Node$OfDouble = ::java::util::stream::Node$OfDouble;
using $Nodes = ::java::util::stream::Nodes;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$DoubleArrayNode_FieldInfo_[] = {
	{"array", "[D", nullptr, $FINAL, $field(Nodes$DoubleArrayNode, array)},
	{"curSize", "I", nullptr, 0, $field(Nodes$DoubleArrayNode, curSize)},
	{}
};

$MethodInfo _Nodes$DoubleArrayNode_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(Nodes$DoubleArrayNode::*)(int64_t)>(&Nodes$DoubleArrayNode::init$))},
	{"<init>", "([D)V", nullptr, 0, $method(static_cast<void(Nodes$DoubleArrayNode::*)($doubles*)>(&Nodes$DoubleArrayNode::init$))},
	{"asPrimitiveArray", "()[D", nullptr, $PUBLIC},
	{"copyInto", "([DI)V", nullptr, $PUBLIC},
	{"copyInto", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"count", "()J", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC},
	{"forEach", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"spliterator", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$DoubleArrayNode_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$DoubleArrayNode", "java.util.stream.Nodes", "DoubleArrayNode", $PRIVATE | $STATIC},
	{"java.util.stream.Node$OfDouble", "java.util.stream.Node", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$DoubleArrayNode_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Nodes$DoubleArrayNode",
	"java.lang.Object",
	"java.util.stream.Node$OfDouble",
	_Nodes$DoubleArrayNode_FieldInfo_,
	_Nodes$DoubleArrayNode_MethodInfo_,
	nullptr,
	nullptr,
	_Nodes$DoubleArrayNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$DoubleArrayNode($Class* clazz) {
	return $of($alloc(Nodes$DoubleArrayNode));
}

void Nodes$DoubleArrayNode::init$(int64_t size) {
	if (size >= (int64_t)2147483639) {
		$throwNew($IllegalArgumentException, "Stream size exceeds max array size"_s);
	}
	$set(this, array, $new($doubles, (int32_t)size));
	this->curSize = 0;
}

void Nodes$DoubleArrayNode::init$($doubles* array) {
	$set(this, array, array);
	this->curSize = $nc(array)->length;
}

$Spliterator* Nodes$DoubleArrayNode::spliterator() {
	return $Arrays::spliterator(this->array, 0, this->curSize);
}

$Object* Nodes$DoubleArrayNode::asPrimitiveArray() {
	if ($nc(this->array)->length == this->curSize) {
		return $of(this->array);
	} else {
		return $of($Arrays::copyOf(this->array, this->curSize));
	}
}

void Nodes$DoubleArrayNode::copyInto($doubles* dest, int32_t destOffset) {
	$System::arraycopy(this->array, 0, dest, destOffset, this->curSize);
}

int64_t Nodes$DoubleArrayNode::count() {
	return this->curSize;
}

void Nodes$DoubleArrayNode::forEach($DoubleConsumer* consumer) {
	for (int32_t i = 0; i < this->curSize; ++i) {
		$nc(consumer)->accept($nc(this->array)->get(i));
	}
}

$String* Nodes$DoubleArrayNode::toString() {
	return $String::format("DoubleArrayNode[%d][%s]"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($nc(this->array)->length - this->curSize))),
		$($of($Arrays::toString(this->array)))
	}));
}

void Nodes$DoubleArrayNode::copyInto(Object$* dest, int32_t destOffset) {
	this->copyInto($cast($doubles, dest), destOffset);
}

void Nodes$DoubleArrayNode::forEach(Object$* consumer) {
	this->forEach($cast($DoubleConsumer, consumer));
}

Nodes$DoubleArrayNode::Nodes$DoubleArrayNode() {
}

$Class* Nodes$DoubleArrayNode::load$($String* name, bool initialize) {
	$loadClass(Nodes$DoubleArrayNode, name, initialize, &_Nodes$DoubleArrayNode_ClassInfo_, allocate$Nodes$DoubleArrayNode);
	return class$;
}

$Class* Nodes$DoubleArrayNode::class$ = nullptr;

		} // stream
	} // util
} // java