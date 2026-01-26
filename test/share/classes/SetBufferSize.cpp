#include <SetBufferSize.h>

#include <java/net/DatagramSocket.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocket = ::java::net::DatagramSocket;

$MethodInfo _SetBufferSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SetBufferSize, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetBufferSize, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _SetBufferSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SetBufferSize",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SetBufferSize_MethodInfo_
};

$Object* allocate$SetBufferSize($Class* clazz) {
	return $of($alloc(SetBufferSize));
}

void SetBufferSize::init$() {
}

void SetBufferSize::main($StringArray* args) {
	$var($DatagramSocket, soc, $new($DatagramSocket));
	soc->setReceiveBufferSize($Integer::MAX_VALUE);
}

SetBufferSize::SetBufferSize() {
}

$Class* SetBufferSize::load$($String* name, bool initialize) {
	$loadClass(SetBufferSize, name, initialize, &_SetBufferSize_ClassInfo_, allocate$SetBufferSize);
	return class$;
}

$Class* SetBufferSize::class$ = nullptr;