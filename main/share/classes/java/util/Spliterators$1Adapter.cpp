#include <java/util/Spliterators$1Adapter.h>

#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$1Adapter_FieldInfo_[] = {
	{"val$spliterator", "Ljava/util/Spliterator;", nullptr, $FINAL | $SYNTHETIC, $field(Spliterators$1Adapter, val$spliterator)},
	{"valueReady", "Z", nullptr, 0, $field(Spliterators$1Adapter, valueReady)},
	{"nextElement", "Ljava/lang/Object;", "TT;", 0, $field(Spliterators$1Adapter, nextElement)},
	{}
};

$MethodInfo _Spliterators$1Adapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator;)V", "()V", 0, $method(static_cast<void(Spliterators$1Adapter::*)($Spliterator*)>(&Spliterators$1Adapter::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Spliterators$1Adapter_EnclosingMethodInfo_ = {
	"java.util.Spliterators",
	"iterator",
	"(Ljava/util/Spliterator;)Ljava/util/Iterator;"
};

$InnerClassInfo _Spliterators$1Adapter_InnerClassesInfo_[] = {
	{"java.util.Spliterators$1Adapter", nullptr, "Adapter", 0},
	{}
};

$ClassInfo _Spliterators$1Adapter_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Spliterators$1Adapter",
	"java.lang.Object",
	"java.util.Iterator,java.util.function.Consumer",
	_Spliterators$1Adapter_FieldInfo_,
	_Spliterators$1Adapter_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TT;>;Ljava/util/function/Consumer<TT;>;",
	&_Spliterators$1Adapter_EnclosingMethodInfo_,
	_Spliterators$1Adapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$1Adapter($Class* clazz) {
	return $of($alloc(Spliterators$1Adapter));
}

int32_t Spliterators$1Adapter::hashCode() {
	 return this->$Iterator::hashCode();
}

bool Spliterators$1Adapter::equals(Object$* obj) {
	 return this->$Iterator::equals(obj);
}

$Object* Spliterators$1Adapter::clone() {
	 return this->$Iterator::clone();
}

$String* Spliterators$1Adapter::toString() {
	 return this->$Iterator::toString();
}

void Spliterators$1Adapter::finalize() {
	this->$Iterator::finalize();
}

void Spliterators$1Adapter::init$($Spliterator* val$spliterator) {
	$set(this, val$spliterator, val$spliterator);
	this->valueReady = false;
}

void Spliterators$1Adapter::accept(Object$* t) {
	this->valueReady = true;
	$set(this, nextElement, t);
}

bool Spliterators$1Adapter::hasNext() {
	if (!this->valueReady) {
		$nc(this->val$spliterator)->tryAdvance(this);
	}
	return this->valueReady;
}

$Object* Spliterators$1Adapter::next() {
	if (!this->valueReady && !hasNext()) {
		$throwNew($NoSuchElementException);
	} else {
		this->valueReady = false;
		$var($Object, t, this->nextElement);
		$set(this, nextElement, nullptr);
		return $of(t);
	}
}

void Spliterators$1Adapter::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	if (this->valueReady) {
		this->valueReady = false;
		$var($Object, t, this->nextElement);
		$set(this, nextElement, nullptr);
		action->accept(t);
	}
	$nc(this->val$spliterator)->forEachRemaining(action);
}

Spliterators$1Adapter::Spliterators$1Adapter() {
}

$Class* Spliterators$1Adapter::load$($String* name, bool initialize) {
	$loadClass(Spliterators$1Adapter, name, initialize, &_Spliterators$1Adapter_ClassInfo_, allocate$Spliterators$1Adapter);
	return class$;
}

$Class* Spliterators$1Adapter::class$ = nullptr;

	} // util
} // java