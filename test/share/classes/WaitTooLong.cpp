#include <WaitTooLong.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalMonitorStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalMonitorStateException = ::java::lang::IllegalMonitorStateException;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _WaitTooLong_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WaitTooLong::*)()>(&WaitTooLong::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WaitTooLong::main))},
	{"test", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&WaitTooLong::test))},
	{}
};

$ClassInfo _WaitTooLong_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WaitTooLong",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WaitTooLong_MethodInfo_
};

$Object* allocate$WaitTooLong($Class* clazz) {
	return $of($alloc(WaitTooLong));
}

void WaitTooLong::init$() {
}

void WaitTooLong::main($StringArray* args) {
	test(0);
	test(1);
	test(0x0007A120);
	test(0x000F423F);
}

void WaitTooLong::test(int32_t nanos) {
	$useLocalCurrentObjectStackCache();
	try {
		$load(WaitTooLong);
		$of(WaitTooLong::class$)->wait($Long::MAX_VALUE, nanos);
	} catch ($IllegalMonitorStateException&) {
		$catch();
	} catch ($IllegalArgumentException&) {
		$var($Exception, unexpected, $catch());
		$throwNew($RuntimeException, "Unexpected"_s, unexpected);
	} catch ($InterruptedException&) {
		$var($Exception, unexpected, $catch());
		$throwNew($RuntimeException, "Unexpected"_s, unexpected);
	}
}

WaitTooLong::WaitTooLong() {
}

$Class* WaitTooLong::load$($String* name, bool initialize) {
	$loadClass(WaitTooLong, name, initialize, &_WaitTooLong_ClassInfo_, allocate$WaitTooLong);
	return class$;
}

$Class* WaitTooLong::class$ = nullptr;