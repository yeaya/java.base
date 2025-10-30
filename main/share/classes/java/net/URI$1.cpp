#include <java/net/URI$1.h>

#include <java/net/URI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $JavaNetUriAccess = ::jdk::internal::access::JavaNetUriAccess;

namespace java {
	namespace net {

$MethodInfo _URI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(URI$1::*)()>(&URI$1::init$))},
	{"create", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URI;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URI$1_EnclosingMethodInfo_ = {
	"java.net.URI",
	nullptr,
	nullptr
};

$InnerClassInfo _URI$1_InnerClassesInfo_[] = {
	{"java.net.URI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URI$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URI$1",
	"java.lang.Object",
	"jdk.internal.access.JavaNetUriAccess",
	nullptr,
	_URI$1_MethodInfo_,
	nullptr,
	&_URI$1_EnclosingMethodInfo_,
	_URI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URI"
};

$Object* allocate$URI$1($Class* clazz) {
	return $of($alloc(URI$1));
}

void URI$1::init$() {
}

$URI* URI$1::create($String* scheme, $String* path) {
	return $new($URI, scheme, path);
}

URI$1::URI$1() {
}

$Class* URI$1::load$($String* name, bool initialize) {
	$loadClass(URI$1, name, initialize, &_URI$1_ClassInfo_, allocate$URI$1);
	return class$;
}

$Class* URI$1::class$ = nullptr;

	} // net
} // java