#include <TestASBase.h>

#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestASBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestASBase::*)()>(&TestASBase::init$))},
	{"get", "()Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TestASBase_ClassInfo_ = {
	$ACC_SUPER,
	"TestASBase",
	"java.lang.Object",
	"TestASIF",
	nullptr,
	_TestASBase_MethodInfo_
};

$Object* allocate$TestASBase($Class* clazz) {
	return $of($alloc(TestASBase));
}

void TestASBase::init$() {
}

$CharSequence* TestASBase::get() {
	return ""_s;
}

TestASBase::TestASBase() {
}

$Class* TestASBase::load$($String* name, bool initialize) {
	$loadClass(TestASBase, name, initialize, &_TestASBase_ClassInfo_, allocate$TestASBase);
	return class$;
}

$Class* TestASBase::class$ = nullptr;