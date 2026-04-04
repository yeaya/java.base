#include <sun/security/jca/ProviderConfig$1.h>
#include <java/io/File.h>
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
using $ProviderConfig = ::sun::security::jca::ProviderConfig;

namespace sun {
	namespace security {
		namespace jca {

void ProviderConfig$1::init$($ProviderConfig* this$0) {
	$set(this, this$0, this$0);
}

$Object* ProviderConfig$1::run() {
	$useLocalObjectStack();
	$var($File, file, $new($File, "/usr/lib/libpkcs11.so"_s));
	if (file->exists() == false) {
		return $of($Boolean::FALSE);
	}
	if ("false"_s->equalsIgnoreCase($($System::getProperty("sun.security.pkcs11.enable-solaris"_s)))) {
		return $of($Boolean::FALSE);
	}
	return $of($Boolean::TRUE);
}

ProviderConfig$1::ProviderConfig$1() {
}

$Class* ProviderConfig$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/jca/ProviderConfig;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderConfig$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/jca/ProviderConfig;)V", nullptr, 0, $method(ProviderConfig$1, init$, void, $ProviderConfig*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(ProviderConfig$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jca.ProviderConfig",
		"checkSunPKCS11Solaris",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.ProviderConfig$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jca.ProviderConfig$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jca.ProviderConfig"
	};
	$loadClass(ProviderConfig$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderConfig$1);
	});
	return class$;
}

$Class* ProviderConfig$1::class$ = nullptr;

		} // jca
	} // security
} // sun