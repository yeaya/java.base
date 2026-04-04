#include <java/lang/ThreadLocal.h>
#include <java/lang/ThreadLocal$SuppliedThreadLocal.h>
#include <java/lang/ThreadLocal$ThreadLocalMap$Entry.h>
#include <java/lang/ThreadLocal$ThreadLocalMap.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/misc/TerminatingThreadLocal.h>
#include <jcpp.h>

#undef HASH_INCREMENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal$SuppliedThreadLocal = ::java::lang::ThreadLocal$SuppliedThreadLocal;
using $ThreadLocal$ThreadLocalMap = ::java::lang::ThreadLocal$ThreadLocalMap;
using $ThreadLocal$ThreadLocalMap$Entry = ::java::lang::ThreadLocal$ThreadLocalMap$Entry;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Supplier = ::java::util::function::Supplier;
using $TerminatingThreadLocal = ::jdk::internal::misc::TerminatingThreadLocal;

namespace java {
	namespace lang {

$AtomicInteger* ThreadLocal::nextHashCode$ = nullptr;

int32_t ThreadLocal::nextHashCode() {
	$init(ThreadLocal);
	return $nc(ThreadLocal::nextHashCode$)->getAndAdd(ThreadLocal::HASH_INCREMENT);
}

$Object* ThreadLocal::initialValue() {
	return nullptr;
}

ThreadLocal* ThreadLocal::withInitial($Supplier* supplier) {
	$init(ThreadLocal);
	return $new($ThreadLocal$SuppliedThreadLocal, supplier);
}

void ThreadLocal::init$() {
	this->threadLocalHashCode = nextHashCode();
}

$Object* ThreadLocal::get() {
	$useLocalObjectStack();
	$var($Thread, t, $Thread::currentThread());
	$var($ThreadLocal$ThreadLocalMap, map, getMap(t));
	if (map != nullptr) {
		$var($ThreadLocal$ThreadLocalMap$Entry, e, map->getEntry(this));
		if (e != nullptr) {
			$var($Object, result, e->value);
			return result;
		}
	}
	return setInitialValue();
}

bool ThreadLocal::isPresent() {
	$useLocalObjectStack();
	$var($Thread, t, $Thread::currentThread());
	$var($ThreadLocal$ThreadLocalMap, map, getMap(t));
	return map != nullptr && map->getEntry(this) != nullptr;
}

$Object* ThreadLocal::setInitialValue() {
	$useLocalObjectStack();
	$var($Object, value, initialValue());
	$var($Thread, t, $Thread::currentThread());
	$var($ThreadLocal$ThreadLocalMap, map, getMap(t));
	if (map != nullptr) {
		map->set(this, value);
	} else {
		createMap(t, value);
	}
	if ($instanceOf($TerminatingThreadLocal, this)) {
		$TerminatingThreadLocal::register$($cast($TerminatingThreadLocal, this));
	}
	return value;
}

void ThreadLocal::set(Object$* value) {
	$useLocalObjectStack();
	$var($Thread, t, $Thread::currentThread());
	$var($ThreadLocal$ThreadLocalMap, map, getMap(t));
	if (map != nullptr) {
		map->set(this, value);
	} else {
		createMap(t, value);
	}
}

void ThreadLocal::remove() {
	$useLocalObjectStack();
	$var($ThreadLocal$ThreadLocalMap, m, getMap($($Thread::currentThread())));
	if (m != nullptr) {
		m->remove(this);
	}
}

$ThreadLocal$ThreadLocalMap* ThreadLocal::getMap($Thread* t) {
	return $nc(t)->threadLocals;
}

void ThreadLocal::createMap($Thread* t, Object$* firstValue) {
	$set($nc(t), threadLocals, $new($ThreadLocal$ThreadLocalMap, this, firstValue));
}

$ThreadLocal$ThreadLocalMap* ThreadLocal::createInheritedMap($ThreadLocal$ThreadLocalMap* parentMap) {
	$init(ThreadLocal);
	return $new($ThreadLocal$ThreadLocalMap, parentMap);
}

$Object* ThreadLocal::childValue(Object$* parentValue) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void ThreadLocal::clinit$($Class* clazz) {
	$assignStatic(ThreadLocal::nextHashCode$, $new($AtomicInteger));
}

ThreadLocal::ThreadLocal() {
}

$Class* ThreadLocal::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"threadLocalHashCode", "I", nullptr, $PRIVATE | $FINAL, $field(ThreadLocal, threadLocalHashCode)},
		{"nextHashCode", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC, $staticField(ThreadLocal, nextHashCode$)},
		{"HASH_INCREMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadLocal, HASH_INCREMENT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadLocal, init$, void)},
		{"childValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", 0, $virtualMethod(ThreadLocal, childValue, $Object*, Object$*)},
		{"createInheritedMap", "(Ljava/lang/ThreadLocal$ThreadLocalMap;)Ljava/lang/ThreadLocal$ThreadLocalMap;", nullptr, $STATIC, $staticMethod(ThreadLocal, createInheritedMap, $ThreadLocal$ThreadLocalMap*, $ThreadLocal$ThreadLocalMap*)},
		{"createMap", "(Ljava/lang/Thread;Ljava/lang/Object;)V", "(Ljava/lang/Thread;TT;)V", 0, $virtualMethod(ThreadLocal, createMap, void, $Thread*, Object$*)},
		{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(ThreadLocal, get, $Object*)},
		{"getMap", "(Ljava/lang/Thread;)Ljava/lang/ThreadLocal$ThreadLocalMap;", nullptr, 0, $virtualMethod(ThreadLocal, getMap, $ThreadLocal$ThreadLocalMap*, $Thread*)},
		{"initialValue", "()Ljava/lang/Object;", "()TT;", $PROTECTED, $virtualMethod(ThreadLocal, initialValue, $Object*)},
		{"isPresent", "()Z", nullptr, 0, $virtualMethod(ThreadLocal, isPresent, bool)},
		{"nextHashCode", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(ThreadLocal, nextHashCode, int32_t)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ThreadLocal, remove, void)},
		{"set", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(ThreadLocal, set, void, Object$*)},
		{"setInitialValue", "()Ljava/lang/Object;", "()TT;", $PRIVATE, $method(ThreadLocal, setInitialValue, $Object*)},
		{"withInitial", "(Ljava/util/function/Supplier;)Ljava/lang/ThreadLocal;", "<S:Ljava/lang/Object;>(Ljava/util/function/Supplier<+TS;>;)Ljava/lang/ThreadLocal<TS;>;", $PUBLIC | $STATIC, $staticMethod(ThreadLocal, withInitial, ThreadLocal*, $Supplier*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ThreadLocal$ThreadLocalMap", "java.lang.ThreadLocal", "ThreadLocalMap", $STATIC},
		{"java.lang.ThreadLocal$SuppliedThreadLocal", "java.lang.ThreadLocal", "SuppliedThreadLocal", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ThreadLocal",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.ThreadLocal$ThreadLocalMap,java.lang.ThreadLocal$ThreadLocalMap$Entry,java.lang.ThreadLocal$SuppliedThreadLocal"
	};
	$loadClass(ThreadLocal, name, initialize, &classInfo$$, ThreadLocal::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadLocal);
	});
	return class$;
}

$Class* ThreadLocal::class$ = nullptr;

	} // lang
} // java