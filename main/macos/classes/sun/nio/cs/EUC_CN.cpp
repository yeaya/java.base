#include <sun/nio/cs/EUC_CN.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/EUC_CN$DecodeHolder.h>
#include <sun/nio/cs/EUC_CN$EncodeHolder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <jcpp.h>

#undef EUC_CN

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $EUC_CN$DecodeHolder = ::sun::nio::cs::EUC_CN$DecodeHolder;
using $EUC_CN$EncodeHolder = ::sun::nio::cs::EUC_CN$EncodeHolder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _EUC_CN_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(EUC_CN, init$, void)},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(EUC_CN, contains, bool, $Charset*)},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EUC_CN, historicalName, $String*)},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(EUC_CN, newDecoder, $CharsetDecoder*)},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(EUC_CN, newEncoder, $CharsetEncoder*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _EUC_CN_InnerClassesInfo_[] = {
	{"sun.nio.cs.EUC_CN$EncodeHolder", "sun.nio.cs.EUC_CN", "EncodeHolder", $STATIC},
	{"sun.nio.cs.EUC_CN$DecodeHolder", "sun.nio.cs.EUC_CN", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _EUC_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.EUC_CN",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_EUC_CN_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_CN_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.EUC_CN$EncodeHolder,sun.nio.cs.EUC_CN$DecodeHolder"
};

$Object* allocate$EUC_CN($Class* clazz) {
	return $of($alloc(EUC_CN));
}

int32_t EUC_CN::hashCode() {
	 return this->$Charset::hashCode();
}

bool EUC_CN::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* EUC_CN::toString() {
	 return this->$Charset::toString();
}

$Object* EUC_CN::clone() {
	 return this->$Charset::clone();
}

void EUC_CN::finalize() {
	this->$Charset::finalize();
}

void EUC_CN::init$() {
	$Charset::init$("GB2312"_s, $($StandardCharsets::aliases_EUC_CN()));
}

$String* EUC_CN::historicalName() {
	return "EUC_CN"_s;
}

bool EUC_CN::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(EUC_CN, cs)));
}

$CharsetDecoder* EUC_CN::newDecoder() {
	$init($EUC_CN$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $EUC_CN$DecodeHolder::b2c, $EUC_CN$DecodeHolder::b2cSB, 161, 254, true);
}

$CharsetEncoder* EUC_CN::newEncoder() {
	$init($EUC_CN$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $EUC_CN$EncodeHolder::c2b, $EUC_CN$EncodeHolder::c2bIndex, true);
}

EUC_CN::EUC_CN() {
}

$Class* EUC_CN::load$($String* name, bool initialize) {
	$loadClass(EUC_CN, name, initialize, &_EUC_CN_ClassInfo_, allocate$EUC_CN);
	return class$;
}

$Class* EUC_CN::class$ = nullptr;

		} // cs
	} // nio
} // sun