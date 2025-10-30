#include <sun/security/provider/SHA3$SHA224.h>

#include <sun/security/provider/SHA3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SHA3 = ::sun::security::provider::SHA3;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _SHA3$SHA224_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SHA3$SHA224::*)()>(&SHA3$SHA224::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _SHA3$SHA224_InnerClassesInfo_[] = {
	{"sun.security.provider.SHA3$SHA224", "sun.security.provider.SHA3", "SHA224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SHA3$SHA224_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.SHA3$SHA224",
	"sun.security.provider.SHA3",
	nullptr,
	nullptr,
	_SHA3$SHA224_MethodInfo_,
	nullptr,
	nullptr,
	_SHA3$SHA224_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SHA3"
};

$Object* allocate$SHA3$SHA224($Class* clazz) {
	return $of($alloc(SHA3$SHA224));
}

void SHA3$SHA224::init$() {
	$SHA3::init$("SHA3-224"_s, 28, (int8_t)6, 56);
}

$Object* SHA3$SHA224::clone() {
	return $of($SHA3::clone());
}

SHA3$SHA224::SHA3$SHA224() {
}

$Class* SHA3$SHA224::load$($String* name, bool initialize) {
	$loadClass(SHA3$SHA224, name, initialize, &_SHA3$SHA224_ClassInfo_, allocate$SHA3$SHA224);
	return class$;
}

$Class* SHA3$SHA224::class$ = nullptr;

		} // provider
	} // security
} // sun