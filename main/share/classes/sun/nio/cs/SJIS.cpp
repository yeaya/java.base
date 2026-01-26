#include <sun/nio/cs/SJIS.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/SJIS$DecodeHolder.h>
#include <sun/nio/cs/SJIS$EncodeHolder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <jcpp.h>

#undef SJIS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $SJIS$DecodeHolder = ::sun::nio::cs::SJIS$DecodeHolder;
using $SJIS$EncodeHolder = ::sun::nio::cs::SJIS$EncodeHolder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _SJIS_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SJIS, init$, void)},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(SJIS, contains, bool, $Charset*)},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SJIS, historicalName, $String*)},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(SJIS, newDecoder, $CharsetDecoder*)},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(SJIS, newEncoder, $CharsetEncoder*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _SJIS_InnerClassesInfo_[] = {
	{"sun.nio.cs.SJIS$EncodeHolder", "sun.nio.cs.SJIS", "EncodeHolder", $STATIC},
	{"sun.nio.cs.SJIS$DecodeHolder", "sun.nio.cs.SJIS", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _SJIS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.SJIS",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_SJIS_MethodInfo_,
	nullptr,
	nullptr,
	_SJIS_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.SJIS$EncodeHolder,sun.nio.cs.SJIS$DecodeHolder"
};

$Object* allocate$SJIS($Class* clazz) {
	return $of($alloc(SJIS));
}

int32_t SJIS::hashCode() {
	 return this->$Charset::hashCode();
}

bool SJIS::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* SJIS::toString() {
	 return this->$Charset::toString();
}

$Object* SJIS::clone() {
	 return this->$Charset::clone();
}

void SJIS::finalize() {
	this->$Charset::finalize();
}

void SJIS::init$() {
	$Charset::init$("Shift_JIS"_s, $($StandardCharsets::aliases_SJIS()));
}

$String* SJIS::historicalName() {
	return "SJIS"_s;
}

bool SJIS::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(SJIS, cs)));
}

$CharsetDecoder* SJIS::newDecoder() {
	$init($SJIS$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $SJIS$DecodeHolder::b2c, $SJIS$DecodeHolder::b2cSB, 64, 252, true);
}

$CharsetEncoder* SJIS::newEncoder() {
	$init($SJIS$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $SJIS$EncodeHolder::c2b, $SJIS$EncodeHolder::c2bIndex, true);
}

SJIS::SJIS() {
}

$Class* SJIS::load$($String* name, bool initialize) {
	$loadClass(SJIS, name, initialize, &_SJIS_ClassInfo_, allocate$SJIS);
	return class$;
}

$Class* SJIS::class$ = nullptr;

		} // cs
	} // nio
} // sun