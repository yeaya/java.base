#include <javax/net/ssl/ManagerFactoryParameters.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace net {
		namespace ssl {

$ClassInfo _ManagerFactoryParameters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.net.ssl.ManagerFactoryParameters"
};

$Object* allocate$ManagerFactoryParameters($Class* clazz) {
	return $of($alloc(ManagerFactoryParameters));
}

$Class* ManagerFactoryParameters::load$($String* name, bool initialize) {
	$loadClass(ManagerFactoryParameters, name, initialize, &_ManagerFactoryParameters_ClassInfo_, allocate$ManagerFactoryParameters);
	return class$;
}

$Class* ManagerFactoryParameters::class$ = nullptr;

		} // ssl
	} // net
} // javax