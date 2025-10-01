#include <sun/security/util/IOUtils.h>

#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _IOUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IOUtils::*)()>(&IOUtils::init$))},
	{"readExactlyNBytes", "(Ljava/io/InputStream;I)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($InputStream*,int32_t)>(&IOUtils::readExactlyNBytes)), "java.io.IOException"},
	{}
};

$ClassInfo _IOUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.IOUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IOUtils_MethodInfo_
};

$Object* allocate$IOUtils($Class* clazz) {
	return $of($alloc(IOUtils));
}

void IOUtils::init$() {
}

$bytes* IOUtils::readExactlyNBytes($InputStream* is, int32_t length) {
	if (length < 0) {
		$throwNew($IOException, $$str({"length cannot be negative: "_s, $$str(length)}));
	}
	$var($bytes, data, $nc(is)->readNBytes(length));
	if ($nc(data)->length < length) {
		$throwNew($EOFException);
	}
	return data;
}

IOUtils::IOUtils() {
}

$Class* IOUtils::load$($String* name, bool initialize) {
	$loadClass(IOUtils, name, initialize, &_IOUtils_ClassInfo_, allocate$IOUtils);
	return class$;
}

$Class* IOUtils::class$ = nullptr;

		} // util
	} // security
} // sun