#include <javax/crypto/JceSecurity$2.h>

#include <java/net/URL.h>
#include <java/security/CodeSource.h>
#include <java/security/ProtectionDomain.h>
#include <javax/crypto/JceSecurity.h>
#include <jcpp.h>

#undef NULL_URL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $CodeSource = ::java::security::CodeSource;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $JceSecurity = ::javax::crypto::JceSecurity;

namespace javax {
	namespace crypto {

$FieldInfo _JceSecurity$2_FieldInfo_[] = {
	{"val$clazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(JceSecurity$2, val$clazz)},
	{}
};

$MethodInfo _JceSecurity$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, 0, $method(static_cast<void(JceSecurity$2::*)($Class*)>(&JceSecurity$2::init$))},
	{"run", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JceSecurity$2_EnclosingMethodInfo_ = {
	"javax.crypto.JceSecurity",
	"getCodeBase",
	"(Ljava/lang/Class;)Ljava/net/URL;"
};

$InnerClassInfo _JceSecurity$2_InnerClassesInfo_[] = {
	{"javax.crypto.JceSecurity$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JceSecurity$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.crypto.JceSecurity$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_JceSecurity$2_FieldInfo_,
	_JceSecurity$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URL;>;",
	&_JceSecurity$2_EnclosingMethodInfo_,
	_JceSecurity$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.crypto.JceSecurity"
};

$Object* allocate$JceSecurity$2($Class* clazz) {
	return $of($alloc(JceSecurity$2));
}

void JceSecurity$2::init$($Class* val$clazz) {
	$set(this, val$clazz, val$clazz);
}

$Object* JceSecurity$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($ProtectionDomain, pd, $nc(this->val$clazz)->getProtectionDomain());
	if (pd != nullptr) {
		$var($CodeSource, cs, pd->getCodeSource());
		if (cs != nullptr) {
			return $of(cs->getLocation());
		}
	}
	$init($JceSecurity);
	return $of($JceSecurity::NULL_URL);
}

JceSecurity$2::JceSecurity$2() {
}

$Class* JceSecurity$2::load$($String* name, bool initialize) {
	$loadClass(JceSecurity$2, name, initialize, &_JceSecurity$2_ClassInfo_, allocate$JceSecurity$2);
	return class$;
}

$Class* JceSecurity$2::class$ = nullptr;

	} // crypto
} // javax