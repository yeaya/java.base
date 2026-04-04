#include <jdk/internal/misc/InnocuousThread$2.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;

namespace jdk {
	namespace internal {
		namespace misc {

void InnocuousThread$2::init$($String* val$name, $Runnable* val$target, int32_t val$priority) {
	$set(this, val$name, val$name);
	$set(this, val$target, val$target);
	this->val$priority = val$priority;
}

$Object* InnocuousThread$2::run() {
	return $InnocuousThread::createThread(this->val$name, this->val$target, nullptr, this->val$priority);
}

InnocuousThread$2::InnocuousThread$2() {
}

$Class* InnocuousThread$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$priority", "I", nullptr, $FINAL | $SYNTHETIC, $field(InnocuousThread$2, val$priority)},
		{"val$target", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(InnocuousThread$2, val$target)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(InnocuousThread$2, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Runnable;I)V", "()V", 0, $method(InnocuousThread$2, init$, void, $String*, $Runnable*, int32_t)},
		{"run", "()Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(InnocuousThread$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.misc.InnocuousThread",
		"newSystemThread",
		"(Ljava/lang/String;Ljava/lang/Runnable;I)Ljava/lang/Thread;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.InnocuousThread$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.misc.InnocuousThread$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Thread;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.misc.InnocuousThread"
	};
	$loadClass(InnocuousThread$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InnocuousThread$2);
	});
	return class$;
}

$Class* InnocuousThread$2::class$ = nullptr;

		} // misc
	} // internal
} // jdk