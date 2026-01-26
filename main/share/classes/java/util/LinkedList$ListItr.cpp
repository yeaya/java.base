#include <java/util/LinkedList$ListItr.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractList.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/LinkedList$Node.h>
#include <java/util/LinkedList.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $LinkedList = ::java::util::LinkedList;
using $LinkedList$Node = ::java::util::LinkedList$Node;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _LinkedList$ListItr_FieldInfo_[] = {
	{"this$0", "Ljava/util/LinkedList;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedList$ListItr, this$0)},
	{"lastReturned", "Ljava/util/LinkedList$Node;", "Ljava/util/LinkedList$Node<TE;>;", $PRIVATE, $field(LinkedList$ListItr, lastReturned)},
	{"next", "Ljava/util/LinkedList$Node;", "Ljava/util/LinkedList$Node<TE;>;", $PRIVATE, $field(LinkedList$ListItr, next$)},
	{"nextIndex", "I", nullptr, $PRIVATE, $field(LinkedList$ListItr, nextIndex$)},
	{"expectedModCount", "I", nullptr, $PRIVATE, $field(LinkedList$ListItr, expectedModCount)},
	{}
};

$MethodInfo _LinkedList$ListItr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/LinkedList;I)V", nullptr, 0, $method(LinkedList$ListItr, init$, void, $LinkedList*, int32_t)},
	{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(LinkedList$ListItr, add, void, Object$*)},
	{"checkForComodification", "()V", nullptr, $FINAL, $method(LinkedList$ListItr, checkForComodification, void)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(LinkedList$ListItr, forEachRemaining, void, $Consumer*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(LinkedList$ListItr, hasNext, bool)},
	{"hasPrevious", "()Z", nullptr, $PUBLIC, $virtualMethod(LinkedList$ListItr, hasPrevious, bool)},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(LinkedList$ListItr, next, $Object*)},
	{"nextIndex", "()I", nullptr, $PUBLIC, $virtualMethod(LinkedList$ListItr, nextIndex, int32_t)},
	{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(LinkedList$ListItr, previous, $Object*)},
	{"previousIndex", "()I", nullptr, $PUBLIC, $virtualMethod(LinkedList$ListItr, previousIndex, int32_t)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(LinkedList$ListItr, remove, void)},
	{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(LinkedList$ListItr, set, void, Object$*)},
	{}
};

$InnerClassInfo _LinkedList$ListItr_InnerClassesInfo_[] = {
	{"java.util.LinkedList$ListItr", "java.util.LinkedList", "ListItr", $PRIVATE},
	{}
};

$ClassInfo _LinkedList$ListItr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.LinkedList$ListItr",
	"java.lang.Object",
	"java.util.ListIterator",
	_LinkedList$ListItr_FieldInfo_,
	_LinkedList$ListItr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/ListIterator<TE;>;",
	nullptr,
	_LinkedList$ListItr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.LinkedList"
};

$Object* allocate$LinkedList$ListItr($Class* clazz) {
	return $of($alloc(LinkedList$ListItr));
}

void LinkedList$ListItr::init$($LinkedList* this$0, int32_t index) {
	$set(this, this$0, this$0);
	this->expectedModCount = this->this$0->modCount;
	$set(this, next$, (index == this$0->size$) ? ($LinkedList$Node*)nullptr : this$0->node(index));
	this->nextIndex$ = index;
}

bool LinkedList$ListItr::hasNext() {
	return this->nextIndex$ < this->this$0->size$;
}

$Object* LinkedList$ListItr::next() {
	checkForComodification();
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$set(this, lastReturned, this->next$);
	$set(this, next$, $nc(this->next$)->next);
	++this->nextIndex$;
	return $of($nc(this->lastReturned)->item);
}

bool LinkedList$ListItr::hasPrevious() {
	return this->nextIndex$ > 0;
}

$Object* LinkedList$ListItr::previous() {
	checkForComodification();
	if (!hasPrevious()) {
		$throwNew($NoSuchElementException);
	}
	$set(this, lastReturned, ($set(this, next$, (this->next$ == nullptr) ? this->this$0->last : $nc(this->next$)->prev)));
	--this->nextIndex$;
	return $of($nc(this->lastReturned)->item);
}

int32_t LinkedList$ListItr::nextIndex() {
	return this->nextIndex$;
}

int32_t LinkedList$ListItr::previousIndex() {
	return this->nextIndex$ - 1;
}

void LinkedList$ListItr::remove() {
	checkForComodification();
	if (this->lastReturned == nullptr) {
		$throwNew($IllegalStateException);
	}
	$var($LinkedList$Node, lastNext, $nc(this->lastReturned)->next);
	this->this$0->unlink(this->lastReturned);
	if (this->next$ == this->lastReturned) {
		$set(this, next$, lastNext);
	} else {
		--this->nextIndex$;
	}
	$set(this, lastReturned, nullptr);
	++this->expectedModCount;
}

void LinkedList$ListItr::set(Object$* e) {
	if (this->lastReturned == nullptr) {
		$throwNew($IllegalStateException);
	}
	checkForComodification();
	$set($nc(this->lastReturned), item, e);
}

void LinkedList$ListItr::add(Object$* e) {
	checkForComodification();
	$set(this, lastReturned, nullptr);
	if (this->next$ == nullptr) {
		this->this$0->linkLast(e);
	} else {
		this->this$0->linkBefore(e, this->next$);
	}
	++this->nextIndex$;
	++this->expectedModCount;
}

void LinkedList$ListItr::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	while (this->this$0->modCount == this->expectedModCount && this->nextIndex$ < this->this$0->size$) {
		action->accept($nc(this->next$)->item);
		$set(this, lastReturned, this->next$);
		$set(this, next$, $nc(this->next$)->next);
		++this->nextIndex$;
	}
	checkForComodification();
}

void LinkedList$ListItr::checkForComodification() {
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
}

LinkedList$ListItr::LinkedList$ListItr() {
}

$Class* LinkedList$ListItr::load$($String* name, bool initialize) {
	$loadClass(LinkedList$ListItr, name, initialize, &_LinkedList$ListItr_ClassInfo_, allocate$LinkedList$ListItr);
	return class$;
}

$Class* LinkedList$ListItr::class$ = nullptr;

	} // util
} // java