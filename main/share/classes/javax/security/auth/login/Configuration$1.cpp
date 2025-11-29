#include <javax/security/auth/login/Configuration$1.h>

#include <java/security/Security.h>
#include <javax/security/auth/login/Configuration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$MethodInfo _Configuration$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Configuration$1::*)()>(&Configuration$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Configuration$1_EnclosingMethodInfo_ = {
	"javax.security.auth.login.Configuration",
	"getConfiguration",
	"()Ljavax/security/auth/login/Configuration;"
};

$InnerClassInfo _Configuration$1_InnerClassesInfo_[] = {
	{"javax.security.auth.login.Configuration$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Configuration$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.login.Configuration$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Configuration$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_Configuration$1_EnclosingMethodInfo_,
	_Configuration$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.Configuration"
};

$Object* allocate$Configuration$1($Class* clazz) {
	return $of($alloc(Configuration$1));
}

void Configuration$1::init$() {
}

$Object* Configuration$1::run() {
	return $of($Security::getProperty("login.configuration.provider"_s));
}

Configuration$1::Configuration$1() {
}

$Class* Configuration$1::load$($String* name, bool initialize) {
	$loadClass(Configuration$1, name, initialize, &_Configuration$1_ClassInfo_, allocate$Configuration$1);
	return class$;
}

$Class* Configuration$1::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax