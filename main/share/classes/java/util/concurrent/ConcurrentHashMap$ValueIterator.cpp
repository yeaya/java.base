#include <java/util/concurrent/ConcurrentHashMap$ValueIterator.h>

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

$MethodInfo _ConcurrentHashMap$ValueIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hasMoreElements", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([Ljava/util/concurrent/ConcurrentHashMap$Node;IIILjava/util/concurrent/ConcurrentHashMap;)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;IIILjava/util/concurrent/ConcurrentHashMap<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$ValueIterator::*)($ConcurrentHashMap$NodeArray*,int32_t,int32_t,int32_t,$ConcurrentHashMap*)>(&ConcurrentHashMap$ValueIterator::init$))},
	{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL},
	{"nextElement", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL},
	{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentHashMap$ValueIterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$ValueIterator", "java.util.concurrent.ConcurrentHashMap", "ValueIterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BaseIterator", "java.util.concurrent.ConcurrentHashMap", "BaseIterator", $STATIC},
	{}
};

$ClassInfo _ConcurrentHashMap$ValueIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$ValueIterator",
	"java.util.concurrent.ConcurrentHashMap$BaseIterator",
	"java.util.Iterator,java.util.Enumeration",
	nullptr,
	_ConcurrentHashMap$ValueIterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BaseIterator<TK;TV;>;Ljava/util/Iterator<TV;>;Ljava/util/Enumeration<TV;>;",
	nullptr,
	_ConcurrentHashMap$ValueIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$ValueIterator($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$ValueIterator));
}

bool ConcurrentHashMap$ValueIterator::hasNext() {
	 return this->$ConcurrentHashMap$BaseIterator::hasNext();
}

bool ConcurrentHashMap$ValueIterator::hasMoreElements() {
	 return this->$ConcurrentHashMap$BaseIterator::hasMoreElements();
}

void ConcurrentHashMap$ValueIterator::remove() {
	this->$ConcurrentHashMap$BaseIterator::remove();
}

int32_t ConcurrentHashMap$ValueIterator::hashCode() {
	 return this->$ConcurrentHashMap$BaseIterator::hashCode();
}

bool ConcurrentHashMap$ValueIterator::equals(Object$* obj) {
	 return this->$ConcurrentHashMap$BaseIterator::equals(obj);
}

$Object* ConcurrentHashMap$ValueIterator::clone() {
	 return this->$ConcurrentHashMap$BaseIterator::clone();
}

$String* ConcurrentHashMap$ValueIterator::toString() {
	 return this->$ConcurrentHashMap$BaseIterator::toString();
}

void ConcurrentHashMap$ValueIterator::finalize() {
	this->$ConcurrentHashMap$BaseIterator::finalize();
}

void ConcurrentHashMap$ValueIterator::init$($ConcurrentHashMap$NodeArray* tab, int32_t size, int32_t index, int32_t limit, $ConcurrentHashMap* map) {
	$ConcurrentHashMap$BaseIterator::init$(tab, size, index, limit, map);
}

$Object* ConcurrentHashMap$ValueIterator::next() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$Node, p, nullptr);
	if (($assign(p, this->$ConcurrentHashMap$Traverser::next)) == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, v, $nc(p)->val);
	$set(this, lastReturned, p);
	advance();
	return $of(v);
}

$Object* ConcurrentHashMap$ValueIterator::nextElement() {
	return $of(next());
}

ConcurrentHashMap$ValueIterator::ConcurrentHashMap$ValueIterator() {
}

$Class* ConcurrentHashMap$ValueIterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$ValueIterator, name, initialize, &_ConcurrentHashMap$ValueIterator_ClassInfo_, allocate$ConcurrentHashMap$ValueIterator);
	return class$;
}

$Class* ConcurrentHashMap$ValueIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java