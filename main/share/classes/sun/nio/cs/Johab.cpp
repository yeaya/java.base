#include <sun/nio/cs/Johab.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/Johab$DecodeHolder.h>
#include <sun/nio/cs/Johab$EncodeHolder.h>
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
using $Johab$DecodeHolder = ::sun::nio::cs::Johab$DecodeHolder;
using $Johab$EncodeHolder = ::sun::nio::cs::Johab$EncodeHolder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _Johab_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Johab::*)()>(&Johab::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Johab_InnerClassesInfo_[] = {
	{"sun.nio.cs.Johab$EncodeHolder", "sun.nio.cs.Johab", "EncodeHolder", $STATIC},
	{"sun.nio.cs.Johab$DecodeHolder", "sun.nio.cs.Johab", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _Johab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.Johab",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_Johab_MethodInfo_,
	nullptr,
	nullptr,
	_Johab_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.Johab$EncodeHolder,sun.nio.cs.Johab$DecodeHolder"
};

$Object* allocate$Johab($Class* clazz) {
	return $of($alloc(Johab));
}

int32_t Johab::hashCode() {
	 return this->$Charset::hashCode();
}

bool Johab::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* Johab::toString() {
	 return this->$Charset::toString();
}

$Object* Johab::clone() {
	 return this->$Charset::clone();
}

void Johab::finalize() {
	this->$Charset::finalize();
}

void Johab::init$() {
	$Charset::init$("x-Johab"_s, $($StandardCharsets::aliases_Johab()));
}

$String* Johab::historicalName() {
	return "x-Johab"_s;
}

bool Johab::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(Johab, cs)));
}

$CharsetDecoder* Johab::newDecoder() {
	$init($Johab$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $Johab$DecodeHolder::b2c, $Johab$DecodeHolder::b2cSB, 49, 254, true);
}

$CharsetEncoder* Johab::newEncoder() {
	$init($Johab$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $Johab$EncodeHolder::c2b, $Johab$EncodeHolder::c2bIndex, true);
}

Johab::Johab() {
}

$Class* Johab::load$($String* name, bool initialize) {
	$loadClass(Johab, name, initialize, &_Johab_ClassInfo_, allocate$Johab);
	return class$;
}

$Class* Johab::class$ = nullptr;

		} // cs
	} // nio
} // sun