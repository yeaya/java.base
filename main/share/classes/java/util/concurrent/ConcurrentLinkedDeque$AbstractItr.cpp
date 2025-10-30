#include <java/util/concurrent/ConcurrentLinkedDeque$AbstractItr.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/concurrent/ConcurrentLinkedDeque$Node.h>
#include <java/util/concurrent/ConcurrentLinkedDeque.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ConcurrentLinkedDeque = ::java::util::concurrent::ConcurrentLinkedDeque;
using $ConcurrentLinkedDeque$Node = ::java::util::concurrent::ConcurrentLinkedDeque$Node;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentLinkedDeque$AbstractItr_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentLinkedDeque;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentLinkedDeque$AbstractItr, this$0)},
	{"nextNode", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $PRIVATE, $field(ConcurrentLinkedDeque$AbstractItr, nextNode$)},
	{"nextItem", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(ConcurrentLinkedDeque$AbstractItr, nextItem)},
	{"lastRet", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $PRIVATE, $field(ConcurrentLinkedDeque$AbstractItr, lastRet)},
	{}
};

$MethodInfo _ConcurrentLinkedDeque$AbstractItr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentLinkedDeque;)V", nullptr, 0, $method(static_cast<void(ConcurrentLinkedDeque$AbstractItr::*)($ConcurrentLinkedDeque*)>(&ConcurrentLinkedDeque$AbstractItr::init$))},
	{"advance", "()V", nullptr, $PRIVATE, $method(static_cast<void(ConcurrentLinkedDeque$AbstractItr::*)()>(&ConcurrentLinkedDeque$AbstractItr::advance))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"nextNode", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $ABSTRACT},
	{"remove", "()V", nullptr, $PUBLIC},
	{"startNode", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $ABSTRACT},
	{}
};

$InnerClassInfo _ConcurrentLinkedDeque$AbstractItr_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentLinkedDeque$AbstractItr", "java.util.concurrent.ConcurrentLinkedDeque", "AbstractItr", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentLinkedDeque$AbstractItr_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.ConcurrentLinkedDeque$AbstractItr",
	"java.lang.Object",
	"java.util.Iterator",
	_ConcurrentLinkedDeque$AbstractItr_FieldInfo_,
	_ConcurrentLinkedDeque$AbstractItr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_ConcurrentLinkedDeque$AbstractItr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentLinkedDeque"
};

$Object* allocate$ConcurrentLinkedDeque$AbstractItr($Class* clazz) {
	return $of($alloc(ConcurrentLinkedDeque$AbstractItr));
}

void ConcurrentLinkedDeque$AbstractItr::init$($ConcurrentLinkedDeque* this$0) {
	$set(this, this$0, this$0);
	advance();
}

void ConcurrentLinkedDeque$AbstractItr::advance() {
	$useLocalCurrentObjectStackCache();
	$set(this, lastRet, this->nextNode$);
	$var($ConcurrentLinkedDeque$Node, p, (this->nextNode$ == nullptr) ? startNode() : nextNode(this->nextNode$));
	for (;; $assign(p, nextNode(p))) {
		if (p == nullptr) {
			$set(this, nextNode$, nullptr);
			$set(this, nextItem, nullptr);
			break;
		}
		$var($Object, item, nullptr);
		if (($assign(item, $nc(p)->item)) != nullptr) {
			$set(this, nextNode$, p);
			$set(this, nextItem, item);
			break;
		}
	}
}

bool ConcurrentLinkedDeque$AbstractItr::hasNext() {
	return this->nextItem != nullptr;
}

$Object* ConcurrentLinkedDeque$AbstractItr::next() {
	$var($Object, item, this->nextItem);
	if (item == nullptr) {
		$throwNew($NoSuchElementException);
	}
	advance();
	return $of(item);
}

void ConcurrentLinkedDeque$AbstractItr::remove() {
	$var($ConcurrentLinkedDeque$Node, l, this->lastRet);
	if (l == nullptr) {
		$throwNew($IllegalStateException);
	}
	$set($nc(l), item, nullptr);
	this->this$0->unlink(l);
	$set(this, lastRet, nullptr);
}

ConcurrentLinkedDeque$AbstractItr::ConcurrentLinkedDeque$AbstractItr() {
}

$Class* ConcurrentLinkedDeque$AbstractItr::load$($String* name, bool initialize) {
	$loadClass(ConcurrentLinkedDeque$AbstractItr, name, initialize, &_ConcurrentLinkedDeque$AbstractItr_ClassInfo_, allocate$ConcurrentLinkedDeque$AbstractItr);
	return class$;
}

$Class* ConcurrentLinkedDeque$AbstractItr::class$ = nullptr;

		} // concurrent
	} // util
} // java