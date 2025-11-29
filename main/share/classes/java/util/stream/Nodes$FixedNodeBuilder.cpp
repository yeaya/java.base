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

$FieldInfo _Nodes$FixedNodeBuilder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Nodes$FixedNodeBuilder, $assertionsDisabled)},
	{}
};

$MethodInfo _Nodes$FixedNodeBuilder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JLjava/util/function/IntFunction;)V", "(JLjava/util/function/IntFunction<[TT;>;)V", 0, $method(static_cast<void(Nodes$FixedNodeBuilder::*)(int64_t,$IntFunction*)>(&Nodes$FixedNodeBuilder::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"build", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TT;>;", $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$FixedNodeBuilder_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$FixedNodeBuilder", "java.util.stream.Nodes", "FixedNodeBuilder", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$ArrayNode", "java.util.stream.Nodes", "ArrayNode", $PRIVATE | $STATIC},
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$FixedNodeBuilder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$FixedNodeBuilder",
	"java.util.stream.Nodes$ArrayNode",
	"java.util.stream.Node$Builder",
	_Nodes$FixedNodeBuilder_FieldInfo_,
	_Nodes$FixedNodeBuilder_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/Nodes$ArrayNode<TT;>;Ljava/util/stream/Node$Builder<TT;>;",
	nullptr,
	_Nodes$FixedNodeBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$FixedNodeBuilder($Class* clazz) {
	return $of($alloc(Nodes$FixedNodeBuilder));
}

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
	if (!Nodes$FixedNodeBuilder::$assertionsDisabled && !(size < (int64_t)2147483639)) {
		$throwNew($AssertionError);
	}
}

$Node* Nodes$FixedNodeBuilder::build() {
	$useLocalCurrentObjectStackCache();
	if (this->curSize < $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("Current size %d is less than fixed size %d"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->curSize))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
	return this;
}

void Nodes$FixedNodeBuilder::begin(int64_t size) {
	$useLocalCurrentObjectStackCache();
	if (size != $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("Begin size %d is not equal to fixed size %d"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(size))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
	this->curSize = 0;
}

void Nodes$FixedNodeBuilder::accept(Object$* t) {
	$useLocalCurrentObjectStackCache();
	if (this->curSize < $nc(this->array)->length) {
		$nc(this->array)->set(this->curSize++, t);
	} else {
		$throwNew($IllegalStateException, $($String::format("Accept exceeded fixed size of %d"_s, $$new($ObjectArray, {$($of($Integer::valueOf($nc(this->array)->length)))}))));
	}
}

void Nodes$FixedNodeBuilder::end() {
	$useLocalCurrentObjectStackCache();
	if (this->curSize < $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("End size %d is less than fixed size %d"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->curSize))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
}

$String* Nodes$FixedNodeBuilder::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("FixedNodeBuilder[%d][%s]"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($nc(this->array)->length - this->curSize))),
		$($of($Arrays::toString(this->array)))
	}));
}

void clinit$Nodes$FixedNodeBuilder($Class* class$) {
	$load($Nodes);
	Nodes$FixedNodeBuilder::$assertionsDisabled = !$Nodes::class$->desiredAssertionStatus();
}

Nodes$FixedNodeBuilder::Nodes$FixedNodeBuilder() {
}

$Class* Nodes$FixedNodeBuilder::load$($String* name, bool initialize) {
	$loadClass(Nodes$FixedNodeBuilder, name, initialize, &_Nodes$FixedNodeBuilder_ClassInfo_, clinit$Nodes$FixedNodeBuilder, allocate$Nodes$FixedNodeBuilder);
	return class$;
}

$Class* Nodes$FixedNodeBuilder::class$ = nullptr;

		} // stream
	} // util
} // java