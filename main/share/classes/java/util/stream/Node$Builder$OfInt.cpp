#include <java/util/stream/Node$Builder$OfInt.h>

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
using $Sink$OfInt = ::java::util::stream::Sink$OfInt;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Node$Builder$OfInt_MethodInfo_[] = {
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

$InnerClassInfo _Node$Builder$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder$OfInt", "java.util.stream.Node$Builder", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Node$Builder$OfInt_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.Node$Builder$OfInt",
	nullptr,
	"java.util.stream.Node$Builder,java.util.stream.Sink$OfInt",
	nullptr,
	_Node$Builder$OfInt_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/Node$Builder<Ljava/lang/Integer;>;Ljava/util/stream/Sink$OfInt;",
	nullptr,
	_Node$Builder$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Node"
};

$Object* allocate$Node$Builder$OfInt($Class* clazz) {
	return $of($alloc(Node$Builder$OfInt));
}

void Node$Builder$OfInt::begin(int64_t size) {
	this->$Node$Builder::begin(size);
}

void Node$Builder$OfInt::end() {
	this->$Node$Builder::end();
}

bool Node$Builder$OfInt::cancellationRequested() {
	 return this->$Node$Builder::cancellationRequested();
}

void Node$Builder$OfInt::accept(int32_t value) {
	this->$Node$Builder::accept(value);
}

void Node$Builder$OfInt::accept(int64_t value) {
	this->$Node$Builder::accept(value);
}

void Node$Builder$OfInt::accept(double value) {
	this->$Node$Builder::accept(value);
}

$Consumer* Node$Builder$OfInt::andThen($Consumer* after) {
	 return this->$Node$Builder::andThen(after);
}

int32_t Node$Builder$OfInt::hashCode() {
	 return this->$Node$Builder::hashCode();
}

bool Node$Builder$OfInt::equals(Object$* obj) {
	 return this->$Node$Builder::equals(obj);
}

$Object* Node$Builder$OfInt::clone() {
	 return this->$Node$Builder::clone();
}

$String* Node$Builder$OfInt::toString() {
	 return this->$Node$Builder::toString();
}

void Node$Builder$OfInt::finalize() {
	this->$Node$Builder::finalize();
}

$Class* Node$Builder$OfInt::load$($String* name, bool initialize) {
	$loadClass(Node$Builder$OfInt, name, initialize, &_Node$Builder$OfInt_ClassInfo_, allocate$Node$Builder$OfInt);
	return class$;
}

$Class* Node$Builder$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java