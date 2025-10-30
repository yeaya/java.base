#include <java/net/SocketOption.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$MethodInfo _SocketOption_MethodInfo_[] = {
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<TT;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SocketOption_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.net.SocketOption",
	nullptr,
	nullptr,
	nullptr,
	_SocketOption_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$SocketOption($Class* clazz) {
	return $of($alloc(SocketOption));
}

$Class* SocketOption::load$($String* name, bool initialize) {
	$loadClass(SocketOption, name, initialize, &_SocketOption_ClassInfo_, allocate$SocketOption);
	return class$;
}

$Class* SocketOption::class$ = nullptr;

	} // net
} // java