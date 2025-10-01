#include <java/util/PriorityQueue$Itr.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayDeque.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/PriorityQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayDeque = ::java::util::ArrayDeque;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $PriorityQueue = ::java::util::PriorityQueue;

namespace java {
	namespace util {

$FieldInfo _PriorityQueue$Itr_FieldInfo_[] = {
	{"this$0", "Ljava/util/PriorityQueue;", nullptr, $FINAL | $SYNTHETIC, $field(PriorityQueue$Itr, this$0)},
	{"cursor", "I", nullptr, $PRIVATE, $field(PriorityQueue$Itr, cursor)},
	{"lastRet", "I", nullptr, $PRIVATE, $field(PriorityQueue$Itr, lastRet)},
	{"forgetMeNot", "Ljava/util/ArrayDeque;", "Ljava/util/ArrayDeque<TE;>;", $PRIVATE, $field(PriorityQueue$Itr, forgetMeNot)},
	{"lastRetElt", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(PriorityQueue$Itr, lastRetElt)},
	{"expectedModCount", "I", nullptr, $PRIVATE, $field(PriorityQueue$Itr, expectedModCount)},
	{}
};

$MethodInfo _PriorityQueue$Itr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/PriorityQueue;)V", nullptr, 0, $method(static_cast<void(PriorityQueue$Itr::*)($PriorityQueue*)>(&PriorityQueue$Itr::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PriorityQueue$Itr_InnerClassesInfo_[] = {
	{"java.util.PriorityQueue$Itr", "java.util.PriorityQueue", "Itr", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _PriorityQueue$Itr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.PriorityQueue$Itr",
	"java.lang.Object",
	"java.util.Iterator",
	_PriorityQueue$Itr_FieldInfo_,
	_PriorityQueue$Itr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_PriorityQueue$Itr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.PriorityQueue"
};

$Object* allocate$PriorityQueue$Itr($Class* clazz) {
	return $of($alloc(PriorityQueue$Itr));
}

void PriorityQueue$Itr::init$($PriorityQueue* this$0) {
	$set(this, this$0, this$0);
	this->lastRet = -1;
	this->expectedModCount = this->this$0->modCount;
}

bool PriorityQueue$Itr::hasNext() {
	return this->cursor < this->this$0->size$ || (this->forgetMeNot != nullptr && !$nc(this->forgetMeNot)->isEmpty());
}

$Object* PriorityQueue$Itr::next() {
	if (this->expectedModCount != this->this$0->modCount) {
		$throwNew($ConcurrentModificationException);
	}
	if (this->cursor < this->this$0->size$) {
		return $of($nc(this->this$0->queue)->get(this->lastRet = this->cursor++));
	}
	if (this->forgetMeNot != nullptr) {
		this->lastRet = -1;
		$set(this, lastRetElt, $nc(this->forgetMeNot)->poll());
		if (this->lastRetElt != nullptr) {
			return $of(this->lastRetElt);
		}
	}
	$throwNew($NoSuchElementException);
}

void PriorityQueue$Itr::remove() {
	if (this->expectedModCount != this->this$0->modCount) {
		$throwNew($ConcurrentModificationException);
	}
	if (this->lastRet != -1) {
		$var($Object, moved, this->this$0->removeAt(this->lastRet));
		this->lastRet = -1;
		if (moved == nullptr) {
			--this->cursor;
		} else {
			if (this->forgetMeNot == nullptr) {
				$set(this, forgetMeNot, $new($ArrayDeque));
			}
			$nc(this->forgetMeNot)->add(moved);
		}
	} else if (this->lastRetElt != nullptr) {
		this->this$0->removeEq(this->lastRetElt);
		$set(this, lastRetElt, nullptr);
	} else {
		$throwNew($IllegalStateException);
	}
	this->expectedModCount = this->this$0->modCount;
}

PriorityQueue$Itr::PriorityQueue$Itr() {
}

$Class* PriorityQueue$Itr::load$($String* name, bool initialize) {
	$loadClass(PriorityQueue$Itr, name, initialize, &_PriorityQueue$Itr_ClassInfo_, allocate$PriorityQueue$Itr);
	return class$;
}

$Class* PriorityQueue$Itr::class$ = nullptr;

	} // util
} // java