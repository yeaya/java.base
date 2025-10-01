#include <jdk/internal/ref/CleanerImpl$PhantomCleanableRef.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $CleanerImpl = ::jdk::internal::ref::CleanerImpl;
using $PhantomCleanable = ::jdk::internal::ref::PhantomCleanable;

namespace jdk {
	namespace internal {
		namespace ref {

$FieldInfo _CleanerImpl$PhantomCleanableRef_FieldInfo_[] = {
	{"action", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(CleanerImpl$PhantomCleanableRef, action)},
	{}
};

$MethodInfo _CleanerImpl$PhantomCleanableRef_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/Cleaner;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(CleanerImpl$PhantomCleanableRef::*)(Object$*,$Cleaner*,$Runnable*)>(&CleanerImpl$PhantomCleanableRef::init$))},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CleanerImpl$PhantomCleanableRef::*)()>(&CleanerImpl$PhantomCleanableRef::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"performCleanup", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _CleanerImpl$PhantomCleanableRef_InnerClassesInfo_[] = {
	{"jdk.internal.ref.CleanerImpl$PhantomCleanableRef", "jdk.internal.ref.CleanerImpl", "PhantomCleanableRef", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _CleanerImpl$PhantomCleanableRef_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.ref.CleanerImpl$PhantomCleanableRef",
	"jdk.internal.ref.PhantomCleanable",
	nullptr,
	_CleanerImpl$PhantomCleanableRef_FieldInfo_,
	_CleanerImpl$PhantomCleanableRef_MethodInfo_,
	"Ljdk/internal/ref/PhantomCleanable<Ljava/lang/Object;>;",
	nullptr,
	_CleanerImpl$PhantomCleanableRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.ref.CleanerImpl"
};

$Object* allocate$CleanerImpl$PhantomCleanableRef($Class* clazz) {
	return $of($alloc(CleanerImpl$PhantomCleanableRef));
}

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
	$loadClass(CleanerImpl$PhantomCleanableRef, name, initialize, &_CleanerImpl$PhantomCleanableRef_ClassInfo_, allocate$CleanerImpl$PhantomCleanableRef);
	return class$;
}

$Class* CleanerImpl$PhantomCleanableRef::class$ = nullptr;

		} // ref
	} // internal
} // jdk