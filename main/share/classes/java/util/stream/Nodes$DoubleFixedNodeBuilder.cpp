#include <java/util/stream/Nodes$DoubleFixedNodeBuilder.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Arrays.h>
#include <java/util/stream/Node$OfDouble.h>
#include <java/util/stream/Nodes$DoubleArrayNode.h>
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
using $Node$OfDouble = ::java::util::stream::Node$OfDouble;
using $Nodes = ::java::util::stream::Nodes;
using $Nodes$DoubleArrayNode = ::java::util::stream::Nodes$DoubleArrayNode;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$DoubleFixedNodeBuilder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Nodes$DoubleFixedNodeBuilder, $assertionsDisabled)},
	{}
};

$MethodInfo _Nodes$DoubleFixedNodeBuilder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(J)V", nullptr, 0, $method(Nodes$DoubleFixedNodeBuilder, init$, void, int64_t)},
	{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(Nodes$DoubleFixedNodeBuilder, accept, void, double)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(Nodes$DoubleFixedNodeBuilder, begin, void, int64_t)},
	{"build", "()Ljava/util/stream/Node$OfDouble;", nullptr, $PUBLIC, $virtualMethod(Nodes$DoubleFixedNodeBuilder, build, $Node$OfDouble*)},
	{"end", "()V", nullptr, $PUBLIC, $virtualMethod(Nodes$DoubleFixedNodeBuilder, end, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Nodes$DoubleFixedNodeBuilder, toString, $String*)},
	{}
};

$InnerClassInfo _Nodes$DoubleFixedNodeBuilder_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$DoubleFixedNodeBuilder", "java.util.stream.Nodes", "DoubleFixedNodeBuilder", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$DoubleArrayNode", "java.util.stream.Nodes", "DoubleArrayNode", $PRIVATE | $STATIC},
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder$OfDouble", "java.util.stream.Node$Builder", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$DoubleFixedNodeBuilder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$DoubleFixedNodeBuilder",
	"java.util.stream.Nodes$DoubleArrayNode",
	"java.util.stream.Node$Builder$OfDouble",
	_Nodes$DoubleFixedNodeBuilder_FieldInfo_,
	_Nodes$DoubleFixedNodeBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_Nodes$DoubleFixedNodeBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$DoubleFixedNodeBuilder($Class* clazz) {
	return $of($alloc(Nodes$DoubleFixedNodeBuilder));
}

int32_t Nodes$DoubleFixedNodeBuilder::hashCode() {
	 return this->$Nodes$DoubleArrayNode::hashCode();
}

bool Nodes$DoubleFixedNodeBuilder::equals(Object$* obj) {
	 return this->$Nodes$DoubleArrayNode::equals(obj);
}

$Object* Nodes$DoubleFixedNodeBuilder::clone() {
	 return this->$Nodes$DoubleArrayNode::clone();
}

void Nodes$DoubleFixedNodeBuilder::finalize() {
	this->$Nodes$DoubleArrayNode::finalize();
}

bool Nodes$DoubleFixedNodeBuilder::$assertionsDisabled = false;

void Nodes$DoubleFixedNodeBuilder::init$(int64_t size) {
	$Nodes$DoubleArrayNode::init$(size);
	if (!Nodes$DoubleFixedNodeBuilder::$assertionsDisabled && !(size < (int64_t)2147483639)) {
		$throwNew($AssertionError);
	}
}

$Node$OfDouble* Nodes$DoubleFixedNodeBuilder::build() {
	$useLocalCurrentObjectStackCache();
	if (this->curSize < $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("Current size %d is less than fixed size %d"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->curSize))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
	return this;
}

void Nodes$DoubleFixedNodeBuilder::begin(int64_t size) {
	$useLocalCurrentObjectStackCache();
	if (size != $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("Begin size %d is not equal to fixed size %d"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(size))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
	this->curSize = 0;
}

void Nodes$DoubleFixedNodeBuilder::accept(double i) {
	$useLocalCurrentObjectStackCache();
	if (this->curSize < $nc(this->array)->length) {
		$nc(this->array)->set(this->curSize++, i);
	} else {
		$throwNew($IllegalStateException, $($String::format("Accept exceeded fixed size of %d"_s, $$new($ObjectArray, {$($of($Integer::valueOf($nc(this->array)->length)))}))));
	}
}

void Nodes$DoubleFixedNodeBuilder::end() {
	$useLocalCurrentObjectStackCache();
	if (this->curSize < $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("End size %d is less than fixed size %d"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->curSize))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
}

$String* Nodes$DoubleFixedNodeBuilder::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("DoubleFixedNodeBuilder[%d][%s]"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($nc(this->array)->length - this->curSize))),
		$($of($Arrays::toString(this->array)))
	}));
}

void clinit$Nodes$DoubleFixedNodeBuilder($Class* class$) {
	$load($Nodes);
	Nodes$DoubleFixedNodeBuilder::$assertionsDisabled = !$Nodes::class$->desiredAssertionStatus();
}

Nodes$DoubleFixedNodeBuilder::Nodes$DoubleFixedNodeBuilder() {
}

$Class* Nodes$DoubleFixedNodeBuilder::load$($String* name, bool initialize) {
	$loadClass(Nodes$DoubleFixedNodeBuilder, name, initialize, &_Nodes$DoubleFixedNodeBuilder_ClassInfo_, clinit$Nodes$DoubleFixedNodeBuilder, allocate$Nodes$DoubleFixedNodeBuilder);
	return class$;
}

$Class* Nodes$DoubleFixedNodeBuilder::class$ = nullptr;

		} // stream
	} // util
} // java