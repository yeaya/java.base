#include <java/util/Spliterators$3Adapter.h>

#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/PrimitiveIterator$OfLong.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterators.h>
#include <java/util/function/LongConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $PrimitiveIterator$OfLong = ::java::util::PrimitiveIterator$OfLong;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $LongConsumer = ::java::util::function::LongConsumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$3Adapter_FieldInfo_[] = {
	{"val$spliterator", "Ljava/util/Spliterator$OfLong;", nullptr, $FINAL | $SYNTHETIC, $field(Spliterators$3Adapter, val$spliterator)},
	{"valueReady", "Z", nullptr, 0, $field(Spliterators$3Adapter, valueReady)},
	{"nextElement", "J", nullptr, 0, $field(Spliterators$3Adapter, nextElement)},
	{}
};

$MethodInfo _Spliterators$3Adapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator$OfLong;)V", "()V", 0, $method(static_cast<void(Spliterators$3Adapter::*)($Spliterator$OfLong*)>(&Spliterators$3Adapter::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"nextLong", "()J", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Spliterators$3Adapter_EnclosingMethodInfo_ = {
	"java.util.Spliterators",
	"iterator",
	"(Ljava/util/Spliterator$OfLong;)Ljava/util/PrimitiveIterator$OfLong;"
};

$InnerClassInfo _Spliterators$3Adapter_InnerClassesInfo_[] = {
	{"java.util.Spliterators$3Adapter", nullptr, "Adapter", 0},
	{"java.util.PrimitiveIterator$OfLong", "java.util.PrimitiveIterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterators$3Adapter_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Spliterators$3Adapter",
	"java.lang.Object",
	"java.util.PrimitiveIterator$OfLong,java.util.function.LongConsumer",
	_Spliterators$3Adapter_FieldInfo_,
	_Spliterators$3Adapter_MethodInfo_,
	nullptr,
	&_Spliterators$3Adapter_EnclosingMethodInfo_,
	_Spliterators$3Adapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$3Adapter($Class* clazz) {
	return $of($alloc(Spliterators$3Adapter));
}

int32_t Spliterators$3Adapter::hashCode() {
	 return this->$PrimitiveIterator$OfLong::hashCode();
}

bool Spliterators$3Adapter::equals(Object$* obj) {
	 return this->$PrimitiveIterator$OfLong::equals(obj);
}

$Object* Spliterators$3Adapter::clone() {
	 return this->$PrimitiveIterator$OfLong::clone();
}

$String* Spliterators$3Adapter::toString() {
	 return this->$PrimitiveIterator$OfLong::toString();
}

void Spliterators$3Adapter::finalize() {
	this->$PrimitiveIterator$OfLong::finalize();
}

void Spliterators$3Adapter::init$($Spliterator$OfLong* val$spliterator) {
	$set(this, val$spliterator, val$spliterator);
	this->valueReady = false;
}

void Spliterators$3Adapter::accept(int64_t t) {
	this->valueReady = true;
	this->nextElement = t;
}

bool Spliterators$3Adapter::hasNext() {
	if (!this->valueReady) {
		$nc(this->val$spliterator)->tryAdvance(static_cast<$LongConsumer*>(this));
	}
	return this->valueReady;
}

int64_t Spliterators$3Adapter::nextLong() {
	if (!this->valueReady && !hasNext()) {
		$throwNew($NoSuchElementException);
	} else {
		this->valueReady = false;
		return this->nextElement;
	}
}

void Spliterators$3Adapter::forEachRemaining($LongConsumer* action) {
	$Objects::requireNonNull(action);
	if (this->valueReady) {
		this->valueReady = false;
		action->accept(this->nextElement);
	}
	$nc(this->val$spliterator)->forEachRemaining(action);
}

void Spliterators$3Adapter::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($LongConsumer, action));
}

Spliterators$3Adapter::Spliterators$3Adapter() {
}

$Class* Spliterators$3Adapter::load$($String* name, bool initialize) {
	$loadClass(Spliterators$3Adapter, name, initialize, &_Spliterators$3Adapter_ClassInfo_, allocate$Spliterators$3Adapter);
	return class$;
}

$Class* Spliterators$3Adapter::class$ = nullptr;

	} // util
} // java