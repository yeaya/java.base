#include <test/java/lang/invoke/CallStaticInitOrder$Init2.h>

#include <test/java/lang/invoke/CallStaticInitOrder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallStaticInitOrder = ::test::java::lang::invoke::CallStaticInitOrder;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$MethodInfo _CallStaticInitOrder$Init2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CallStaticInitOrder$Init2::*)()>(&CallStaticInitOrder$Init2::init$))},
	{"bar", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&CallStaticInitOrder$Init2::bar))},
	{}
};

$InnerClassInfo _CallStaticInitOrder$Init2_InnerClassesInfo_[] = {
	{"test.java.lang.invoke.CallStaticInitOrder$Init2", "test.java.lang.invoke.CallStaticInitOrder", "Init2", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CallStaticInitOrder$Init2_ClassInfo_ = {
	$ACC_SUPER,
	"test.java.lang.invoke.CallStaticInitOrder$Init2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CallStaticInitOrder$Init2_MethodInfo_,
	nullptr,
	nullptr,
	_CallStaticInitOrder$Init2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"test.java.lang.invoke.CallStaticInitOrder"
};

$Object* allocate$CallStaticInitOrder$Init2($Class* clazz) {
	return $of($alloc(CallStaticInitOrder$Init2));
}

void CallStaticInitOrder$Init2::init$() {
}

int32_t CallStaticInitOrder$Init2::bar() {
	$init(CallStaticInitOrder$Init2);
	$init($CallStaticInitOrder);
	return $CallStaticInitOrder::Init2Tick;
}

void clinit$CallStaticInitOrder$Init2($Class* class$) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init2Tick = $CallStaticInitOrder::tick("bar -> Init2.<clinit>"_s);
	}
}

CallStaticInitOrder$Init2::CallStaticInitOrder$Init2() {
}

$Class* CallStaticInitOrder$Init2::load$($String* name, bool initialize) {
	$loadClass(CallStaticInitOrder$Init2, name, initialize, &_CallStaticInitOrder$Init2_ClassInfo_, clinit$CallStaticInitOrder$Init2, allocate$CallStaticInitOrder$Init2);
	return class$;
}

$Class* CallStaticInitOrder$Init2::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test