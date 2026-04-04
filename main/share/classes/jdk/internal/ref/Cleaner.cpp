#include <jdk/internal/ref/Cleaner.h>
#include <java/lang/Runnable.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/security/AccessController.h>
#include <jdk/internal/ref/Cleaner$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PhantomReference = ::java::lang::ref::PhantomReference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $AccessController = ::java::security::AccessController;
using $Cleaner$1 = ::jdk::internal::ref::Cleaner$1;

namespace jdk {
	namespace internal {
		namespace ref {

$ReferenceQueue* Cleaner::dummyQueue = nullptr;
Cleaner* Cleaner::first = nullptr;

Cleaner* Cleaner::add(Cleaner* cl) {
	$init(Cleaner);
	$synchronized(class$) {
		if (Cleaner::first != nullptr) {
			$set($nc(cl), next, Cleaner::first);
			$set(Cleaner::first, prev, cl);
		}
		$assignStatic(Cleaner::first, cl);
		return cl;
	}
}

bool Cleaner::remove(Cleaner* cl) {
	$init(Cleaner);
	$synchronized(class$) {
		if ($nc(cl)->next == cl) {
			return false;
		}
		if (Cleaner::first == cl) {
			if (cl->next != nullptr) {
				$assignStatic(Cleaner::first, cl->next);
			} else {
				$assignStatic(Cleaner::first, cl->prev);
			}
		}
		if (cl->next != nullptr) {
			$set(cl->next, prev, cl->prev);
		}
		if (cl->prev != nullptr) {
			$set(cl->prev, next, cl->next);
		}
		$set(cl, next, cl);
		$set(cl, prev, cl);
		return true;
	}
}

void Cleaner::init$(Object$* referent, $Runnable* thunk) {
	$PhantomReference::init$(referent, Cleaner::dummyQueue);
	$set(this, next, nullptr);
	$set(this, prev, nullptr);
	$set(this, thunk, thunk);
}

Cleaner* Cleaner::create(Object$* ob, $Runnable* thunk) {
	$init(Cleaner);
	if (thunk == nullptr) {
		return nullptr;
	}
	return add($$new(Cleaner, ob, thunk));
}

void Cleaner::clean() {
	$beforeCallerSensitive();
	if (!remove(this)) {
		return;
	}
	try {
		$nc(this->thunk)->run();
	} catch ($Throwable& x) {
		$AccessController::doPrivileged($$new($Cleaner$1, this, x));
	}
}

void Cleaner::clinit$($Class* clazz) {
	$assignStatic(Cleaner::dummyQueue, $new($ReferenceQueue));
	$assignStatic(Cleaner::first, nullptr);
}

Cleaner::Cleaner() {
}

$Class* Cleaner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dummyQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Cleaner, dummyQueue)},
		{"first", "Ljdk/internal/ref/Cleaner;", nullptr, $PRIVATE | $STATIC, $staticField(Cleaner, first)},
		{"next", "Ljdk/internal/ref/Cleaner;", nullptr, $PRIVATE, $field(Cleaner, next)},
		{"prev", "Ljdk/internal/ref/Cleaner;", nullptr, $PRIVATE, $field(Cleaner, prev)},
		{"thunk", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(Cleaner, thunk)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Runnable;)V", nullptr, $PRIVATE, $method(Cleaner, init$, void, Object$*, $Runnable*)},
		{"add", "(Ljdk/internal/ref/Cleaner;)Ljdk/internal/ref/Cleaner;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(Cleaner, add, Cleaner*, Cleaner*)},
		{"clean", "()V", nullptr, $PUBLIC, $virtualMethod(Cleaner, clean, void)},
		{"create", "(Ljava/lang/Object;Ljava/lang/Runnable;)Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC | $STATIC, $staticMethod(Cleaner, create, Cleaner*, Object$*, $Runnable*)},
		{"remove", "(Ljdk/internal/ref/Cleaner;)Z", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(Cleaner, remove, bool, Cleaner*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.ref.Cleaner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.ref.Cleaner",
		"java.lang.ref.PhantomReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/PhantomReference<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.ref.Cleaner$1"
	};
	$loadClass(Cleaner, name, initialize, &classInfo$$, Cleaner::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Cleaner);
	});
	return class$;
}

$Class* Cleaner::class$ = nullptr;

		} // ref
	} // internal
} // jdk