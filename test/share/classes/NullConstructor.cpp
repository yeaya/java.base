#include <NullConstructor.h>

#include <NullConstructor$1.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketImpl.h>
#include <jcpp.h>

using $NullConstructor$1 = ::NullConstructor$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketImpl = ::java::net::SocketImpl;

$MethodInfo _NullConstructor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullConstructor::*)()>(&NullConstructor::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullConstructor::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _NullConstructor_InnerClassesInfo_[] = {
	{"NullConstructor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NullConstructor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullConstructor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NullConstructor_MethodInfo_,
	nullptr,
	nullptr,
	_NullConstructor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NullConstructor$1"
};

$Object* allocate$NullConstructor($Class* clazz) {
	return $of($alloc(NullConstructor));
}

void NullConstructor::init$() {
}

void NullConstructor::main($StringArray* args) {
	try {
		$var($ServerSocket, server, $new($NullConstructor$1, ($SocketImpl*)nullptr));
		$throwNew($RuntimeException, "Test failed"_s);
	} catch ($NullPointerException& ee) {
	}
}

NullConstructor::NullConstructor() {
}

$Class* NullConstructor::load$($String* name, bool initialize) {
	$loadClass(NullConstructor, name, initialize, &_NullConstructor_ClassInfo_, allocate$NullConstructor);
	return class$;
}

$Class* NullConstructor::class$ = nullptr;