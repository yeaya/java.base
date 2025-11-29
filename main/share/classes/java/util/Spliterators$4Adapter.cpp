#include <java/util/Spliterators$4Adapter.h>

#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/PrimitiveIterator$OfDouble.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterators.h>
#include <java/util/function/DoubleConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $PrimitiveIterator$OfDouble = ::java::util::PrimitiveIterator$OfDouble;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$4Adapter_FieldInfo_[] = {
	{"val$spliterator", "Ljava/util/Spliterator$OfDouble;", nullptr, $FINAL | $SYNTHETIC, $field(Spliterators$4Adapter, val$spliterator)},
	{"valueReady", "Z", nullptr, 0, $field(Spliterators$4Adapter, valueReady)},
	{"nextElement", "D", nullptr, 0, $field(Spliterators$4Adapter, nextElement)},
	{}
};

$MethodInfo _Spliterators$4Adapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator$OfDouble;)V", "()V", 0, $method(static_cast<void(Spliterators$4Adapter::*)($Spliterator$OfDouble*)>(&Spliterators$4Adapter::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"nextDouble", "()D", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Spliterators$4Adapter_EnclosingMethodInfo_ = {
	"java.util.Spliterators",
	"iterator",
	"(Ljava/util/Spliterator$OfDouble;)Ljava/util/PrimitiveIterator$OfDouble;"
};

$InnerClassInfo _Spliterators$4Adapter_InnerClassesInfo_[] = {
	{"java.util.Spliterators$4Adapter", nullptr, "Adapter", 0},
	{"java.util.PrimitiveIterator$OfDouble", "java.util.PrimitiveIterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterators$4Adapter_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Spliterators$4Adapter",
	"java.lang.Object",
	"java.util.PrimitiveIterator$OfDouble,java.util.function.DoubleConsumer",
	_Spliterators$4Adapter_FieldInfo_,
	_Spliterators$4Adapter_MethodInfo_,
	nullptr,
	&_Spliterators$4Adapter_EnclosingMethodInfo_,
	_Spliterators$4Adapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$4Adapter($Class* clazz) {
	return $of($alloc(Spliterators$4Adapter));
}

int32_t Spliterators$4Adapter::hashCode() {
	 return this->$PrimitiveIterator$OfDouble::hashCode();
}

bool Spliterators$4Adapter::equals(Object$* obj) {
	 return this->$PrimitiveIterator$OfDouble::equals(obj);
}

$Object* Spliterators$4Adapter::clone() {
	 return this->$PrimitiveIterator$OfDouble::clone();
}

$String* Spliterators$4Adapter::toString() {
	 return this->$PrimitiveIterator$OfDouble::toString();
}

void Spliterators$4Adapter::finalize() {
	this->$PrimitiveIterator$OfDouble::finalize();
}

void Spliterators$4Adapter::init$($Spliterator$OfDouble* val$spliterator) {
	$set(this, val$spliterator, val$spliterator);
	this->valueReady = false;
}

void Spliterators$4Adapter::accept(double t) {
	this->valueReady = true;
	this->nextElement = t;
}

bool Spliterators$4Adapter::hasNext() {
	if (!this->valueReady) {
		$nc(this->val$spliterator)->tryAdvance(static_cast<$DoubleConsumer*>(this));
	}
	return this->valueReady;
}

double Spliterators$4Adapter::nextDouble() {
	if (!this->valueReady && !hasNext()) {
		$throwNew($NoSuchElementException);
	} else {
		this->valueReady = false;
		return this->nextElement;
	}
}

void Spliterators$4Adapter::forEachRemaining($DoubleConsumer* action) {
	$Objects::requireNonNull(action);
	if (this->valueReady) {
		this->valueReady = false;
		action->accept(this->nextElement);
	}
	$nc(this->val$spliterator)->forEachRemaining(action);
}

void Spliterators$4Adapter::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($DoubleConsumer, action));
}

Spliterators$4Adapter::Spliterators$4Adapter() {
}

$Class* Spliterators$4Adapter::load$($String* name, bool initialize) {
	$loadClass(Spliterators$4Adapter, name, initialize, &_Spliterators$4Adapter_ClassInfo_, allocate$Spliterators$4Adapter);
	return class$;
}

$Class* Spliterators$4Adapter::class$ = nullptr;

	} // util
} // java