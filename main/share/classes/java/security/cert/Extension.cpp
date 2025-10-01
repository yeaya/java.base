#include <java/security/cert/Extension.h>

#include <java/io/OutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _Extension_MethodInfo_[] = {
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"isCritical", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Extension_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.cert.Extension",
	nullptr,
	nullptr,
	nullptr,
	_Extension_MethodInfo_
};

$Object* allocate$Extension($Class* clazz) {
	return $of($alloc(Extension));
}

$Class* Extension::load$($String* name, bool initialize) {
	$loadClass(Extension, name, initialize, &_Extension_ClassInfo_, allocate$Extension);
	return class$;
}

$Class* Extension::class$ = nullptr;

		} // cert
	} // security
} // java