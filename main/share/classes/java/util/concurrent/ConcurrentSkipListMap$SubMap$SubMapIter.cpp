#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapIter.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap$SubMap.h>
#include <java/util/concurrent/ConcurrentSkipListMap.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentSkipListMap = ::java::util::concurrent::ConcurrentSkipListMap;
using $ConcurrentSkipListMap$Node = ::java::util::concurrent::ConcurrentSkipListMap$Node;
using $ConcurrentSkipListMap$SubMap = ::java::util::concurrent::ConcurrentSkipListMap$SubMap;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentSkipListMap$SubMap$SubMapIter_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentSkipListMap$SubMap;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentSkipListMap$SubMap$SubMapIter, this$0)},
	{"lastReturned", "Ljava/util/concurrent/ConcurrentSkipListMap$Node;", "Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;", 0, $field(ConcurrentSkipListMap$SubMap$SubMapIter, lastReturned)},
	{"next", "Ljava/util/concurrent/ConcurrentSkipListMap$Node;", "Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;", 0, $field(ConcurrentSkipListMap$SubMap$SubMapIter, next$)},
	{"nextValue", "Ljava/lang/Object;", "TV;", 0, $field(ConcurrentSkipListMap$SubMap$SubMapIter, nextValue)},
	{}
};

$MethodInfo _ConcurrentSkipListMap$SubMap$SubMapIter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap$SubMap;)V", nullptr, 0, $method(ConcurrentSkipListMap$SubMap$SubMapIter, init$, void, $ConcurrentSkipListMap$SubMap*)},
	{"advance", "()V", nullptr, $FINAL, $method(ConcurrentSkipListMap$SubMap$SubMapIter, advance, void)},
	{"ascend", "()V", nullptr, $PRIVATE, $method(ConcurrentSkipListMap$SubMap$SubMapIter, ascend, void)},
	{"descend", "()V", nullptr, $PRIVATE, $method(ConcurrentSkipListMap$SubMap$SubMapIter, descend, void)},
	{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(ConcurrentSkipListMap$SubMap$SubMapIter, estimateSize, int64_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$SubMap$SubMapIter, forEachRemaining, void, $Consumer*)},
	{"hasNext", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConcurrentSkipListMap$SubMap$SubMapIter, hasNext, bool)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ConcurrentSkipListMap$SubMap$SubMapIter, remove, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$SubMap$SubMapIter, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$SubMap$SubMapIter, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$SubMap$SubMapIter_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$SubMap", "java.util.concurrent.ConcurrentSkipListMap", "SubMap", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter", "java.util.concurrent.ConcurrentSkipListMap$SubMap", "SubMapIter", $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$SubMap$SubMapIter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter",
	"java.lang.Object",
	"java.util.Iterator,java.util.Spliterator",
	_ConcurrentSkipListMap$SubMap$SubMapIter_FieldInfo_,
	_ConcurrentSkipListMap$SubMap$SubMapIter_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_ConcurrentSkipListMap$SubMap$SubMapIter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$SubMap$SubMapIter($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$SubMap$SubMapIter));
}

int32_t ConcurrentSkipListMap$SubMap$SubMapIter::hashCode() {
	 return this->$Iterator::hashCode();
}

bool ConcurrentSkipListMap$SubMap$SubMapIter::equals(Object$* obj) {
	 return this->$Iterator::equals(obj);
}

$Object* ConcurrentSkipListMap$SubMap$SubMapIter::clone() {
	 return this->$Iterator::clone();
}

$String* ConcurrentSkipListMap$SubMap$SubMapIter::toString() {
	 return this->$Iterator::toString();
}

void ConcurrentSkipListMap$SubMap$SubMapIter::finalize() {
	this->$Iterator::finalize();
}

void ConcurrentSkipListMap$SubMap$SubMapIter::init$($ConcurrentSkipListMap$SubMap* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$VarHandle::acquireFence();
	$var($Comparator, cmp, $nc(this$0->m)->comparator$);
	for (;;) {
		$set(this, next$, this$0->isDescending ? this$0->hiNode(cmp) : this$0->loNode(cmp));
		if (this->next$ == nullptr) {
			break;
		}
		$var($Object, x, $nc(this->next$)->val);
		if (x != nullptr) {
			if (!this$0->inBounds($nc(this->next$)->key, cmp)) {
				$set(this, next$, nullptr);
			} else {
				$set(this, nextValue, x);
			}
			break;
		}
	}
}

bool ConcurrentSkipListMap$SubMap$SubMapIter::hasNext() {
	return this->next$ != nullptr;
}

void ConcurrentSkipListMap$SubMap$SubMapIter::advance() {
	if (this->next$ == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$set(this, lastReturned, this->next$);
	if (this->this$0->isDescending) {
		descend();
	} else {
		ascend();
	}
}

void ConcurrentSkipListMap$SubMap$SubMapIter::ascend() {
	$useLocalCurrentObjectStackCache();
	$var($Comparator, cmp, $nc(this->this$0->m)->comparator$);
	for (;;) {
		$set(this, next$, $nc(this->next$)->next);
		if (this->next$ == nullptr) {
			break;
		}
		$var($Object, x, $nc(this->next$)->val);
		if (x != nullptr) {
			if (this->this$0->tooHigh($nc(this->next$)->key, cmp)) {
				$set(this, next$, nullptr);
			} else {
				$set(this, nextValue, x);
			}
			break;
		}
	}
}

void ConcurrentSkipListMap$SubMap$SubMapIter::descend() {
	$useLocalCurrentObjectStackCache();
	$var($Comparator, cmp, $nc(this->this$0->m)->comparator$);
	for (;;) {
		$set(this, next$, $nc(this->this$0->m)->findNear($nc(this->lastReturned)->key, 2, cmp));
		if (this->next$ == nullptr) {
			break;
		}
		$var($Object, x, $nc(this->next$)->val);
		if (x != nullptr) {
			if (this->this$0->tooLow($nc(this->next$)->key, cmp)) {
				$set(this, next$, nullptr);
			} else {
				$set(this, nextValue, x);
			}
			break;
		}
	}
}

void ConcurrentSkipListMap$SubMap$SubMapIter::remove() {
	$var($ConcurrentSkipListMap$Node, l, this->lastReturned);
	if (l == nullptr) {
		$throwNew($IllegalStateException);
	}
	$nc(this->this$0->m)->remove($nc(l)->key);
	$set(this, lastReturned, nullptr);
}

$Spliterator* ConcurrentSkipListMap$SubMap$SubMapIter::trySplit() {
	return nullptr;
}

bool ConcurrentSkipListMap$SubMap$SubMapIter::tryAdvance($Consumer* action) {
	if (hasNext()) {
		$nc(action)->accept($(next()));
		return true;
	}
	return false;
}

void ConcurrentSkipListMap$SubMap$SubMapIter::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	while (hasNext()) {
		$nc(action)->accept($(next()));
	}
}

int64_t ConcurrentSkipListMap$SubMap$SubMapIter::estimateSize() {
	return $Long::MAX_VALUE;
}

ConcurrentSkipListMap$SubMap$SubMapIter::ConcurrentSkipListMap$SubMap$SubMapIter() {
}

$Class* ConcurrentSkipListMap$SubMap$SubMapIter::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$SubMap$SubMapIter, name, initialize, &_ConcurrentSkipListMap$SubMap$SubMapIter_ClassInfo_, allocate$ConcurrentSkipListMap$SubMap$SubMapIter);
	return class$;
}

$Class* ConcurrentSkipListMap$SubMap$SubMapIter::class$ = nullptr;

		} // concurrent
	} // util
} // java