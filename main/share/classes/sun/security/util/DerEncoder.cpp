#include <sun/security/util/DerEncoder.h>

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

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _DerEncoder_MethodInfo_[] = {
	{"derEncode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
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