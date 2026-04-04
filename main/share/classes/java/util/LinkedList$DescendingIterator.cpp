#include <java/util/LinkedList$DescendingIterator.h>
#include <java/util/LinkedList$ListItr.h>
#include <java/util/LinkedList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedList = ::java::util::LinkedList;
using $LinkedList$ListItr = ::java::util::LinkedList$ListItr;

namespace java {
	namespace util {

void LinkedList$DescendingIterator::init$($LinkedList* this$0) {
	$set(this, this$0, this$0);
	$set(this, itr, $new($LinkedList$ListItr, this->this$0, this->this$0->size()));
}

bool LinkedList$DescendingIterator::hasNext() {
	return this->itr->hasPrevious();
}

$Object* LinkedList$DescendingIterator::next() {
	return this->itr->previous();
}

void LinkedList$DescendingIterator::remove() {
	this->itr->remove();
}

LinkedList$DescendingIterator::LinkedList$DescendingIterator() {
}

$Class* LinkedList$DescendingIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/LinkedList;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedList$DescendingIterator, this$0)},
		{"itr", "Ljava/util/LinkedList$ListItr;", "Ljava/util/LinkedList<TE;>.ListItr;", $PRIVATE | $FINAL, $field(LinkedList$DescendingIterator, itr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/LinkedList;)V", nullptr, $PRIVATE, $method(LinkedList$DescendingIterator, init$, void, $LinkedList*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(LinkedList$DescendingIterator, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(LinkedList$DescendingIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(LinkedList$DescendingIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.LinkedList$DescendingIterator", "java.util.LinkedList", "DescendingIterator", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.LinkedList$DescendingIterator",
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
		"java.util.LinkedList"
	};
	$loadClass(LinkedList$DescendingIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinkedList$DescendingIterator);
	});
	return class$;
}

$Class* LinkedList$DescendingIterator::class$ = nullptr;

	} // util
} // java