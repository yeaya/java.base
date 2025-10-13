#include <java/util/concurrent/ConcurrentHashMap$ValueSpliterator.h>

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
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap$Traverser.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef CONCURRENT
#undef NONNULL

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$Traverser = ::java::util::concurrent::ConcurrentHashMap$Traverser;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$ValueSpliterator_FieldInfo_[] = {
	{"est", "J", nullptr, 0, $field(ConcurrentHashMap$ValueSpliterator, est)},
	{}
};

$MethodInfo _ConcurrentHashMap$ValueSpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([Ljava/util/concurrent/ConcurrentHashMap$Node;IIIJ)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;IIIJ)V", 0, $method(static_cast<void(ConcurrentHashMap$ValueSpliterator::*)($ConcurrentHashMap$NodeArray*,int32_t,int32_t,int32_t,int64_t)>(&ConcurrentHashMap$ValueSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TV;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TV;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/concurrent/ConcurrentHashMap$ValueSpliterator;", "()Ljava/util/concurrent/ConcurrentHashMap$ValueSpliterator<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentHashMap$ValueSpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$ValueSpliterator", "java.util.concurrent.ConcurrentHashMap", "ValueSpliterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$Traverser", "java.util.concurrent.ConcurrentHashMap", "Traverser", $STATIC},
	{}
};

$ClassInfo _ConcurrentHashMap$ValueSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$ValueSpliterator",
	"java.util.concurrent.ConcurrentHashMap$Traverser",
	"java.util.Spliterator",
	_ConcurrentHashMap$ValueSpliterator_FieldInfo_,
	_ConcurrentHashMap$ValueSpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$Traverser<TK;TV;>;Ljava/util/Spliterator<TV;>;",
	nullptr,
	_ConcurrentHashMap$ValueSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$ValueSpliterator($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$ValueSpliterator));
}

int32_t ConcurrentHashMap$ValueSpliterator::hashCode() {
	 return this->$ConcurrentHashMap$Traverser::hashCode();
}

bool ConcurrentHashMap$ValueSpliterator::equals(Object$* obj) {
	 return this->$ConcurrentHashMap$Traverser::equals(obj);
}

$Object* ConcurrentHashMap$ValueSpliterator::clone() {
	 return this->$ConcurrentHashMap$Traverser::clone();
}

$String* ConcurrentHashMap$ValueSpliterator::toString() {
	 return this->$ConcurrentHashMap$Traverser::toString();
}

void ConcurrentHashMap$ValueSpliterator::finalize() {
	this->$ConcurrentHashMap$Traverser::finalize();
}

void ConcurrentHashMap$ValueSpliterator::init$($ConcurrentHashMap$NodeArray* tab, int32_t size, int32_t index, int32_t limit, int64_t est) {
	$ConcurrentHashMap$Traverser::init$(tab, size, index, limit);
	this->est = est;
}

$Spliterator* ConcurrentHashMap$ValueSpliterator::trySplit() {
	int32_t i = 0;
	int32_t f = 0;
	int32_t h = 0;
	int32_t var$0 = (h = (int32_t)((uint32_t)((i = this->baseIndex) + (f = this->baseLimit)) >> 1));
	return (var$0 <= i ? (ConcurrentHashMap$ValueSpliterator*)nullptr : $new(ConcurrentHashMap$ValueSpliterator, this->tab, this->baseSize, this->baseLimit = h, f, $usrAssign(this->est, 1)));
}

void ConcurrentHashMap$ValueSpliterator::forEachRemaining($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	{
		$var($ConcurrentHashMap$Node, p, nullptr);
		for (; ($assign(p, advance())) != nullptr;) {
			$nc(action)->accept($nc(p)->val);
		}
	}
}

bool ConcurrentHashMap$ValueSpliterator::tryAdvance($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ConcurrentHashMap$Node, p, nullptr);
	if (($assign(p, advance())) == nullptr) {
		return false;
	}
	$nc(action)->accept($nc(p)->val);
	return true;
}

int64_t ConcurrentHashMap$ValueSpliterator::estimateSize() {
	return this->est;
}

int32_t ConcurrentHashMap$ValueSpliterator::characteristics() {
	return $Spliterator::CONCURRENT | $Spliterator::NONNULL;
}

ConcurrentHashMap$ValueSpliterator::ConcurrentHashMap$ValueSpliterator() {
}

$Class* ConcurrentHashMap$ValueSpliterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$ValueSpliterator, name, initialize, &_ConcurrentHashMap$ValueSpliterator_ClassInfo_, allocate$ConcurrentHashMap$ValueSpliterator);
	return class$;
}

$Class* ConcurrentHashMap$ValueSpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java