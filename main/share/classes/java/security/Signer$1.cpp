#include <java/security/Signer$1.h>
#include <java/security/PublicKey.h>
#include <java/security/Signer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $Signer = ::java::security::Signer;

namespace java {
	namespace security {

void Signer$1::init$($Signer* this$0, $PublicKey* val$pub) {
	$set(this, this$0, this$0);
	$set(this, val$pub, val$pub);
}

$Object* Signer$1::run() {
	this->this$0->setPublicKey(this->val$pub);
	return nullptr;
}

Signer$1::Signer$1() {
}

$Class* Signer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/security/Signer;", nullptr, $FINAL | $SYNTHETIC, $field(Signer$1, this$0)},
		{"val$pub", "Ljava/security/PublicKey;", nullptr, $FINAL | $SYNTHETIC, $field(Signer$1, val$pub)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/Signer;Ljava/security/PublicKey;)V", nullptr, 0, $method(Signer$1, init$, void, $Signer*, $PublicKey*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Signer$1, run, $Object*), "java.security.KeyManagementException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.Signer",
		"setKeyPair",
		"(Ljava/security/KeyPair;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Signer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Signer$1",
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
		"java.security.Signer"
	};
	$loadClass(Signer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Signer$1);
	});
	return class$;
}

$Class* Signer$1::class$ = nullptr;

	} // security
} // java