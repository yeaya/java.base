#include <sun/security/provider/SHA5$SHA384.h>

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

$FieldInfo _SHA5$SHA384_FieldInfo_[] = {
	{"INITIAL_HASHES", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA5$SHA384, INITIAL_HASHES)},
	{}
};

$MethodInfo _SHA5$SHA384_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SHA5$SHA384, init$, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SHA5$SHA384, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _SHA5$SHA384_InnerClassesInfo_[] = {
	{"sun.security.provider.SHA5$SHA384", "sun.security.provider.SHA5", "SHA384", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SHA5$SHA384_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.SHA5$SHA384",
	"sun.security.provider.SHA5",
	nullptr,
	_SHA5$SHA384_FieldInfo_,
	_SHA5$SHA384_MethodInfo_,
	nullptr,
	nullptr,
	_SHA5$SHA384_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SHA5"
};

$Object* allocate$SHA5$SHA384($Class* clazz) {
	return $of($alloc(SHA5$SHA384));
}

$longs* SHA5$SHA384::INITIAL_HASHES = nullptr;

void SHA5$SHA384::init$() {
	$SHA5::init$("SHA-384"_s, 48, SHA5$SHA384::INITIAL_HASHES);
}

$Object* SHA5$SHA384::clone() {
	return $of($SHA5::clone());
}

void clinit$SHA5$SHA384($Class* class$) {
	$assignStatic(SHA5$SHA384::INITIAL_HASHES, $new($longs, {
		(int64_t)0xCBBB9D5DC1059ED8,
		(int64_t)0x629A292A367CD507,
		(int64_t)0x9159015A3070DD17,
		(int64_t)0x152FECD8F70E5939,
		(int64_t)0x67332667FFC00B31,
		(int64_t)0x8EB44A8768581511,
		(int64_t)0xDB0C2E0D64F98FA7,
		(int64_t)0x47B5481DBEFA4FA4
	}));
}

SHA5$SHA384::SHA5$SHA384() {
}

$Class* SHA5$SHA384::load$($String* name, bool initialize) {
	$loadClass(SHA5$SHA384, name, initialize, &_SHA5$SHA384_ClassInfo_, clinit$SHA5$SHA384, allocate$SHA5$SHA384);
	return class$;
}

$Class* SHA5$SHA384::class$ = nullptr;

		} // provider
	} // security
} // sun