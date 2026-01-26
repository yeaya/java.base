#include <sun/security/ssl/PredefinedDHParameterSpecs$1.h>

#include <java/security/Security.h>
#include <sun/security/ssl/PredefinedDHParameterSpecs.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PredefinedDHParameterSpecs$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(PredefinedDHParameterSpecs$1, init$, void)},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PredefinedDHParameterSpecs$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _PredefinedDHParameterSpecs$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.PredefinedDHParameterSpecs",
	nullptr,
	nullptr
};

$InnerClassInfo _PredefinedDHParameterSpecs$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.PredefinedDHParameterSpecs$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PredefinedDHParameterSpecs$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.PredefinedDHParameterSpecs$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_PredefinedDHParameterSpecs$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_PredefinedDHParameterSpecs$1_EnclosingMethodInfo_,
	_PredefinedDHParameterSpecs$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PredefinedDHParameterSpecs"
};

$Object* allocate$PredefinedDHParameterSpecs$1($Class* clazz) {
	return $of($alloc(PredefinedDHParameterSpecs$1));
}

void PredefinedDHParameterSpecs$1::init$() {
}

$Object* PredefinedDHParameterSpecs$1::run() {
	return $of($Security::getProperty("jdk.tls.server.defaultDHEParameters"_s));
}

PredefinedDHParameterSpecs$1::PredefinedDHParameterSpecs$1() {
}

$Class* PredefinedDHParameterSpecs$1::load$($String* name, bool initialize) {
	$loadClass(PredefinedDHParameterSpecs$1, name, initialize, &_PredefinedDHParameterSpecs$1_ClassInfo_, allocate$PredefinedDHParameterSpecs$1);
	return class$;
}

$Class* PredefinedDHParameterSpecs$1::class$ = nullptr;

		} // ssl
	} // security
} // sun