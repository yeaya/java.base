#include <jdk/internal/ref/CleanerImpl$CleanerCleanable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/ref/CleanerImpl.h>
#include <jdk/internal/ref/PhantomCleanable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cleaner = ::java::lang::ref::Cleaner;
using $CleanerImpl = ::jdk::internal::ref::CleanerImpl;
using $PhantomCleanable = ::jdk::internal::ref::PhantomCleanable;

namespace jdk {
	namespace internal {
		namespace ref {

$MethodInfo _CleanerImpl$CleanerCleanable_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ref/Cleaner;)V", nullptr, 0, $method(static_cast<void(CleanerImpl$CleanerCleanable::*)($Cleaner*)>(&CleanerImpl$CleanerCleanable::init$))},
	{"performCleanup", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _CleanerImpl$CleanerCleanable_InnerClassesInfo_[] = {
	{"jdk.internal.ref.CleanerImpl$CleanerCleanable", "jdk.internal.ref.CleanerImpl", "CleanerCleanable", $STATIC | $FINAL},
	{}
};

$ClassInfo _CleanerImpl$CleanerCleanable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.ref.CleanerImpl$CleanerCleanable",
	"jdk.internal.ref.PhantomCleanable",
	nullptr,
	nullptr,
	_CleanerImpl$CleanerCleanable_MethodInfo_,
	"Ljdk/internal/ref/PhantomCleanable<Ljava/lang/ref/Cleaner;>;",
	nullptr,
	_CleanerImpl$CleanerCleanable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.ref.CleanerImpl"
};

$Object* allocate$CleanerImpl$CleanerCleanable($Class* clazz) {
	return $of($alloc(CleanerImpl$CleanerCleanable));
}

void CleanerImpl$CleanerCleanable::init$($Cleaner* cleaner) {
	$PhantomCleanable::init$(cleaner, cleaner);
}

void CleanerImpl$CleanerCleanable::performCleanup() {
}

CleanerImpl$CleanerCleanable::CleanerImpl$CleanerCleanable() {
}

$Class* CleanerImpl$CleanerCleanable::load$($String* name, bool initialize) {
	$loadClass(CleanerImpl$CleanerCleanable, name, initialize, &_CleanerImpl$CleanerCleanable_ClassInfo_, allocate$CleanerImpl$CleanerCleanable);
	return class$;
}

$Class* CleanerImpl$CleanerCleanable::class$ = nullptr;

		} // ref
	} // internal
} // jdk