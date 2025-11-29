#include <java/util/TreeMap$NavigableSubMap$SubMapIterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$NavigableSubMap.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

#undef UNBOUNDED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$NavigableSubMap = ::java::util::TreeMap$NavigableSubMap;

namespace java {
	namespace util {

$FieldInfo _TreeMap$NavigableSubMap$SubMapIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/TreeMap$NavigableSubMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$NavigableSubMap$SubMapIterator, this$0)},
	{"lastReturned", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$NavigableSubMap$SubMapIterator, lastReturned)},
	{"next", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$NavigableSubMap$SubMapIterator, next$)},
	{"fenceKey", "Ljava/lang/Object;", nullptr, $FINAL, $field(TreeMap$NavigableSubMap$SubMapIterator, fenceKey)},
	{"expectedModCount", "I", nullptr, 0, $field(TreeMap$NavigableSubMap$SubMapIterator, expectedModCount)},
	{}
};

$MethodInfo _TreeMap$NavigableSubMap$SubMapIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/TreeMap$NavigableSubMap;Ljava/util/TreeMap$Entry;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(static_cast<void(TreeMap$NavigableSubMap$SubMapIterator::*)($TreeMap$NavigableSubMap*,$TreeMap$Entry*,$TreeMap$Entry*)>(&TreeMap$NavigableSubMap$SubMapIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
	{"nextEntry", "()Ljava/util/TreeMap$Entry;", "()Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(static_cast<$TreeMap$Entry*(TreeMap$NavigableSubMap$SubMapIterator::*)()>(&TreeMap$NavigableSubMap$SubMapIterator::nextEntry))},
	{"prevEntry", "()Ljava/util/TreeMap$Entry;", "()Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(static_cast<$TreeMap$Entry*(TreeMap$NavigableSubMap$SubMapIterator::*)()>(&TreeMap$NavigableSubMap$SubMapIterator::prevEntry))},
	{"removeAscending", "()V", nullptr, $FINAL, $method(static_cast<void(TreeMap$NavigableSubMap$SubMapIterator::*)()>(&TreeMap$NavigableSubMap$SubMapIterator::removeAscending))},
	{"removeDescending", "()V", nullptr, $FINAL, $method(static_cast<void(TreeMap$NavigableSubMap$SubMapIterator::*)()>(&TreeMap$NavigableSubMap$SubMapIterator::removeDescending))},
	{}
};

$InnerClassInfo _TreeMap$NavigableSubMap$SubMapIterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$NavigableSubMap", "java.util.TreeMap", "NavigableSubMap", $STATIC | $ABSTRACT},
	{"java.util.TreeMap$NavigableSubMap$SubMapIterator", "java.util.TreeMap$NavigableSubMap", "SubMapIterator", $ABSTRACT},
	{}
};

$ClassInfo _TreeMap$NavigableSubMap$SubMapIterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.TreeMap$NavigableSubMap$SubMapIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_TreeMap$NavigableSubMap$SubMapIterator_FieldInfo_,
	_TreeMap$NavigableSubMap$SubMapIterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
	nullptr,
	_TreeMap$NavigableSubMap$SubMapIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$NavigableSubMap$SubMapIterator($Class* clazz) {
	return $of($alloc(TreeMap$NavigableSubMap$SubMapIterator));
}

void TreeMap$NavigableSubMap$SubMapIterator::init$($TreeMap$NavigableSubMap* this$0, $TreeMap$Entry* first, $TreeMap$Entry* fence) {
	$set(this, this$0, this$0);
	this->expectedModCount = $nc(this$0->m)->modCount;
	$set(this, lastReturned, nullptr);
	$set(this, next$, first);
	$init($TreeMap);
	$set(this, fenceKey, fence == nullptr ? $TreeMap::UNBOUNDED : $nc(fence)->key);
}

bool TreeMap$NavigableSubMap$SubMapIterator::hasNext() {
	return this->next$ != nullptr && !$equals($nc(this->next$)->key, this->fenceKey);
}

$TreeMap$Entry* TreeMap$NavigableSubMap$SubMapIterator::nextEntry() {
	$var($TreeMap$Entry, e, this->next$);
	if (e == nullptr || $equals($nc(e)->key, this->fenceKey)) {
		$throwNew($NoSuchElementException);
	}
	if ($nc(this->this$0->m)->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	$set(this, next$, $TreeMap::successor(e));
	$set(this, lastReturned, e);
	return e;
}

$TreeMap$Entry* TreeMap$NavigableSubMap$SubMapIterator::prevEntry() {
	$var($TreeMap$Entry, e, this->next$);
	if (e == nullptr || $equals($nc(e)->key, this->fenceKey)) {
		$throwNew($NoSuchElementException);
	}
	if ($nc(this->this$0->m)->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	$set(this, next$, $TreeMap::predecessor(e));
	$set(this, lastReturned, e);
	return e;
}

void TreeMap$NavigableSubMap$SubMapIterator::removeAscending() {
	if (this->lastReturned == nullptr) {
		$throwNew($IllegalStateException);
	}
	if ($nc(this->this$0->m)->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	if ($nc(this->lastReturned)->left != nullptr && $nc(this->lastReturned)->right != nullptr) {
		$set(this, next$, this->lastReturned);
	}
	$nc(this->this$0->m)->deleteEntry(this->lastReturned);
	$set(this, lastReturned, nullptr);
	this->expectedModCount = $nc(this->this$0->m)->modCount;
}

void TreeMap$NavigableSubMap$SubMapIterator::removeDescending() {
	if (this->lastReturned == nullptr) {
		$throwNew($IllegalStateException);
	}
	if ($nc(this->this$0->m)->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	$nc(this->this$0->m)->deleteEntry(this->lastReturned);
	$set(this, lastReturned, nullptr);
	this->expectedModCount = $nc(this->this$0->m)->modCount;
}

TreeMap$NavigableSubMap$SubMapIterator::TreeMap$NavigableSubMap$SubMapIterator() {
}

$Class* TreeMap$NavigableSubMap$SubMapIterator::load$($String* name, bool initialize) {
	$loadClass(TreeMap$NavigableSubMap$SubMapIterator, name, initialize, &_TreeMap$NavigableSubMap$SubMapIterator_ClassInfo_, allocate$TreeMap$NavigableSubMap$SubMapIterator);
	return class$;
}

$Class* TreeMap$NavigableSubMap$SubMapIterator::class$ = nullptr;

	} // util
} // java