#include <java/security/Signer$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PublicKey.h>
#include <java/security/Signer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Identity = ::java::security::Identity;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $PublicKey = ::java::security::PublicKey;
using $Signer = ::java::security::Signer;

namespace java {
	namespace security {

$FieldInfo _Signer$1_FieldInfo_[] = {
	{"this$0", "Ljava/security/Signer;", nullptr, $FINAL | $SYNTHETIC, $field(Signer$1, this$0)},
	{"val$pub", "Ljava/security/PublicKey;", nullptr, $FINAL | $SYNTHETIC, $field(Signer$1, val$pub)},
	{}
};

$MethodInfo _Signer$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Signer;Ljava/security/PublicKey;)V", nullptr, 0, $method(static_cast<void(Signer$1::*)($Signer*,$PublicKey*)>(&Signer$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.security.KeyManagementException"},
	{}
};

$EnclosingMethodInfo _Signer$1_EnclosingMethodInfo_ = {
	"java.security.Signer",
	"setKeyPair",
	"(Ljava/security/KeyPair;)V"
};

$InnerClassInfo _Signer$1_InnerClassesInfo_[] = {
	{"java.security.Signer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Signer$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.Signer$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_Signer$1_FieldInfo_,
	_Signer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_Signer$1_EnclosingMethodInfo_,
	_Signer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Signer"
};

$Object* allocate$Signer$1($Class* clazz) {
	return $of($alloc(Signer$1));
}

void Signer$1::init$($Signer* this$0, $PublicKey* val$pub) {
	$set(this, this$0, this$0);
	$set(this, val$pub, val$pub);
}

$Object* Signer$1::run() {
	this->this$0->setPublicKey(this->val$pub);
	return $of(nullptr);
}

Signer$1::Signer$1() {
}

$Class* Signer$1::load$($String* name, bool initialize) {
	$loadClass(Signer$1, name, initialize, &_Signer$1_ClassInfo_, allocate$Signer$1);
	return class$;
}

$Class* Signer$1::class$ = nullptr;

	} // security
} // java