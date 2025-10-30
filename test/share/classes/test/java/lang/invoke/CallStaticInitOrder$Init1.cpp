#include <test/java/lang/invoke/CallStaticInitOrder$Init1.h>

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

$MethodInfo _CallStaticInitOrder$Init1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CallStaticInitOrder$Init1::*)()>(&CallStaticInitOrder$Init1::init$))},
	{"foo", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&CallStaticInitOrder$Init1::foo))},
	{}
};

$InnerClassInfo _CallStaticInitOrder$Init1_InnerClassesInfo_[] = {
	{"test.java.lang.invoke.CallStaticInitOrder$Init1", "test.java.lang.invoke.CallStaticInitOrder", "Init1", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CallStaticInitOrder$Init1_ClassInfo_ = {
	$ACC_SUPER,
	"test.java.lang.invoke.CallStaticInitOrder$Init1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CallStaticInitOrder$Init1_MethodInfo_,
	nullptr,
	nullptr,
	_CallStaticInitOrder$Init1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"test.java.lang.invoke.CallStaticInitOrder"
};

$Object* allocate$CallStaticInitOrder$Init1($Class* clazz) {
	return $of($alloc(CallStaticInitOrder$Init1));
}

void CallStaticInitOrder$Init1::init$() {
}

int32_t CallStaticInitOrder$Init1::foo() {
	$init(CallStaticInitOrder$Init1);
	$init($CallStaticInitOrder);
	return $CallStaticInitOrder::Init1Tick;
}

void clinit$CallStaticInitOrder$Init1($Class* class$) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init1Tick = $CallStaticInitOrder::tick("foo -> Init1.<clinit>"_s);
	}
}

CallStaticInitOrder$Init1::CallStaticInitOrder$Init1() {
}

$Class* CallStaticInitOrder$Init1::load$($String* name, bool initialize) {
	$loadClass(CallStaticInitOrder$Init1, name, initialize, &_CallStaticInitOrder$Init1_ClassInfo_, clinit$CallStaticInitOrder$Init1, allocate$CallStaticInitOrder$Init1);
	return class$;
}

$Class* CallStaticInitOrder$Init1::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test