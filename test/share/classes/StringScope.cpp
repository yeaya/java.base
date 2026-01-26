#include <StringScope.h>

#include <java/net/Inet6Address.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $Enumeration = ::java::util::Enumeration;

$MethodInfo _StringScope_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringScope, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringScope, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _StringScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StringScope",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StringScope_MethodInfo_
};

$Object* allocate$StringScope($Class* clazz) {
	return $of($alloc(StringScope));
}

void StringScope::init$() {
}

void StringScope::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, e, $NetworkInterface::getNetworkInterfaces());
	while ($nc(e)->hasMoreElements()) {
		$var($NetworkInterface, iface, $cast($NetworkInterface, e->nextElement()));
		$var($Enumeration, iadrs, $nc(iface)->getInetAddresses());
		while ($nc(iadrs)->hasMoreElements()) {
			$var($InetAddress, iadr, $cast($InetAddress, iadrs->nextElement()));
			if ($instanceOf($Inet6Address, iadr)) {
				$var($Inet6Address, i6adr, $cast($Inet6Address, iadr));
				$var($NetworkInterface, nif, $nc(i6adr)->getScopedInterface());
				if (nif == nullptr) {
					continue;
				}
				$var($String, nifName, $nc(nif)->getName());
				$var($String, i6adrHostAddress, i6adr->getHostAddress());
				int32_t index = $nc(i6adrHostAddress)->indexOf((int32_t)u'%');
				$var($String, i6adrScopeName, i6adrHostAddress->substring(index + 1));
				if (!$nc(nifName)->equals(i6adrScopeName)) {
					$throwNew($RuntimeException, $$str({"Expected nifName ["_s, nifName, "], to equal i6adrScopeName ["_s, i6adrScopeName, "] "_s}));
				}
			}
		}
	}
}

StringScope::StringScope() {
}

$Class* StringScope::load$($String* name, bool initialize) {
	$loadClass(StringScope, name, initialize, &_StringScope_ClassInfo_, allocate$StringScope);
	return class$;
}

$Class* StringScope::class$ = nullptr;