#include <sun/nio/cs/MS950.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/MS950$DecodeHolder.h>
#include <sun/nio/cs/MS950$EncodeHolder.h>
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
using $MS950$DecodeHolder = ::sun::nio::cs::MS950$DecodeHolder;
using $MS950$EncodeHolder = ::sun::nio::cs::MS950$EncodeHolder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS950_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(MS950, init$, void)},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(MS950, contains, bool, $Charset*)},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MS950, historicalName, $String*)},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(MS950, newDecoder, $CharsetDecoder*)},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(MS950, newEncoder, $CharsetEncoder*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS950_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS950$EncodeHolder", "sun.nio.cs.MS950", "EncodeHolder", $STATIC},
	{"sun.nio.cs.MS950$DecodeHolder", "sun.nio.cs.MS950", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _MS950_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS950",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS950_MethodInfo_,
	nullptr,
	nullptr,
	_MS950_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS950$EncodeHolder,sun.nio.cs.MS950$DecodeHolder"
};

$Object* allocate$MS950($Class* clazz) {
	return $of($alloc(MS950));
}

int32_t MS950::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS950::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS950::toString() {
	 return this->$Charset::toString();
}

$Object* MS950::clone() {
	 return this->$Charset::clone();
}

void MS950::finalize() {
	this->$Charset::finalize();
}

void MS950::init$() {
	$Charset::init$("x-windows-950"_s, $($StandardCharsets::aliases_MS950()));
}

$String* MS950::historicalName() {
	return "MS950"_s;
}

bool MS950::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS950, cs)));
}

$CharsetDecoder* MS950::newDecoder() {
	$init($MS950$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $MS950$DecodeHolder::b2c, $MS950$DecodeHolder::b2cSB, 64, 254, true);
}

$CharsetEncoder* MS950::newEncoder() {
	$init($MS950$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $MS950$EncodeHolder::c2b, $MS950$EncodeHolder::c2bIndex, true);
}

MS950::MS950() {
}

$Class* MS950::load$($String* name, bool initialize) {
	$loadClass(MS950, name, initialize, &_MS950_ClassInfo_, allocate$MS950);
	return class$;
}

$Class* MS950::class$ = nullptr;

		} // cs
	} // nio
} // sun