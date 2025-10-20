#include <sun/security/jca/ProviderConfig$1.h>

#include <java/io/File.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/jca/ProviderConfig.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProviderConfig = ::sun::security::jca::ProviderConfig;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _ProviderConfig$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/jca/ProviderConfig;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderConfig$1, this$0)},
	{}
};

$MethodInfo _ProviderConfig$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/jca/ProviderConfig;)V", nullptr, 0, $method(static_cast<void(ProviderConfig$1::*)($ProviderConfig*)>(&ProviderConfig$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProviderConfig$1_EnclosingMethodInfo_ = {
	"sun.security.jca.ProviderConfig",
	"checkSunPKCS11Solaris",
	"()V"
};

$InnerClassInfo _ProviderConfig$1_InnerClassesInfo_[] = {
	{"sun.security.jca.ProviderConfig$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProviderConfig$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jca.ProviderConfig$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ProviderConfig$1_FieldInfo_,
	_ProviderConfig$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_ProviderConfig$1_EnclosingMethodInfo_,
	_ProviderConfig$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.ProviderConfig"
};

$Object* allocate$ProviderConfig$1($Class* clazz) {
	return $of($alloc(ProviderConfig$1));
}

void ProviderConfig$1::init$($ProviderConfig* this$0) {
	$set(this, this$0, this$0);
}

$Object* ProviderConfig$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, "/usr/lib/libpkcs11.so"_s));
	if (file->exists() == false) {
		$init($Boolean);
		return $of($Boolean::FALSE);
	}
	if ("false"_s->equalsIgnoreCase($($System::getProperty("sun.security.pkcs11.enable-solaris"_s)))) {
		$init($Boolean);
		return $of($Boolean::FALSE);
	}
	$init($Boolean);
	return $of($Boolean::TRUE);
}

ProviderConfig$1::ProviderConfig$1() {
}

$Class* ProviderConfig$1::load$($String* name, bool initialize) {
	$loadClass(ProviderConfig$1, name, initialize, &_ProviderConfig$1_ClassInfo_, allocate$ProviderConfig$1);
	return class$;
}

$Class* ProviderConfig$1::class$ = nullptr;

		} // jca
	} // security
} // sun