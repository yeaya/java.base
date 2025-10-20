#include <CheckProvider.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;

$MethodInfo _CheckProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CheckProvider::*)()>(&CheckProvider::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CheckProvider::main))},
	{}
};

$ClassInfo _CheckProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CheckProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CheckProvider_MethodInfo_
};

$Object* allocate$CheckProvider($Class* clazz) {
	return $of($alloc(CheckProvider));
}

void CheckProvider::init$() {
}

void CheckProvider::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$Class* c = $nc($of($($AsynchronousChannelProvider::provider())))->getClass();
	$var($String, expected, $nc(args)->get(0));
	$var($String, actual, $nc(c)->getName());
	if (!$nc(actual)->equals(expected)) {
		$throwNew($RuntimeException, $$str({"Provider is of type \'"_s, actual, "\', expected \'"_s, expected, "\'"_s}));
	}
}

CheckProvider::CheckProvider() {
}

$Class* CheckProvider::load$($String* name, bool initialize) {
	$loadClass(CheckProvider, name, initialize, &_CheckProvider_ClassInfo_, allocate$CheckProvider);
	return class$;
}

$Class* CheckProvider::class$ = nullptr;