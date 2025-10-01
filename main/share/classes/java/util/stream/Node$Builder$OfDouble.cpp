#include <java/util/stream/Node$Builder$OfDouble.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Node$Builder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $Node$Builder = ::java::util::stream::Node$Builder;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Node$Builder$OfDouble_MethodInfo_[] = {
	{"build", "()Ljava/util/stream/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$InnerClassInfo _Node$Builder$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder$OfDouble", "java.util.stream.Node$Builder", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Node$Builder$OfDouble_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.Node$Builder$OfDouble",
	nullptr,
	"java.util.stream.Node$Builder,java.util.stream.Sink$OfDouble",
	nullptr,
	_Node$Builder$OfDouble_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/Node$Builder<Ljava/lang/Double;>;Ljava/util/stream/Sink$OfDouble;",
	nullptr,
	_Node$Builder$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Node"
};

$Object* allocate$Node$Builder$OfDouble($Class* clazz) {
	return $of($alloc(Node$Builder$OfDouble));
}

void Node$Builder$OfDouble::begin(int64_t size) {
	this->$Node$Builder::begin(size);
}

void Node$Builder$OfDouble::end() {
	this->$Node$Builder::end();
}

bool Node$Builder$OfDouble::cancellationRequested() {
	 return this->$Node$Builder::cancellationRequested();
}

void Node$Builder$OfDouble::accept(int32_t value) {
	this->$Node$Builder::accept(value);
}

void Node$Builder$OfDouble::accept(int64_t value) {
	this->$Node$Builder::accept(value);
}

void Node$Builder$OfDouble::accept(double value) {
	this->$Node$Builder::accept(value);
}

$Consumer* Node$Builder$OfDouble::andThen($Consumer* after) {
	 return this->$Node$Builder::andThen(after);
}

int32_t Node$Builder$OfDouble::hashCode() {
	 return this->$Node$Builder::hashCode();
}

bool Node$Builder$OfDouble::equals(Object$* obj) {
	 return this->$Node$Builder::equals(obj);
}

$Object* Node$Builder$OfDouble::clone() {
	 return this->$Node$Builder::clone();
}

$String* Node$Builder$OfDouble::toString() {
	 return this->$Node$Builder::toString();
}

void Node$Builder$OfDouble::finalize() {
	this->$Node$Builder::finalize();
}

$Class* Node$Builder$OfDouble::load$($String* name, bool initialize) {
	$loadClass(Node$Builder$OfDouble, name, initialize, &_Node$Builder$OfDouble_ClassInfo_, allocate$Node$Builder$OfDouble);
	return class$;
}

$Class* Node$Builder$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java