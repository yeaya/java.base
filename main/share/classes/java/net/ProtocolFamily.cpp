#include <java/net/ProtocolFamily.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$MethodInfo _ProtocolFamily_MethodInfo_[] = {
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProtocolFamily, name, $String*)},
	{}
};

$ClassInfo _ProtocolFamily_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.net.ProtocolFamily",
	nullptr,
	nullptr,
	nullptr,
	_ProtocolFamily_MethodInfo_
};

$Object* allocate$ProtocolFamily($Class* clazz) {
	return $of($alloc(ProtocolFamily));
}

$Class* ProtocolFamily::load$($String* name, bool initialize) {
	$loadClass(ProtocolFamily, name, initialize, &_ProtocolFamily_ClassInfo_, allocate$ProtocolFamily);
	return class$;
}

$Class* ProtocolFamily::class$ = nullptr;

	} // net
} // java