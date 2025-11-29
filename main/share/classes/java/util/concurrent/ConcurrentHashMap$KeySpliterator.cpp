#include <java/util/concurrent/ConcurrentHashMap$KeySpliterator.h>

#include <java/util/Spliterator.h>
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
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$Traverser = ::java::util::concurrent::ConcurrentHashMap$Traverser;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$KeySpliterator_FieldInfo_[] = {
	{"est", "J", nullptr, 0, $field(ConcurrentHashMap$KeySpliterator, est)},
	{}
};

$MethodInfo _ConcurrentHashMap$KeySpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([Ljava/util/concurrent/ConcurrentHashMap$Node;IIIJ)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;IIIJ)V", 0, $method(static_cast<void(ConcurrentHashMap$KeySpliterator::*)($ConcurrentHashMap$NodeArray*,int32_t,int32_t,int32_t,int64_t)>(&ConcurrentHashMap$KeySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TK;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TK;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/concurrent/ConcurrentHashMap$KeySpliterator;", "()Ljava/util/concurrent/ConcurrentHashMap$KeySpliterator<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentHashMap$KeySpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$KeySpliterator", "java.util.concurrent.ConcurrentHashMap", "KeySpliterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$Traverser", "java.util.concurrent.ConcurrentHashMap", "Traverser", $STATIC},
	{}
};

$ClassInfo _ConcurrentHashMap$KeySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$KeySpliterator",
	"java.util.concurrent.ConcurrentHashMap$Traverser",
	"java.util.Spliterator",
	_ConcurrentHashMap$KeySpliterator_FieldInfo_,
	_ConcurrentHashMap$KeySpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$Traverser<TK;TV;>;Ljava/util/Spliterator<TK;>;",
	nullptr,
	_ConcurrentHashMap$KeySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$KeySpliterator($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$KeySpliterator));
}

int32_t ConcurrentHashMap$KeySpliterator::hashCode() {
	 return this->$ConcurrentHashMap$Traverser::hashCode();
}

bool ConcurrentHashMap$KeySpliterator::equals(Object$* obj) {
	 return this->$ConcurrentHashMap$Traverser::equals(obj);
}

$Object* ConcurrentHashMap$KeySpliterator::clone() {
	 return this->$ConcurrentHashMap$Traverser::clone();
}

$String* ConcurrentHashMap$KeySpliterator::toString() {
	 return this->$ConcurrentHashMap$Traverser::toString();
}

void ConcurrentHashMap$KeySpliterator::finalize() {
	this->$ConcurrentHashMap$Traverser::finalize();
}

void ConcurrentHashMap$KeySpliterator::init$($ConcurrentHashMap$NodeArray* tab, int32_t size, int32_t index, int32_t limit, int64_t est) {
	$ConcurrentHashMap$Traverser::init$(tab, size, index, limit);
	this->est = est;
}

$Spliterator* ConcurrentHashMap$KeySpliterator::trySplit() {
	int32_t i = 0;
	int32_t f = 0;
	int32_t h = 0;
	int32_t var$0 = (h = (int32_t)((uint32_t)((i = this->baseIndex) + (f = this->baseLimit)) >> 1));
	return (var$0 <= i ? (ConcurrentHashMap$KeySpliterator*)nullptr : $new(ConcurrentHashMap$KeySpliterator, this->tab, this->baseSize, this->baseLimit = h, f, $usrAssign(this->est, 1)));
}

void ConcurrentHashMap$KeySpliterator::forEachRemaining($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	{
		$var($ConcurrentHashMap$Node, p, nullptr);
		for (; ($assign(p, advance())) != nullptr;) {
			$nc(action)->accept($nc(p)->key);
		}
	}
}

bool ConcurrentHashMap$KeySpliterator::tryAdvance($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ConcurrentHashMap$Node, p, nullptr);
	if (($assign(p, advance())) == nullptr) {
		return false;
	}
	$nc(action)->accept($nc(p)->key);
	return true;
}

int64_t ConcurrentHashMap$KeySpliterator::estimateSize() {
	return this->est;
}

int32_t ConcurrentHashMap$KeySpliterator::characteristics() {
	return ($Spliterator::DISTINCT | $Spliterator::CONCURRENT) | $Spliterator::NONNULL;
}

ConcurrentHashMap$KeySpliterator::ConcurrentHashMap$KeySpliterator() {
}

$Class* ConcurrentHashMap$KeySpliterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$KeySpliterator, name, initialize, &_ConcurrentHashMap$KeySpliterator_ClassInfo_, allocate$ConcurrentHashMap$KeySpliterator);
	return class$;
}

$Class* ConcurrentHashMap$KeySpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java