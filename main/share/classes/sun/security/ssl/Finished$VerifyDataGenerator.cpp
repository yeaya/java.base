#include <sun/security/ssl/Finished$VerifyDataGenerator.h>

#include <sun/security/ssl/Finished.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _Finished$VerifyDataGenerator_MethodInfo_[] = {
	{"createVerifyData", "(Lsun/security/ssl/HandshakeContext;Z)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Finished$VerifyDataGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.Finished$VerifyDataGenerator", "sun.security.ssl.Finished", "VerifyDataGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Finished$VerifyDataGenerator_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.Finished$VerifyDataGenerator",
	nullptr,
	nullptr,
	nullptr,
	_Finished$VerifyDataGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_Finished$VerifyDataGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Finished"
};

$Object* allocate$Finished$VerifyDataGenerator($Class* clazz) {
	return $of($alloc(Finished$VerifyDataGenerator));
}

$Class* Finished$VerifyDataGenerator::load$($String* name, bool initialize) {
	$loadClass(Finished$VerifyDataGenerator, name, initialize, &_Finished$VerifyDataGenerator_ClassInfo_, allocate$Finished$VerifyDataGenerator);
	return class$;
}

$Class* Finished$VerifyDataGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun