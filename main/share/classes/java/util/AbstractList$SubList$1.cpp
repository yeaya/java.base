#include <java/util/AbstractList$SubList$1.h>
#include <java/util/AbstractList$SubList.h>
#include <java/util/AbstractList.h>
#include <java/util/ListIterator.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList$SubList = ::java::util::AbstractList$SubList;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

void AbstractList$SubList$1::init$($AbstractList$SubList* this$0, int32_t val$index) {
	$set(this, this$0, this$0);
	this->val$index = val$index;
	$set(this, i, $nc(this->this$0->root)->listIterator(this->this$0->offset + this->val$index));
}

bool AbstractList$SubList$1::hasNext() {
	return nextIndex() < this->this$0->size$;
}

$Object* AbstractList$SubList$1::next() {
	if (hasNext()) {
		return $nc(this->i)->next();
	} else {
		$throwNew($NoSuchElementException);
	}
}

bool AbstractList$SubList$1::hasPrevious() {
	return previousIndex() >= 0;
}

$Object* AbstractList$SubList$1::previous() {
	if (hasPrevious()) {
		return $nc(this->i)->previous();
	} else {
		$throwNew($NoSuchElementException);
	}
}

int32_t AbstractList$SubList$1::nextIndex() {
	return $nc(this->i)->nextIndex() - this->this$0->offset;
}

int32_t AbstractList$SubList$1::previousIndex() {
	return $nc(this->i)->previousIndex() - this->this$0->offset;
}

void AbstractList$SubList$1::remove() {
	$nc(this->i)->remove();
	this->this$0->updateSizeAndModCount(-1);
}

void AbstractList$SubList$1::set(Object$* e) {
	$nc(this->i)->set(e);
}

void AbstractList$SubList$1::add(Object$* e) {
	$nc(this->i)->add(e);
	this->this$0->updateSizeAndModCount(1);
}

AbstractList$SubList$1::AbstractList$SubList$1() {
}

$Class* AbstractList$SubList$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/AbstractList$SubList;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractList$SubList$1, this$0)},
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(AbstractList$SubList$1, val$index)},
		{"i", "Ljava/util/ListIterator;", "Ljava/util/ListIterator<TE;>;", $PRIVATE | $FINAL, $field(AbstractList$SubList$1, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/AbstractList$SubList;I)V", "()V", 0, $method(AbstractList$SubList$1, init$, void, $AbstractList$SubList*, int32_t)},
		{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(AbstractList$SubList$1, add, void, Object$*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractList$SubList$1, hasNext, bool)},
		{"hasPrevious", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractList$SubList$1, hasPrevious, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(AbstractList$SubList$1, next, $Object*)},
		{"nextIndex", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractList$SubList$1, nextIndex, int32_t)},
		{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(AbstractList$SubList$1, previous, $Object*)},
		{"previousIndex", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractList$SubList$1, previousIndex, int32_t)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractList$SubList$1, remove, void)},
		{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(AbstractList$SubList$1, set, void, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.AbstractList$SubList",
		"listIterator",
		"(I)Ljava/util/ListIterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.AbstractList$SubList", "java.util.AbstractList", "SubList", $PRIVATE | $STATIC},
		{"java.util.AbstractList$SubList$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.AbstractList$SubList$1",
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
		"java.util.AbstractList"
	};
	$loadClass(AbstractList$SubList$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractList$SubList$1);
	});
	return class$;
}

$Class* AbstractList$SubList$1::class$ = nullptr;

	} // util
} // java