#include <sun/security/util/DerEncoder.h>

#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _DerEncoder_MethodInfo_[] = {
	{"derEncode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DerEncoder, derEncode, void, $OutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _DerEncoder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.DerEncoder",
	nullptr,
	nullptr,
	nullptr,
	_DerEncoder_MethodInfo_
};

$Object* allocate$DerEncoder($Class* clazz) {
	return $of($alloc(DerEncoder));
}

$Class* DerEncoder::load$($String* name, bool initialize) {
	$loadClass(DerEncoder, name, initialize, &_DerEncoder_ClassInfo_, allocate$DerEncoder);
	return class$;
}

$Class* DerEncoder::class$ = nullptr;

		} // util
	} // security
} // sun