#include <java/security/cert/Extension.h>

#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _Extension_MethodInfo_[] = {
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Extension, encode, void, $OutputStream*), "java.io.IOException"},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Extension, getId, $String*)},
	{"getValue", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Extension, getValue, $bytes*)},
	{"isCritical", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Extension, isCritical, bool)},
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