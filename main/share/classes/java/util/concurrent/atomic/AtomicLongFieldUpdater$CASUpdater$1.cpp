#include <java/util/concurrent/atomic/AtomicLongFieldUpdater$CASUpdater$1.h>
#include <java/lang/reflect/Field.h>
#include <java/util/concurrent/atomic/AtomicLongFieldUpdater$CASUpdater.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicLongFieldUpdater$CASUpdater = ::java::util::concurrent::atomic::AtomicLongFieldUpdater$CASUpdater;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

void AtomicLongFieldUpdater$CASUpdater$1::init$($AtomicLongFieldUpdater$CASUpdater* this$0, $Class* val$tclass, $String* val$fieldName) {
	$set(this, this$0, this$0);
	$set(this, val$tclass, val$tclass);
	$set(this, val$fieldName, val$fieldName);
}

$Object* AtomicLongFieldUpdater$CASUpdater$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$tclass)->getDeclaredField(this->val$fieldName));
}

AtomicLongFieldUpdater$CASUpdater$1::AtomicLongFieldUpdater$CASUpdater$1() {
}

$Class* AtomicLongFieldUpdater$CASUpdater$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/atomic/AtomicLongFieldUpdater$CASUpdater;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicLongFieldUpdater$CASUpdater$1, this$0)},
		{"val$fieldName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicLongFieldUpdater$CASUpdater$1, val$fieldName)},
		{"val$tclass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicLongFieldUpdater$CASUpdater$1, val$tclass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicLongFieldUpdater$CASUpdater;Ljava/lang/Class;Ljava/lang/String;)V", "()V", 0, $method(AtomicLongFieldUpdater$CASUpdater$1, init$, void, $AtomicLongFieldUpdater$CASUpdater*, $Class*, $String*)},
		{"run", "()Ljava/lang/reflect/Field;", nullptr, $PUBLIC, $virtualMethod(AtomicLongFieldUpdater$CASUpdater$1, run, $Object*), "java.lang.NoSuchFieldException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.atomic.AtomicLongFieldUpdater$CASUpdater",
		"<init>",
		"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.AtomicLongFieldUpdater$CASUpdater", "java.util.concurrent.atomic.AtomicLongFieldUpdater", "CASUpdater", $PRIVATE | $STATIC | $FINAL},
		{"java.util.concurrent.atomic.AtomicLongFieldUpdater$CASUpdater$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.atomic.AtomicLongFieldUpdater$CASUpdater$1",
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
	$loadClass(AtomicLongFieldUpdater$CASUpdater$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicLongFieldUpdater$CASUpdater$1);
	});
	return class$;
}

$Class* AtomicLongFieldUpdater$CASUpdater$1::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java