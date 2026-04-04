#include <java/util/concurrent/ConcurrentHashMap$KeyIterator.h>
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
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$BaseIterator = ::java::util::concurrent::ConcurrentHashMap$BaseIterator;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$Traverser = ::java::util::concurrent::ConcurrentHashMap$Traverser;

namespace java {
	namespace util {
		namespace concurrent {

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
	$useLocalObjectStack();
	$var($ConcurrentHashMap$Node, p, nullptr);
	if (($assign(p, this->$ConcurrentHashMap$Traverser::next)) == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, k, $nc(p)->key);
	$set(this, lastReturned, p);
	advance();
	return k;
}

$Object* ConcurrentHashMap$KeyIterator::nextElement() {
	return next();
}

ConcurrentHashMap$KeyIterator::ConcurrentHashMap$KeyIterator() {
}

$Class* ConcurrentHashMap$KeyIterator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hasMoreElements", "()Z", nullptr, $PUBLIC | $FINAL},
		{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "([Ljava/util/concurrent/ConcurrentHashMap$Node;IIILjava/util/concurrent/ConcurrentHashMap;)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;IIILjava/util/concurrent/ConcurrentHashMap<TK;TV;>;)V", 0, $method(ConcurrentHashMap$KeyIterator, init$, void, $ConcurrentHashMap$NodeArray*, int32_t, int32_t, int32_t, $ConcurrentHashMap*)},
		{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$KeyIterator, next, $Object*)},
		{"nextElement", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$KeyIterator, nextElement, $Object*)},
		{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentHashMap$KeyIterator", "java.util.concurrent.ConcurrentHashMap", "KeyIterator", $STATIC | $FINAL},
		{"java.util.concurrent.ConcurrentHashMap$BaseIterator", "java.util.concurrent.ConcurrentHashMap", "BaseIterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentHashMap$KeyIterator",
		"java.util.concurrent.ConcurrentHashMap$BaseIterator",
		"java.util.Iterator,java.util.Enumeration",
		nullptr,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BaseIterator<TK;TV;>;Ljava/util/Iterator<TK;>;Ljava/util/Enumeration<TK;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentHashMap"
	};
	$loadClass(ConcurrentHashMap$KeyIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConcurrentHashMap$KeyIterator));
	});
	return class$;
}

$Class* ConcurrentHashMap$KeyIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java