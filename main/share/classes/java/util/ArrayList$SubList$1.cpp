#include <java/util/ArrayList$SubList$1.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/ArrayList$SubList.h>
#include <java/util/ArrayList.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $ArrayList$SubList = ::java::util::ArrayList$SubList;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

void ArrayList$SubList$1::init$($ArrayList$SubList* this$0, int32_t val$index) {
	$set(this, this$0, this$0);
	this->val$index = val$index;
	this->cursor = this->val$index;
	this->lastRet = -1;
	this->expectedModCount = this->this$0->modCount;
}

bool ArrayList$SubList$1::hasNext() {
	return this->cursor != this->this$0->size$;
}

$Object* ArrayList$SubList$1::next() {
	checkForComodification();
	int32_t i = this->cursor;
	if (i >= this->this$0->size$) {
		$throwNew($NoSuchElementException);
	}
	$var($ObjectArray, elementData, $nc(this->this$0->root)->elementData$);
	if (this->this$0->offset + i >= $nc(elementData)->length) {
		$throwNew($ConcurrentModificationException);
	}
	this->cursor = i + 1;
	return elementData->get(this->this$0->offset + (this->lastRet = i));
}

bool ArrayList$SubList$1::hasPrevious() {
	return this->cursor != 0;
}

$Object* ArrayList$SubList$1::previous() {
	checkForComodification();
	int32_t i = this->cursor - 1;
	if (i < 0) {
		$throwNew($NoSuchElementException);
	}
	$var($ObjectArray, elementData, $nc(this->this$0->root)->elementData$);
	if (this->this$0->offset + i >= $nc(elementData)->length) {
		$throwNew($ConcurrentModificationException);
	}
	this->cursor = i;
	return elementData->get(this->this$0->offset + (this->lastRet = i));
}

void ArrayList$SubList$1::forEachRemaining($Consumer* action) {
	$useLocalObjectStack();
	$Objects::requireNonNull(action);
	int32_t size = this->this$0->size$;
	int32_t i = this->cursor;
	if (i < size) {
		$var($ObjectArray, es, $nc(this->this$0->root)->elementData$);
		if (this->this$0->offset + i >= $nc(es)->length) {
			$throwNew($ConcurrentModificationException);
		}
		for (; i < size && this->this$0->root->modCount == this->expectedModCount; ++i) {
			action->accept($($ArrayList::elementAt(es, this->this$0->offset + i)));
		}
		this->cursor = i;
		this->lastRet = i - 1;
		checkForComodification();
	}
}

int32_t ArrayList$SubList$1::nextIndex() {
	return this->cursor;
}

int32_t ArrayList$SubList$1::previousIndex() {
	return this->cursor - 1;
}

void ArrayList$SubList$1::remove() {
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

void ArrayList$SubList$1::set(Object$* e) {
	if (this->lastRet < 0) {
		$throwNew($IllegalStateException);
	}
	checkForComodification();
	try {
		$nc(this->this$0->root)->set(this->this$0->offset + this->lastRet, e);
	} catch ($IndexOutOfBoundsException& ex) {
		$throwNew($ConcurrentModificationException);
	}
}

void ArrayList$SubList$1::add(Object$* e) {
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

void ArrayList$SubList$1::checkForComodification() {
	if ($nc(this->this$0->root)->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
}

ArrayList$SubList$1::ArrayList$SubList$1() {
}

$Class* ArrayList$SubList$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/ArrayList$SubList;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayList$SubList$1, this$0)},
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(ArrayList$SubList$1, val$index)},
		{"cursor", "I", nullptr, 0, $field(ArrayList$SubList$1, cursor)},
		{"lastRet", "I", nullptr, 0, $field(ArrayList$SubList$1, lastRet)},
		{"expectedModCount", "I", nullptr, 0, $field(ArrayList$SubList$1, expectedModCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ArrayList$SubList;I)V", "()V", 0, $method(ArrayList$SubList$1, init$, void, $ArrayList$SubList*, int32_t)},
		{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(ArrayList$SubList$1, add, void, Object$*)},
		{"checkForComodification", "()V", nullptr, $FINAL, $method(ArrayList$SubList$1, checkForComodification, void)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(ArrayList$SubList$1, forEachRemaining, void, $Consumer*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList$1, hasNext, bool)},
		{"hasPrevious", "()Z", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList$1, hasPrevious, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(ArrayList$SubList$1, next, $Object*)},
		{"nextIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList$1, nextIndex, int32_t)},
		{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(ArrayList$SubList$1, previous, $Object*)},
		{"previousIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList$1, previousIndex, int32_t)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList$1, remove, void)},
		{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(ArrayList$SubList$1, set, void, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ArrayList$SubList",
		"listIterator",
		"(I)Ljava/util/ListIterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ArrayList$SubList", "java.util.ArrayList", "SubList", $PRIVATE | $STATIC},
		{"java.util.ArrayList$SubList$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ArrayList$SubList$1",
		"java.lang.Object",
		"java.util.ListIterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/ListIterator<TE;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ArrayList"
	};
	$loadClass(ArrayList$SubList$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayList$SubList$1);
	});
	return class$;
}

$Class* ArrayList$SubList$1::class$ = nullptr;

	} // util
} // java