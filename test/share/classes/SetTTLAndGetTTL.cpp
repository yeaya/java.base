#include <SetTTLAndGetTTL.h>

#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $MulticastSocket = ::java::net::MulticastSocket;

$MethodInfo _SetTTLAndGetTTL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SetTTLAndGetTTL, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetTTLAndGetTTL, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _SetTTLAndGetTTL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SetTTLAndGetTTL",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SetTTLAndGetTTL_MethodInfo_
};

$Object* allocate$SetTTLAndGetTTL($Class* clazz) {
	return $of($alloc(SetTTLAndGetTTL));
}

void SetTTLAndGetTTL::init$() {
}

void SetTTLAndGetTTL::main($StringArray* args) {
	$var($MulticastSocket, soc, nullptr);
	try {
		$assign(soc, $new($MulticastSocket));
	} catch ($Exception& e) {
		$throwNew($Exception, "Unexpected Exception"_s);
	}
	$nc(soc)->setTTL((int8_t)200);
	int8_t ttlValue = soc->getTTL();
	if (ttlValue != (int8_t)200) {
		$throwNew($Exception, "setTTL/getTTL is broken"_s);
	}
}

SetTTLAndGetTTL::SetTTLAndGetTTL() {
}

$Class* SetTTLAndGetTTL::load$($String* name, bool initialize) {
	$loadClass(SetTTLAndGetTTL, name, initialize, &_SetTTLAndGetTTL_ClassInfo_, allocate$SetTTLAndGetTTL);
	return class$;
}

$Class* SetTTLAndGetTTL::class$ = nullptr;