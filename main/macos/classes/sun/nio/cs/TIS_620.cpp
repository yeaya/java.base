#include <sun/nio/cs/TIS_620.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <sun/nio/cs/TIS_620$Holder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;
using $TIS_620$Holder = ::sun::nio::cs::TIS_620$Holder;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _TIS_620_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIS_620::*)()>(&TIS_620::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _TIS_620_InnerClassesInfo_[] = {
	{"sun.nio.cs.TIS_620$Holder", "sun.nio.cs.TIS_620", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TIS_620_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.TIS_620",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_TIS_620_MethodInfo_,
	nullptr,
	nullptr,
	_TIS_620_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.TIS_620$Holder"
};

$Object* allocate$TIS_620($Class* clazz) {
	return $of($alloc(TIS_620));
}

int32_t TIS_620::hashCode() {
	 return this->$Charset::hashCode();
}

bool TIS_620::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* TIS_620::toString() {
	 return this->$Charset::toString();
}

$Object* TIS_620::clone() {
	 return this->$Charset::clone();
}

void TIS_620::finalize() {
	this->$Charset::finalize();
}

void TIS_620::init$() {
	$Charset::init$("TIS-620"_s, $($StandardCharsets::aliases_TIS_620()));
}

$String* TIS_620::historicalName() {
	return "TIS620"_s;
}

bool TIS_620::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(TIS_620, cs)));
}

$CharsetDecoder* TIS_620::newDecoder() {
	$init($TIS_620$Holder);
	return $new($SingleByte$Decoder, this, $TIS_620$Holder::b2c, true, false);
}

$CharsetEncoder* TIS_620::newEncoder() {
	$init($TIS_620$Holder);
	return $new($SingleByte$Encoder, this, $TIS_620$Holder::c2b, $TIS_620$Holder::c2bIndex, true);
}

TIS_620::TIS_620() {
}

$Class* TIS_620::load$($String* name, bool initialize) {
	$loadClass(TIS_620, name, initialize, &_TIS_620_ClassInfo_, allocate$TIS_620);
	return class$;
}

$Class* TIS_620::class$ = nullptr;

		} // cs
	} // nio
} // sun