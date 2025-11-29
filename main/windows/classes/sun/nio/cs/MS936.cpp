#include <sun/nio/cs/MS936.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/MS936$DecodeHolder.h>
#include <sun/nio/cs/MS936$EncodeHolder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $MS936$DecodeHolder = ::sun::nio::cs::MS936$DecodeHolder;
using $MS936$EncodeHolder = ::sun::nio::cs::MS936$EncodeHolder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS936_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS936::*)()>(&MS936::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS936_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS936$EncodeHolder", "sun.nio.cs.MS936", "EncodeHolder", $STATIC},
	{"sun.nio.cs.MS936$DecodeHolder", "sun.nio.cs.MS936", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _MS936_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS936",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS936_MethodInfo_,
	nullptr,
	nullptr,
	_MS936_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS936$EncodeHolder,sun.nio.cs.MS936$DecodeHolder"
};

$Object* allocate$MS936($Class* clazz) {
	return $of($alloc(MS936));
}

int32_t MS936::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS936::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS936::toString() {
	 return this->$Charset::toString();
}

$Object* MS936::clone() {
	 return this->$Charset::clone();
}

void MS936::finalize() {
	this->$Charset::finalize();
}

void MS936::init$() {
	$Charset::init$("x-mswin-936"_s, $($StandardCharsets::aliases_MS936()));
}

$String* MS936::historicalName() {
	return "MS936"_s;
}

bool MS936::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS936, cs)));
}

$CharsetDecoder* MS936::newDecoder() {
	$init($MS936$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $MS936$DecodeHolder::b2c, $MS936$DecodeHolder::b2cSB, 64, 254, true);
}

$CharsetEncoder* MS936::newEncoder() {
	$init($MS936$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $MS936$EncodeHolder::c2b, $MS936$EncodeHolder::c2bIndex, true);
}

MS936::MS936() {
}

$Class* MS936::load$($String* name, bool initialize) {
	$loadClass(MS936, name, initialize, &_MS936_ClassInfo_, allocate$MS936);
	return class$;
}

$Class* MS936::class$ = nullptr;

		} // cs
	} // nio
} // sun