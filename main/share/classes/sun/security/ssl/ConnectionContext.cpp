#include <sun/security/ssl/ConnectionContext.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace security {
		namespace ssl {

$ClassInfo _ConnectionContext_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.ConnectionContext"
};

$Object* allocate$ConnectionContext($Class* clazz) {
	return $of($alloc(ConnectionContext));
}

$Class* ConnectionContext::load$($String* name, bool initialize) {
	$loadClass(ConnectionContext, name, initialize, &_ConnectionContext_ClassInfo_, allocate$ConnectionContext);
	return class$;
}

$Class* ConnectionContext::class$ = nullptr;

		} // ssl
	} // security
} // sun