#include <java/util/stream/Nodes$FixedNodeBuilder.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Arrays.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$ArrayNode.h>
#include <java/util/stream/Nodes.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $IntFunction = ::java::util::function::IntFunction;
using $Node = ::java::util::stream::Node;
using $Nodes = ::java::util::stream::Nodes;
using $Nodes$ArrayNode = ::java::util::stream::Nodes$ArrayNode;

namespace java {
	namespace util {
		namespace stream {

int32_t Nodes$FixedNodeBuilder::hashCode() {
	 return this->$Nodes$ArrayNode::hashCode();
}

bool Nodes$FixedNodeBuilder::equals(Object$* obj) {
	 return this->$Nodes$ArrayNode::equals(obj);
}

$Object* Nodes$FixedNodeBuilder::clone() {
	 return this->$Nodes$ArrayNode::clone();
}

void Nodes$FixedNodeBuilder::finalize() {
	this->$Nodes$ArrayNode::finalize();
}

bool Nodes$FixedNodeBuilder::$assertionsDisabled = false;

void Nodes$FixedNodeBuilder::init$(int64_t size, $IntFunction* generator) {
	$Nodes$ArrayNode::init$(size, generator);
	if (!Nodes$FixedNodeBuilder::$assertionsDisabled && !(size < 2147483639)) {
		$throwNew($AssertionError);
	}
}

$Node* Nodes$FixedNodeBuilder::build() {
	$useLocalObjectStack();
	if (this->curSize < $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("Current size %d is less than fixed size %d"_s, $$new($ObjectArray, {
			$($Integer::valueOf(this->curSize)),
			$($Integer::valueOf(this->array->length))
		}))));
	}
	return this;
}

void Nodes$FixedNodeBuilder::begin(int64_t size) {
	$useLocalObjectStack();
	if (size != $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("Begin size %d is not equal to fixed size %d"_s, $$new($ObjectArray, {
			$($Long::valueOf(size)),
			$($Integer::valueOf(this->array->length))
		}))));
	}
	this->curSize = 0;
}

void Nodes$FixedNodeBuilder::accept(Object$* t) {
	$useLocalObjectStack();
	if (this->curSize < $nc(this->array)->length) {
		this->array->set(this->curSize++, t);
	} else {
		$throwNew($IllegalStateException, $($String::format("Accept exceeded fixed size of %d"_s, $$new($ObjectArray, {$($Integer::valueOf(this->array->length))}))));
	}
}

void Nodes$FixedNodeBuilder::end() {
	$useLocalObjectStack();
	if (this->curSize < $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("End size %d is less than fixed size %d"_s, $$new($ObjectArray, {
			$($Integer::valueOf(this->curSize)),
			$($Integer::valueOf(this->array->length))
		}))));
	}
}

$String* Nodes$FixedNodeBuilder::toString() {
	$useLocalObjectStack();
	return $String::format("FixedNodeBuilder[%d][%s]"_s, $$new($ObjectArray, {
		$($Integer::valueOf($nc(this->array)->length - this->curSize)),
		$($Arrays::toString(this->array))
	}));
}

void Nodes$FixedNodeBuilder::clinit$($Class* clazz) {
	$load($Nodes);
	Nodes$FixedNodeBuilder::$assertionsDisabled = !$Nodes::class$->desiredAssertionStatus();
}

Nodes$FixedNodeBuilder::Nodes$FixedNodeBuilder() {
}

$Class* Nodes$FixedNodeBuilder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Nodes$FixedNodeBuilder, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(JLjava/util/function/IntFunction;)V", "(JLjava/util/function/IntFunction<[TT;>;)V", 0, $method(Nodes$FixedNodeBuilder, init$, void, int64_t, $IntFunction*)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(Nodes$FixedNodeBuilder, accept, void, Object$*)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(Nodes$FixedNodeBuilder, begin, void, int64_t)},
		{"build", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TT;>;", $PUBLIC, $virtualMethod(Nodes$FixedNodeBuilder, build, $Node*)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(Nodes$FixedNodeBuilder, end, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Nodes$FixedNodeBuilder, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Nodes$FixedNodeBuilder", "java.util.stream.Nodes", "FixedNodeBuilder", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.Nodes$ArrayNode", "java.util.stream.Nodes", "ArrayNode", $PRIVATE | $STATIC},
		{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.Nodes$FixedNodeBuilder",
		"java.util.stream.Nodes$ArrayNode",
		"java.util.stream.Node$Builder",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/stream/Nodes$ArrayNode<TT;>;Ljava/util/stream/Node$Builder<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Nodes"
	};
	$loadClass(Nodes$FixedNodeBuilder, name, initialize, &classInfo$$, Nodes$FixedNodeBuilder::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Nodes$FixedNodeBuilder));
	});
	return class$;
}

$Class* Nodes$FixedNodeBuilder::class$ = nullptr;

		} // stream
	} // util
} // java