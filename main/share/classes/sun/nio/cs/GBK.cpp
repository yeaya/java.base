#include <sun/nio/cs/GBK.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/GBK$DecodeHolder.h>
#include <sun/nio/cs/GBK$EncodeHolder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <jcpp.h>

#undef GBK

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $GBK$DecodeHolder = ::sun::nio::cs::GBK$DecodeHolder;
using $GBK$EncodeHolder = ::sun::nio::cs::GBK$EncodeHolder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _GBK_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GBK::*)()>(&GBK::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _GBK_InnerClassesInfo_[] = {
	{"sun.nio.cs.GBK$EncodeHolder", "sun.nio.cs.GBK", "EncodeHolder", $STATIC},
	{"sun.nio.cs.GBK$DecodeHolder", "sun.nio.cs.GBK", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _GBK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.GBK",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_GBK_MethodInfo_,
	nullptr,
	nullptr,
	_GBK_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.GBK$EncodeHolder,sun.nio.cs.GBK$DecodeHolder"
};

$Object* allocate$GBK($Class* clazz) {
	return $of($alloc(GBK));
}

int32_t GBK::hashCode() {
	 return this->$Charset::hashCode();
}

bool GBK::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* GBK::toString() {
	 return this->$Charset::toString();
}

$Object* GBK::clone() {
	 return this->$Charset::clone();
}

void GBK::finalize() {
	this->$Charset::finalize();
}

void GBK::init$() {
	$Charset::init$("GBK"_s, $($StandardCharsets::aliases_GBK()));
}

$String* GBK::historicalName() {
	return "GBK"_s;
}

bool GBK::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(GBK, cs)));
}

$CharsetDecoder* GBK::newDecoder() {
	$init($GBK$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $GBK$DecodeHolder::b2c, $GBK$DecodeHolder::b2cSB, 64, 254, true);
}

$CharsetEncoder* GBK::newEncoder() {
	$init($GBK$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $GBK$EncodeHolder::c2b, $GBK$EncodeHolder::c2bIndex, true);
}

GBK::GBK() {
}

$Class* GBK::load$($String* name, bool initialize) {
	$loadClass(GBK, name, initialize, &_GBK_ClassInfo_, allocate$GBK);
	return class$;
}

$Class* GBK::class$ = nullptr;

		} // cs
	} // nio
} // sun