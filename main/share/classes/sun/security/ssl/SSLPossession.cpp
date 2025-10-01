#include <sun/security/ssl/SSLPossession.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLPossession_MethodInfo_[] = {
	{"encode", "()[B", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SSLPossession_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLPossession",
	nullptr,
	nullptr,
	nullptr,
	_SSLPossession_MethodInfo_
};

$Object* allocate$SSLPossession($Class* clazz) {
	return $of($alloc(SSLPossession));
}

$bytes* SSLPossession::encode() {
	return $new($bytes, 0);
}

$Class* SSLPossession::load$($String* name, bool initialize) {
	$loadClass(SSLPossession, name, initialize, &_SSLPossession_ClassInfo_, allocate$SSLPossession);
	return class$;
}

$Class* SSLPossession::class$ = nullptr;

		} // ssl
	} // security
} // sun