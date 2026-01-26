#include <java/util/TreeMap$DescendingKeyIterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$PrivateEntryIterator.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$PrivateEntryIterator = ::java::util::TreeMap$PrivateEntryIterator;

namespace java {
	namespace util {

$FieldInfo _TreeMap$DescendingKeyIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/TreeMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$DescendingKeyIterator, this$0)},
	{}
};

$MethodInfo _TreeMap$DescendingKeyIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/TreeMap;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(TreeMap$DescendingKeyIterator, init$, void, $TreeMap*, $TreeMap$Entry*)},
	{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(TreeMap$DescendingKeyIterator, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(TreeMap$DescendingKeyIterator, remove, void)},
	{}
};

$InnerClassInfo _TreeMap$DescendingKeyIterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$DescendingKeyIterator", "java.util.TreeMap", "DescendingKeyIterator", $FINAL},
	{"java.util.TreeMap$PrivateEntryIterator", "java.util.TreeMap", "PrivateEntryIterator", $ABSTRACT},
	{}
};

$ClassInfo _TreeMap$DescendingKeyIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$DescendingKeyIterator",
	"java.util.TreeMap$PrivateEntryIterator",
	nullptr,
	_TreeMap$DescendingKeyIterator_FieldInfo_,
	_TreeMap$DescendingKeyIterator_MethodInfo_,
	"Ljava/util/TreeMap<TK;TV;>.PrivateEntryIterator<TK;>;",
	nullptr,
	_TreeMap$DescendingKeyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$DescendingKeyIterator($Class* clazz) {
	return $of($alloc(TreeMap$DescendingKeyIterator));
}

void TreeMap$DescendingKeyIterator::init$($TreeMap* this$0, $TreeMap$Entry* first) {
	$set(this, this$0, this$0);
	$TreeMap$PrivateEntryIterator::init$(this$0, first);
}

$Object* TreeMap$DescendingKeyIterator::next() {
	return $of($nc($(prevEntry()))->key);
}

void TreeMap$DescendingKeyIterator::remove() {
	if (this->lastReturned == nullptr) {
		$throwNew($IllegalStateException);
	}
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	this->this$0->deleteEntry(this->lastReturned);
	$set(this, lastReturned, nullptr);
	this->expectedModCount = this->this$0->modCount;
}

TreeMap$DescendingKeyIterator::TreeMap$DescendingKeyIterator() {
}

$Class* TreeMap$DescendingKeyIterator::load$($String* name, bool initialize) {
	$loadClass(TreeMap$DescendingKeyIterator, name, initialize, &_TreeMap$DescendingKeyIterator_ClassInfo_, allocate$TreeMap$DescendingKeyIterator);
	return class$;
}

$Class* TreeMap$DescendingKeyIterator::class$ = nullptr;

	} // util
} // java