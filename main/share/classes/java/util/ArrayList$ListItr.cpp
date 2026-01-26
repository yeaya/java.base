#include <java/util/ArrayList$ListItr.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/ArrayList$Itr.h>
#include <java/util/ArrayList.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $ArrayList$Itr = ::java::util::ArrayList$Itr;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _ArrayList$ListItr_FieldInfo_[] = {
	{"this$0", "Ljava/util/ArrayList;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayList$ListItr, this$0)},
	{}
};

$MethodInfo _ArrayList$ListItr_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*hasNext", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/ArrayList;I)V", nullptr, 0, $method(ArrayList$ListItr, init$, void, $ArrayList*, int32_t)},
	{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(ArrayList$ListItr, add, void, Object$*)},
	{"hasPrevious", "()Z", nullptr, $PUBLIC, $virtualMethod(ArrayList$ListItr, hasPrevious, bool)},
	{"*next", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"nextIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ArrayList$ListItr, nextIndex, int32_t)},
	{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(ArrayList$ListItr, previous, $Object*)},
	{"previousIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ArrayList$ListItr, previousIndex, int32_t)},
	{"*remove", "()V", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(ArrayList$ListItr, set, void, Object$*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ArrayList$ListItr_InnerClassesInfo_[] = {
	{"java.util.ArrayList$ListItr", "java.util.ArrayList", "ListItr", $PRIVATE},
	{"java.util.ArrayList$Itr", "java.util.ArrayList", "Itr", $PRIVATE},
	{}
};

$ClassInfo _ArrayList$ListItr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ArrayList$ListItr",
	"java.util.ArrayList$Itr",
	"java.util.ListIterator",
	_ArrayList$ListItr_FieldInfo_,
	_ArrayList$ListItr_MethodInfo_,
	"Ljava/util/ArrayList<TE;>.Itr;Ljava/util/ListIterator<TE;>;",
	nullptr,
	_ArrayList$ListItr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArrayList"
};

$Object* allocate$ArrayList$ListItr($Class* clazz) {
	return $of($alloc(ArrayList$ListItr));
}

bool ArrayList$ListItr::hasNext() {
	 return this->$ArrayList$Itr::hasNext();
}

$Object* ArrayList$ListItr::next() {
	 return this->$ArrayList$Itr::next();
}

void ArrayList$ListItr::remove() {
	this->$ArrayList$Itr::remove();
}

void ArrayList$ListItr::forEachRemaining($Consumer* action) {
	this->$ArrayList$Itr::forEachRemaining(action);
}

int32_t ArrayList$ListItr::hashCode() {
	 return this->$ArrayList$Itr::hashCode();
}

bool ArrayList$ListItr::equals(Object$* obj) {
	 return this->$ArrayList$Itr::equals(obj);
}

$Object* ArrayList$ListItr::clone() {
	 return this->$ArrayList$Itr::clone();
}

$String* ArrayList$ListItr::toString() {
	 return this->$ArrayList$Itr::toString();
}

void ArrayList$ListItr::finalize() {
	this->$ArrayList$Itr::finalize();
}

void ArrayList$ListItr::init$($ArrayList* this$0, int32_t index) {
	$set(this, this$0, this$0);
	$ArrayList$Itr::init$(this$0);
	this->cursor = index;
}

bool ArrayList$ListItr::hasPrevious() {
	return this->cursor != 0;
}

int32_t ArrayList$ListItr::nextIndex() {
	return this->cursor;
}

int32_t ArrayList$ListItr::previousIndex() {
	return this->cursor - 1;
}

$Object* ArrayList$ListItr::previous() {
	checkForComodification();
	int32_t i = this->cursor - 1;
	if (i < 0) {
		$throwNew($NoSuchElementException);
	}
	$var($ObjectArray, elementData, this->this$0->elementData$);
	if (i >= $nc(elementData)->length) {
		$throwNew($ConcurrentModificationException);
	}
	this->cursor = i;
	return $of($nc(elementData)->get(this->lastRet = i));
}

void ArrayList$ListItr::set(Object$* e) {
	if (this->lastRet < 0) {
		$throwNew($IllegalStateException);
	}
	checkForComodification();
	try {
		this->this$0->set(this->lastRet, e);
	} catch ($IndexOutOfBoundsException& ex) {
		$throwNew($ConcurrentModificationException);
	}
}

void ArrayList$ListItr::add(Object$* e) {
	checkForComodification();
	try {
		int32_t i = this->cursor;
		this->this$0->add(i, e);
		this->cursor = i + 1;
		this->lastRet = -1;
		this->expectedModCount = this->this$0->modCount;
	} catch ($IndexOutOfBoundsException& ex) {
		$throwNew($ConcurrentModificationException);
	}
}

ArrayList$ListItr::ArrayList$ListItr() {
}

$Class* ArrayList$ListItr::load$($String* name, bool initialize) {
	$loadClass(ArrayList$ListItr, name, initialize, &_ArrayList$ListItr_ClassInfo_, allocate$ArrayList$ListItr);
	return class$;
}

$Class* ArrayList$ListItr::class$ = nullptr;

	} // util
} // java