#include <sun/security/provider/SHA3$SHA384.h>

#include <sun/security/provider/SHA3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SHA3 = ::sun::security::provider::SHA3;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _SHA3$SHA384_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SHA3$SHA384::*)()>(&SHA3$SHA384::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _SHA3$SHA384_InnerClassesInfo_[] = {
	{"sun.security.provider.SHA3$SHA384", "sun.security.provider.SHA3", "SHA384", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SHA3$SHA384_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.SHA3$SHA384",
	"sun.security.provider.SHA3",
	nullptr,
	nullptr,
	_SHA3$SHA384_MethodInfo_,
	nullptr,
	nullptr,
	_SHA3$SHA384_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SHA3"
};

$Object* allocate$SHA3$SHA384($Class* clazz) {
	return $of($alloc(SHA3$SHA384));
}

void SHA3$SHA384::init$() {
	$SHA3::init$("SHA3-384"_s, 48, (int8_t)6, 96);
}

$Object* SHA3$SHA384::clone() {
	return $of($SHA3::clone());
}

SHA3$SHA384::SHA3$SHA384() {
}

$Class* SHA3$SHA384::load$($String* name, bool initialize) {
	$loadClass(SHA3$SHA384, name, initialize, &_SHA3$SHA384_ClassInfo_, allocate$SHA3$SHA384);
	return class$;
}

$Class* SHA3$SHA384::class$ = nullptr;

		} // provider
	} // security
} // sun