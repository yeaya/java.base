#include <sun/nio/cs/Big5.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/Big5$DecodeHolder.h>
#include <sun/nio/cs/Big5$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $Big5$DecodeHolder = ::sun::nio::cs::Big5$DecodeHolder;
using $Big5$EncodeHolder = ::sun::nio::cs::Big5$EncodeHolder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _Big5_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Big5::*)()>(&Big5::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Big5_InnerClassesInfo_[] = {
	{"sun.nio.cs.Big5$EncodeHolder", "sun.nio.cs.Big5", "EncodeHolder", $STATIC},
	{"sun.nio.cs.Big5$DecodeHolder", "sun.nio.cs.Big5", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _Big5_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.Big5",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_Big5_MethodInfo_,
	nullptr,
	nullptr,
	_Big5_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.Big5$EncodeHolder,sun.nio.cs.Big5$DecodeHolder"
};

$Object* allocate$Big5($Class* clazz) {
	return $of($alloc(Big5));
}

int32_t Big5::hashCode() {
	 return this->$Charset::hashCode();
}

bool Big5::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* Big5::toString() {
	 return this->$Charset::toString();
}

$Object* Big5::clone() {
	 return this->$Charset::clone();
}

void Big5::finalize() {
	this->$Charset::finalize();
}

void Big5::init$() {
	$Charset::init$("Big5"_s, $($StandardCharsets::aliases_Big5()));
}

$String* Big5::historicalName() {
	return "Big5"_s;
}

bool Big5::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(Big5, cs)));
}

$CharsetDecoder* Big5::newDecoder() {
	$init($Big5$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $Big5$DecodeHolder::b2c, $Big5$DecodeHolder::b2cSB, 64, 254, true);
}

$CharsetEncoder* Big5::newEncoder() {
	$init($Big5$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $Big5$EncodeHolder::c2b, $Big5$EncodeHolder::c2bIndex, true);
}

Big5::Big5() {
}

$Class* Big5::load$($String* name, bool initialize) {
	$loadClass(Big5, name, initialize, &_Big5_ClassInfo_, allocate$Big5);
	return class$;
}

$Class* Big5::class$ = nullptr;

		} // cs
	} // nio
} // sun