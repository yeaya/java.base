#include <java/util/concurrent/ConcurrentHashMap$BaseIterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap$Traverser.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$Traverser = ::java::util::concurrent::ConcurrentHashMap$Traverser;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$BaseIterator_FieldInfo_[] = {
	{"map", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;", $FINAL, $field(ConcurrentHashMap$BaseIterator, map)},
	{"lastReturned", "Ljava/util/concurrent/ConcurrentHashMap$Node;", "Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", 0, $field(ConcurrentHashMap$BaseIterator, lastReturned)},
	{}
};

$MethodInfo _ConcurrentHashMap$BaseIterator_MethodInfo_[] = {
	{"<init>", "([Ljava/util/concurrent/ConcurrentHashMap$Node;IIILjava/util/concurrent/ConcurrentHashMap;)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;IIILjava/util/concurrent/ConcurrentHashMap<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$BaseIterator::*)($ConcurrentHashMap$NodeArray*,int32_t,int32_t,int32_t,$ConcurrentHashMap*)>(&ConcurrentHashMap$BaseIterator::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(ConcurrentHashMap$BaseIterator::*)()>(&ConcurrentHashMap$BaseIterator::hasMoreElements))},
	{"hasNext", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(ConcurrentHashMap$BaseIterator::*)()>(&ConcurrentHashMap$BaseIterator::hasNext))},
	{"remove", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ConcurrentHashMap$BaseIterator::*)()>(&ConcurrentHashMap$BaseIterator::remove))},
	{}
};

$InnerClassInfo _ConcurrentHashMap$BaseIterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$BaseIterator", "java.util.concurrent.ConcurrentHashMap", "BaseIterator", $STATIC},
	{"java.util.concurrent.ConcurrentHashMap$Traverser", "java.util.concurrent.ConcurrentHashMap", "Traverser", $STATIC},
	{}
};

$ClassInfo _ConcurrentHashMap$BaseIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$BaseIterator",
	"java.util.concurrent.ConcurrentHashMap$Traverser",
	nullptr,
	_ConcurrentHashMap$BaseIterator_FieldInfo_,
	_ConcurrentHashMap$BaseIterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$Traverser<TK;TV;>;",
	nullptr,
	_ConcurrentHashMap$BaseIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$BaseIterator($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$BaseIterator));
}

void ConcurrentHashMap$BaseIterator::init$($ConcurrentHashMap$NodeArray* tab, int32_t size, int32_t index, int32_t limit, $ConcurrentHashMap* map) {
	$ConcurrentHashMap$Traverser::init$(tab, size, index, limit);
	$set(this, map, map);
	advance();
}

bool ConcurrentHashMap$BaseIterator::hasNext() {
	return this->next != nullptr;
}

bool ConcurrentHashMap$BaseIterator::hasMoreElements() {
	return this->next != nullptr;
}

void ConcurrentHashMap$BaseIterator::remove() {
	$var($ConcurrentHashMap$Node, p, nullptr);
	if (($assign(p, this->lastReturned)) == nullptr) {
		$throwNew($IllegalStateException);
	}
	$set(this, lastReturned, nullptr);
	$nc(this->map)->replaceNode($nc(p)->key, nullptr, nullptr);
}

ConcurrentHashMap$BaseIterator::ConcurrentHashMap$BaseIterator() {
}

$Class* ConcurrentHashMap$BaseIterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$BaseIterator, name, initialize, &_ConcurrentHashMap$BaseIterator_ClassInfo_, allocate$ConcurrentHashMap$BaseIterator);
	return class$;
}

$Class* ConcurrentHashMap$BaseIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java