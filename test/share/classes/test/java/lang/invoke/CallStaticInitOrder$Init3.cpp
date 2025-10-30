#include <test/java/lang/invoke/CallStaticInitOrder$Init3.h>

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

$MethodInfo _CallStaticInitOrder$Init3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CallStaticInitOrder$Init3::*)()>(&CallStaticInitOrder$Init3::init$))},
	{"baz", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&CallStaticInitOrder$Init3::baz))},
	{}
};

$InnerClassInfo _CallStaticInitOrder$Init3_InnerClassesInfo_[] = {
	{"test.java.lang.invoke.CallStaticInitOrder$Init3", "test.java.lang.invoke.CallStaticInitOrder", "Init3", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CallStaticInitOrder$Init3_ClassInfo_ = {
	$ACC_SUPER,
	"test.java.lang.invoke.CallStaticInitOrder$Init3",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CallStaticInitOrder$Init3_MethodInfo_,
	nullptr,
	nullptr,
	_CallStaticInitOrder$Init3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"test.java.lang.invoke.CallStaticInitOrder"
};

$Object* allocate$CallStaticInitOrder$Init3($Class* clazz) {
	return $of($alloc(CallStaticInitOrder$Init3));
}

void CallStaticInitOrder$Init3::init$() {
}

int32_t CallStaticInitOrder$Init3::baz() {
	$init(CallStaticInitOrder$Init3);
	$init($CallStaticInitOrder);
	return $CallStaticInitOrder::Init3Tick;
}

void clinit$CallStaticInitOrder$Init3($Class* class$) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init3Tick = $CallStaticInitOrder::tick("baz -> Init3.<clinit>"_s);
	}
}

CallStaticInitOrder$Init3::CallStaticInitOrder$Init3() {
}

$Class* CallStaticInitOrder$Init3::load$($String* name, bool initialize) {
	$loadClass(CallStaticInitOrder$Init3, name, initialize, &_CallStaticInitOrder$Init3_ClassInfo_, clinit$CallStaticInitOrder$Init3, allocate$CallStaticInitOrder$Init3);
	return class$;
}

$Class* CallStaticInitOrder$Init3::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test