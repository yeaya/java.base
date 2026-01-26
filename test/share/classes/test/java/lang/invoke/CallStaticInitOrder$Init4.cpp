#include <test/java/lang/invoke/CallStaticInitOrder$Init4.h>

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

$MethodInfo _CallStaticInitOrder$Init4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CallStaticInitOrder$Init4, init$, void)},
	{"bat", "()I", nullptr, $STATIC, $staticMethod(CallStaticInitOrder$Init4, bat, int32_t)},
	{}
};

$InnerClassInfo _CallStaticInitOrder$Init4_InnerClassesInfo_[] = {
	{"test.java.lang.invoke.CallStaticInitOrder$Init4", "test.java.lang.invoke.CallStaticInitOrder", "Init4", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CallStaticInitOrder$Init4_ClassInfo_ = {
	$ACC_SUPER,
	"test.java.lang.invoke.CallStaticInitOrder$Init4",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CallStaticInitOrder$Init4_MethodInfo_,
	nullptr,
	nullptr,
	_CallStaticInitOrder$Init4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"test.java.lang.invoke.CallStaticInitOrder"
};

$Object* allocate$CallStaticInitOrder$Init4($Class* clazz) {
	return $of($alloc(CallStaticInitOrder$Init4));
}

void CallStaticInitOrder$Init4::init$() {
}

int32_t CallStaticInitOrder$Init4::bat() {
	$init(CallStaticInitOrder$Init4);
	$init($CallStaticInitOrder);
	return $CallStaticInitOrder::Init4Tick;
}

void clinit$CallStaticInitOrder$Init4($Class* class$) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init4Tick = $CallStaticInitOrder::tick("bat -> Init4.<clinit>"_s);
	}
}

CallStaticInitOrder$Init4::CallStaticInitOrder$Init4() {
}

$Class* CallStaticInitOrder$Init4::load$($String* name, bool initialize) {
	$loadClass(CallStaticInitOrder$Init4, name, initialize, &_CallStaticInitOrder$Init4_ClassInfo_, clinit$CallStaticInitOrder$Init4, allocate$CallStaticInitOrder$Init4);
	return class$;
}

$Class* CallStaticInitOrder$Init4::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test