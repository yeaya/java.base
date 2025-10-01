#include <jdk/internal/misc/Signal$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Signal = ::jdk::internal::misc::Signal;
using $Signal$Handler = ::jdk::internal::misc::Signal$Handler;

namespace jdk {
	namespace internal {
		namespace misc {

$FieldInfo _Signal$1_FieldInfo_[] = {
	{"val$sig", "Ljdk/internal/misc/Signal;", nullptr, $FINAL | $SYNTHETIC, $field(Signal$1, val$sig)},
	{"val$handler", "Ljdk/internal/misc/Signal$Handler;", nullptr, $FINAL | $SYNTHETIC, $field(Signal$1, val$handler)},
	{}
};

$MethodInfo _Signal$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/misc/Signal$Handler;Ljdk/internal/misc/Signal;)V", "()V", 0, $method(static_cast<void(Signal$1::*)($Signal$Handler*,$Signal*)>(&Signal$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Signal$1_EnclosingMethodInfo_ = {
	"jdk.internal.misc.Signal",
	"dispatch",
	"(I)V"
};

$InnerClassInfo _Signal$1_InnerClassesInfo_[] = {
	{"jdk.internal.misc.Signal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Signal$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.misc.Signal$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_Signal$1_FieldInfo_,
	_Signal$1_MethodInfo_,
	nullptr,
	&_Signal$1_EnclosingMethodInfo_,
	_Signal$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.misc.Signal"
};

$Object* allocate$Signal$1($Class* clazz) {
	return $of($alloc(Signal$1));
}

void Signal$1::init$($Signal$Handler* val$handler, $Signal* val$sig) {
	$set(this, val$handler, val$handler);
	$set(this, val$sig, val$sig);
}

void Signal$1::run() {
	$nc(this->val$handler)->handle(this->val$sig);
}

Signal$1::Signal$1() {
}

$Class* Signal$1::load$($String* name, bool initialize) {
	$loadClass(Signal$1, name, initialize, &_Signal$1_ClassInfo_, allocate$Signal$1);
	return class$;
}

$Class* Signal$1::class$ = nullptr;

		} // misc
	} // internal
} // jdk