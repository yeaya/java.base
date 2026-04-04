#include <java/util/concurrent/atomic/AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1.h>
#include <java/lang/reflect/Field.h>
#include <java/util/concurrent/atomic/AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl = ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

void AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::init$($AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl* this$0, $Class* val$tclass, $String* val$fieldName) {
	$set(this, this$0, this$0);
	$set(this, val$tclass, val$tclass);
	$set(this, val$fieldName, val$fieldName);
}

$Object* AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$tclass)->getDeclaredField(this->val$fieldName));
}

AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1() {
}

$Class* AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1, this$0)},
		{"val$fieldName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1, val$fieldName)},
		{"val$tclass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1, val$tclass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl;Ljava/lang/Class;Ljava/lang/String;)V", "()V", 0, $method(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1, init$, void, $AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl*, $Class*, $String*)},
		{"run", "()Ljava/lang/reflect/Field;", nullptr, $PUBLIC, $virtualMethod(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1, run, $Object*), "java.lang.NoSuchFieldException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl",
		"<init>",
		"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl", "java.util.concurrent.atomic.AtomicIntegerFieldUpdater", "AtomicIntegerFieldUpdaterImpl", $PRIVATE | $STATIC | $FINAL},
		{"java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Field;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.atomic.AtomicIntegerFieldUpdater"
	};
	$loadClass(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1);
	});
	return class$;
}

$Class* AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java