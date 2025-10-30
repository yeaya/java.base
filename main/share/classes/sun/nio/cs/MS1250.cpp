#include <sun/nio/cs/MS1250.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/MS1250$Holder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $MS1250$Holder = ::sun::nio::cs::MS1250$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS1250_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS1250::*)()>(&MS1250::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS1250_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1250$Holder", "sun.nio.cs.MS1250", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1250_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS1250",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS1250_MethodInfo_,
	nullptr,
	nullptr,
	_MS1250_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1250$Holder"
};

$Object* allocate$MS1250($Class* clazz) {
	return $of($alloc(MS1250));
}

int32_t MS1250::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS1250::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS1250::toString() {
	 return this->$Charset::toString();
}

$Object* MS1250::clone() {
	 return this->$Charset::clone();
}

void MS1250::finalize() {
	this->$Charset::finalize();
}

void MS1250::init$() {
	$Charset::init$("windows-1250"_s, $($StandardCharsets::aliases_MS1250()));
}

$String* MS1250::historicalName() {
	return "Cp1250"_s;
}

bool MS1250::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS1250, cs)));
}

$CharsetDecoder* MS1250::newDecoder() {
	$init($MS1250$Holder);
	return $new($SingleByte$Decoder, this, $MS1250$Holder::b2c, true, false);
}

$CharsetEncoder* MS1250::newEncoder() {
	$init($MS1250$Holder);
	return $new($SingleByte$Encoder, this, $MS1250$Holder::c2b, $MS1250$Holder::c2bIndex, true);
}

MS1250::MS1250() {
}

$Class* MS1250::load$($String* name, bool initialize) {
	$loadClass(MS1250, name, initialize, &_MS1250_ClassInfo_, allocate$MS1250);
	return class$;
}

$Class* MS1250::class$ = nullptr;

		} // cs
	} // nio
} // sun