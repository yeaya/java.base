#include <jdk/internal/math/FormattedFloatingDecimal$1.h>

#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

namespace jdk {
	namespace internal {
		namespace math {

$MethodInfo _FormattedFloatingDecimal$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(FormattedFloatingDecimal$1, init$, void)},
	{"initialValue", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(FormattedFloatingDecimal$1, initialValue, $Object*)},
	{}
};

$EnclosingMethodInfo _FormattedFloatingDecimal$1_EnclosingMethodInfo_ = {
	"jdk.internal.math.FormattedFloatingDecimal",
	nullptr,
	nullptr
};

$InnerClassInfo _FormattedFloatingDecimal$1_InnerClassesInfo_[] = {
	{"jdk.internal.math.FormattedFloatingDecimal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FormattedFloatingDecimal$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.math.FormattedFloatingDecimal$1",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_FormattedFloatingDecimal$1_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljava/lang/Object;>;",
	&_FormattedFloatingDecimal$1_EnclosingMethodInfo_,
	_FormattedFloatingDecimal$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.math.FormattedFloatingDecimal"
};

$Object* allocate$FormattedFloatingDecimal$1($Class* clazz) {
	return $of($alloc(FormattedFloatingDecimal$1));
}

void FormattedFloatingDecimal$1::init$() {
	$ThreadLocal::init$();
}

$Object* FormattedFloatingDecimal$1::initialValue() {
	return $of($new($chars, 20));
}

FormattedFloatingDecimal$1::FormattedFloatingDecimal$1() {
}

$Class* FormattedFloatingDecimal$1::load$($String* name, bool initialize) {
	$loadClass(FormattedFloatingDecimal$1, name, initialize, &_FormattedFloatingDecimal$1_ClassInfo_, allocate$FormattedFloatingDecimal$1);
	return class$;
}

$Class* FormattedFloatingDecimal$1::class$ = nullptr;

		} // math
	} // internal
} // jdk