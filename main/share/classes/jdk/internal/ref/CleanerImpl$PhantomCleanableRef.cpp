#include <jdk/internal/ref/CleanerImpl$PhantomCleanableRef.h>
#include <java/lang/Runnable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Cleaner.h>
#include <jdk/internal/ref/CleanerImpl.h>
#include <jdk/internal/ref/PhantomCleanable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Cleaner = ::java::lang::ref::Cleaner;
using $PhantomCleanable = ::jdk::internal::ref::PhantomCleanable;

namespace jdk {
	namespace internal {
		namespace ref {

void CleanerImpl$PhantomCleanableRef::init$(Object$* obj, $Cleaner* cleaner, $Runnable* action) {
	$PhantomCleanable::init$(obj, cleaner);
	$set(this, action, action);
}

void CleanerImpl$PhantomCleanableRef::init$() {
	$PhantomCleanable::init$();
	$set(this, action, nullptr);
}

void CleanerImpl$PhantomCleanableRef::performCleanup() {
	$nc(this->action)->run();
}

$Object* CleanerImpl$PhantomCleanableRef::get() {
	$throwNew($UnsupportedOperationException, "get"_s);
	$shouldNotReachHere();
}

void CleanerImpl$PhantomCleanableRef::clear() {
	$throwNew($UnsupportedOperationException, "clear"_s);
}

CleanerImpl$PhantomCleanableRef::CleanerImpl$PhantomCleanableRef() {
}

$Class* CleanerImpl$PhantomCleanableRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"action", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(CleanerImpl$PhantomCleanableRef, action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/Cleaner;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(CleanerImpl$PhantomCleanableRef, init$, void, Object$*, $Cleaner*, $Runnable*)},
		{"<init>", "()V", nullptr, 0, $method(CleanerImpl$PhantomCleanableRef, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(CleanerImpl$PhantomCleanableRef, clear, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CleanerImpl$PhantomCleanableRef, get, $Object*)},
		{"performCleanup", "()V", nullptr, $PROTECTED, $virtualMethod(CleanerImpl$PhantomCleanableRef, performCleanup, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.ref.CleanerImpl$PhantomCleanableRef", "jdk.internal.ref.CleanerImpl", "PhantomCleanableRef", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.ref.CleanerImpl$PhantomCleanableRef",
		"jdk.internal.ref.PhantomCleanable",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljdk/internal/ref/PhantomCleanable<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.ref.CleanerImpl"
	};
	$loadClass(CleanerImpl$PhantomCleanableRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CleanerImpl$PhantomCleanableRef));
	});
	return class$;
}

$Class* CleanerImpl$PhantomCleanableRef::class$ = nullptr;

		} // ref
	} // internal
} // jdk