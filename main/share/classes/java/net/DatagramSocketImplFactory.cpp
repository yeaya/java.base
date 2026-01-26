#include <java/net/DatagramSocketImplFactory.h>

#include <java/net/DatagramSocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocketImpl = ::java::net::DatagramSocketImpl;

namespace java {
	namespace net {

$MethodInfo _DatagramSocketImplFactory_MethodInfo_[] = {
	{"createDatagramSocketImpl", "()Ljava/net/DatagramSocketImpl;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DatagramSocketImplFactory, createDatagramSocketImpl, $DatagramSocketImpl*)},
	{}
};

$ClassInfo _DatagramSocketImplFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.net.DatagramSocketImplFactory",
	nullptr,
	nullptr,
	nullptr,
	_DatagramSocketImplFactory_MethodInfo_
};

$Object* allocate$DatagramSocketImplFactory($Class* clazz) {
	return $of($alloc(DatagramSocketImplFactory));
}

$Class* DatagramSocketImplFactory::load$($String* name, bool initialize) {
	$loadClass(DatagramSocketImplFactory, name, initialize, &_DatagramSocketImplFactory_ClassInfo_, allocate$DatagramSocketImplFactory);
	return class$;
}

$Class* DatagramSocketImplFactory::class$ = nullptr;

	} // net
} // java