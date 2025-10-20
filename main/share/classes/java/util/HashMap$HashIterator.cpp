#include <java/util/HashMap$HashIterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $HashMap$NodeArray = $Array<::java::util::HashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $HashMap = ::java::util::HashMap;
using $HashMap$Node = ::java::util::HashMap$Node;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _HashMap$HashIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/HashMap;", nullptr, $FINAL | $SYNTHETIC, $field(HashMap$HashIterator, this$0)},
	{"next", "Ljava/util/HashMap$Node;", "Ljava/util/HashMap$Node<TK;TV;>;", 0, $field(HashMap$HashIterator, next)},
	{"current", "Ljava/util/HashMap$Node;", "Ljava/util/HashMap$Node<TK;TV;>;", 0, $field(HashMap$HashIterator, current)},
	{"expectedModCount", "I", nullptr, 0, $field(HashMap$HashIterator, expectedModCount)},
	{"index", "I", nullptr, 0, $field(HashMap$HashIterator, index)},
	{}
};

$MethodInfo _HashMap$HashIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/HashMap;)V", nullptr, 0, $method(static_cast<void(HashMap$HashIterator::*)($HashMap*)>(&HashMap$HashIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(HashMap$HashIterator::*)()>(&HashMap$HashIterator::hasNext))},
	{"nextNode", "()Ljava/util/HashMap$Node;", "()Ljava/util/HashMap$Node<TK;TV;>;", $FINAL, $method(static_cast<$HashMap$Node*(HashMap$HashIterator::*)()>(&HashMap$HashIterator::nextNode))},
	{"remove", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(HashMap$HashIterator::*)()>(&HashMap$HashIterator::remove))},
	{}
};

$InnerClassInfo _HashMap$HashIterator_InnerClassesInfo_[] = {
	{"java.util.HashMap$HashIterator", "java.util.HashMap", "HashIterator", $ABSTRACT},
	{}
};

$ClassInfo _HashMap$HashIterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.HashMap$HashIterator",
	"java.lang.Object",
	nullptr,
	_HashMap$HashIterator_FieldInfo_,
	_HashMap$HashIterator_MethodInfo_,
	nullptr,
	nullptr,
	_HashMap$HashIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.HashMap"
};

$Object* allocate$HashMap$HashIterator($Class* clazz) {
	return $of($alloc(HashMap$HashIterator));
}

void HashMap$HashIterator::init$($HashMap* this$0) {
	$set(this, this$0, this$0);
	this->expectedModCount = this$0->modCount;
	$var($HashMap$NodeArray, t, this$0->table);
	$set(this, current, ($assignField(this, next, nullptr)));
	this->index = 0;
	if (t != nullptr && this$0->size$ > 0) {
		bool var$0 = false;
		do {
			var$0 = this->index < t->length;
		} while (var$0 && ($assignField(this, next, t->get(this->index++))) == nullptr);
	}
}

bool HashMap$HashIterator::hasNext() {
	return this->next != nullptr;
}

$HashMap$Node* HashMap$HashIterator::nextNode() {
	$useLocalCurrentObjectStackCache();
	$var($HashMap$NodeArray, t, nullptr);
	$var($HashMap$Node, e, this->next);
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	if (e == nullptr) {
		$throwNew($NoSuchElementException);
	}
	if (($assignField(this, next, $nc(($assignField(this, current, e)))->next)) == nullptr && ($assign(t, this->this$0->table)) != nullptr) {
		bool var$0 = false;
		do {
			var$0 = this->index < $nc(t)->length;
		} while (var$0 && ($assignField(this, next, t->get(this->index++))) == nullptr);
	}
	return e;
}

void HashMap$HashIterator::remove() {
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

HashMap$HashIterator::HashMap$HashIterator() {
}

$Class* HashMap$HashIterator::load$($String* name, bool initialize) {
	$loadClass(HashMap$HashIterator, name, initialize, &_HashMap$HashIterator_ClassInfo_, allocate$HashMap$HashIterator);
	return class$;
}

$Class* HashMap$HashIterator::class$ = nullptr;

	} // util
} // java