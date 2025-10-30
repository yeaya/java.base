#include <jdk/internal/math/FloatingDecimal$1.h>

#include <java/lang/ThreadLocal.h>
#include <jdk/internal/math/FloatingDecimal$BinaryToASCIIBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $FloatingDecimal$BinaryToASCIIBuffer = ::jdk::internal::math::FloatingDecimal$BinaryToASCIIBuffer;

namespace jdk {
	namespace internal {
		namespace math {

$MethodInfo _FloatingDecimal$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FloatingDecimal$1::*)()>(&FloatingDecimal$1::init$))},
	{"initialValue", "()Ljdk/internal/math/FloatingDecimal$BinaryToASCIIBuffer;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _FloatingDecimal$1_EnclosingMethodInfo_ = {
	"jdk.internal.math.FloatingDecimal",
	nullptr,
	nullptr
};

$InnerClassInfo _FloatingDecimal$1_InnerClassesInfo_[] = {
	{"jdk.internal.math.FloatingDecimal$1", nullptr, nullptr, 0},
	{"jdk.internal.math.FloatingDecimal$BinaryToASCIIBuffer", "jdk.internal.math.FloatingDecimal", "BinaryToASCIIBuffer", $STATIC},
	{}
};

$ClassInfo _FloatingDecimal$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.math.FloatingDecimal$1",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_FloatingDecimal$1_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljdk/internal/math/FloatingDecimal$BinaryToASCIIBuffer;>;",
	&_FloatingDecimal$1_EnclosingMethodInfo_,
	_FloatingDecimal$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.math.FloatingDecimal"
};

$Object* allocate$FloatingDecimal$1($Class* clazz) {
	return $of($alloc(FloatingDecimal$1));
}

void FloatingDecimal$1::init$() {
	$ThreadLocal::init$();
}

$Object* FloatingDecimal$1::initialValue() {
	return $of($new($FloatingDecimal$BinaryToASCIIBuffer));
}

FloatingDecimal$1::FloatingDecimal$1() {
}

$Class* FloatingDecimal$1::load$($String* name, bool initialize) {
	$loadClass(FloatingDecimal$1, name, initialize, &_FloatingDecimal$1_ClassInfo_, allocate$FloatingDecimal$1);
	return class$;
}

$Class* FloatingDecimal$1::class$ = nullptr;

		} // math
	} // internal
} // jdk