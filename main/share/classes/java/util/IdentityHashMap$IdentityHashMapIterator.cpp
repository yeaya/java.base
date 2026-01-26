#include <java/util/IdentityHashMap$IdentityHashMapIterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _IdentityHashMap$IdentityHashMapIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/IdentityHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(IdentityHashMap$IdentityHashMapIterator, this$0)},
	{"index", "I", nullptr, 0, $field(IdentityHashMap$IdentityHashMapIterator, index)},
	{"expectedModCount", "I", nullptr, 0, $field(IdentityHashMap$IdentityHashMapIterator, expectedModCount)},
	{"lastReturnedIndex", "I", nullptr, 0, $field(IdentityHashMap$IdentityHashMapIterator, lastReturnedIndex)},
	{"indexValid", "Z", nullptr, 0, $field(IdentityHashMap$IdentityHashMapIterator, indexValid)},
	{"traversalTable", "[Ljava/lang/Object;", nullptr, 0, $field(IdentityHashMap$IdentityHashMapIterator, traversalTable)},
	{}
};

$MethodInfo _IdentityHashMap$IdentityHashMapIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/IdentityHashMap;)V", nullptr, $PRIVATE, $method(IdentityHashMap$IdentityHashMapIterator, init$, void, $IdentityHashMap*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(IdentityHashMap$IdentityHashMapIterator, hasNext, bool)},
	{"nextIndex", "()I", nullptr, $PROTECTED, $virtualMethod(IdentityHashMap$IdentityHashMapIterator, nextIndex, int32_t)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(IdentityHashMap$IdentityHashMapIterator, remove, void)},
	{}
};

$InnerClassInfo _IdentityHashMap$IdentityHashMapIterator_InnerClassesInfo_[] = {
	{"java.util.IdentityHashMap$IdentityHashMapIterator", "java.util.IdentityHashMap", "IdentityHashMapIterator", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _IdentityHashMap$IdentityHashMapIterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.IdentityHashMap$IdentityHashMapIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_IdentityHashMap$IdentityHashMapIterator_FieldInfo_,
	_IdentityHashMap$IdentityHashMapIterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
	nullptr,
	_IdentityHashMap$IdentityHashMapIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.IdentityHashMap"
};

$Object* allocate$IdentityHashMap$IdentityHashMapIterator($Class* clazz) {
	return $of($alloc(IdentityHashMap$IdentityHashMapIterator));
}

void IdentityHashMap$IdentityHashMapIterator::init$($IdentityHashMap* this$0) {
	$set(this, this$0, this$0);
	this->index = (this->this$0->size$ != 0 ? 0 : $nc(this->this$0->table)->length);
	this->expectedModCount = this->this$0->modCount;
	this->lastReturnedIndex = -1;
	$set(this, traversalTable, this->this$0->table);
}

bool IdentityHashMap$IdentityHashMapIterator::hasNext() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, tab, this->traversalTable);
	for (int32_t i = this->index; i < $nc(tab)->length; i += 2) {
		$var($Object0, key, tab->get(i));
		if (key != nullptr) {
			this->index = i;
			return this->indexValid = true;
		}
	}
	this->index = $nc(tab)->length;
	return false;
}

int32_t IdentityHashMap$IdentityHashMapIterator::nextIndex() {
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	if (!this->indexValid && !hasNext()) {
		$throwNew($NoSuchElementException);
	}
	this->indexValid = false;
	this->lastReturnedIndex = this->index;
	this->index += 2;
	return this->lastReturnedIndex;
}

void IdentityHashMap$IdentityHashMapIterator::remove() {
	$useLocalCurrentObjectStackCache();
	if (this->lastReturnedIndex == -1) {
		$throwNew($IllegalStateException);
	}
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	this->expectedModCount = ++this->this$0->modCount;
	int32_t deletedSlot = this->lastReturnedIndex;
	this->lastReturnedIndex = -1;
	this->index = deletedSlot;
	this->indexValid = false;
	$var($ObjectArray, tab, this->traversalTable);
	int32_t len = $nc(tab)->length;
	int32_t d = deletedSlot;
	$var($Object0, key, tab->get(d));
	tab->set(d, nullptr);
	tab->set(d + 1, nullptr);
	if (tab != this->this$0->table) {
		this->this$0->remove(key);
		this->expectedModCount = this->this$0->modCount;
		return;
	}
	--this->this$0->size$;
	$var($Object, item, nullptr);
	for (int32_t i = $IdentityHashMap::nextKeyIndex(d, len); ($assign(item, tab->get(i))) != nullptr; i = $IdentityHashMap::nextKeyIndex(i, len)) {
		int32_t r = $IdentityHashMap::hash(item, len);
		if ((i < r && (r <= d || d <= i)) || (r <= d && d <= i)) {
			if (i < deletedSlot && d >= deletedSlot && this->traversalTable == this->this$0->table) {
				int32_t remaining = len - deletedSlot;
				$var($ObjectArray, newTable, $new($ObjectArray, remaining));
				$System::arraycopy(tab, deletedSlot, newTable, 0, remaining);
				$set(this, traversalTable, newTable);
				this->index = 0;
			}
			tab->set(d, item);
			tab->set(d + 1, tab->get(i + 1));
			tab->set(i, nullptr);
			tab->set(i + 1, nullptr);
			d = i;
		}
	}
}

IdentityHashMap$IdentityHashMapIterator::IdentityHashMap$IdentityHashMapIterator() {
}

$Class* IdentityHashMap$IdentityHashMapIterator::load$($String* name, bool initialize) {
	$loadClass(IdentityHashMap$IdentityHashMapIterator, name, initialize, &_IdentityHashMap$IdentityHashMapIterator_ClassInfo_, allocate$IdentityHashMap$IdentityHashMapIterator);
	return class$;
}

$Class* IdentityHashMap$IdentityHashMapIterator::class$ = nullptr;

	} // util
} // java