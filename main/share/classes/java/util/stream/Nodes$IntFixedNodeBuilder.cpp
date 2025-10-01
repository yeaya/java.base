#include <java/util/stream/Nodes$IntFixedNodeBuilder.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/stream/Node$OfInt.h>
#include <java/util/stream/Nodes$IntArrayNode.h>
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
using $Node$Builder$OfInt = ::java::util::stream::Node$Builder$OfInt;
using $Node$OfInt = ::java::util::stream::Node$OfInt;
using $Nodes = ::java::util::stream::Nodes;
using $Nodes$IntArrayNode = ::java::util::stream::Nodes$IntArrayNode;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$IntFixedNodeBuilder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Nodes$IntFixedNodeBuilder, $assertionsDisabled)},
	{}
};

$MethodInfo _Nodes$IntFixedNodeBuilder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(Nodes$IntFixedNodeBuilder::*)(int64_t)>(&Nodes$IntFixedNodeBuilder::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"build", "()Ljava/util/stream/Node$OfInt;", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$IntFixedNodeBuilder_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$IntFixedNodeBuilder", "java.util.stream.Nodes", "IntFixedNodeBuilder", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$IntArrayNode", "java.util.stream.Nodes", "IntArrayNode", $PRIVATE | $STATIC},
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder$OfInt", "java.util.stream.Node$Builder", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$IntFixedNodeBuilder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$IntFixedNodeBuilder",
	"java.util.stream.Nodes$IntArrayNode",
	"java.util.stream.Node$Builder$OfInt",
	_Nodes$IntFixedNodeBuilder_FieldInfo_,
	_Nodes$IntFixedNodeBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_Nodes$IntFixedNodeBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$IntFixedNodeBuilder($Class* clazz) {
	return $of($alloc(Nodes$IntFixedNodeBuilder));
}

int32_t Nodes$IntFixedNodeBuilder::hashCode() {
	 return this->$Nodes$IntArrayNode::hashCode();
}

bool Nodes$IntFixedNodeBuilder::equals(Object$* obj) {
	 return this->$Nodes$IntArrayNode::equals(obj);
}

$Object* Nodes$IntFixedNodeBuilder::clone() {
	 return this->$Nodes$IntArrayNode::clone();
}

void Nodes$IntFixedNodeBuilder::finalize() {
	this->$Nodes$IntArrayNode::finalize();
}

bool Nodes$IntFixedNodeBuilder::$assertionsDisabled = false;

void Nodes$IntFixedNodeBuilder::init$(int64_t size) {
	$Nodes$IntArrayNode::init$(size);
	if (!Nodes$IntFixedNodeBuilder::$assertionsDisabled && !(size < (int64_t)2147483639)) {
		$throwNew($AssertionError);
	}
}

$Node$OfInt* Nodes$IntFixedNodeBuilder::build() {
	if (this->curSize < $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("Current size %d is less than fixed size %d"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->curSize))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
	return this;
}

void Nodes$IntFixedNodeBuilder::begin(int64_t size) {
	if (size != $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("Begin size %d is not equal to fixed size %d"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(size))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
	this->curSize = 0;
}

void Nodes$IntFixedNodeBuilder::accept(int32_t i) {
	if (this->curSize < $nc(this->array)->length) {
		$nc(this->array)->set(this->curSize++, i);
	} else {
		$throwNew($IllegalStateException, $($String::format("Accept exceeded fixed size of %d"_s, $$new($ObjectArray, {$($of($Integer::valueOf($nc(this->array)->length)))}))));
	}
}

void Nodes$IntFixedNodeBuilder::end() {
	if (this->curSize < $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("End size %d is less than fixed size %d"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->curSize))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
}

$String* Nodes$IntFixedNodeBuilder::toString() {
	return $String::format("IntFixedNodeBuilder[%d][%s]"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($nc(this->array)->length - this->curSize))),
		$($of($Arrays::toString(this->array)))
	}));
}

void clinit$Nodes$IntFixedNodeBuilder($Class* class$) {
	$load($Nodes);
	Nodes$IntFixedNodeBuilder::$assertionsDisabled = !$Nodes::class$->desiredAssertionStatus();
}

Nodes$IntFixedNodeBuilder::Nodes$IntFixedNodeBuilder() {
}

$Class* Nodes$IntFixedNodeBuilder::load$($String* name, bool initialize) {
	$loadClass(Nodes$IntFixedNodeBuilder, name, initialize, &_Nodes$IntFixedNodeBuilder_ClassInfo_, clinit$Nodes$IntFixedNodeBuilder, allocate$Nodes$IntFixedNodeBuilder);
	return class$;
}

$Class* Nodes$IntFixedNodeBuilder::class$ = nullptr;

		} // stream
	} // util
} // java