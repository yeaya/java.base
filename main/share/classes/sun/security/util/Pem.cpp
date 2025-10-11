#include <sun/security/util/Pem.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Base64 = ::java::util::Base64;
using $Base64$Decoder = ::java::util::Base64$Decoder;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _Pem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Pem::*)()>(&Pem::init$))},
	{"decode", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($String*)>(&Pem::decode)), "java.io.IOException"},
	{}
};

$ClassInfo _Pem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Pem",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Pem_MethodInfo_
};

$Object* allocate$Pem($Class* clazz) {
	return $of($alloc(Pem));
}

void Pem::init$() {
}

$bytes* Pem::decode($String* input) {
	$init($StandardCharsets);
	$var($bytes, src, $($nc(input)->replaceAll("\\s+"_s, ""_s))->getBytes($StandardCharsets::ISO_8859_1));
	try {
		return $nc($($Base64::getDecoder()))->decode(src);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, e, $catch());
		$throwNew($IOException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

Pem::Pem() {
}

$Class* Pem::load$($String* name, bool initialize) {
	$loadClass(Pem, name, initialize, &_Pem_ClassInfo_, allocate$Pem);
	return class$;
}

$Class* Pem::class$ = nullptr;

		} // util
	} // security
} // sun