#include <java/util/concurrent/ConcurrentHashMap$EntrySpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentHashMap$MapEntry.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap$Traverser.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef CONCURRENT
#undef DISTINCT
#undef NONNULL

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$MapEntry = ::java::util::concurrent::ConcurrentHashMap$MapEntry;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$Traverser = ::java::util::concurrent::ConcurrentHashMap$Traverser;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$EntrySpliterator_FieldInfo_[] = {
	{"map", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;", $FINAL, $field(ConcurrentHashMap$EntrySpliterator, map)},
	{"est", "J", nullptr, 0, $field(ConcurrentHashMap$EntrySpliterator, est)},
	{}
};

$MethodInfo _ConcurrentHashMap$EntrySpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([Ljava/util/concurrent/ConcurrentHashMap$Node;IIIJLjava/util/concurrent/ConcurrentHashMap;)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;IIIJLjava/util/concurrent/ConcurrentHashMap<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$EntrySpliterator::*)($ConcurrentHashMap$NodeArray*,int32_t,int32_t,int32_t,int64_t,$ConcurrentHashMap*)>(&ConcurrentHashMap$EntrySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/concurrent/ConcurrentHashMap$EntrySpliterator;", "()Ljava/util/concurrent/ConcurrentHashMap$EntrySpliterator<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentHashMap$EntrySpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$EntrySpliterator", "java.util.concurrent.ConcurrentHashMap", "EntrySpliterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$Traverser", "java.util.concurrent.ConcurrentHashMap", "Traverser", $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$EntrySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$EntrySpliterator",
	"java.util.concurrent.ConcurrentHashMap$Traverser",
	"java.util.Spliterator",
	_ConcurrentHashMap$EntrySpliterator_FieldInfo_,
	_ConcurrentHashMap$EntrySpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$Traverser<TK;TV;>;Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_ConcurrentHashMap$EntrySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$EntrySpliterator($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$EntrySpliterator));
}

int32_t ConcurrentHashMap$EntrySpliterator::hashCode() {
	 return this->$ConcurrentHashMap$Traverser::hashCode();
}

bool ConcurrentHashMap$EntrySpliterator::equals(Object$* obj) {
	 return this->$ConcurrentHashMap$Traverser::equals(obj);
}

$Object* ConcurrentHashMap$EntrySpliterator::clone() {
	 return this->$ConcurrentHashMap$Traverser::clone();
}

$String* ConcurrentHashMap$EntrySpliterator::toString() {
	 return this->$ConcurrentHashMap$Traverser::toString();
}

void ConcurrentHashMap$EntrySpliterator::finalize() {
	this->$ConcurrentHashMap$Traverser::finalize();
}

void ConcurrentHashMap$EntrySpliterator::init$($ConcurrentHashMap$NodeArray* tab, int32_t size, int32_t index, int32_t limit, int64_t est, $ConcurrentHashMap* map) {
	$ConcurrentHashMap$Traverser::init$(tab, size, index, limit);
	$set(this, map, map);
	this->est = est;
}

$Spliterator* ConcurrentHashMap$EntrySpliterator::trySplit() {
	int32_t i = 0;
	int32_t f = 0;
	int32_t h = 0;
	int32_t var$0 = (h = (int32_t)((uint32_t)((i = this->baseIndex) + (f = this->baseLimit)) >> 1));
	return (var$0 <= i ? (ConcurrentHashMap$EntrySpliterator*)nullptr : $new(ConcurrentHashMap$EntrySpliterator, this->tab, this->baseSize, this->baseLimit = h, f, $usrAssign(this->est, 1), this->map));
}

void ConcurrentHashMap$EntrySpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	{
		$var($ConcurrentHashMap$Node, p, nullptr);
		for (; ($assign(p, advance())) != nullptr;) {
			$nc(action)->accept($$new($ConcurrentHashMap$MapEntry, $nc(p)->key, p->val, this->map));
		}
	}
}

bool ConcurrentHashMap$EntrySpliterator::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ConcurrentHashMap$Node, p, nullptr);
	if (($assign(p, advance())) == nullptr) {
		return false;
	}
	$nc(action)->accept($$new($ConcurrentHashMap$MapEntry, $nc(p)->key, p->val, this->map));
	return true;
}

int64_t ConcurrentHashMap$EntrySpliterator::estimateSize() {
	return this->est;
}

int32_t ConcurrentHashMap$EntrySpliterator::characteristics() {
	return ($Spliterator::DISTINCT | $Spliterator::CONCURRENT) | $Spliterator::NONNULL;
}

ConcurrentHashMap$EntrySpliterator::ConcurrentHashMap$EntrySpliterator() {
}

$Class* ConcurrentHashMap$EntrySpliterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$EntrySpliterator, name, initialize, &_ConcurrentHashMap$EntrySpliterator_ClassInfo_, allocate$ConcurrentHashMap$EntrySpliterator);
	return class$;
}

$Class* ConcurrentHashMap$EntrySpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java