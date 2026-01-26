#include <sun/nio/cs/MS932.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/JIS_X_0201.h>
#include <sun/nio/cs/MS932$DecodeHolder.h>
#include <sun/nio/cs/MS932$EncodeHolder.h>
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
using $JIS_X_0201 = ::sun::nio::cs::JIS_X_0201;
using $MS932$DecodeHolder = ::sun::nio::cs::MS932$DecodeHolder;
using $MS932$EncodeHolder = ::sun::nio::cs::MS932$EncodeHolder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS932_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(MS932, init$, void)},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(MS932, contains, bool, $Charset*)},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MS932, historicalName, $String*)},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(MS932, newDecoder, $CharsetDecoder*)},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(MS932, newEncoder, $CharsetEncoder*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS932_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS932$EncodeHolder", "sun.nio.cs.MS932", "EncodeHolder", $STATIC},
	{"sun.nio.cs.MS932$DecodeHolder", "sun.nio.cs.MS932", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _MS932_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS932",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS932_MethodInfo_,
	nullptr,
	nullptr,
	_MS932_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS932$EncodeHolder,sun.nio.cs.MS932$DecodeHolder"
};

$Object* allocate$MS932($Class* clazz) {
	return $of($alloc(MS932));
}

int32_t MS932::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS932::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS932::toString() {
	 return this->$Charset::toString();
}

$Object* MS932::clone() {
	 return this->$Charset::clone();
}

void MS932::finalize() {
	this->$Charset::finalize();
}

void MS932::init$() {
	$Charset::init$("windows-31j"_s, $($StandardCharsets::aliases_MS932()));
}

$String* MS932::historicalName() {
	return "MS932"_s;
}

bool MS932::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf($JIS_X_0201, cs)) || ($instanceOf(MS932, cs)));
}

$CharsetDecoder* MS932::newDecoder() {
	$init($MS932$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $MS932$DecodeHolder::b2c, $MS932$DecodeHolder::b2cSB, 64, 252, true);
}

$CharsetEncoder* MS932::newEncoder() {
	$init($MS932$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $MS932$EncodeHolder::c2b, $MS932$EncodeHolder::c2bIndex, true);
}

MS932::MS932() {
}

$Class* MS932::load$($String* name, bool initialize) {
	$loadClass(MS932, name, initialize, &_MS932_ClassInfo_, allocate$MS932);
	return class$;
}

$Class* MS932::class$ = nullptr;

		} // cs
	} // nio
} // sun