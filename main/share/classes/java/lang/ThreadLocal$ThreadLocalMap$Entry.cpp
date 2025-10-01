#include <java/lang/ThreadLocal$ThreadLocalMap$Entry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ThreadLocal$ThreadLocalMap.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $ThreadLocal$ThreadLocalMap = ::java::lang::ThreadLocal$ThreadLocalMap;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace lang {

$FieldInfo _ThreadLocal$ThreadLocalMap$Entry_FieldInfo_[] = {
	{"value", "Ljava/lang/Object;", nullptr, 0, $field(ThreadLocal$ThreadLocalMap$Entry, value)},
	{}
};

$MethodInfo _ThreadLocal$ThreadLocalMap$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ThreadLocal;Ljava/lang/Object;)V", "(Ljava/lang/ThreadLocal<*>;Ljava/lang/Object;)V", 0, $method(static_cast<void(ThreadLocal$ThreadLocalMap$Entry::*)($ThreadLocal*,Object$*)>(&ThreadLocal$ThreadLocalMap$Entry::init$))},
	{}
};

$InnerClassInfo _ThreadLocal$ThreadLocalMap$Entry_InnerClassesInfo_[] = {
	{"java.lang.ThreadLocal$ThreadLocalMap", "java.lang.ThreadLocal", "ThreadLocalMap", $STATIC},
	{"java.lang.ThreadLocal$ThreadLocalMap$Entry", "java.lang.ThreadLocal$ThreadLocalMap", "Entry", $STATIC},
	{}
};

$ClassInfo _ThreadLocal$ThreadLocalMap$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ThreadLocal$ThreadLocalMap$Entry",
	"java.lang.ref.WeakReference",
	nullptr,
	_ThreadLocal$ThreadLocalMap$Entry_FieldInfo_,
	_ThreadLocal$ThreadLocalMap$Entry_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Ljava/lang/ThreadLocal<*>;>;",
	nullptr,
	_ThreadLocal$ThreadLocalMap$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ThreadLocal"
};

$Object* allocate$ThreadLocal$ThreadLocalMap$Entry($Class* clazz) {
	return $of($alloc(ThreadLocal$ThreadLocalMap$Entry));
}

void ThreadLocal$ThreadLocalMap$Entry::init$($ThreadLocal* k, Object$* v) {
	$WeakReference::init$(k);
	$set(this, value, v);
}

ThreadLocal$ThreadLocalMap$Entry::ThreadLocal$ThreadLocalMap$Entry() {
}

$Class* ThreadLocal$ThreadLocalMap$Entry::load$($String* name, bool initialize) {
	$loadClass(ThreadLocal$ThreadLocalMap$Entry, name, initialize, &_ThreadLocal$ThreadLocalMap$Entry_ClassInfo_, allocate$ThreadLocal$ThreadLocalMap$Entry);
	return class$;
}

$Class* ThreadLocal$ThreadLocalMap$Entry::class$ = nullptr;

	} // lang
} // java