#include <test/java/lang/invoke/CallStaticInitOrder$Init6.h>

#include <test/java/lang/invoke/CallStaticInitOrder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallStaticInitOrder = ::test::java::lang::invoke::CallStaticInitOrder;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$FieldInfo _CallStaticInitOrder$Init6_FieldInfo_[] = {
	{"pong", "I", nullptr, $STATIC, $staticField(CallStaticInitOrder$Init6, pong)},
	{}
};

$MethodInfo _CallStaticInitOrder$Init6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CallStaticInitOrder$Init6, init$, void)},
	{}
};

$InnerClassInfo _CallStaticInitOrder$Init6_InnerClassesInfo_[] = {
	{"test.java.lang.invoke.CallStaticInitOrder$Init6", "test.java.lang.invoke.CallStaticInitOrder", "Init6", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CallStaticInitOrder$Init6_ClassInfo_ = {
	$ACC_SUPER,
	"test.java.lang.invoke.CallStaticInitOrder$Init6",
	"java.lang.Object",
	nullptr,
	_CallStaticInitOrder$Init6_FieldInfo_,
	_CallStaticInitOrder$Init6_MethodInfo_,
	nullptr,
	nullptr,
	_CallStaticInitOrder$Init6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"test.java.lang.invoke.CallStaticInitOrder"
};

$Object* allocate$CallStaticInitOrder$Init6($Class* clazz) {
	return $of($alloc(CallStaticInitOrder$Init6));
}

int32_t CallStaticInitOrder$Init6::pong = 0;

void CallStaticInitOrder$Init6::init$() {
}

void clinit$CallStaticInitOrder$Init6($Class* class$) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init6Tick = $CallStaticInitOrder::tick("write pong -> Init6.<clinit>"_s);
	}
}

CallStaticInitOrder$Init6::CallStaticInitOrder$Init6() {
}

$Class* CallStaticInitOrder$Init6::load$($String* name, bool initialize) {
	$loadClass(CallStaticInitOrder$Init6, name, initialize, &_CallStaticInitOrder$Init6_ClassInfo_, clinit$CallStaticInitOrder$Init6, allocate$CallStaticInitOrder$Init6);
	return class$;
}

$Class* CallStaticInitOrder$Init6::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test