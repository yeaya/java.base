#include <NullConstructor$1.h>

#include <NullConstructor.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketImpl = ::java::net::SocketImpl;

$MethodInfo _NullConstructor$1_MethodInfo_[] = {
	{"<init>", "(Ljava/net/SocketImpl;)V", nullptr, 0, $method(static_cast<void(NullConstructor$1::*)($SocketImpl*)>(&NullConstructor$1::init$))},
	{}
};

$EnclosingMethodInfo _NullConstructor$1_EnclosingMethodInfo_ = {
	"NullConstructor",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _NullConstructor$1_InnerClassesInfo_[] = {
	{"NullConstructor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NullConstructor$1_ClassInfo_ = {
	$ACC_SUPER,
	"NullConstructor$1",
	"java.net.ServerSocket",
	nullptr,
	nullptr,
	_NullConstructor$1_MethodInfo_,
	nullptr,
	&_NullConstructor$1_EnclosingMethodInfo_,
	_NullConstructor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NullConstructor"
};

$Object* allocate$NullConstructor$1($Class* clazz) {
	return $of($alloc(NullConstructor$1));
}

void NullConstructor$1::init$($SocketImpl* arg0) {
	$ServerSocket::init$(arg0);
}

NullConstructor$1::NullConstructor$1() {
}

$Class* NullConstructor$1::load$($String* name, bool initialize) {
	$loadClass(NullConstructor$1, name, initialize, &_NullConstructor$1_ClassInfo_, allocate$NullConstructor$1);
	return class$;
}

$Class* NullConstructor$1::class$ = nullptr;