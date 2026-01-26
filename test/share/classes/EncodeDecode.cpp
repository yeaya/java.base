#include <EncodeDecode.h>

#include <java/net/URLDecoder.h>
#include <java/net/URLEncoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLDecoder = ::java::net::URLDecoder;
using $URLEncoder = ::java::net::URLEncoder;

$MethodInfo _EncodeDecode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(EncodeDecode, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EncodeDecode, main, void, $StringArray*)},
	{}
};

$ClassInfo _EncodeDecode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EncodeDecode",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EncodeDecode_MethodInfo_
};

$Object* allocate$EncodeDecode($Class* clazz) {
	return $of($alloc(EncodeDecode));
}

void EncodeDecode::init$() {
}

void EncodeDecode::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, "fds@$"_s);
	$var($String, encStr, $URLEncoder::encode(str));
	$var($String, decStr, $URLDecoder::decode(encStr));
}

EncodeDecode::EncodeDecode() {
}

$Class* EncodeDecode::load$($String* name, bool initialize) {
	$loadClass(EncodeDecode, name, initialize, &_EncodeDecode_ClassInfo_, allocate$EncodeDecode);
	return class$;
}

$Class* EncodeDecode::class$ = nullptr;