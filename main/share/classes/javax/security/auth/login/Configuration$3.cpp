#include <javax/security/auth/login/Configuration$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/login/Configuration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Configuration = ::javax::security::auth::login::Configuration;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$FieldInfo _Configuration$3_FieldInfo_[] = {
	{"val$untrustedImpl", "Ljavax/security/auth/login/Configuration;", nullptr, $FINAL | $SYNTHETIC, $field(Configuration$3, val$untrustedImpl)},
	{}
};

$MethodInfo _Configuration$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/login/Configuration;)V", nullptr, 0, $method(static_cast<void(Configuration$3::*)($Configuration*)>(&Configuration$3::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Configuration$3_EnclosingMethodInfo_ = {
	"javax.security.auth.login.Configuration",
	"getConfiguration",
	"()Ljavax/security/auth/login/Configuration;"
};

$InnerClassInfo _Configuration$3_InnerClassesInfo_[] = {
	{"javax.security.auth.login.Configuration$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Configuration$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.login.Configuration$3",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_Configuration$3_FieldInfo_,
	_Configuration$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_Configuration$3_EnclosingMethodInfo_,
	_Configuration$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.Configuration"
};

$Object* allocate$Configuration$3($Class* clazz) {
	return $of($alloc(Configuration$3));
}

void Configuration$3::init$($Configuration* val$untrustedImpl) {
	$set(this, val$untrustedImpl, val$untrustedImpl);
}

$Object* Configuration$3::run() {
	$Configuration::setConfiguration(this->val$untrustedImpl);
	return $of(nullptr);
}

Configuration$3::Configuration$3() {
}

$Class* Configuration$3::load$($String* name, bool initialize) {
	$loadClass(Configuration$3, name, initialize, &_Configuration$3_ClassInfo_, allocate$Configuration$3);
	return class$;
}

$Class* Configuration$3::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax