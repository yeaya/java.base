#include <sun/security/provider/SHA5$SHA512_224.h>

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

$FieldInfo _SHA5$SHA512_224_FieldInfo_[] = {
	{"INITIAL_HASHES", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA5$SHA512_224, INITIAL_HASHES)},
	{}
};

$MethodInfo _SHA5$SHA512_224_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SHA5$SHA512_224::*)()>(&SHA5$SHA512_224::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _SHA5$SHA512_224_InnerClassesInfo_[] = {
	{"sun.security.provider.SHA5$SHA512_224", "sun.security.provider.SHA5", "SHA512_224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SHA5$SHA512_224_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.SHA5$SHA512_224",
	"sun.security.provider.SHA5",
	nullptr,
	_SHA5$SHA512_224_FieldInfo_,
	_SHA5$SHA512_224_MethodInfo_,
	nullptr,
	nullptr,
	_SHA5$SHA512_224_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SHA5"
};

$Object* allocate$SHA5$SHA512_224($Class* clazz) {
	return $of($alloc(SHA5$SHA512_224));
}

$longs* SHA5$SHA512_224::INITIAL_HASHES = nullptr;

void SHA5$SHA512_224::init$() {
	$SHA5::init$("SHA-512/224"_s, 28, SHA5$SHA512_224::INITIAL_HASHES);
}

$Object* SHA5$SHA512_224::clone() {
	return $of($SHA5::clone());
}

void clinit$SHA5$SHA512_224($Class* class$) {
	$assignStatic(SHA5$SHA512_224::INITIAL_HASHES, $new($longs, {
		(int64_t)0x8C3D37C819544DA2,
		(int64_t)0x73E1996689DCD4D6,
		(int64_t)0x1DFAB7AE32FF9C82,
		(int64_t)0x679DD514582F9FCF,
		(int64_t)0x0F6D2B697BD44DA8,
		(int64_t)0x77E36F7304C48942,
		(int64_t)0x3F9D85A86A1D36C8,
		(int64_t)0x1112E6AD91D692A1
	}));
}

SHA5$SHA512_224::SHA5$SHA512_224() {
}

$Class* SHA5$SHA512_224::load$($String* name, bool initialize) {
	$loadClass(SHA5$SHA512_224, name, initialize, &_SHA5$SHA512_224_ClassInfo_, clinit$SHA5$SHA512_224, allocate$SHA5$SHA512_224);
	return class$;
}

$Class* SHA5$SHA512_224::class$ = nullptr;

		} // provider
	} // security
} // sun