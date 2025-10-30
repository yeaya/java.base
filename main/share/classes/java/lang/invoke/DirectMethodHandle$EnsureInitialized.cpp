#include <java/lang/invoke/DirectMethodHandle$EnsureInitialized.h>

#include <java/lang/ClassValue.h>
#include <java/lang/invoke/DirectMethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/ref/WeakReference.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef INSTANCE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectMethodHandle = ::java::lang::invoke::DirectMethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _DirectMethodHandle$EnsureInitialized_FieldInfo_[] = {
	{"INSTANCE", "Ljava/lang/invoke/DirectMethodHandle$EnsureInitialized;", nullptr, $STATIC | $FINAL, $staticField(DirectMethodHandle$EnsureInitialized, INSTANCE)},
	{}
};

$MethodInfo _DirectMethodHandle$EnsureInitialized_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DirectMethodHandle$EnsureInitialized::*)()>(&DirectMethodHandle$EnsureInitialized::init$))},
	{"computeValue", "(Ljava/lang/Class;)Ljava/lang/ref/WeakReference;", "(Ljava/lang/Class<*>;)Ljava/lang/ref/WeakReference<Ljava/lang/Thread;>;", $PROTECTED},
	{}
};

$InnerClassInfo _DirectMethodHandle$EnsureInitialized_InnerClassesInfo_[] = {
	{"java.lang.invoke.DirectMethodHandle$EnsureInitialized", "java.lang.invoke.DirectMethodHandle", "EnsureInitialized", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DirectMethodHandle$EnsureInitialized_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.DirectMethodHandle$EnsureInitialized",
	"java.lang.ClassValue",
	nullptr,
	_DirectMethodHandle$EnsureInitialized_FieldInfo_,
	_DirectMethodHandle$EnsureInitialized_MethodInfo_,
	"Ljava/lang/ClassValue<Ljava/lang/ref/WeakReference<Ljava/lang/Thread;>;>;",
	nullptr,
	_DirectMethodHandle$EnsureInitialized_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.DirectMethodHandle"
};

$Object* allocate$DirectMethodHandle$EnsureInitialized($Class* clazz) {
	return $of($alloc(DirectMethodHandle$EnsureInitialized));
}

DirectMethodHandle$EnsureInitialized* DirectMethodHandle$EnsureInitialized::INSTANCE = nullptr;

void DirectMethodHandle$EnsureInitialized::init$() {
	$ClassValue::init$();
}

$Object* DirectMethodHandle$EnsureInitialized::computeValue($Class* type) {
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->ensureClassInitialized(type);
	if ($nc($MethodHandleStatics::UNSAFE)->shouldBeInitialized(type)) {
		return $of($new($WeakReference, $($Thread::currentThread())));
	}
	return $of(nullptr);
}

void clinit$DirectMethodHandle$EnsureInitialized($Class* class$) {
	$assignStatic(DirectMethodHandle$EnsureInitialized::INSTANCE, $new(DirectMethodHandle$EnsureInitialized));
}

DirectMethodHandle$EnsureInitialized::DirectMethodHandle$EnsureInitialized() {
}

$Class* DirectMethodHandle$EnsureInitialized::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandle$EnsureInitialized, name, initialize, &_DirectMethodHandle$EnsureInitialized_ClassInfo_, clinit$DirectMethodHandle$EnsureInitialized, allocate$DirectMethodHandle$EnsureInitialized);
	return class$;
}

$Class* DirectMethodHandle$EnsureInitialized::class$ = nullptr;

		} // invoke
	} // lang
} // java