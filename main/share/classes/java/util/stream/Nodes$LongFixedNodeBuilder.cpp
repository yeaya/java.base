#include <java/util/stream/Nodes$LongFixedNodeBuilder.h>

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
#include <java/util/stream/Node$OfLong.h>
#include <java/util/stream/Nodes$LongArrayNode.h>
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
using $Node$Builder$OfLong = ::java::util::stream::Node$Builder$OfLong;
using $Node$OfLong = ::java::util::stream::Node$OfLong;
using $Nodes = ::java::util::stream::Nodes;
using $Nodes$LongArrayNode = ::java::util::stream::Nodes$LongArrayNode;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$LongFixedNodeBuilder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Nodes$LongFixedNodeBuilder, $assertionsDisabled)},
	{}
};

$MethodInfo _Nodes$LongFixedNodeBuilder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(Nodes$LongFixedNodeBuilder::*)(int64_t)>(&Nodes$LongFixedNodeBuilder::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"build", "()Ljava/util/stream/Node$OfLong;", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$LongFixedNodeBuilder_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$LongFixedNodeBuilder", "java.util.stream.Nodes", "LongFixedNodeBuilder", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$LongArrayNode", "java.util.stream.Nodes", "LongArrayNode", $PRIVATE | $STATIC},
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder$OfLong", "java.util.stream.Node$Builder", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$LongFixedNodeBuilder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$LongFixedNodeBuilder",
	"java.util.stream.Nodes$LongArrayNode",
	"java.util.stream.Node$Builder$OfLong",
	_Nodes$LongFixedNodeBuilder_FieldInfo_,
	_Nodes$LongFixedNodeBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_Nodes$LongFixedNodeBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$LongFixedNodeBuilder($Class* clazz) {
	return $of($alloc(Nodes$LongFixedNodeBuilder));
}

int32_t Nodes$LongFixedNodeBuilder::hashCode() {
	 return this->$Nodes$LongArrayNode::hashCode();
}

bool Nodes$LongFixedNodeBuilder::equals(Object$* obj) {
	 return this->$Nodes$LongArrayNode::equals(obj);
}

$Object* Nodes$LongFixedNodeBuilder::clone() {
	 return this->$Nodes$LongArrayNode::clone();
}

void Nodes$LongFixedNodeBuilder::finalize() {
	this->$Nodes$LongArrayNode::finalize();
}

bool Nodes$LongFixedNodeBuilder::$assertionsDisabled = false;

void Nodes$LongFixedNodeBuilder::init$(int64_t size) {
	$Nodes$LongArrayNode::init$(size);
	if (!Nodes$LongFixedNodeBuilder::$assertionsDisabled && !(size < (int64_t)2147483639)) {
		$throwNew($AssertionError);
	}
}

$Node$OfLong* Nodes$LongFixedNodeBuilder::build() {
	$useLocalCurrentObjectStackCache();
	if (this->curSize < $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("Current size %d is less than fixed size %d"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->curSize))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
	return this;
}

void Nodes$LongFixedNodeBuilder::begin(int64_t size) {
	$useLocalCurrentObjectStackCache();
	if (size != $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("Begin size %d is not equal to fixed size %d"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(size))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
	this->curSize = 0;
}

void Nodes$LongFixedNodeBuilder::accept(int64_t i) {
	$useLocalCurrentObjectStackCache();
	if (this->curSize < $nc(this->array)->length) {
		$nc(this->array)->set(this->curSize++, i);
	} else {
		$throwNew($IllegalStateException, $($String::format("Accept exceeded fixed size of %d"_s, $$new($ObjectArray, {$($of($Integer::valueOf($nc(this->array)->length)))}))));
	}
}

void Nodes$LongFixedNodeBuilder::end() {
	$useLocalCurrentObjectStackCache();
	if (this->curSize < $nc(this->array)->length) {
		$throwNew($IllegalStateException, $($String::format("End size %d is less than fixed size %d"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->curSize))),
			$($of($Integer::valueOf($nc(this->array)->length)))
		}))));
	}
}

$String* Nodes$LongFixedNodeBuilder::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("LongFixedNodeBuilder[%d][%s]"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($nc(this->array)->length - this->curSize))),
		$($of($Arrays::toString(this->array)))
	}));
}

void clinit$Nodes$LongFixedNodeBuilder($Class* class$) {
	$load($Nodes);
	Nodes$LongFixedNodeBuilder::$assertionsDisabled = !$Nodes::class$->desiredAssertionStatus();
}

Nodes$LongFixedNodeBuilder::Nodes$LongFixedNodeBuilder() {
}

$Class* Nodes$LongFixedNodeBuilder::load$($String* name, bool initialize) {
	$loadClass(Nodes$LongFixedNodeBuilder, name, initialize, &_Nodes$LongFixedNodeBuilder_ClassInfo_, clinit$Nodes$LongFixedNodeBuilder, allocate$Nodes$LongFixedNodeBuilder);
	return class$;
}

$Class* Nodes$LongFixedNodeBuilder::class$ = nullptr;

		} // stream
	} // util
} // java