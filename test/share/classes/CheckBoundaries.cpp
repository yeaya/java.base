#include <CheckBoundaries.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/DatagramPacket.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;

$MethodInfo _CheckBoundaries_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CheckBoundaries::*)()>(&CheckBoundaries::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CheckBoundaries::main))},
	{}
};

$ClassInfo _CheckBoundaries_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CheckBoundaries",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CheckBoundaries_MethodInfo_
};

$Object* allocate$CheckBoundaries($Class* clazz) {
	return $of($alloc(CheckBoundaries));
}

void CheckBoundaries::init$() {
}

void CheckBoundaries::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	bool exception = false;
	try {
		int32_t offset = $Integer::MAX_VALUE;
		int32_t length = 1;
		$new($DatagramPacket, $$new($bytes, 1024), offset, length);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, e, $catch());
		exception = true;
	}
	if (!exception) {
		$throwNew($RuntimeException, "IllegalArgumentException not thrown!"_s);
	}
}

CheckBoundaries::CheckBoundaries() {
}

$Class* CheckBoundaries::load$($String* name, bool initialize) {
	$loadClass(CheckBoundaries, name, initialize, &_CheckBoundaries_ClassInfo_, allocate$CheckBoundaries);
	return class$;
}

$Class* CheckBoundaries::class$ = nullptr;