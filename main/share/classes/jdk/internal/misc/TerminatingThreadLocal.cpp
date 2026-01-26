#include <jdk/internal/misc/TerminatingThreadLocal.h>

#include <java/lang/ThreadLocal.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jdk/internal/misc/TerminatingThreadLocal$1.h>
#include <jcpp.h>

#undef REGISTRY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $TerminatingThreadLocal$1 = ::jdk::internal::misc::TerminatingThreadLocal$1;

namespace jdk {
	namespace internal {
		namespace misc {

$FieldInfo _TerminatingThreadLocal_FieldInfo_[] = {
	{"REGISTRY", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/util/Collection<Ljdk/internal/misc/TerminatingThreadLocal<*>;>;>;", $PUBLIC | $STATIC | $FINAL, $staticField(TerminatingThreadLocal, REGISTRY)},
	{}
};

$MethodInfo _TerminatingThreadLocal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TerminatingThreadLocal, init$, void)},
	{"_threadTerminated", "()V", nullptr, $PRIVATE, $method(TerminatingThreadLocal, _threadTerminated, void)},
	{"register", "(Ljdk/internal/misc/TerminatingThreadLocal;)V", "(Ljdk/internal/misc/TerminatingThreadLocal<*>;)V", $PUBLIC | $STATIC, $staticMethod(TerminatingThreadLocal, register$, void, TerminatingThreadLocal*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(TerminatingThreadLocal, remove, void)},
	{"set", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(TerminatingThreadLocal, set, void, Object$*)},
	{"threadTerminated", "(Ljava/lang/Object;)V", "(TT;)V", $PROTECTED, $virtualMethod(TerminatingThreadLocal, threadTerminated, void, Object$*)},
	{"threadTerminated", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(TerminatingThreadLocal, threadTerminated, void)},
	{"unregister", "(Ljdk/internal/misc/TerminatingThreadLocal;)V", "(Ljdk/internal/misc/TerminatingThreadLocal<*>;)V", $PRIVATE | $STATIC, $staticMethod(TerminatingThreadLocal, unregister, void, TerminatingThreadLocal*)},
	{}
};

$InnerClassInfo _TerminatingThreadLocal_InnerClassesInfo_[] = {
	{"jdk.internal.misc.TerminatingThreadLocal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TerminatingThreadLocal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.misc.TerminatingThreadLocal",
	"java.lang.ThreadLocal",
	nullptr,
	_TerminatingThreadLocal_FieldInfo_,
	_TerminatingThreadLocal_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ThreadLocal<TT;>;",
	nullptr,
	_TerminatingThreadLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.misc.TerminatingThreadLocal$1"
};

$Object* allocate$TerminatingThreadLocal($Class* clazz) {
	return $of($alloc(TerminatingThreadLocal));
}

$ThreadLocal* TerminatingThreadLocal::REGISTRY = nullptr;

void TerminatingThreadLocal::init$() {
	$ThreadLocal::init$();
}

void TerminatingThreadLocal::set(Object$* value) {
	$ThreadLocal::set(value);
	register$(this);
}

void TerminatingThreadLocal::remove() {
	$ThreadLocal::remove();
	unregister(this);
}

void TerminatingThreadLocal::threadTerminated(Object$* value) {
}

void TerminatingThreadLocal::threadTerminated() {
	$init(TerminatingThreadLocal);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(($cast($Collection, $($nc(TerminatingThreadLocal::REGISTRY)->get()))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(TerminatingThreadLocal, ttl, $cast(TerminatingThreadLocal, i$->next()));
			{
				$nc(ttl)->_threadTerminated();
			}
		}
	}
}

void TerminatingThreadLocal::_threadTerminated() {
	threadTerminated($(get()));
}

void TerminatingThreadLocal::register$(TerminatingThreadLocal* tl) {
	$init(TerminatingThreadLocal);
	$nc(($cast($Collection, $($nc(TerminatingThreadLocal::REGISTRY)->get()))))->add(tl);
}

void TerminatingThreadLocal::unregister(TerminatingThreadLocal* tl) {
	$init(TerminatingThreadLocal);
	$nc(($cast($Collection, $($nc(TerminatingThreadLocal::REGISTRY)->get()))))->remove(tl);
}

void clinit$TerminatingThreadLocal($Class* class$) {
	$assignStatic(TerminatingThreadLocal::REGISTRY, $new($TerminatingThreadLocal$1));
}

TerminatingThreadLocal::TerminatingThreadLocal() {
}

$Class* TerminatingThreadLocal::load$($String* name, bool initialize) {
	$loadClass(TerminatingThreadLocal, name, initialize, &_TerminatingThreadLocal_ClassInfo_, clinit$TerminatingThreadLocal, allocate$TerminatingThreadLocal);
	return class$;
}

$Class* TerminatingThreadLocal::class$ = nullptr;

		} // misc
	} // internal
} // jdk