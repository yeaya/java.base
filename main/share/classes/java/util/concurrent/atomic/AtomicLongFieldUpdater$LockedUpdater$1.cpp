#include <java/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater$1.h>
#include <java/lang/reflect/Field.h>
#include <java/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicLongFieldUpdater$LockedUpdater = ::java::util::concurrent::atomic::AtomicLongFieldUpdater$LockedUpdater;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

void AtomicLongFieldUpdater$LockedUpdater$1::init$($AtomicLongFieldUpdater$LockedUpdater* this$0, $Class* val$tclass, $String* val$fieldName) {
	$set(this, this$0, this$0);
	$set(this, val$tclass, val$tclass);
	$set(this, val$fieldName, val$fieldName);
}

$Object* AtomicLongFieldUpdater$LockedUpdater$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$tclass)->getDeclaredField(this->val$fieldName));
}

AtomicLongFieldUpdater$LockedUpdater$1::AtomicLongFieldUpdater$LockedUpdater$1() {
}

$Class* AtomicLongFieldUpdater$LockedUpdater$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicLongFieldUpdater$LockedUpdater$1, this$0)},
		{"val$fieldName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicLongFieldUpdater$LockedUpdater$1, val$fieldName)},
		{"val$tclass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicLongFieldUpdater$LockedUpdater$1, val$tclass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater;Ljava/lang/Class;Ljava/lang/String;)V", "()V", 0, $method(AtomicLongFieldUpdater$LockedUpdater$1, init$, void, $AtomicLongFieldUpdater$LockedUpdater*, $Class*, $String*)},
		{"run", "()Ljava/lang/reflect/Field;", nullptr, $PUBLIC, $virtualMethod(AtomicLongFieldUpdater$LockedUpdater$1, run, $Object*), "java.lang.NoSuchFieldException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater",
		"<init>",
		"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater", "java.util.concurrent.atomic.AtomicLongFieldUpdater", "LockedUpdater", $PRIVATE | $STATIC | $FINAL},
		{"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater$1",
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
		"java.util.concurrent.atomic.AtomicLongFieldUpdater"
	};
	$loadClass(AtomicLongFieldUpdater$LockedUpdater$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicLongFieldUpdater$LockedUpdater$1);
	});
	return class$;
}

$Class* AtomicLongFieldUpdater$LockedUpdater$1::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java