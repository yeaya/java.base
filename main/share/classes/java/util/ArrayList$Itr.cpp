#include <java/util/ArrayList$Itr.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/ArrayList.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _ArrayList$Itr_FieldInfo_[] = {
	{"this$0", "Ljava/util/ArrayList;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayList$Itr, this$0)},
	{"cursor", "I", nullptr, 0, $field(ArrayList$Itr, cursor)},
	{"lastRet", "I", nullptr, 0, $field(ArrayList$Itr, lastRet)},
	{"expectedModCount", "I", nullptr, 0, $field(ArrayList$Itr, expectedModCount)},
	{}
};

$MethodInfo _ArrayList$Itr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ArrayList;)V", nullptr, 0, $method(static_cast<void(ArrayList$Itr::*)($ArrayList*)>(&ArrayList$Itr::init$))},
	{"checkForComodification", "()V", nullptr, $FINAL, $method(static_cast<void(ArrayList$Itr::*)()>(&ArrayList$Itr::checkForComodification))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ArrayList$Itr_InnerClassesInfo_[] = {
	{"java.util.ArrayList$Itr", "java.util.ArrayList", "Itr", $PRIVATE},
	{}
};

$ClassInfo _ArrayList$Itr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ArrayList$Itr",
	"java.lang.Object",
	"java.util.Iterator",
	_ArrayList$Itr_FieldInfo_,
	_ArrayList$Itr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_ArrayList$Itr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArrayList"
};

$Object* allocate$ArrayList$Itr($Class* clazz) {
	return $of($alloc(ArrayList$Itr));
}

void ArrayList$Itr::init$($ArrayList* this$0) {
	$set(this, this$0, this$0);
	this->lastRet = -1;
	this->expectedModCount = this->this$0->modCount;
}

bool ArrayList$Itr::hasNext() {
	return this->cursor != this->this$0->size$;
}

$Object* ArrayList$Itr::next() {
	checkForComodification();
	int32_t i = this->cursor;
	if (i >= this->this$0->size$) {
		$throwNew($NoSuchElementException);
	}
	$var($ObjectArray, elementData, this->this$0->elementData$);
	if (i >= $nc(elementData)->length) {
		$throwNew($ConcurrentModificationException);
	}
	this->cursor = i + 1;
	return $of($nc(elementData)->get(this->lastRet = i));
}

void ArrayList$Itr::remove() {
	if (this->lastRet < 0) {
		$throwNew($IllegalStateException);
	}
	checkForComodification();
	try {
		this->this$0->remove(this->lastRet);
		this->cursor = this->lastRet;
		this->lastRet = -1;
		this->expectedModCount = this->this$0->modCount;
	} catch ($IndexOutOfBoundsException& ex) {
		$throwNew($ConcurrentModificationException);
	}
}

void ArrayList$Itr::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	int32_t size = this->this$0->size$;
	int32_t i = this->cursor;
	if (i < size) {
		$var($ObjectArray, es, this->this$0->elementData$);
		if (i >= $nc(es)->length) {
			$throwNew($ConcurrentModificationException);
		}
		for (; i < size && this->this$0->modCount == this->expectedModCount; ++i) {
			action->accept($($ArrayList::elementAt(es, i)));
		}
		this->cursor = i;
		this->lastRet = i - 1;
		checkForComodification();
	}
}

void ArrayList$Itr::checkForComodification() {
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
}

ArrayList$Itr::ArrayList$Itr() {
}

$Class* ArrayList$Itr::load$($String* name, bool initialize) {
	$loadClass(ArrayList$Itr, name, initialize, &_ArrayList$Itr_ClassInfo_, allocate$ArrayList$Itr);
	return class$;
}

$Class* ArrayList$Itr::class$ = nullptr;

	} // util
} // java