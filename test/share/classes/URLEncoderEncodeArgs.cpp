#include <URLEncoderEncodeArgs.h>

#include <java/io/UnsupportedEncodingException.h>
#include <java/net/URLEncoder.h>
#include <jcpp.h>

using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $URLEncoder = ::java::net::URLEncoder;

$MethodInfo _URLEncoderEncodeArgs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(URLEncoderEncodeArgs::*)()>(&URLEncoderEncodeArgs::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&URLEncoderEncodeArgs::main))},
	{}
};

$ClassInfo _URLEncoderEncodeArgs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"URLEncoderEncodeArgs",
	"java.lang.Object",
	nullptr,
	nullptr,
	_URLEncoderEncodeArgs_MethodInfo_
};

$Object* allocate$URLEncoderEncodeArgs($Class* clazz) {
	return $of($alloc(URLEncoderEncodeArgs));
}

void URLEncoderEncodeArgs::init$() {
}

void URLEncoderEncodeArgs::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, s1, $URLEncoder::encode("Hello World"_s, ($String*)nullptr));
	} catch ($UnsupportedEncodingException& e) {
		$throwNew($RuntimeException, "NPE should have been thrown"_s);
	} catch ($NullPointerException& e) {
		try {
			$var($String, s2, $URLEncoder::encode("Hello World"_s, ""_s));
		} catch ($UnsupportedEncodingException& ee) {
			return;
		}
		$throwNew($RuntimeException, "empty string was accepted as encoding name"_s);
	}
	$throwNew($RuntimeException, "null reference was accepted as encoding name"_s);
}

URLEncoderEncodeArgs::URLEncoderEncodeArgs() {
}

$Class* URLEncoderEncodeArgs::load$($String* name, bool initialize) {
	$loadClass(URLEncoderEncodeArgs, name, initialize, &_URLEncoderEncodeArgs_ClassInfo_, allocate$URLEncoderEncodeArgs);
	return class$;
}

$Class* URLEncoderEncodeArgs::class$ = nullptr;