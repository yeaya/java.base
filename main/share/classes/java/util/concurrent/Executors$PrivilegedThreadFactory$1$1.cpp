#include <java/util/concurrent/Executors$PrivilegedThreadFactory$1$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/Executors$PrivilegedThreadFactory$1.h>
#include <java/util/concurrent/Executors$PrivilegedThreadFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Executors$PrivilegedThreadFactory$1 = ::java::util::concurrent::Executors$PrivilegedThreadFactory$1;

namespace java {
	namespace util {
		namespace concurrent {

void Executors$PrivilegedThreadFactory$1$1::init$($Executors$PrivilegedThreadFactory$1* this$1) {
	$set(this, this$1, this$1);
}

$Object* Executors$PrivilegedThreadFactory$1$1::run() {
	$($Thread::currentThread())->setContextClassLoader($nc(this->this$1->this$0)->ccl);
	$nc(this->this$1->val$r)->run();
	return nullptr;
}

Executors$PrivilegedThreadFactory$1$1::Executors$PrivilegedThreadFactory$1$1() {
}

$Class* Executors$PrivilegedThreadFactory$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/concurrent/Executors$PrivilegedThreadFactory$1;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$PrivilegedThreadFactory$1$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Executors$PrivilegedThreadFactory$1;)V", nullptr, 0, $method(Executors$PrivilegedThreadFactory$1$1, init$, void, $Executors$PrivilegedThreadFactory$1*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Executors$PrivilegedThreadFactory$1$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.Executors$PrivilegedThreadFactory$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Executors$PrivilegedThreadFactory", "java.util.concurrent.Executors", "PrivilegedThreadFactory", $PRIVATE | $STATIC},
		{"java.util.concurrent.Executors$PrivilegedThreadFactory$1", nullptr, nullptr, 0},
		{"java.util.concurrent.Executors$PrivilegedThreadFactory$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.Executors$PrivilegedThreadFactory$1$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Executors"
	};
	$loadClass(Executors$PrivilegedThreadFactory$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Executors$PrivilegedThreadFactory$1$1);
	});
	return class$;
}

$Class* Executors$PrivilegedThreadFactory$1$1::class$ = nullptr;

		} // concurrent
	} // util
} // java