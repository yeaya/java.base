#include <java/util/concurrent/ConcurrentHashMap$KeyIterator.h>

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
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap$Traverser.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$BaseIterator = ::java::util::concurrent::ConcurrentHashMap$BaseIterator;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$Traverser = ::java::util::concurrent::ConcurrentHashMap$Traverser;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ConcurrentHashMap$KeyIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hasMoreElements", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([Ljava/util/concurrent/ConcurrentHashMap$Node;IIILjava/util/concurrent/ConcurrentHashMap;)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;IIILjava/util/concurrent/ConcurrentHashMap<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$KeyIterator::*)($ConcurrentHashMap$NodeArray*,int32_t,int32_t,int32_t,$ConcurrentHashMap*)>(&ConcurrentHashMap$KeyIterator::init$))},
	{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $FINAL},
	{"nextElement", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $FINAL},
	{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentHashMap$KeyIterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$KeyIterator", "java.util.concurrent.ConcurrentHashMap", "KeyIterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BaseIterator", "java.util.concurrent.ConcurrentHashMap", "BaseIterator", $STATIC},
	{}
};

$ClassInfo _ConcurrentHashMap$KeyIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$KeyIterator",
	"java.util.concurrent.ConcurrentHashMap$BaseIterator",
	"java.util.Iterator,java.util.Enumeration",
	nullptr,
	_ConcurrentHashMap$KeyIterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BaseIterator<TK;TV;>;Ljava/util/Iterator<TK;>;Ljava/util/Enumeration<TK;>;",
	nullptr,
	_ConcurrentHashMap$KeyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$KeyIterator($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$KeyIterator));
}

bool ConcurrentHashMap$KeyIterator::hasNext() {
	 return this->$ConcurrentHashMap$BaseIterator::hasNext();
}

bool ConcurrentHashMap$KeyIterator::hasMoreElements() {
	 return this->$ConcurrentHashMap$BaseIterator::hasMoreElements();
}

void ConcurrentHashMap$KeyIterator::remove() {
	this->$ConcurrentHashMap$BaseIterator::remove();
}

int32_t ConcurrentHashMap$KeyIterator::hashCode() {
	 return this->$ConcurrentHashMap$BaseIterator::hashCode();
}

bool ConcurrentHashMap$KeyIterator::equals(Object$* obj) {
	 return this->$ConcurrentHashMap$BaseIterator::equals(obj);
}

$Object* ConcurrentHashMap$KeyIterator::clone() {
	 return this->$ConcurrentHashMap$BaseIterator::clone();
}

$String* ConcurrentHashMap$KeyIterator::toString() {
	 return this->$ConcurrentHashMap$BaseIterator::toString();
}

void ConcurrentHashMap$KeyIterator::finalize() {
	this->$ConcurrentHashMap$BaseIterator::finalize();
}

void ConcurrentHashMap$KeyIterator::init$($ConcurrentHashMap$NodeArray* tab, int32_t size, int32_t index, int32_t limit, $ConcurrentHashMap* map) {
	$ConcurrentHashMap$BaseIterator::init$(tab, size, index, limit, map);
}

$Object* ConcurrentHashMap$KeyIterator::next() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$Node, p, nullptr);
	if (($assign(p, this->$ConcurrentHashMap$Traverser::next)) == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, k, $nc(p)->key);
	$set(this, lastReturned, p);
	advance();
	return $of(k);
}

$Object* ConcurrentHashMap$KeyIterator::nextElement() {
	return $of(next());
}

ConcurrentHashMap$KeyIterator::ConcurrentHashMap$KeyIterator() {
}

$Class* ConcurrentHashMap$KeyIterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$KeyIterator, name, initialize, &_ConcurrentHashMap$KeyIterator_ClassInfo_, allocate$ConcurrentHashMap$KeyIterator);
	return class$;
}

$Class* ConcurrentHashMap$KeyIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java