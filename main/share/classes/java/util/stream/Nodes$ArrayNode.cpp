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

void Nodes$ArrayNode::init$(int64_t size, $IntFunction* generator) {
	if (size >= 2147483639) {
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
	$useLocalObjectStack();
	return $String::format("ArrayNode[%d][%s]"_s, $$new($ObjectArray, {
		$($Integer::valueOf($nc(this->array)->length - this->curSize)),
		$($Arrays::toString(this->array))
	}));
}

Nodes$ArrayNode::Nodes$ArrayNode() {
}

$Class* Nodes$ArrayNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"array", "[Ljava/lang/Object;", "[TT;", $FINAL, $field(Nodes$ArrayNode, array)},
		{"curSize", "I", nullptr, 0, $field(Nodes$ArrayNode, curSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JLjava/util/function/IntFunction;)V", "(JLjava/util/function/IntFunction<[TT;>;)V", 0, $method(Nodes$ArrayNode, init$, void, int64_t, $IntFunction*)},
		{"<init>", "([Ljava/lang/Object;)V", "([TT;)V", 0, $method(Nodes$ArrayNode, init$, void, $ObjectArray*)},
		{"asArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC, $virtualMethod(Nodes$ArrayNode, asArray, $ObjectArray*, $IntFunction*)},
		{"copyInto", "([Ljava/lang/Object;I)V", "([TT;I)V", $PUBLIC, $virtualMethod(Nodes$ArrayNode, copyInto, void, $ObjectArray*, int32_t)},
		{"count", "()J", nullptr, $PUBLIC, $virtualMethod(Nodes$ArrayNode, count, int64_t)},
		{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC, $virtualMethod(Nodes$ArrayNode, forEach, void, $Consumer*)},
		{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC, $virtualMethod(Nodes$ArrayNode, spliterator, $Spliterator*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Nodes$ArrayNode, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Nodes$ArrayNode", "java.util.stream.Nodes", "ArrayNode", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.Nodes$ArrayNode",
		"java.lang.Object",
		"java.util.stream.Node",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Node<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Nodes"
	};
	$loadClass(Nodes$ArrayNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nodes$ArrayNode);
	});
	return class$;
}

$Class* Nodes$ArrayNode::class$ = nullptr;

		} // stream
	} // util
} // java