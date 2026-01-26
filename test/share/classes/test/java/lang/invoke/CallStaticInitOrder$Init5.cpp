#include <test/java/lang/invoke/CallStaticInitOrder$Init5.h>

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

$FieldInfo _CallStaticInitOrder$Init5_FieldInfo_[] = {
	{"bang", "I", nullptr, $STATIC, $staticField(CallStaticInitOrder$Init5, bang)},
	{}
};

$MethodInfo _CallStaticInitOrder$Init5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CallStaticInitOrder$Init5, init$, void)},
	{}
};

$InnerClassInfo _CallStaticInitOrder$Init5_InnerClassesInfo_[] = {
	{"test.java.lang.invoke.CallStaticInitOrder$Init5", "test.java.lang.invoke.CallStaticInitOrder", "Init5", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CallStaticInitOrder$Init5_ClassInfo_ = {
	$ACC_SUPER,
	"test.java.lang.invoke.CallStaticInitOrder$Init5",
	"java.lang.Object",
	nullptr,
	_CallStaticInitOrder$Init5_FieldInfo_,
	_CallStaticInitOrder$Init5_MethodInfo_,
	nullptr,
	nullptr,
	_CallStaticInitOrder$Init5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"test.java.lang.invoke.CallStaticInitOrder"
};

$Object* allocate$CallStaticInitOrder$Init5($Class* clazz) {
	return $of($alloc(CallStaticInitOrder$Init5));
}

int32_t CallStaticInitOrder$Init5::bang = 0;

void CallStaticInitOrder$Init5::init$() {
}

void clinit$CallStaticInitOrder$Init5($Class* class$) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init5Tick = $CallStaticInitOrder::tick("read bang -> Init5.<clinit>"_s);
	}
	$init($CallStaticInitOrder);
	CallStaticInitOrder$Init5::bang = $CallStaticInitOrder::Init5Tick;
}

CallStaticInitOrder$Init5::CallStaticInitOrder$Init5() {
}

$Class* CallStaticInitOrder$Init5::load$($String* name, bool initialize) {
	$loadClass(CallStaticInitOrder$Init5, name, initialize, &_CallStaticInitOrder$Init5_ClassInfo_, clinit$CallStaticInitOrder$Init5, allocate$CallStaticInitOrder$Init5);
	return class$;
}

$Class* CallStaticInitOrder$Init5::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test