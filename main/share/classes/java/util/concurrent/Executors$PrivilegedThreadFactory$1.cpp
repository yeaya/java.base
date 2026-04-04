#include <java/util/concurrent/Executors$PrivilegedThreadFactory$1.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/util/concurrent/Executors$PrivilegedThreadFactory$1$1.h>
#include <java/util/concurrent/Executors$PrivilegedThreadFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $Executors$PrivilegedThreadFactory = ::java::util::concurrent::Executors$PrivilegedThreadFactory;
using $Executors$PrivilegedThreadFactory$1$1 = ::java::util::concurrent::Executors$PrivilegedThreadFactory$1$1;

namespace java {
	namespace util {
		namespace concurrent {

void Executors$PrivilegedThreadFactory$1::init$($Executors$PrivilegedThreadFactory* this$0, $Runnable* val$r) {
	$set(this, this$0, this$0);
	$set(this, val$r, val$r);
}

void Executors$PrivilegedThreadFactory$1::run() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($Executors$PrivilegedThreadFactory$1$1, this), this->this$0->acc);
}

Executors$PrivilegedThreadFactory$1::Executors$PrivilegedThreadFactory$1() {
}

$Class* Executors$PrivilegedThreadFactory$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/Executors$PrivilegedThreadFactory;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$PrivilegedThreadFactory$1, this$0)},
		{"val$r", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$PrivilegedThreadFactory$1, val$r)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Executors$PrivilegedThreadFactory;Ljava/lang/Runnable;)V", "()V", 0, $method(Executors$PrivilegedThreadFactory$1, init$, void, $Executors$PrivilegedThreadFactory*, $Runnable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Executors$PrivilegedThreadFactory$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.Executors$PrivilegedThreadFactory",
		"newThread",
		"(Ljava/lang/Runnable;)Ljava/lang/Thread;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Executors$PrivilegedThreadFactory", "java.util.concurrent.Executors", "PrivilegedThreadFactory", $PRIVATE | $STATIC},
		{"java.util.concurrent.Executors$PrivilegedThreadFactory$1", nullptr, nullptr, 0},
		{"java.util.concurrent.Executors$PrivilegedThreadFactory$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.Executors$PrivilegedThreadFactory$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Executors"
	};
	$loadClass(Executors$PrivilegedThreadFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Executors$PrivilegedThreadFactory$1);
	});
	return class$;
}

$Class* Executors$PrivilegedThreadFactory$1::class$ = nullptr;

		} // concurrent
	} // util
} // java