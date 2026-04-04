#include <sun/security/ssl/SSLContextImpl$DefaultManagersHolder$2.h>
#include <java/io/FileInputStream.h>
#include <sun/security/ssl/SSLContextImpl$DefaultManagersHolder.h>
#include <jcpp.h>

using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

void SSLContextImpl$DefaultManagersHolder$2::init$($String* val$defaultKeyStore) {
	$set(this, val$defaultKeyStore, val$defaultKeyStore);
}

$Object* SSLContextImpl$DefaultManagersHolder$2::run() {
	return $new($FileInputStream, this->val$defaultKeyStore);
}

SSLContextImpl$DefaultManagersHolder$2::SSLContextImpl$DefaultManagersHolder$2() {
}

$Class* SSLContextImpl$DefaultManagersHolder$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$defaultKeyStore", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SSLContextImpl$DefaultManagersHolder$2, val$defaultKeyStore)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(SSLContextImpl$DefaultManagersHolder$2, init$, void, $String*)},
		{"run", "()Ljava/io/FileInputStream;", nullptr, $PUBLIC, $virtualMethod(SSLContextImpl$DefaultManagersHolder$2, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.SSLContextImpl$DefaultManagersHolder",
		"getKeyManagers",
		"()[Ljavax/net/ssl/KeyManager;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLContextImpl$DefaultManagersHolder", "sun.security.ssl.SSLContextImpl", "DefaultManagersHolder", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLContextImpl$DefaultManagersHolder$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLContextImpl$DefaultManagersHolder$2",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/FileInputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLContextImpl"
	};
	$loadClass(SSLContextImpl$DefaultManagersHolder$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLContextImpl$DefaultManagersHolder$2);
	});
	return class$;
}

$Class* SSLContextImpl$DefaultManagersHolder$2::class$ = nullptr;

		} // ssl
	} // security
} // sun