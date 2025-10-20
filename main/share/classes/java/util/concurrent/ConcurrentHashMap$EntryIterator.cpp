#include <java/util/concurrent/ConcurrentHashMap$EntryIterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/concurrent/ConcurrentHashMap$BaseIterator.h>
#include <java/util/concurrent/ConcurrentHashMap$MapEntry.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap$Traverser.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$BaseIterator = ::java::util::concurrent::ConcurrentHashMap$BaseIterator;
using $ConcurrentHashMap$MapEntry = ::java::util::concurrent::ConcurrentHashMap$MapEntry;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$Traverser = ::java::util::concurrent::ConcurrentHashMap$Traverser;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ConcurrentHashMap$EntryIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([Ljava/util/concurrent/ConcurrentHashMap$Node;IIILjava/util/concurrent/ConcurrentHashMap;)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;IIILjava/util/concurrent/ConcurrentHashMap<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$EntryIterator::*)($ConcurrentHashMap$NodeArray*,int32_t,int32_t,int32_t,$ConcurrentHashMap*)>(&ConcurrentHashMap$EntryIterator::init$))},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $FINAL},
	{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentHashMap$EntryIterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$EntryIterator", "java.util.concurrent.ConcurrentHashMap", "EntryIterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BaseIterator", "java.util.concurrent.ConcurrentHashMap", "BaseIterator", $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$EntryIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$EntryIterator",
	"java.util.concurrent.ConcurrentHashMap$BaseIterator",
	"java.util.Iterator",
	nullptr,
	_ConcurrentHashMap$EntryIterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BaseIterator<TK;TV;>;Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_ConcurrentHashMap$EntryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$EntryIterator($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$EntryIterator));
}

bool ConcurrentHashMap$EntryIterator::hasNext() {
	 return this->$ConcurrentHashMap$BaseIterator::hasNext();
}

void ConcurrentHashMap$EntryIterator::remove() {
	this->$ConcurrentHashMap$BaseIterator::remove();
}

int32_t ConcurrentHashMap$EntryIterator::hashCode() {
	 return this->$ConcurrentHashMap$BaseIterator::hashCode();
}

bool ConcurrentHashMap$EntryIterator::equals(Object$* obj) {
	 return this->$ConcurrentHashMap$BaseIterator::equals(obj);
}

$Object* ConcurrentHashMap$EntryIterator::clone() {
	 return this->$ConcurrentHashMap$BaseIterator::clone();
}

$String* ConcurrentHashMap$EntryIterator::toString() {
	 return this->$ConcurrentHashMap$BaseIterator::toString();
}

void ConcurrentHashMap$EntryIterator::finalize() {
	this->$ConcurrentHashMap$BaseIterator::finalize();
}

void ConcurrentHashMap$EntryIterator::init$($ConcurrentHashMap$NodeArray* tab, int32_t size, int32_t index, int32_t limit, $ConcurrentHashMap* map) {
	$ConcurrentHashMap$BaseIterator::init$(tab, size, index, limit, map);
}

$Object* ConcurrentHashMap$EntryIterator::next() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$Node, p, nullptr);
	if (($assign(p, this->$ConcurrentHashMap$Traverser::next)) == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, k, $nc(p)->key);
	$var($Object, v, p->val);
	$set(this, lastReturned, p);
	advance();
	return $of($new($ConcurrentHashMap$MapEntry, k, v, this->map));
}

ConcurrentHashMap$EntryIterator::ConcurrentHashMap$EntryIterator() {
}

$Class* ConcurrentHashMap$EntryIterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$EntryIterator, name, initialize, &_ConcurrentHashMap$EntryIterator_ClassInfo_, allocate$ConcurrentHashMap$EntryIterator);
	return class$;
}

$Class* ConcurrentHashMap$EntryIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java