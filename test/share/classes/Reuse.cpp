#include <Reuse.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/BindException.h>
#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BindException = ::java::net::BindException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $MulticastSocket = ::java::net::MulticastSocket;

$MethodInfo _Reuse_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Reuse::*)()>(&Reuse::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Reuse::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Reuse_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Reuse",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Reuse_MethodInfo_
};

$Object* allocate$Reuse($Class* clazz) {
	return $of($alloc(Reuse));
}

void Reuse::init$() {
}

void Reuse::main($StringArray* args) {
	$var($MulticastSocket, s1, nullptr);
	$var($MulticastSocket, s2, nullptr);
	try {
		$assign(s1, $new($MulticastSocket, 4160));
		$assign(s2, $new($MulticastSocket, 4160));
		s1->close();
		s2->close();
	} catch ($BindException&) {
		$var($BindException, e, $catch());
		$throwNew($RuntimeException, "MulticastSocket do no set SO_REUSEADDR"_s);
	}
}

Reuse::Reuse() {
}

$Class* Reuse::load$($String* name, bool initialize) {
	$loadClass(Reuse, name, initialize, &_Reuse_ClassInfo_, allocate$Reuse);
	return class$;
}

$Class* Reuse::class$ = nullptr;