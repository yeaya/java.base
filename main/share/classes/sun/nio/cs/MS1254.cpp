#include <sun/nio/cs/MS1254.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/MS1254$Holder.h>
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
using $MS1254$Holder = ::sun::nio::cs::MS1254$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS1254_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS1254::*)()>(&MS1254::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS1254_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1254$Holder", "sun.nio.cs.MS1254", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1254_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS1254",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS1254_MethodInfo_,
	nullptr,
	nullptr,
	_MS1254_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1254$Holder"
};

$Object* allocate$MS1254($Class* clazz) {
	return $of($alloc(MS1254));
}

int32_t MS1254::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS1254::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS1254::toString() {
	 return this->$Charset::toString();
}

$Object* MS1254::clone() {
	 return this->$Charset::clone();
}

void MS1254::finalize() {
	this->$Charset::finalize();
}

void MS1254::init$() {
	$Charset::init$("windows-1254"_s, $($StandardCharsets::aliases_MS1254()));
}

$String* MS1254::historicalName() {
	return "Cp1254"_s;
}

bool MS1254::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS1254, cs)));
}

$CharsetDecoder* MS1254::newDecoder() {
	$init($MS1254$Holder);
	return $new($SingleByte$Decoder, this, $MS1254$Holder::b2c, true, false);
}

$CharsetEncoder* MS1254::newEncoder() {
	$init($MS1254$Holder);
	return $new($SingleByte$Encoder, this, $MS1254$Holder::c2b, $MS1254$Holder::c2bIndex, true);
}

MS1254::MS1254() {
}

$Class* MS1254::load$($String* name, bool initialize) {
	$loadClass(MS1254, name, initialize, &_MS1254_ClassInfo_, allocate$MS1254);
	return class$;
}

$Class* MS1254::class$ = nullptr;

		} // cs
	} // nio
} // sun