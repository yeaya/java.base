#include <java/security/spec/EncodedKeySpec$1.h>

#include <java/security/spec/EncodedKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;

namespace java {
	namespace security {
		namespace spec {

$MethodInfo _EncodedKeySpec$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EncodedKeySpec$1::*)()>(&EncodedKeySpec$1::init$))},
	{"clearEncodedKeySpec", "(Ljava/security/spec/EncodedKeySpec;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _EncodedKeySpec$1_EnclosingMethodInfo_ = {
	"java.security.spec.EncodedKeySpec",
	nullptr,
	nullptr
};

$InnerClassInfo _EncodedKeySpec$1_InnerClassesInfo_[] = {
	{"java.security.spec.EncodedKeySpec$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EncodedKeySpec$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.spec.EncodedKeySpec$1",
	"java.lang.Object",
	"jdk.internal.access.JavaSecuritySpecAccess",
	nullptr,
	_EncodedKeySpec$1_MethodInfo_,
	nullptr,
	&_EncodedKeySpec$1_EnclosingMethodInfo_,
	_EncodedKeySpec$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.spec.EncodedKeySpec"
};

$Object* allocate$EncodedKeySpec$1($Class* clazz) {
	return $of($alloc(EncodedKeySpec$1));
}

void EncodedKeySpec$1::init$() {
}

void EncodedKeySpec$1::clearEncodedKeySpec($EncodedKeySpec* keySpec) {
	$nc(keySpec)->clear();
}

EncodedKeySpec$1::EncodedKeySpec$1() {
}

$Class* EncodedKeySpec$1::load$($String* name, bool initialize) {
	$loadClass(EncodedKeySpec$1, name, initialize, &_EncodedKeySpec$1_ClassInfo_, allocate$EncodedKeySpec$1);
	return class$;
}

$Class* EncodedKeySpec$1::class$ = nullptr;

		} // spec
	} // security
} // java