#include <sun/net/ftp/FtpLoginException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace ftp {

void FtpLoginException::init$($String* s) {
	$IOException::init$(s);
}

FtpLoginException::FtpLoginException() {
}

FtpLoginException::FtpLoginException(const FtpLoginException& e) : $IOException(e) {
}

void FtpLoginException::throw$() {
	throw *this;
}

$Class* FtpLoginException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FtpLoginException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FtpLoginException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.ftp.FtpLoginException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FtpLoginException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FtpLoginException);
	});
	return class$;
}

$Class* FtpLoginException::class$ = nullptr;

		} // ftp
	} // net
} // sun