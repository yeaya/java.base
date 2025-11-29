#include <java/util/Vector$Itr.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/Vector.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Vector = ::java::util::Vector;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Vector$Itr_FieldInfo_[] = {
	{"this$0", "Ljava/util/Vector;", nullptr, $FINAL | $SYNTHETIC, $field(Vector$Itr, this$0)},
	{"cursor", "I", nullptr, 0, $field(Vector$Itr, cursor)},
	{"lastRet", "I", nullptr, 0, $field(Vector$Itr, lastRet)},
	{"expectedModCount", "I", nullptr, 0, $field(Vector$Itr, expectedModCount)},
	{}
};

$MethodInfo _Vector$Itr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Vector;)V", nullptr, $PRIVATE, $method(static_cast<void(Vector$Itr::*)($Vector*)>(&Vector$Itr::init$))},
	{"checkForComodification", "()V", nullptr, $FINAL, $method(static_cast<void(Vector$Itr::*)()>(&Vector$Itr::checkForComodification))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Vector$Itr_InnerClassesInfo_[] = {
	{"java.util.Vector$Itr", "java.util.Vector", "Itr", $PRIVATE},
	{}
};

$ClassInfo _Vector$Itr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Vector$Itr",
	"java.lang.Object",
	"java.util.Iterator",
	_Vector$Itr_FieldInfo_,
	_Vector$Itr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_Vector$Itr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Vector"
};

$Object* allocate$Vector$Itr($Class* clazz) {
	return $of($alloc(Vector$Itr));
}

void Vector$Itr::init$($Vector* this$0) {
	$set(this, this$0, this$0);
	this->lastRet = -1;
	this->expectedModCount = this->this$0->modCount;
}

bool Vector$Itr::hasNext() {
	return this->cursor != this->this$0->elementCount;
}

$Object* Vector$Itr::next() {
	$synchronized(this->this$0) {
		checkForComodification();
		int32_t i = this->cursor;
		if (i >= this->this$0->elementCount) {
			$throwNew($NoSuchElementException);
		}
		this->cursor = i + 1;
		return $of(this->this$0->elementData(this->lastRet = i));
	}
}

void Vector$Itr::remove() {
	if (this->lastRet == -1) {
		$throwNew($IllegalStateException);
	}
	$synchronized(this->this$0) {
		checkForComodification();
		this->this$0->remove(this->lastRet);
		this->expectedModCount = this->this$0->modCount;
	}
	this->cursor = this->lastRet;
	this->lastRet = -1;
}

void Vector$Itr::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$synchronized(this->this$0) {
		int32_t size = this->this$0->elementCount;
		int32_t i = this->cursor;
		if (i >= size) {
			return;
		}
		$var($ObjectArray, es, this->this$0->elementData$);
		if (i >= $nc(es)->length) {
			$throwNew($ConcurrentModificationException);
		}
		while (i < size && this->this$0->modCount == this->expectedModCount) {
			action->accept($($Vector::elementAt(es, i++)));
		}
		this->cursor = i;
		this->lastRet = i - 1;
		checkForComodification();
	}
}

void Vector$Itr::checkForComodification() {
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
}

Vector$Itr::Vector$Itr() {
}

$Class* Vector$Itr::load$($String* name, bool initialize) {
	$loadClass(Vector$Itr, name, initialize, &_Vector$Itr_ClassInfo_, allocate$Vector$Itr);
	return class$;
}

$Class* Vector$Itr::class$ = nullptr;

	} // util
} // java