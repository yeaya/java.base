#include <java/util/Spliterators$2Adapter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/PrimitiveIterator$OfInt.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterators.h>
#include <java/util/function/IntConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $PrimitiveIterator$OfInt = ::java::util::PrimitiveIterator$OfInt;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterators = ::java::util::Spliterators;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$2Adapter_FieldInfo_[] = {
	{"val$spliterator", "Ljava/util/Spliterator$OfInt;", nullptr, $FINAL | $SYNTHETIC, $field(Spliterators$2Adapter, val$spliterator)},
	{"valueReady", "Z", nullptr, 0, $field(Spliterators$2Adapter, valueReady)},
	{"nextElement", "I", nullptr, 0, $field(Spliterators$2Adapter, nextElement)},
	{}
};

$MethodInfo _Spliterators$2Adapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator$OfInt;)V", "()V", 0, $method(static_cast<void(Spliterators$2Adapter::*)($Spliterator$OfInt*)>(&Spliterators$2Adapter::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"nextInt", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Spliterators$2Adapter_EnclosingMethodInfo_ = {
	"java.util.Spliterators",
	"iterator",
	"(Ljava/util/Spliterator$OfInt;)Ljava/util/PrimitiveIterator$OfInt;"
};

$InnerClassInfo _Spliterators$2Adapter_InnerClassesInfo_[] = {
	{"java.util.Spliterators$2Adapter", nullptr, "Adapter", 0},
	{"java.util.PrimitiveIterator$OfInt", "java.util.PrimitiveIterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterators$2Adapter_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Spliterators$2Adapter",
	"java.lang.Object",
	"java.util.PrimitiveIterator$OfInt,java.util.function.IntConsumer",
	_Spliterators$2Adapter_FieldInfo_,
	_Spliterators$2Adapter_MethodInfo_,
	nullptr,
	&_Spliterators$2Adapter_EnclosingMethodInfo_,
	_Spliterators$2Adapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$2Adapter($Class* clazz) {
	return $of($alloc(Spliterators$2Adapter));
}

int32_t Spliterators$2Adapter::hashCode() {
	 return this->$PrimitiveIterator$OfInt::hashCode();
}

bool Spliterators$2Adapter::equals(Object$* obj) {
	 return this->$PrimitiveIterator$OfInt::equals(obj);
}

$Object* Spliterators$2Adapter::clone() {
	 return this->$PrimitiveIterator$OfInt::clone();
}

$String* Spliterators$2Adapter::toString() {
	 return this->$PrimitiveIterator$OfInt::toString();
}

void Spliterators$2Adapter::finalize() {
	this->$PrimitiveIterator$OfInt::finalize();
}

void Spliterators$2Adapter::init$($Spliterator$OfInt* val$spliterator) {
	$set(this, val$spliterator, val$spliterator);
	this->valueReady = false;
}

void Spliterators$2Adapter::accept(int32_t t) {
	this->valueReady = true;
	this->nextElement = t;
}

bool Spliterators$2Adapter::hasNext() {
	if (!this->valueReady) {
		$nc(this->val$spliterator)->tryAdvance(static_cast<$IntConsumer*>(this));
	}
	return this->valueReady;
}

int32_t Spliterators$2Adapter::nextInt() {
	if (!this->valueReady && !hasNext()) {
		$throwNew($NoSuchElementException);
	} else {
		this->valueReady = false;
		return this->nextElement;
	}
}

void Spliterators$2Adapter::forEachRemaining($IntConsumer* action) {
	$Objects::requireNonNull(action);
	if (this->valueReady) {
		this->valueReady = false;
		action->accept(this->nextElement);
	}
	$nc(this->val$spliterator)->forEachRemaining(action);
}

void Spliterators$2Adapter::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

Spliterators$2Adapter::Spliterators$2Adapter() {
}

$Class* Spliterators$2Adapter::load$($String* name, bool initialize) {
	$loadClass(Spliterators$2Adapter, name, initialize, &_Spliterators$2Adapter_ClassInfo_, allocate$Spliterators$2Adapter);
	return class$;
}

$Class* Spliterators$2Adapter::class$ = nullptr;

	} // util
} // java