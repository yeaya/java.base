#include <javax/crypto/ProviderVerifier$1.h>
#include <java/net/JarURLConnection.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/jar/JarFile.h>
#include <javax/crypto/ProviderVerifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JarURLConnection = ::java::net::JarURLConnection;
using $URL = ::java::net::URL;
using $ProviderVerifier = ::javax::crypto::ProviderVerifier;

namespace javax {
	namespace crypto {

void ProviderVerifier$1::init$($ProviderVerifier* this$0, $URL* val$url) {
	$set(this, this$0, this$0);
	$set(this, val$url, val$url);
}

$Object* ProviderVerifier$1::run() {
	$var($JarURLConnection, conn, $cast($JarURLConnection, $nc(this->val$url)->openConnection()));
	$nc(conn)->setUseCaches(false);
	return $of(conn->getJarFile());
}

ProviderVerifier$1::ProviderVerifier$1() {
}

$Class* ProviderVerifier$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/crypto/ProviderVerifier;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderVerifier$1, this$0)},
		{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderVerifier$1, val$url)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/crypto/ProviderVerifier;Ljava/net/URL;)V", "()V", 0, $method(ProviderVerifier$1, init$, void, $ProviderVerifier*, $URL*)},
		{"run", "()Ljava/util/jar/JarFile;", nullptr, $PUBLIC, $virtualMethod(ProviderVerifier$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.crypto.ProviderVerifier",
		"verify",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.crypto.ProviderVerifier$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.crypto.ProviderVerifier$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/util/jar/JarFile;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.crypto.ProviderVerifier"
	};
	$loadClass(ProviderVerifier$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderVerifier$1);
	});
	return class$;
}

$Class* ProviderVerifier$1::class$ = nullptr;

	} // crypto
} // javax