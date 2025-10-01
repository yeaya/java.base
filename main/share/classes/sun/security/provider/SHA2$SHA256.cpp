#include <sun/security/provider/SHA2$SHA256.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _SHA2$SHA256_FieldInfo_[] = {
	{"INITIAL_HASHES", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA2$SHA256, INITIAL_HASHES)},
	{}
};

$MethodInfo _SHA2$SHA256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SHA2$SHA256::*)()>(&SHA2$SHA256::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _SHA2$SHA256_InnerClassesInfo_[] = {
	{"sun.security.provider.SHA2$SHA256", "sun.security.provider.SHA2", "SHA256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SHA2$SHA256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.SHA2$SHA256",
	"sun.security.provider.SHA2",
	nullptr,
	_SHA2$SHA256_FieldInfo_,
	_SHA2$SHA256_MethodInfo_,
	nullptr,
	nullptr,
	_SHA2$SHA256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SHA2"
};

$Object* allocate$SHA2$SHA256($Class* clazz) {
	return $of($alloc(SHA2$SHA256));
}

$ints* SHA2$SHA256::INITIAL_HASHES = nullptr;

void SHA2$SHA256::init$() {
	$SHA2::init$("SHA-256"_s, 32, SHA2$SHA256::INITIAL_HASHES);
}

$Object* SHA2$SHA256::clone() {
	return $of($SHA2::clone());
}

void clinit$SHA2$SHA256($Class* class$) {
	$assignStatic(SHA2$SHA256::INITIAL_HASHES, $new($ints, {
		0x6A09E667,
		(int32_t)0xBB67AE85,
		0x3C6EF372,
		(int32_t)0xA54FF53A,
		0x510E527F,
		(int32_t)0x9B05688C,
		0x1F83D9AB,
		0x5BE0CD19
	}));
}

SHA2$SHA256::SHA2$SHA256() {
}

$Class* SHA2$SHA256::load$($String* name, bool initialize) {
	$loadClass(SHA2$SHA256, name, initialize, &_SHA2$SHA256_ClassInfo_, clinit$SHA2$SHA256, allocate$SHA2$SHA256);
	return class$;
}

$Class* SHA2$SHA256::class$ = nullptr;

		} // provider
	} // security
} // sun