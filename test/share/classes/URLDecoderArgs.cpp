#include <URLDecoderArgs.h>

#include <java/io/UnsupportedEncodingException.h>
#include <java/net/URLDecoder.h>
#include <jcpp.h>

using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $URLDecoder = ::java::net::URLDecoder;

$MethodInfo _URLDecoderArgs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(URLDecoderArgs, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(URLDecoderArgs, main, void, $StringArray*)},
	{}
};

$ClassInfo _URLDecoderArgs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"URLDecoderArgs",
	"java.lang.Object",
	nullptr,
	nullptr,
	_URLDecoderArgs_MethodInfo_
};

$Object* allocate$URLDecoderArgs($Class* clazz) {
	return $of($alloc(URLDecoderArgs));
}

void URLDecoderArgs::init$() {
}

void URLDecoderArgs::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, s1, $URLDecoder::decode("Hello World"_s, ($String*)nullptr));
	} catch ($UnsupportedEncodingException& e) {
		$throwNew($RuntimeException, "NPE should have been thrown"_s);
	} catch ($NullPointerException& e) {
		try {
			$var($String, s2, $URLDecoder::decode("Hello World"_s, ""_s));
		} catch ($UnsupportedEncodingException& ee) {
			return;
		}
		$throwNew($RuntimeException, "empty string was accepted as encoding name"_s);
	}
	$throwNew($RuntimeException, "null reference was accepted as encoding name"_s);
}

URLDecoderArgs::URLDecoderArgs() {
}

$Class* URLDecoderArgs::load$($String* name, bool initialize) {
	$loadClass(URLDecoderArgs, name, initialize, &_URLDecoderArgs_ClassInfo_, allocate$URLDecoderArgs);
	return class$;
}

$Class* URLDecoderArgs::class$ = nullptr;