#include <java/util/stream/Nodes$IntSpinedNodeBuilder.h>

#include <java/lang/AssertionError.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/Node$OfInt.h>
#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/SpinedBuffer$OfInt.h>
#include <java/util/stream/SpinedBuffer$OfPrimitive.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Consumer = ::java::util::function::Consumer;
using $IntConsumer = ::java::util::function::IntConsumer;
using $Node = ::java::util::stream::Node;
using $Node$Builder$OfInt = ::java::util::stream::Node$Builder$OfInt;
using $Node$OfInt = ::java::util::stream::Node$OfInt;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes = ::java::util::stream::Nodes;
using $SpinedBuffer$OfInt = ::java::util::stream::SpinedBuffer$OfInt;
using $SpinedBuffer$OfPrimitive = ::java::util::stream::SpinedBuffer$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$IntSpinedNodeBuilder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Nodes$IntSpinedNodeBuilder, $assertionsDisabled)},
	{"building", "Z", nullptr, $PRIVATE, $field(Nodes$IntSpinedNodeBuilder, building)},
	{}
};

$MethodInfo _Nodes$IntSpinedNodeBuilder_MethodInfo_[] = {
	{"*andThen", "(Ljava/util/function/IntConsumer;)Ljava/util/function/IntConsumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*count", "()J", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Nodes$IntSpinedNodeBuilder::*)()>(&Nodes$IntSpinedNodeBuilder::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"asPrimitiveArray", "()[I", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"build", "()Ljava/util/stream/Node$OfInt;", nullptr, $PUBLIC},
	{"copyInto", "([II)V", nullptr, $PUBLIC, $method(static_cast<void(Nodes$IntSpinedNodeBuilder::*)($ints*,int32_t)>(&Nodes$IntSpinedNodeBuilder::copyInto)), "java.lang.IndexOutOfBoundsException"},
	{"copyInto", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"end", "()V", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(Nodes$IntSpinedNodeBuilder::*)($IntConsumer*)>(&Nodes$IntSpinedNodeBuilder::forEach))},
	{"forEach", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*newArray", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$IntSpinedNodeBuilder_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$IntSpinedNodeBuilder", "java.util.stream.Nodes", "IntSpinedNodeBuilder", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SpinedBuffer$OfInt", "java.util.stream.SpinedBuffer", "OfInt", $STATIC},
	{"java.util.stream.Node$OfInt", "java.util.stream.Node", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder$OfInt", "java.util.stream.Node$Builder", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$IntSpinedNodeBuilder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$IntSpinedNodeBuilder",
	"java.util.stream.SpinedBuffer$OfInt",
	"java.util.stream.Node$OfInt,java.util.stream.Node$Builder$OfInt",
	_Nodes$IntSpinedNodeBuilder_FieldInfo_,
	_Nodes$IntSpinedNodeBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_Nodes$IntSpinedNodeBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$IntSpinedNodeBuilder($Class* clazz) {
	return $of($alloc(Nodes$IntSpinedNodeBuilder));
}

void Nodes$IntSpinedNodeBuilder::forEach($Consumer* consumer) {
	this->$SpinedBuffer$OfInt::forEach(consumer);
}

$Object* Nodes$IntSpinedNodeBuilder::newArray(int32_t size) {
	 return this->$SpinedBuffer$OfInt::newArray(size);
}

$String* Nodes$IntSpinedNodeBuilder::toString() {
	 return this->$SpinedBuffer$OfInt::toString();
}

int64_t Nodes$IntSpinedNodeBuilder::count() {
	 return this->$SpinedBuffer$OfInt::count();
}

int32_t Nodes$IntSpinedNodeBuilder::hashCode() {
	 return this->$SpinedBuffer$OfInt::hashCode();
}

bool Nodes$IntSpinedNodeBuilder::equals(Object$* obj) {
	 return this->$SpinedBuffer$OfInt::equals(obj);
}

$Object* Nodes$IntSpinedNodeBuilder::clone() {
	 return this->$SpinedBuffer$OfInt::clone();
}

void Nodes$IntSpinedNodeBuilder::finalize() {
	this->$SpinedBuffer$OfInt::finalize();
}

$IntConsumer* Nodes$IntSpinedNodeBuilder::andThen($IntConsumer* after) {
	 return this->$SpinedBuffer$OfInt::andThen(after);
}

bool Nodes$IntSpinedNodeBuilder::$assertionsDisabled = false;

void Nodes$IntSpinedNodeBuilder::init$() {
	$SpinedBuffer$OfInt::init$();
	this->building = false;
}

$Spliterator* Nodes$IntSpinedNodeBuilder::spliterator() {
	if (!Nodes$IntSpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("during building"_s));
	}
	return $SpinedBuffer$OfInt::spliterator();
}

void Nodes$IntSpinedNodeBuilder::forEach($IntConsumer* consumer) {
	if (!Nodes$IntSpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("during building"_s));
	}
	$SpinedBuffer$OfInt::forEach($of(consumer));
}

void Nodes$IntSpinedNodeBuilder::begin(int64_t size) {
	if (!Nodes$IntSpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("was already building"_s));
	}
	this->building = true;
	clear();
	ensureCapacity(size);
}

void Nodes$IntSpinedNodeBuilder::accept(int32_t i) {
	if (!Nodes$IntSpinedNodeBuilder::$assertionsDisabled && !this->building) {
		$throwNew($AssertionError, $of("not building"_s));
	}
	$SpinedBuffer$OfInt::accept(i);
}

void Nodes$IntSpinedNodeBuilder::end() {
	if (!Nodes$IntSpinedNodeBuilder::$assertionsDisabled && !this->building) {
		$throwNew($AssertionError, $of("was not building"_s));
	}
	this->building = false;
}

void Nodes$IntSpinedNodeBuilder::copyInto($ints* array, int32_t offset) {
	if (!Nodes$IntSpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("during building"_s));
	}
	$SpinedBuffer$OfInt::copyInto(array, offset);
}

$Object* Nodes$IntSpinedNodeBuilder::asPrimitiveArray() {
	if (!Nodes$IntSpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("during building"_s));
	}
	return $of($cast($ints, $SpinedBuffer$OfInt::asPrimitiveArray()));
}

$Node* Nodes$IntSpinedNodeBuilder::build() {
	if (!Nodes$IntSpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("during building"_s));
	}
	return this;
}

void Nodes$IntSpinedNodeBuilder::forEach(Object$* consumer) {
	this->forEach($cast($IntConsumer, consumer));
}

void Nodes$IntSpinedNodeBuilder::copyInto(Object$* array, int32_t offset) {
	this->copyInto($cast($ints, array), offset);
}

void clinit$Nodes$IntSpinedNodeBuilder($Class* class$) {
	$load($Nodes);
	Nodes$IntSpinedNodeBuilder::$assertionsDisabled = !$Nodes::class$->desiredAssertionStatus();
}

Nodes$IntSpinedNodeBuilder::Nodes$IntSpinedNodeBuilder() {
}

$Class* Nodes$IntSpinedNodeBuilder::load$($String* name, bool initialize) {
	$loadClass(Nodes$IntSpinedNodeBuilder, name, initialize, &_Nodes$IntSpinedNodeBuilder_ClassInfo_, clinit$Nodes$IntSpinedNodeBuilder, allocate$Nodes$IntSpinedNodeBuilder);
	return class$;
}

$Class* Nodes$IntSpinedNodeBuilder::class$ = nullptr;

		} // stream
	} // util
} // java