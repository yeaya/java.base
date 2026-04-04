#include <sun/security/ssl/SSLContextImpl$DefaultManagersHolder$1.h>
#include <java/security/KeyStore.h>
#include <java/util/Map.h>
#include <sun/security/ssl/SSLContextImpl$DefaultManagersHolder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $Map = ::java::util::Map;

namespace sun {
	namespace security {
		namespace ssl {

void SSLContextImpl$DefaultManagersHolder$1::init$($Map* val$props) {
	$set(this, val$props, val$props);
}

$Object* SSLContextImpl$DefaultManagersHolder$1::run() {
	$useLocalObjectStack();
	$nc(this->val$props)->put("keyStore"_s, $($System::getProperty("javax.net.ssl.keyStore"_s, ""_s)));
	this->val$props->put("keyStoreType"_s, $($System::getProperty("javax.net.ssl.keyStoreType"_s, $($KeyStore::getDefaultType()))));
	this->val$props->put("keyStoreProvider"_s, $($System::getProperty("javax.net.ssl.keyStoreProvider"_s, ""_s)));
	this->val$props->put("keyStorePasswd"_s, $($System::getProperty("javax.net.ssl.keyStorePassword"_s, ""_s)));
	return nullptr;
}

SSLContextImpl$DefaultManagersHolder$1::SSLContextImpl$DefaultManagersHolder$1() {
}

$Class* SSLContextImpl$DefaultManagersHolder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$props", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(SSLContextImpl$DefaultManagersHolder$1, val$props)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;)V", "()V", 0, $method(SSLContextImpl$DefaultManagersHolder$1, init$, void, $Map*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SSLContextImpl$DefaultManagersHolder$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.SSLContextImpl$DefaultManagersHolder",
		"getKeyManagers",
		"()[Ljavax/net/ssl/KeyManager;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLContextImpl$DefaultManagersHolder", "sun.security.ssl.SSLContextImpl", "DefaultManagersHolder", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLContextImpl$DefaultManagersHolder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLContextImpl$DefaultManagersHolder$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLContextImpl"
	};
	$loadClass(SSLContextImpl$DefaultManagersHolder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLContextImpl$DefaultManagersHolder$1);
	});
	return class$;
}

$Class* SSLContextImpl$DefaultManagersHolder$1::class$ = nullptr;

		} // ssl
	} // security
} // sun