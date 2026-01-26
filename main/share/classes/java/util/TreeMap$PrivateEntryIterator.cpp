#include <java/util/TreeMap$PrivateEntryIterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;

namespace java {
	namespace util {

$FieldInfo _TreeMap$PrivateEntryIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/TreeMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$PrivateEntryIterator, this$0)},
	{"next", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$PrivateEntryIterator, next$)},
	{"lastReturned", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$PrivateEntryIterator, lastReturned)},
	{"expectedModCount", "I", nullptr, 0, $field(TreeMap$PrivateEntryIterator, expectedModCount)},
	{}
};

$MethodInfo _TreeMap$PrivateEntryIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/TreeMap;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(TreeMap$PrivateEntryIterator, init$, void, $TreeMap*, $TreeMap$Entry*)},
	{"hasNext", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(TreeMap$PrivateEntryIterator, hasNext, bool)},
	{"nextEntry", "()Ljava/util/TreeMap$Entry;", "()Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(TreeMap$PrivateEntryIterator, nextEntry, $TreeMap$Entry*)},
	{"prevEntry", "()Ljava/util/TreeMap$Entry;", "()Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(TreeMap$PrivateEntryIterator, prevEntry, $TreeMap$Entry*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(TreeMap$PrivateEntryIterator, remove, void)},
	{}
};

$InnerClassInfo _TreeMap$PrivateEntryIterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$PrivateEntryIterator", "java.util.TreeMap", "PrivateEntryIterator", $ABSTRACT},
	{}
};

$ClassInfo _TreeMap$PrivateEntryIterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.TreeMap$PrivateEntryIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_TreeMap$PrivateEntryIterator_FieldInfo_,
	_TreeMap$PrivateEntryIterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
	nullptr,
	_TreeMap$PrivateEntryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$PrivateEntryIterator($Class* clazz) {
	return $of($alloc(TreeMap$PrivateEntryIterator));
}

void TreeMap$PrivateEntryIterator::init$($TreeMap* this$0, $TreeMap$Entry* first) {
	$set(this, this$0, this$0);
	this->expectedModCount = this$0->modCount;
	$set(this, lastReturned, nullptr);
	$set(this, next$, first);
}

bool TreeMap$PrivateEntryIterator::hasNext() {
	return this->next$ != nullptr;
}

$TreeMap$Entry* TreeMap$PrivateEntryIterator::nextEntry() {
	$var($TreeMap$Entry, e, this->next$);
	if (e == nullptr) {
		$throwNew($NoSuchElementException);
	}
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	$set(this, next$, $TreeMap::successor(e));
	$set(this, lastReturned, e);
	return e;
}

$TreeMap$Entry* TreeMap$PrivateEntryIterator::prevEntry() {
	$var($TreeMap$Entry, e, this->next$);
	if (e == nullptr) {
		$throwNew($NoSuchElementException);
	}
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	$set(this, next$, $TreeMap::predecessor(e));
	$set(this, lastReturned, e);
	return e;
}

void TreeMap$PrivateEntryIterator::remove() {
	if (this->lastReturned == nullptr) {
		$throwNew($IllegalStateException);
	}
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	if ($nc(this->lastReturned)->left != nullptr && $nc(this->lastReturned)->right != nullptr) {
		$set(this, next$, this->lastReturned);
	}
	this->this$0->deleteEntry(this->lastReturned);
	this->expectedModCount = this->this$0->modCount;
	$set(this, lastReturned, nullptr);
}

TreeMap$PrivateEntryIterator::TreeMap$PrivateEntryIterator() {
}

$Class* TreeMap$PrivateEntryIterator::load$($String* name, bool initialize) {
	$loadClass(TreeMap$PrivateEntryIterator, name, initialize, &_TreeMap$PrivateEntryIterator_ClassInfo_, allocate$TreeMap$PrivateEntryIterator);
	return class$;
}

$Class* TreeMap$PrivateEntryIterator::class$ = nullptr;

	} // util
} // java