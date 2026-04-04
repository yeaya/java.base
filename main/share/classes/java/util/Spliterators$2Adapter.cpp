#include <java/util/Spliterators$2Adapter.h>
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
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace util {

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
		$nc(this->val$spliterator)->tryAdvance(this);
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
	$FieldInfo fieldInfos$$[] = {
		{"val$spliterator", "Ljava/util/Spliterator$OfInt;", nullptr, $FINAL | $SYNTHETIC, $field(Spliterators$2Adapter, val$spliterator)},
		{"valueReady", "Z", nullptr, 0, $field(Spliterators$2Adapter, valueReady)},
		{"nextElement", "I", nullptr, 0, $field(Spliterators$2Adapter, nextElement)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/Spliterator$OfInt;)V", "()V", 0, $method(Spliterators$2Adapter, init$, void, $Spliterator$OfInt*)},
		{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(Spliterators$2Adapter, accept, void, int32_t)},
		{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC, $virtualMethod(Spliterators$2Adapter, forEachRemaining, void, $IntConsumer*)},
		{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Spliterators$2Adapter, forEachRemaining, void, Object$*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Spliterators$2Adapter, hasNext, bool)},
		{"nextInt", "()I", nullptr, $PUBLIC, $virtualMethod(Spliterators$2Adapter, nextInt, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.Spliterators",
		"iterator",
		"(Ljava/util/Spliterator$OfInt;)Ljava/util/PrimitiveIterator$OfInt;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Spliterators$2Adapter", nullptr, "Adapter", 0},
		{"java.util.PrimitiveIterator$OfInt", "java.util.PrimitiveIterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Spliterators$2Adapter",
		"java.lang.Object",
		"java.util.PrimitiveIterator$OfInt,java.util.function.IntConsumer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Spliterators"
	};
	$loadClass(Spliterators$2Adapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Spliterators$2Adapter));
	});
	return class$;
}

$Class* Spliterators$2Adapter::class$ = nullptr;

	} // util
} // java