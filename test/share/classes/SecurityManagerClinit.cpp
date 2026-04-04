#include <SecurityManagerClinit.h>
#include <SecurityManagerClinit$SimplePolicy.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Permission.h>
#include <java/security/Policy.h>
#include <jcpp.h>

using $SecurityManagerClinit$SimplePolicy = ::SecurityManagerClinit$SimplePolicy;
using $PermissionArray = $Array<::java::security::Permission>;
using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Policy = ::java::security::Policy;

void SecurityManagerClinit::init$() {
}

void SecurityManagerClinit::main($StringArray* args) {
	$useLocalObjectStack();
	$load(SecurityManagerClinit);
	$beforeCallerSensitive();
	$init($File);
	$var($String, javaExe, $str({$($System::getProperty("java.home"_s)), $File::separator, "bin"_s, $File::separator, "java"_s}));
	$var($SecurityManagerClinit$SimplePolicy, policy, $new($SecurityManagerClinit$SimplePolicy, $$new($PermissionArray, {
		$$new($FilePermission, "<<ALL FILES>>"_s, "execute"_s),
		$$new($RuntimePermission, "setSecurityManager"_s)
	})));
	$Policy::setPolicy(policy);
	$System::setSecurityManager($$new($SecurityManager));
	$var($Throwable, var$0, nullptr);
	try {
		$var($StringArray, cmd, $new($StringArray, {
			javaExe,
			"-version"_s
		}));
		$var($Process, p, $$nc($Runtime::getRuntime())->exec(cmd));
		$$nc($nc(p)->getOutputStream())->close();
		$$nc(p->getInputStream())->close();
		$$nc(p->getErrorStream())->close();
		p->waitFor();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$System::setSecurityManager(nullptr);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

SecurityManagerClinit::SecurityManagerClinit() {
}

$Class* SecurityManagerClinit::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SecurityManagerClinit, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SecurityManagerClinit, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SecurityManagerClinit$SimplePolicy", "SecurityManagerClinit", "SimplePolicy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SecurityManagerClinit",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SecurityManagerClinit$SimplePolicy"
	};
	$loadClass(SecurityManagerClinit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityManagerClinit);
	});
	return class$;
}

$Class* SecurityManagerClinit::class$ = nullptr;