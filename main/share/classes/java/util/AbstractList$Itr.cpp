#include <java/util/AbstractList$Itr.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractList.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

void AbstractList$Itr::init$($AbstractList* this$0) {
	$set(this, this$0, this$0);
	this->cursor = 0;
	this->lastRet = -1;
	this->expectedModCount = this->this$0->modCount;
}

bool AbstractList$Itr::hasNext() {
	return this->cursor != this->this$0->size();
}

$Object* AbstractList$Itr::next() {
	checkForComodification();
	try {
		int32_t i = this->cursor;
		$var($Object, next, this->this$0->get(i));
		this->lastRet = i;
		this->cursor = i + 1;
		return next;
	} catch ($IndexOutOfBoundsException& e) {
		checkForComodification();
		$throwNew($NoSuchElementException, e);
	}
	$shouldNotReachHere();
}

void AbstractList$Itr::remove() {
	if (this->lastRet < 0) {
		$throwNew($IllegalStateException);
	}
	checkForComodification();
	try {
		this->this$0->remove(this->lastRet);
		if (this->lastRet < this->cursor) {
			--this->cursor;
		}
		this->lastRet = -1;
		this->expectedModCount = this->this$0->modCount;
	} catch ($IndexOutOfBoundsException& e) {
		$throwNew($ConcurrentModificationException);
	}
}

void AbstractList$Itr::checkForComodification() {
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
}

AbstractList$Itr::AbstractList$Itr() {
}

$Class* AbstractList$Itr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/AbstractList;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractList$Itr, this$0)},
		{"cursor", "I", nullptr, 0, $field(AbstractList$Itr, cursor)},
		{"lastRet", "I", nullptr, 0, $field(AbstractList$Itr, lastRet)},
		{"expectedModCount", "I", nullptr, 0, $field(AbstractList$Itr, expectedModCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/AbstractList;)V", nullptr, $PRIVATE, $method(AbstractList$Itr, init$, void, $AbstractList*)},
		{"checkForComodification", "()V", nullptr, $FINAL, $method(AbstractList$Itr, checkForComodification, void)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractList$Itr, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(AbstractList$Itr, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractList$Itr, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.AbstractList$Itr", "java.util.AbstractList", "Itr", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.AbstractList$Itr",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.AbstractList"
	};
	$loadClass(AbstractList$Itr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractList$Itr);
	});
	return class$;
}

$Class* AbstractList$Itr::class$ = nullptr;

	} // util
} // java