#include <jdk/internal/ref/Cleaner.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Cleaner$1 = ::jdk::internal::ref::Cleaner$1;

namespace jdk {
	namespace internal {
		namespace ref {

$FieldInfo _Cleaner_FieldInfo_[] = {
	{"dummyQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Cleaner, dummyQueue)},
	{"first", "Ljdk/internal/ref/Cleaner;", nullptr, $PRIVATE | $STATIC, $staticField(Cleaner, first)},
	{"next", "Ljdk/internal/ref/Cleaner;", nullptr, $PRIVATE, $field(Cleaner, next)},
	{"prev", "Ljdk/internal/ref/Cleaner;", nullptr, $PRIVATE, $field(Cleaner, prev)},
	{"thunk", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(Cleaner, thunk)},
	{}
};

$MethodInfo _Cleaner_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Runnable;)V", nullptr, $PRIVATE, $method(static_cast<void(Cleaner::*)(Object$*,$Runnable*)>(&Cleaner::init$))},
	{"add", "(Ljdk/internal/ref/Cleaner;)Ljdk/internal/ref/Cleaner;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<Cleaner*(*)(Cleaner*)>(&Cleaner::add))},
	{"clean", "()V", nullptr, $PUBLIC},
	{"create", "(Ljava/lang/Object;Ljava/lang/Runnable;)Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Cleaner*(*)(Object$*,$Runnable*)>(&Cleaner::create))},
	{"remove", "(Ljdk/internal/ref/Cleaner;)Z", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)(Cleaner*)>(&Cleaner::remove))},
	{}
};

$InnerClassInfo _Cleaner_InnerClassesInfo_[] = {
	{"jdk.internal.ref.Cleaner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Cleaner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.ref.Cleaner",
	"java.lang.ref.PhantomReference",
	nullptr,
	_Cleaner_FieldInfo_,
	_Cleaner_MethodInfo_,
	"Ljava/lang/ref/PhantomReference<Ljava/lang/Object;>;",
	nullptr,
	_Cleaner_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.ref.Cleaner$1"
};

$Object* allocate$Cleaner($Class* clazz) {
	return $of($alloc(Cleaner));
}

$ReferenceQueue* Cleaner::dummyQueue = nullptr;
Cleaner* Cleaner::first = nullptr;

Cleaner* Cleaner::add(Cleaner* cl) {
	$load(Cleaner);
	$synchronized(class$) {
		$init(Cleaner);
		if (Cleaner::first != nullptr) {
			$set($nc(cl), next, Cleaner::first);
			$set($nc(Cleaner::first), prev, cl);
		}
		$assignStatic(Cleaner::first, cl);
		return cl;
	}
}

bool Cleaner::remove(Cleaner* cl) {
	$load(Cleaner);
	$synchronized(class$) {
		$init(Cleaner);
		if ($nc(cl)->next == cl) {
			return false;
		}
		if (Cleaner::first == cl) {
			if ($nc(cl)->next != nullptr) {
				$assignStatic(Cleaner::first, cl->next);
			} else {
				$assignStatic(Cleaner::first, cl->prev);
			}
		}
		if ($nc(cl)->next != nullptr) {
			$set($nc(cl->next), prev, cl->prev);
		}
		if ($nc(cl)->prev != nullptr) {
			$set($nc(cl->prev), next, cl->next);
		}
		$set($nc(cl), next, cl);
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
	} catch ($Throwable&) {
		$var($Throwable, x, $catch());
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Cleaner$1, this, x)));
	}
}

void clinit$Cleaner($Class* class$) {
	$assignStatic(Cleaner::dummyQueue, $new($ReferenceQueue));
	$assignStatic(Cleaner::first, nullptr);
}

Cleaner::Cleaner() {
}

$Class* Cleaner::load$($String* name, bool initialize) {
	$loadClass(Cleaner, name, initialize, &_Cleaner_ClassInfo_, clinit$Cleaner, allocate$Cleaner);
	return class$;
}

$Class* Cleaner::class$ = nullptr;

		} // ref
	} // internal
} // jdk