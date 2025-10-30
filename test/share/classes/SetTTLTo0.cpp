#include <SetTTLTo0.h>

#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $MulticastSocket = ::java::net::MulticastSocket;

$MethodInfo _SetTTLTo0_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetTTLTo0::*)()>(&SetTTLTo0::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SetTTLTo0::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SetTTLTo0_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SetTTLTo0",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SetTTLTo0_MethodInfo_
};

$Object* allocate$SetTTLTo0($Class* clazz) {
	return $of($alloc(SetTTLTo0));
}

void SetTTLTo0::init$() {
}

void SetTTLTo0::main($StringArray* args) {
	$var($MulticastSocket, soc, nullptr);
	try {
		$assign(soc, $new($MulticastSocket));
	} catch ($Exception& e) {
		$throwNew($Exception, "Unexpected Exception"_s);
	}
	$nc(soc)->setTTL((int8_t)0);
	soc->setTimeToLive(0);
}

SetTTLTo0::SetTTLTo0() {
}

$Class* SetTTLTo0::load$($String* name, bool initialize) {
	$loadClass(SetTTLTo0, name, initialize, &_SetTTLTo0_ClassInfo_, allocate$SetTTLTo0);
	return class$;
}

$Class* SetTTLTo0::class$ = nullptr;