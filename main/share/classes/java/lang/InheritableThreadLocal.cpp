#include <java/lang/InheritableThreadLocal.h>

#include <java/lang/ThreadLocal$ThreadLocalMap.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $ThreadLocal$ThreadLocalMap = ::java::lang::ThreadLocal$ThreadLocalMap;

namespace java {
	namespace lang {

$MethodInfo _InheritableThreadLocal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InheritableThreadLocal::*)()>(&InheritableThreadLocal::init$))},
	{"childValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PROTECTED},
	{"createMap", "(Ljava/lang/Thread;Ljava/lang/Object;)V", "(Ljava/lang/Thread;TT;)V", 0},
	{"getMap", "(Ljava/lang/Thread;)Ljava/lang/ThreadLocal$ThreadLocalMap;", nullptr, 0},
	{}
};

$ClassInfo _InheritableThreadLocal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.InheritableThreadLocal",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_InheritableThreadLocal_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ThreadLocal<TT;>;"
};

$Object* allocate$InheritableThreadLocal($Class* clazz) {
	return $of($alloc(InheritableThreadLocal));
}

void InheritableThreadLocal::init$() {
	$ThreadLocal::init$();
}

$Object* InheritableThreadLocal::childValue(Object$* parentValue) {
	return $of(parentValue);
}

$ThreadLocal$ThreadLocalMap* InheritableThreadLocal::getMap($Thread* t) {
	return $nc(t)->inheritableThreadLocals;
}

void InheritableThreadLocal::createMap($Thread* t, Object$* firstValue) {
	$set($nc(t), inheritableThreadLocals, $new($ThreadLocal$ThreadLocalMap, this, firstValue));
}

InheritableThreadLocal::InheritableThreadLocal() {
}

$Class* InheritableThreadLocal::load$($String* name, bool initialize) {
	$loadClass(InheritableThreadLocal, name, initialize, &_InheritableThreadLocal_ClassInfo_, allocate$InheritableThreadLocal);
	return class$;
}

$Class* InheritableThreadLocal::class$ = nullptr;

	} // lang
} // java