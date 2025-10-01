#include <sun/security/provider/SHA5$SHA512.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _SHA5$SHA512_FieldInfo_[] = {
	{"INITIAL_HASHES", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA5$SHA512, INITIAL_HASHES)},
	{}
};

$MethodInfo _SHA5$SHA512_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SHA5$SHA512::*)()>(&SHA5$SHA512::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _SHA5$SHA512_InnerClassesInfo_[] = {
	{"sun.security.provider.SHA5$SHA512", "sun.security.provider.SHA5", "SHA512", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SHA5$SHA512_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.SHA5$SHA512",
	"sun.security.provider.SHA5",
	nullptr,
	_SHA5$SHA512_FieldInfo_,
	_SHA5$SHA512_MethodInfo_,
	nullptr,
	nullptr,
	_SHA5$SHA512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SHA5"
};

$Object* allocate$SHA5$SHA512($Class* clazz) {
	return $of($alloc(SHA5$SHA512));
}

$longs* SHA5$SHA512::INITIAL_HASHES = nullptr;

void SHA5$SHA512::init$() {
	$SHA5::init$("SHA-512"_s, 64, SHA5$SHA512::INITIAL_HASHES);
}

$Object* SHA5$SHA512::clone() {
	return $of($SHA5::clone());
}

void clinit$SHA5$SHA512($Class* class$) {
	$assignStatic(SHA5$SHA512::INITIAL_HASHES, $new($longs, {
		(int64_t)0x6A09E667F3BCC908,
		(int64_t)0xBB67AE8584CAA73B,
		(int64_t)0x3C6EF372FE94F82B,
		(int64_t)0xA54FF53A5F1D36F1,
		(int64_t)0x510E527FADE682D1,
		(int64_t)0x9B05688C2B3E6C1F,
		(int64_t)0x1F83D9ABFB41BD6B,
		(int64_t)0x5BE0CD19137E2179
	}));
}

SHA5$SHA512::SHA5$SHA512() {
}

$Class* SHA5$SHA512::load$($String* name, bool initialize) {
	$loadClass(SHA5$SHA512, name, initialize, &_SHA5$SHA512_ClassInfo_, clinit$SHA5$SHA512, allocate$SHA5$SHA512);
	return class$;
}

$Class* SHA5$SHA512::class$ = nullptr;

		} // provider
	} // security
} // sun