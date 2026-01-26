#include <sun/security/provider/SHA2$SHA224.h>

#include <sun/security/provider/SHA2.h>
#include <jcpp.h>

#undef INITIAL_HASHES

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SHA2 = ::sun::security::provider::SHA2;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _SHA2$SHA224_FieldInfo_[] = {
	{"INITIAL_HASHES", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA2$SHA224, INITIAL_HASHES)},
	{}
};

$MethodInfo _SHA2$SHA224_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SHA2$SHA224, init$, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SHA2$SHA224, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _SHA2$SHA224_InnerClassesInfo_[] = {
	{"sun.security.provider.SHA2$SHA224", "sun.security.provider.SHA2", "SHA224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SHA2$SHA224_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.SHA2$SHA224",
	"sun.security.provider.SHA2",
	nullptr,
	_SHA2$SHA224_FieldInfo_,
	_SHA2$SHA224_MethodInfo_,
	nullptr,
	nullptr,
	_SHA2$SHA224_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SHA2"
};

$Object* allocate$SHA2$SHA224($Class* clazz) {
	return $of($alloc(SHA2$SHA224));
}

$ints* SHA2$SHA224::INITIAL_HASHES = nullptr;

void SHA2$SHA224::init$() {
	$SHA2::init$("SHA-224"_s, 28, SHA2$SHA224::INITIAL_HASHES);
}

$Object* SHA2$SHA224::clone() {
	return $of($SHA2::clone());
}

void clinit$SHA2$SHA224($Class* class$) {
	$assignStatic(SHA2$SHA224::INITIAL_HASHES, $new($ints, {
		(int32_t)0xC1059ED8,
		0x367CD507,
		0x3070DD17,
		(int32_t)0xF70E5939,
		(int32_t)0xFFC00B31,
		0x68581511,
		0x64F98FA7,
		(int32_t)0xBEFA4FA4
	}));
}

SHA2$SHA224::SHA2$SHA224() {
}

$Class* SHA2$SHA224::load$($String* name, bool initialize) {
	$loadClass(SHA2$SHA224, name, initialize, &_SHA2$SHA224_ClassInfo_, clinit$SHA2$SHA224, allocate$SHA2$SHA224);
	return class$;
}

$Class* SHA2$SHA224::class$ = nullptr;

		} // provider
	} // security
} // sun