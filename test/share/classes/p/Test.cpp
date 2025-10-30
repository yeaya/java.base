#include <p/Test.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

namespace p {

$MethodInfo _Test_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test::*)()>(&Test::init$))},
	{"count", "()I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&Test::count))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_count 1

$ClassInfo _Test_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.Test",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test_MethodInfo_
};

$Object* allocate$Test($Class* clazz) {
	return $of($alloc(Test));
}

void Test::init$() {
}

int32_t Test::count() {
	$init(Test);
	int32_t $ret = 0;
	$prepareNativeStatic(Test, count, int32_t);
	$ret = $invokeNativeStatic(Test, count);
	$finishNativeStatic();
	return $ret;
}

void Test::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$System::loadLibrary("nativeLibraryTest"_s);
	if (count() != 1) {
		$throwNew($RuntimeException, $$str({"Expected count = 1 but got "_s, $$str(count())}));
	}
}

Test::Test() {
}

$Class* Test::load$($String* name, bool initialize) {
	$loadClass(Test, name, initialize, &_Test_ClassInfo_, allocate$Test);
	return class$;
}

$Class* Test::class$ = nullptr;

} // p