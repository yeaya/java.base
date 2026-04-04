#include <javax/net/ssl/SSLSocketFactory$1.h>
#include <java/security/Security.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace javax {
	namespace net {
		namespace ssl {

void SSLSocketFactory$1::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$Object* SSLSocketFactory$1::run() {
	$var($String, s, $Security::getProperty(this->val$name));
	if (s != nullptr) {
		$assign(s, s->trim());
		if (s->isEmpty()) {
			$assign(s, nullptr);
		}
	}
	return $of(s);
}

SSLSocketFactory$1::SSLSocketFactory$1() {
}

$Class* SSLSocketFactory$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SSLSocketFactory$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(SSLSocketFactory$1, init$, void, $String*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLSocketFactory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.net.ssl.SSLSocketFactory",
		"getSecurityProperty",
		"(Ljava/lang/String;)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.net.ssl.SSLSocketFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.net.ssl.SSLSocketFactory$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.net.ssl.SSLSocketFactory"
	};
	$loadClass(SSLSocketFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLSocketFactory$1);
	});
	return class$;
}

$Class* SSLSocketFactory$1::class$ = nullptr;

		} // ssl
	} // net
} // javax