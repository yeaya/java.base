#include <java/util/LinkedHashMap$LinkedHashIterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashMap$Node.h>
#include <java/util/LinkedHashMap$Entry.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $HashMap$Node = ::java::util::HashMap$Node;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashMap$Entry = ::java::util::LinkedHashMap$Entry;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _LinkedHashMap$LinkedHashIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/LinkedHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedHashMap$LinkedHashIterator, this$0)},
	{"next", "Ljava/util/LinkedHashMap$Entry;", "Ljava/util/LinkedHashMap$Entry<TK;TV;>;", 0, $field(LinkedHashMap$LinkedHashIterator, next)},
	{"current", "Ljava/util/LinkedHashMap$Entry;", "Ljava/util/LinkedHashMap$Entry<TK;TV;>;", 0, $field(LinkedHashMap$LinkedHashIterator, current)},
	{"expectedModCount", "I", nullptr, 0, $field(LinkedHashMap$LinkedHashIterator, expectedModCount)},
	{}
};

$MethodInfo _LinkedHashMap$LinkedHashIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/LinkedHashMap;)V", nullptr, 0, $method(LinkedHashMap$LinkedHashIterator, init$, void, $LinkedHashMap*)},
	{"hasNext", "()Z", nullptr, $PUBLIC | $FINAL, $method(LinkedHashMap$LinkedHashIterator, hasNext, bool)},
	{"nextNode", "()Ljava/util/LinkedHashMap$Entry;", "()Ljava/util/LinkedHashMap$Entry<TK;TV;>;", $FINAL, $method(LinkedHashMap$LinkedHashIterator, nextNode, $LinkedHashMap$Entry*)},
	{"remove", "()V", nullptr, $PUBLIC | $FINAL, $method(LinkedHashMap$LinkedHashIterator, remove, void)},
	{}
};

$InnerClassInfo _LinkedHashMap$LinkedHashIterator_InnerClassesInfo_[] = {
	{"java.util.LinkedHashMap$LinkedHashIterator", "java.util.LinkedHashMap", "LinkedHashIterator", $ABSTRACT},
	{}
};

$ClassInfo _LinkedHashMap$LinkedHashIterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.LinkedHashMap$LinkedHashIterator",
	"java.lang.Object",
	nullptr,
	_LinkedHashMap$LinkedHashIterator_FieldInfo_,
	_LinkedHashMap$LinkedHashIterator_MethodInfo_,
	nullptr,
	nullptr,
	_LinkedHashMap$LinkedHashIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.LinkedHashMap"
};

$Object* allocate$LinkedHashMap$LinkedHashIterator($Class* clazz) {
	return $of($alloc(LinkedHashMap$LinkedHashIterator));
}

void LinkedHashMap$LinkedHashIterator::init$($LinkedHashMap* this$0) {
	$set(this, this$0, this$0);
	$set(this, next, this$0->head);
	this->expectedModCount = this$0->modCount;
	$set(this, current, nullptr);
}

bool LinkedHashMap$LinkedHashIterator::hasNext() {
	return this->next != nullptr;
}

$LinkedHashMap$Entry* LinkedHashMap$LinkedHashIterator::nextNode() {
	$var($LinkedHashMap$Entry, e, this->next);
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	if (e == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$set(this, current, e);
	$set(this, next, $nc(e)->after);
	return e;
}

void LinkedHashMap$LinkedHashIterator::remove() {
	$var($HashMap$Node, p, this->current);
	if (p == nullptr) {
		$throwNew($IllegalStateException);
	}
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	$set(this, current, nullptr);
	this->this$0->removeNode($nc(p)->hash, p->key, nullptr, false, false);
	this->expectedModCount = this->this$0->modCount;
}

LinkedHashMap$LinkedHashIterator::LinkedHashMap$LinkedHashIterator() {
}

$Class* LinkedHashMap$LinkedHashIterator::load$($String* name, bool initialize) {
	$loadClass(LinkedHashMap$LinkedHashIterator, name, initialize, &_LinkedHashMap$LinkedHashIterator_ClassInfo_, allocate$LinkedHashMap$LinkedHashIterator);
	return class$;
}

$Class* LinkedHashMap$LinkedHashIterator::class$ = nullptr;

	} // util
} // java