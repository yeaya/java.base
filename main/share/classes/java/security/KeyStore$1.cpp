#include <java/security/KeyStore$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/KeyStore.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;

namespace java {
	namespace security {

$MethodInfo _KeyStore$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeyStore$1::*)()>(&KeyStore$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeyStore$1_EnclosingMethodInfo_ = {
	"java.security.KeyStore",
	"getDefaultType",
	"()Ljava/lang/String;"
};

$InnerClassInfo _KeyStore$1_InnerClassesInfo_[] = {
	{"java.security.KeyStore$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyStore$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.KeyStore$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_KeyStore$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_KeyStore$1_EnclosingMethodInfo_,
	_KeyStore$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$1($Class* clazz) {
	return $of($alloc(KeyStore$1));
}

void KeyStore$1::init$() {
}

$Object* KeyStore$1::run() {
	return $of($Security::getProperty("keystore.type"_s));
}

KeyStore$1::KeyStore$1() {
}

$Class* KeyStore$1::load$($String* name, bool initialize) {
	$loadClass(KeyStore$1, name, initialize, &_KeyStore$1_ClassInfo_, allocate$KeyStore$1);
	return class$;
}

$Class* KeyStore$1::class$ = nullptr;

	} // security
} // java