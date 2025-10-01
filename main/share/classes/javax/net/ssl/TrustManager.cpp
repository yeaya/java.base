#include <javax/net/ssl/TrustManager.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace net {
		namespace ssl {

$ClassInfo _TrustManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.net.ssl.TrustManager"
};

$Object* allocate$TrustManager($Class* clazz) {
	return $of($alloc(TrustManager));
}

$Class* TrustManager::load$($String* name, bool initialize) {
	$loadClass(TrustManager, name, initialize, &_TrustManager_ClassInfo_, allocate$TrustManager);
	return class$;
}

$Class* TrustManager::class$ = nullptr;

		} // ssl
	} // net
} // javax