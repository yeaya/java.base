#include <java/util/Base64.h>

#include <java/util/Base64$Decoder.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Base64$Decoder = ::java::util::Base64$Decoder;
using $Base64$Encoder = ::java::util::Base64$Encoder;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

$MethodInfo _Base64_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Base64, init$, void)},
	{"getDecoder", "()Ljava/util/Base64$Decoder;", nullptr, $PUBLIC | $STATIC, $staticMethod(Base64, getDecoder, $Base64$Decoder*)},
	{"getEncoder", "()Ljava/util/Base64$Encoder;", nullptr, $PUBLIC | $STATIC, $staticMethod(Base64, getEncoder, $Base64$Encoder*)},
	{"getMimeDecoder", "()Ljava/util/Base64$Decoder;", nullptr, $PUBLIC | $STATIC, $staticMethod(Base64, getMimeDecoder, $Base64$Decoder*)},
	{"getMimeEncoder", "()Ljava/util/Base64$Encoder;", nullptr, $PUBLIC | $STATIC, $staticMethod(Base64, getMimeEncoder, $Base64$Encoder*)},
	{"getMimeEncoder", "(I[B)Ljava/util/Base64$Encoder;", nullptr, $PUBLIC | $STATIC, $staticMethod(Base64, getMimeEncoder, $Base64$Encoder*, int32_t, $bytes*)},
	{"getUrlDecoder", "()Ljava/util/Base64$Decoder;", nullptr, $PUBLIC | $STATIC, $staticMethod(Base64, getUrlDecoder, $Base64$Decoder*)},
	{"getUrlEncoder", "()Ljava/util/Base64$Encoder;", nullptr, $PUBLIC | $STATIC, $staticMethod(Base64, getUrlEncoder, $Base64$Encoder*)},
	{}
};

$InnerClassInfo _Base64_InnerClassesInfo_[] = {
	{"java.util.Base64$DecInputStream", "java.util.Base64", "DecInputStream", $PRIVATE | $STATIC},
	{"java.util.Base64$EncOutputStream", "java.util.Base64", "EncOutputStream", $PRIVATE | $STATIC},
	{"java.util.Base64$Decoder", "java.util.Base64", "Decoder", $PUBLIC | $STATIC},
	{"java.util.Base64$Encoder", "java.util.Base64", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Base64_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.Base64",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Base64_MethodInfo_,
	nullptr,
	nullptr,
	_Base64_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.Base64$DecInputStream,java.util.Base64$EncOutputStream,java.util.Base64$Decoder,java.util.Base64$Encoder"
};

$Object* allocate$Base64($Class* clazz) {
	return $of($alloc(Base64));
}

void Base64::init$() {
}

$Base64$Encoder* Base64::getEncoder() {
	$init($Base64$Encoder);
	return $Base64$Encoder::RFC4648;
}

$Base64$Encoder* Base64::getUrlEncoder() {
	$init($Base64$Encoder);
	return $Base64$Encoder::RFC4648_URLSAFE;
}

$Base64$Encoder* Base64::getMimeEncoder() {
	$init($Base64$Encoder);
	return $Base64$Encoder::RFC2045;
}

$Base64$Encoder* Base64::getMimeEncoder(int32_t lineLength, $bytes* lineSeparator) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(lineSeparator);
	$init($Base64$Decoder);
	$var($ints, base64, $Base64$Decoder::fromBase64);
	{
		$var($bytes, arr$, lineSeparator);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int8_t b = arr$->get(i$);
			{
				if ($nc(base64)->get((int32_t)(b & (uint32_t)255)) != -1) {
					$throwNew($IllegalArgumentException, $$str({"Illegal base64 line separator character 0x"_s, $($Integer::toString(b, 16))}));
				}
			}
		}
	}
	lineLength &= (uint32_t)~3;
	if (lineLength <= 0) {
		$init($Base64$Encoder);
		return $Base64$Encoder::RFC4648;
	}
	return $new($Base64$Encoder, false, lineSeparator, lineLength, true);
}

$Base64$Decoder* Base64::getDecoder() {
	$init($Base64$Decoder);
	return $Base64$Decoder::RFC4648;
}

$Base64$Decoder* Base64::getUrlDecoder() {
	$init($Base64$Decoder);
	return $Base64$Decoder::RFC4648_URLSAFE;
}

$Base64$Decoder* Base64::getMimeDecoder() {
	$init($Base64$Decoder);
	return $Base64$Decoder::RFC2045;
}

Base64::Base64() {
}

$Class* Base64::load$($String* name, bool initialize) {
	$loadClass(Base64, name, initialize, &_Base64_ClassInfo_, allocate$Base64);
	return class$;
}

$Class* Base64::class$ = nullptr;

	} // util
} // java