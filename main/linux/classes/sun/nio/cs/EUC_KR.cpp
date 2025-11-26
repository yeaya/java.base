#include <sun/nio/cs/EUC_KR.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/EUC_KR$DecodeHolder.h>
#include <sun/nio/cs/EUC_KR$EncodeHolder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <jcpp.h>

#undef EUC_KR

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $EUC_KR$DecodeHolder = ::sun::nio::cs::EUC_KR$DecodeHolder;
using $EUC_KR$EncodeHolder = ::sun::nio::cs::EUC_KR$EncodeHolder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _EUC_KR_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EUC_KR::*)()>(&EUC_KR::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _EUC_KR_InnerClassesInfo_[] = {
	{"sun.nio.cs.EUC_KR$EncodeHolder", "sun.nio.cs.EUC_KR", "EncodeHolder", $STATIC},
	{"sun.nio.cs.EUC_KR$DecodeHolder", "sun.nio.cs.EUC_KR", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _EUC_KR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.EUC_KR",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_EUC_KR_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_KR_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.EUC_KR$EncodeHolder,sun.nio.cs.EUC_KR$DecodeHolder"
};

$Object* allocate$EUC_KR($Class* clazz) {
	return $of($alloc(EUC_KR));
}

int32_t EUC_KR::hashCode() {
	 return this->$Charset::hashCode();
}

bool EUC_KR::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* EUC_KR::toString() {
	 return this->$Charset::toString();
}

$Object* EUC_KR::clone() {
	 return this->$Charset::clone();
}

void EUC_KR::finalize() {
	this->$Charset::finalize();
}

void EUC_KR::init$() {
	$Charset::init$("EUC-KR"_s, $($StandardCharsets::aliases_EUC_KR()));
}

$String* EUC_KR::historicalName() {
	return "EUC_KR"_s;
}

bool EUC_KR::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(EUC_KR, cs)));
}

$CharsetDecoder* EUC_KR::newDecoder() {
	$init($EUC_KR$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $EUC_KR$DecodeHolder::b2c, $EUC_KR$DecodeHolder::b2cSB, 161, 254, true);
}

$CharsetEncoder* EUC_KR::newEncoder() {
	$init($EUC_KR$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $EUC_KR$EncodeHolder::c2b, $EUC_KR$EncodeHolder::c2bIndex, true);
}

EUC_KR::EUC_KR() {
}

$Class* EUC_KR::load$($String* name, bool initialize) {
	$loadClass(EUC_KR, name, initialize, &_EUC_KR_ClassInfo_, allocate$EUC_KR);
	return class$;
}

$Class* EUC_KR::class$ = nullptr;

		} // cs
	} // nio
} // sun