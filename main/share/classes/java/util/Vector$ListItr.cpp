#include <java/util/Vector$ListItr.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Vector$Itr.h>
#include <java/util/Vector.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ListIterator = ::java::util::ListIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Vector = ::java::util::Vector;
using $Vector$Itr = ::java::util::Vector$Itr;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Vector$ListItr_FieldInfo_[] = {
	{"this$0", "Ljava/util/Vector;", nullptr, $FINAL | $SYNTHETIC, $field(Vector$ListItr, this$0)},
	{}
};

$MethodInfo _Vector$ListItr_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*hasNext", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Vector;I)V", nullptr, 0, $method(static_cast<void(Vector$ListItr::*)($Vector*,int32_t)>(&Vector$ListItr::init$))},
	{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"hasPrevious", "()Z", nullptr, $PUBLIC},
	{"*next", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"nextIndex", "()I", nullptr, $PUBLIC},
	{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"previousIndex", "()I", nullptr, $PUBLIC},
	{"*remove", "()V", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Vector$ListItr_InnerClassesInfo_[] = {
	{"java.util.Vector$ListItr", "java.util.Vector", "ListItr", $FINAL},
	{"java.util.Vector$Itr", "java.util.Vector", "Itr", $PRIVATE},
	{}
};

$ClassInfo _Vector$ListItr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Vector$ListItr",
	"java.util.Vector$Itr",
	"java.util.ListIterator",
	_Vector$ListItr_FieldInfo_,
	_Vector$ListItr_MethodInfo_,
	"Ljava/util/Vector<TE;>.Itr;Ljava/util/ListIterator<TE;>;",
	nullptr,
	_Vector$ListItr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Vector"
};

$Object* allocate$Vector$ListItr($Class* clazz) {
	return $of($alloc(Vector$ListItr));
}

bool Vector$ListItr::hasNext() {
	 return this->$Vector$Itr::hasNext();
}

$Object* Vector$ListItr::next() {
	 return this->$Vector$Itr::next();
}

void Vector$ListItr::remove() {
	this->$Vector$Itr::remove();
}

void Vector$ListItr::forEachRemaining($Consumer* action) {
	this->$Vector$Itr::forEachRemaining(action);
}

int32_t Vector$ListItr::hashCode() {
	 return this->$Vector$Itr::hashCode();
}

bool Vector$ListItr::equals(Object$* obj) {
	 return this->$Vector$Itr::equals(obj);
}

$Object* Vector$ListItr::clone() {
	 return this->$Vector$Itr::clone();
}

$String* Vector$ListItr::toString() {
	 return this->$Vector$Itr::toString();
}

void Vector$ListItr::finalize() {
	this->$Vector$Itr::finalize();
}

void Vector$ListItr::init$($Vector* this$0, int32_t index) {
	$set(this, this$0, this$0);
	$Vector$Itr::init$(this$0);
	this->cursor = index;
}

bool Vector$ListItr::hasPrevious() {
	return this->cursor != 0;
}

int32_t Vector$ListItr::nextIndex() {
	return this->cursor;
}

int32_t Vector$ListItr::previousIndex() {
	return this->cursor - 1;
}

$Object* Vector$ListItr::previous() {
	$synchronized(this->this$0) {
		checkForComodification();
		int32_t i = this->cursor - 1;
		if (i < 0) {
			$throwNew($NoSuchElementException);
		}
		this->cursor = i;
		return $of(this->this$0->elementData(this->lastRet = i));
	}
}

void Vector$ListItr::set(Object$* e) {
	if (this->lastRet == -1) {
		$throwNew($IllegalStateException);
	}
	$synchronized(this->this$0) {
		checkForComodification();
		this->this$0->set(this->lastRet, e);
	}
}

void Vector$ListItr::add(Object$* e) {
	int32_t i = this->cursor;
	$synchronized(this->this$0) {
		checkForComodification();
		this->this$0->add(i, e);
		this->expectedModCount = this->this$0->modCount;
	}
	this->cursor = i + 1;
	this->lastRet = -1;
}

Vector$ListItr::Vector$ListItr() {
}

$Class* Vector$ListItr::load$($String* name, bool initialize) {
	$loadClass(Vector$ListItr, name, initialize, &_Vector$ListItr_ClassInfo_, allocate$Vector$ListItr);
	return class$;
}

$Class* Vector$ListItr::class$ = nullptr;

	} // util
} // java