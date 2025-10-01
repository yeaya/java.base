#include <java/util/stream/Nodes$SpinedNodeBuilder.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/SpinedBuffer.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Node = ::java::util::stream::Node;
using $Node$Builder = ::java::util::stream::Node$Builder;
using $Nodes = ::java::util::stream::Nodes;
using $SpinedBuffer = ::java::util::stream::SpinedBuffer;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$SpinedNodeBuilder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Nodes$SpinedNodeBuilder, $assertionsDisabled)},
	{"building", "Z", nullptr, $PRIVATE, $field(Nodes$SpinedNodeBuilder, building)},
	{}
};

$MethodInfo _Nodes$SpinedNodeBuilder_MethodInfo_[] = {
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*count", "()J", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Nodes$SpinedNodeBuilder::*)()>(&Nodes$SpinedNodeBuilder::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"asArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"build", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TT;>;", $PUBLIC},
	{"copyInto", "([Ljava/lang/Object;I)V", "([TT;I)V", $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$SpinedNodeBuilder_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$SpinedNodeBuilder", "java.util.stream.Nodes", "SpinedNodeBuilder", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$SpinedNodeBuilder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$SpinedNodeBuilder",
	"java.util.stream.SpinedBuffer",
	"java.util.stream.Node,java.util.stream.Node$Builder",
	_Nodes$SpinedNodeBuilder_FieldInfo_,
	_Nodes$SpinedNodeBuilder_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/SpinedBuffer<TT;>;Ljava/util/stream/Node<TT;>;Ljava/util/stream/Node$Builder<TT;>;",
	nullptr,
	_Nodes$SpinedNodeBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$SpinedNodeBuilder($Class* clazz) {
	return $of($alloc(Nodes$SpinedNodeBuilder));
}

$String* Nodes$SpinedNodeBuilder::toString() {
	 return this->$SpinedBuffer::toString();
}

int64_t Nodes$SpinedNodeBuilder::count() {
	 return this->$SpinedBuffer::count();
}

int32_t Nodes$SpinedNodeBuilder::hashCode() {
	 return this->$SpinedBuffer::hashCode();
}

bool Nodes$SpinedNodeBuilder::equals(Object$* obj) {
	 return this->$SpinedBuffer::equals(obj);
}

$Object* Nodes$SpinedNodeBuilder::clone() {
	 return this->$SpinedBuffer::clone();
}

void Nodes$SpinedNodeBuilder::finalize() {
	this->$SpinedBuffer::finalize();
}

$Consumer* Nodes$SpinedNodeBuilder::andThen($Consumer* after) {
	 return this->$SpinedBuffer::andThen(after);
}

bool Nodes$SpinedNodeBuilder::$assertionsDisabled = false;

void Nodes$SpinedNodeBuilder::init$() {
	$SpinedBuffer::init$();
	this->building = false;
}

$Spliterator* Nodes$SpinedNodeBuilder::spliterator() {
	if (!Nodes$SpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("during building"_s));
	}
	return $SpinedBuffer::spliterator();
}

void Nodes$SpinedNodeBuilder::forEach($Consumer* consumer) {
	if (!Nodes$SpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("during building"_s));
	}
	$SpinedBuffer::forEach(consumer);
}

void Nodes$SpinedNodeBuilder::begin(int64_t size) {
	if (!Nodes$SpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("was already building"_s));
	}
	this->building = true;
	clear();
	ensureCapacity(size);
}

void Nodes$SpinedNodeBuilder::accept(Object$* t) {
	if (!Nodes$SpinedNodeBuilder::$assertionsDisabled && !this->building) {
		$throwNew($AssertionError, $of("not building"_s));
	}
	$SpinedBuffer::accept(t);
}

void Nodes$SpinedNodeBuilder::end() {
	if (!Nodes$SpinedNodeBuilder::$assertionsDisabled && !this->building) {
		$throwNew($AssertionError, $of("was not building"_s));
	}
	this->building = false;
}

void Nodes$SpinedNodeBuilder::copyInto($ObjectArray* array, int32_t offset) {
	if (!Nodes$SpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("during building"_s));
	}
	$SpinedBuffer::copyInto(array, offset);
}

$ObjectArray* Nodes$SpinedNodeBuilder::asArray($IntFunction* arrayFactory) {
	if (!Nodes$SpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("during building"_s));
	}
	return $SpinedBuffer::asArray(arrayFactory);
}

$Node* Nodes$SpinedNodeBuilder::build() {
	if (!Nodes$SpinedNodeBuilder::$assertionsDisabled && ! !this->building) {
		$throwNew($AssertionError, $of("during building"_s));
	}
	return this;
}

void clinit$Nodes$SpinedNodeBuilder($Class* class$) {
	$load($Nodes);
	Nodes$SpinedNodeBuilder::$assertionsDisabled = !$Nodes::class$->desiredAssertionStatus();
}

Nodes$SpinedNodeBuilder::Nodes$SpinedNodeBuilder() {
}

$Class* Nodes$SpinedNodeBuilder::load$($String* name, bool initialize) {
	$loadClass(Nodes$SpinedNodeBuilder, name, initialize, &_Nodes$SpinedNodeBuilder_ClassInfo_, clinit$Nodes$SpinedNodeBuilder, allocate$Nodes$SpinedNodeBuilder);
	return class$;
}

$Class* Nodes$SpinedNodeBuilder::class$ = nullptr;

		} // stream
	} // util
} // java