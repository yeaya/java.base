#include <javax/security/auth/login/Configuration$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/login/Configuration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
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

$FieldInfo _Configuration$2_FieldInfo_[] = {
	{"val$finalClass", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Configuration$2, val$finalClass)},
	{}
};

$MethodInfo _Configuration$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Configuration$2::*)($String*)>(&Configuration$2::init$))},
	{"run", "()Ljavax/security/auth/login/Configuration;", nullptr, $PUBLIC, nullptr, "java.lang.ClassNotFoundException,java.lang.InstantiationException,java.lang.IllegalAccessException"},
	{}
};

$EnclosingMethodInfo _Configuration$2_EnclosingMethodInfo_ = {
	"javax.security.auth.login.Configuration",
	"getConfiguration",
	"()Ljavax/security/auth/login/Configuration;"
};

$InnerClassInfo _Configuration$2_InnerClassesInfo_[] = {
	{"javax.security.auth.login.Configuration$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Configuration$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.login.Configuration$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_Configuration$2_FieldInfo_,
	_Configuration$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljavax/security/auth/login/Configuration;>;",
	&_Configuration$2_EnclosingMethodInfo_,
	_Configuration$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.Configuration"
};

$Object* allocate$Configuration$2($Class* clazz) {
	return $of($alloc(Configuration$2));
}

void Configuration$2::init$($String* val$finalClass) {
	$set(this, val$finalClass, val$finalClass);
}

$Object* Configuration$2::run() {
	$beforeCallerSensitive();
	$load($Configuration);
	$Class* implClass = $Class::forName(this->val$finalClass, false, $($($Thread::currentThread())->getContextClassLoader()))->asSubclass($Configuration::class$);
	$var($Configuration, result, $cast($Configuration, $nc(implClass)->newInstance()));
	return $of(result);
}

Configuration$2::Configuration$2() {
}

$Class* Configuration$2::load$($String* name, bool initialize) {
	$loadClass(Configuration$2, name, initialize, &_Configuration$2_ClassInfo_, allocate$Configuration$2);
	return class$;
}

$Class* Configuration$2::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax