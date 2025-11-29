#include <java/util/concurrent/ConcurrentSkipListMap$Iter.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentSkipListMap = ::java::util::concurrent::ConcurrentSkipListMap;
using $ConcurrentSkipListMap$Node = ::java::util::concurrent::ConcurrentSkipListMap$Node;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentSkipListMap$Iter_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentSkipListMap;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentSkipListMap$Iter, this$0)},
	{"lastReturned", "Ljava/util/concurrent/ConcurrentSkipListMap$Node;", "Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;", 0, $field(ConcurrentSkipListMap$Iter, lastReturned)},
	{"next", "Ljava/util/concurrent/ConcurrentSkipListMap$Node;", "Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;", 0, $field(ConcurrentSkipListMap$Iter, next$)},
	{"nextValue", "Ljava/lang/Object;", "TV;", 0, $field(ConcurrentSkipListMap$Iter, nextValue)},
	{}
};

$MethodInfo _ConcurrentSkipListMap$Iter_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap;)V", nullptr, 0, $method(static_cast<void(ConcurrentSkipListMap$Iter::*)($ConcurrentSkipListMap*)>(&ConcurrentSkipListMap$Iter::init$))},
	{"advance", "(Ljava/util/concurrent/ConcurrentSkipListMap$Node;)V", "(Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;)V", $FINAL, $method(static_cast<void(ConcurrentSkipListMap$Iter::*)($ConcurrentSkipListMap$Node*)>(&ConcurrentSkipListMap$Iter::advance))},
	{"hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
	{"remove", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$Iter_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$Iter", "java.util.concurrent.ConcurrentSkipListMap", "Iter", $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$Iter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.ConcurrentSkipListMap$Iter",
	"java.lang.Object",
	"java.util.Iterator",
	_ConcurrentSkipListMap$Iter_FieldInfo_,
	_ConcurrentSkipListMap$Iter_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
	nullptr,
	_ConcurrentSkipListMap$Iter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$Iter($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$Iter));
}

void ConcurrentSkipListMap$Iter::init$($ConcurrentSkipListMap* this$0) {
	$set(this, this$0, this$0);
	advance($(this$0->baseHead()));
}

bool ConcurrentSkipListMap$Iter::hasNext() {
	return this->next$ != nullptr;
}

void ConcurrentSkipListMap$Iter::advance($ConcurrentSkipListMap$Node* b$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentSkipListMap$Node, b, b$renamed);
	$var($ConcurrentSkipListMap$Node, n, nullptr);
	$var($Object, v, nullptr);
	if (($set(this, lastReturned, b)) != nullptr) {
		while (true) {
			bool var$0 = ($assign(n, $nc(b)->next)) != nullptr;
			if (!(var$0 && ($assign(v, $nc(n)->val)) == nullptr)) {
				break;
			}
			{
				$assign(b, n);
			}
		}
	}
	$set(this, nextValue, v);
	$set(this, next$, n);
}

void ConcurrentSkipListMap$Iter::remove() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentSkipListMap$Node, n, nullptr);
	$var($Object, k, nullptr);
	bool var$0 = ($assign(n, this->lastReturned)) == nullptr;
	if (var$0 || ($assign(k, $nc(n)->key)) == nullptr) {
		$throwNew($IllegalStateException);
	}
	this->this$0->remove(k);
	$set(this, lastReturned, nullptr);
}

ConcurrentSkipListMap$Iter::ConcurrentSkipListMap$Iter() {
}

$Class* ConcurrentSkipListMap$Iter::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$Iter, name, initialize, &_ConcurrentSkipListMap$Iter_ClassInfo_, allocate$ConcurrentSkipListMap$Iter);
	return class$;
}

$Class* ConcurrentSkipListMap$Iter::class$ = nullptr;

		} // concurrent
	} // util
} // java