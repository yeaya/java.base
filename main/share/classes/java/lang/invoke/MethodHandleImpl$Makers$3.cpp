#include <java/lang/invoke/MethodHandleImpl$Makers$3.h>

#include <java/lang/ClassValue.h>
#include <java/lang/invoke/MethodHandle.h>
#include <jcpp.h>

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _MethodHandleImpl$Makers$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MethodHandleImpl$Makers$3::*)()>(&MethodHandleImpl$Makers$3::init$))},
	{"computeValue", "(Ljava/lang/Class;)[Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)[Ljava/lang/invoke/MethodHandle;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _MethodHandleImpl$Makers$3_EnclosingMethodInfo_ = {
	"java.lang.invoke.MethodHandleImpl$Makers",
	nullptr,
	nullptr
};

$InnerClassInfo _MethodHandleImpl$Makers$3_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$Makers", "java.lang.invoke.MethodHandleImpl", "Makers", $PRIVATE | $STATIC | $FINAL},
	{"java.lang.invoke.MethodHandleImpl$Makers$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandleImpl$Makers$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$Makers$3",
	"java.lang.ClassValue",
	nullptr,
	nullptr,
	_MethodHandleImpl$Makers$3_MethodInfo_,
	"Ljava/lang/ClassValue<[Ljava/lang/invoke/MethodHandle;>;",
	&_MethodHandleImpl$Makers$3_EnclosingMethodInfo_,
	_MethodHandleImpl$Makers$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$Makers$3($Class* clazz) {
	return $of($alloc(MethodHandleImpl$Makers$3));
}

void MethodHandleImpl$Makers$3::init$() {
	$ClassValue::init$();
}

$Object* MethodHandleImpl$Makers$3::computeValue($Class* type) {
	return $of($new($MethodHandleArray, 255 + 1));
}

MethodHandleImpl$Makers$3::MethodHandleImpl$Makers$3() {
}

$Class* MethodHandleImpl$Makers$3::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$Makers$3, name, initialize, &_MethodHandleImpl$Makers$3_ClassInfo_, allocate$MethodHandleImpl$Makers$3);
	return class$;
}

$Class* MethodHandleImpl$Makers$3::class$ = nullptr;

		} // invoke
	} // lang
} // java