#include <CheckBoundaries.h>

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
	{"<init>", "()V", nullptr, $PUBLIC, $method(CheckBoundaries, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CheckBoundaries, main, void, $StringArray*)},
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
	bool exception = false;
	try {
		int32_t offset = $Integer::MAX_VALUE;
		int32_t length = 1;
		$new($DatagramPacket, $$new($bytes, 1024), offset, length);
	} catch ($IllegalArgumentException& e) {
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