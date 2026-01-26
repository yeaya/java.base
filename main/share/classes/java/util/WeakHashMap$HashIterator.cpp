#include <java/util/WeakHashMap$HashIterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/ref/Reference.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/WeakHashMap$Entry.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $WeakHashMap$EntryArray = $Array<::java::util::WeakHashMap$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $WeakHashMap = ::java::util::WeakHashMap;
using $WeakHashMap$Entry = ::java::util::WeakHashMap$Entry;

namespace java {
	namespace util {

$FieldInfo _WeakHashMap$HashIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/WeakHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(WeakHashMap$HashIterator, this$0)},
	{"index", "I", nullptr, $PRIVATE, $field(WeakHashMap$HashIterator, index)},
	{"entry", "Ljava/util/WeakHashMap$Entry;", "Ljava/util/WeakHashMap$Entry<TK;TV;>;", $PRIVATE, $field(WeakHashMap$HashIterator, entry)},
	{"lastReturned", "Ljava/util/WeakHashMap$Entry;", "Ljava/util/WeakHashMap$Entry<TK;TV;>;", $PRIVATE, $field(WeakHashMap$HashIterator, lastReturned)},
	{"expectedModCount", "I", nullptr, $PRIVATE, $field(WeakHashMap$HashIterator, expectedModCount)},
	{"nextKey", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(WeakHashMap$HashIterator, nextKey)},
	{"currentKey", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(WeakHashMap$HashIterator, currentKey)},
	{}
};

$MethodInfo _WeakHashMap$HashIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/WeakHashMap;)V", nullptr, 0, $method(WeakHashMap$HashIterator, init$, void, $WeakHashMap*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(WeakHashMap$HashIterator, hasNext, bool)},
	{"nextEntry", "()Ljava/util/WeakHashMap$Entry;", "()Ljava/util/WeakHashMap$Entry<TK;TV;>;", $PROTECTED, $virtualMethod(WeakHashMap$HashIterator, nextEntry, $WeakHashMap$Entry*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(WeakHashMap$HashIterator, remove, void)},
	{}
};

$InnerClassInfo _WeakHashMap$HashIterator_InnerClassesInfo_[] = {
	{"java.util.WeakHashMap$HashIterator", "java.util.WeakHashMap", "HashIterator", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _WeakHashMap$HashIterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.WeakHashMap$HashIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_WeakHashMap$HashIterator_FieldInfo_,
	_WeakHashMap$HashIterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
	nullptr,
	_WeakHashMap$HashIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.WeakHashMap"
};

$Object* allocate$WeakHashMap$HashIterator($Class* clazz) {
	return $of($alloc(WeakHashMap$HashIterator));
}

void WeakHashMap$HashIterator::init$($WeakHashMap* this$0) {
	$set(this, this$0, this$0);
	this->expectedModCount = this->this$0->modCount;
	this->index = this$0->isEmpty() ? 0 : $nc(this$0->table)->length;
}

bool WeakHashMap$HashIterator::hasNext() {
	$useLocalCurrentObjectStackCache();
	$var($WeakHashMap$EntryArray, t, this->this$0->table);
	while (this->nextKey == nullptr) {
		$var($WeakHashMap$Entry, e, this->entry);
		int32_t i = this->index;
		while (e == nullptr && i > 0) {
			$assign(e, $nc(t)->get(--i));
		}
		$set(this, entry, e);
		this->index = i;
		if (e == nullptr) {
			$set(this, currentKey, nullptr);
			return false;
		}
		$set(this, nextKey, $nc(e)->get());
		if (this->nextKey == nullptr) {
			$set(this, entry, $nc(this->entry)->next);
		}
	}
	return true;
}

$WeakHashMap$Entry* WeakHashMap$HashIterator::nextEntry() {
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	if (this->nextKey == nullptr && !hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$set(this, lastReturned, this->entry);
	$set(this, entry, $nc(this->entry)->next);
	$set(this, currentKey, this->nextKey);
	$set(this, nextKey, nullptr);
	return this->lastReturned;
}

void WeakHashMap$HashIterator::remove() {
	if (this->lastReturned == nullptr) {
		$throwNew($IllegalStateException);
	}
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	this->this$0->remove(this->currentKey);
	this->expectedModCount = this->this$0->modCount;
	$set(this, lastReturned, nullptr);
	$set(this, currentKey, nullptr);
}

WeakHashMap$HashIterator::WeakHashMap$HashIterator() {
}

$Class* WeakHashMap$HashIterator::load$($String* name, bool initialize) {
	$loadClass(WeakHashMap$HashIterator, name, initialize, &_WeakHashMap$HashIterator_ClassInfo_, allocate$WeakHashMap$HashIterator);
	return class$;
}

$Class* WeakHashMap$HashIterator::class$ = nullptr;

	} // util
} // java