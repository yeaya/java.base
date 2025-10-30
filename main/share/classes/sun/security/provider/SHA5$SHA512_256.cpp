#include <sun/security/provider/SHA5$SHA512_256.h>

#include <sun/security/provider/SHA5.h>
#include <jcpp.h>

#undef INITIAL_HASHES

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SHA5 = ::sun::security::provider::SHA5;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _SHA5$SHA512_256_FieldInfo_[] = {
	{"INITIAL_HASHES", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA5$SHA512_256, INITIAL_HASHES)},
	{}
};

$MethodInfo _SHA5$SHA512_256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SHA5$SHA512_256::*)()>(&SHA5$SHA512_256::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _SHA5$SHA512_256_InnerClassesInfo_[] = {
	{"sun.security.provider.SHA5$SHA512_256", "sun.security.provider.SHA5", "SHA512_256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SHA5$SHA512_256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.SHA5$SHA512_256",
	"sun.security.provider.SHA5",
	nullptr,
	_SHA5$SHA512_256_FieldInfo_,
	_SHA5$SHA512_256_MethodInfo_,
	nullptr,
	nullptr,
	_SHA5$SHA512_256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SHA5"
};

$Object* allocate$SHA5$SHA512_256($Class* clazz) {
	return $of($alloc(SHA5$SHA512_256));
}

$longs* SHA5$SHA512_256::INITIAL_HASHES = nullptr;

void SHA5$SHA512_256::init$() {
	$SHA5::init$("SHA-512/256"_s, 32, SHA5$SHA512_256::INITIAL_HASHES);
}

$Object* SHA5$SHA512_256::clone() {
	return $of($SHA5::clone());
}

void clinit$SHA5$SHA512_256($Class* class$) {
	$assignStatic(SHA5$SHA512_256::INITIAL_HASHES, $new($longs, {
		(int64_t)0x22312194FC2BF72C,
		(int64_t)0x9F555FA3C84C64C2,
		(int64_t)0x2393B86B6F53B151,
		(int64_t)0x963877195940EABD,
		(int64_t)0x96283EE2A88EFFE3,
		(int64_t)0xBE5E1E2553863992,
		(int64_t)0x2B0199FC2C85B8AA,
		(int64_t)0x0EB72DDC81C52CA2
	}));
}

SHA5$SHA512_256::SHA5$SHA512_256() {
}

$Class* SHA5$SHA512_256::load$($String* name, bool initialize) {
	$loadClass(SHA5$SHA512_256, name, initialize, &_SHA5$SHA512_256_ClassInfo_, clinit$SHA5$SHA512_256, allocate$SHA5$SHA512_256);
	return class$;
}

$Class* SHA5$SHA512_256::class$ = nullptr;

		} // provider
	} // security
} // sun