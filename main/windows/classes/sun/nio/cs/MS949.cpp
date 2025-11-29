#include <sun/nio/cs/MS949.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/MS949$DecodeHolder.h>
#include <sun/nio/cs/MS949$EncodeHolder.h>
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
using $MS949$DecodeHolder = ::sun::nio::cs::MS949$DecodeHolder;
using $MS949$EncodeHolder = ::sun::nio::cs::MS949$EncodeHolder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS949_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS949::*)()>(&MS949::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS949_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS949$EncodeHolder", "sun.nio.cs.MS949", "EncodeHolder", $STATIC},
	{"sun.nio.cs.MS949$DecodeHolder", "sun.nio.cs.MS949", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _MS949_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS949",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS949_MethodInfo_,
	nullptr,
	nullptr,
	_MS949_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS949$EncodeHolder,sun.nio.cs.MS949$DecodeHolder"
};

$Object* allocate$MS949($Class* clazz) {
	return $of($alloc(MS949));
}

int32_t MS949::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS949::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS949::toString() {
	 return this->$Charset::toString();
}

$Object* MS949::clone() {
	 return this->$Charset::clone();
}

void MS949::finalize() {
	this->$Charset::finalize();
}

void MS949::init$() {
	$Charset::init$("x-windows-949"_s, $($StandardCharsets::aliases_MS949()));
}

$String* MS949::historicalName() {
	return "MS949"_s;
}

bool MS949::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS949, cs)));
}

$CharsetDecoder* MS949::newDecoder() {
	$init($MS949$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $MS949$DecodeHolder::b2c, $MS949$DecodeHolder::b2cSB, 65, 254, true);
}

$CharsetEncoder* MS949::newEncoder() {
	$init($MS949$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $MS949$EncodeHolder::c2b, $MS949$EncodeHolder::c2bIndex, true);
}

MS949::MS949() {
}

$Class* MS949::load$($String* name, bool initialize) {
	$loadClass(MS949, name, initialize, &_MS949_ClassInfo_, allocate$MS949);
	return class$;
}

$Class* MS949::class$ = nullptr;

		} // cs
	} // nio
} // sun