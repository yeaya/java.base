#include <java/util/stream/Nodes$LongArrayNode.h>

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
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/LongConsumer.h>
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
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $LongConsumer = ::java::util::function::LongConsumer;
using $Node$OfLong = ::java::util::stream::Node$OfLong;
using $Nodes = ::java::util::stream::Nodes;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$LongArrayNode_FieldInfo_[] = {
	{"array", "[J", nullptr, $FINAL, $field(Nodes$LongArrayNode, array)},
	{"curSize", "I", nullptr, 0, $field(Nodes$LongArrayNode, curSize)},
	{}
};

$MethodInfo _Nodes$LongArrayNode_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(Nodes$LongArrayNode::*)(int64_t)>(&Nodes$LongArrayNode::init$))},
	{"<init>", "([J)V", nullptr, 0, $method(static_cast<void(Nodes$LongArrayNode::*)($longs*)>(&Nodes$LongArrayNode::init$))},
	{"asPrimitiveArray", "()[J", nullptr, $PUBLIC},
	{"copyInto", "([JI)V", nullptr, $PUBLIC},
	{"copyInto", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"count", "()J", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC},
	{"forEach", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"spliterator", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$LongArrayNode_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$LongArrayNode", "java.util.stream.Nodes", "LongArrayNode", $PRIVATE | $STATIC},
	{"java.util.stream.Node$OfLong", "java.util.stream.Node", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$LongArrayNode_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Nodes$LongArrayNode",
	"java.lang.Object",
	"java.util.stream.Node$OfLong",
	_Nodes$LongArrayNode_FieldInfo_,
	_Nodes$LongArrayNode_MethodInfo_,
	nullptr,
	nullptr,
	_Nodes$LongArrayNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$LongArrayNode($Class* clazz) {
	return $of($alloc(Nodes$LongArrayNode));
}

void Nodes$LongArrayNode::init$(int64_t size) {
	if (size >= (int64_t)2147483639) {
		$throwNew($IllegalArgumentException, "Stream size exceeds max array size"_s);
	}
	$set(this, array, $new($longs, (int32_t)size));
	this->curSize = 0;
}

void Nodes$LongArrayNode::init$($longs* array) {
	$set(this, array, array);
	this->curSize = $nc(array)->length;
}

$Spliterator* Nodes$LongArrayNode::spliterator() {
	return $Arrays::spliterator(this->array, 0, this->curSize);
}

$Object* Nodes$LongArrayNode::asPrimitiveArray() {
	if ($nc(this->array)->length == this->curSize) {
		return $of(this->array);
	} else {
		return $of($Arrays::copyOf(this->array, this->curSize));
	}
}

void Nodes$LongArrayNode::copyInto($longs* dest, int32_t destOffset) {
	$System::arraycopy(this->array, 0, dest, destOffset, this->curSize);
}

int64_t Nodes$LongArrayNode::count() {
	return this->curSize;
}

void Nodes$LongArrayNode::forEach($LongConsumer* consumer) {
	for (int32_t i = 0; i < this->curSize; ++i) {
		$nc(consumer)->accept($nc(this->array)->get(i));
	}
}

$String* Nodes$LongArrayNode::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("LongArrayNode[%d][%s]"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($nc(this->array)->length - this->curSize))),
		$($of($Arrays::toString(this->array)))
	}));
}

void Nodes$LongArrayNode::copyInto(Object$* dest, int32_t destOffset) {
	this->copyInto($cast($longs, dest), destOffset);
}

void Nodes$LongArrayNode::forEach(Object$* consumer) {
	this->forEach($cast($LongConsumer, consumer));
}

Nodes$LongArrayNode::Nodes$LongArrayNode() {
}

$Class* Nodes$LongArrayNode::load$($String* name, bool initialize) {
	$loadClass(Nodes$LongArrayNode, name, initialize, &_Nodes$LongArrayNode_ClassInfo_, allocate$Nodes$LongArrayNode);
	return class$;
}

$Class* Nodes$LongArrayNode::class$ = nullptr;

		} // stream
	} // util
} // java