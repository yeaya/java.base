#include <javax/net/ssl/KeyManager.h>

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

$ClassInfo _KeyManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.net.ssl.KeyManager"
};

$Object* allocate$KeyManager($Class* clazz) {
	return $of($alloc(KeyManager));
}

$Class* KeyManager::load$($String* name, bool initialize) {
	$loadClass(KeyManager, name, initialize, &_KeyManager_ClassInfo_, allocate$KeyManager);
	return class$;
}

$Class* KeyManager::class$ = nullptr;

		} // ssl
	} // net
} // javax