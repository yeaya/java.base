#include <sun/nio/cs/MS1255.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/MS1255$Holder.h>
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
using $MS1255$Holder = ::sun::nio::cs::MS1255$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS1255_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS1255::*)()>(&MS1255::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS1255_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1255$Holder", "sun.nio.cs.MS1255", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1255_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS1255",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS1255_MethodInfo_,
	nullptr,
	nullptr,
	_MS1255_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1255$Holder"
};

$Object* allocate$MS1255($Class* clazz) {
	return $of($alloc(MS1255));
}

int32_t MS1255::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS1255::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS1255::toString() {
	 return this->$Charset::toString();
}

$Object* MS1255::clone() {
	 return this->$Charset::clone();
}

void MS1255::finalize() {
	this->$Charset::finalize();
}

void MS1255::init$() {
	$Charset::init$("windows-1255"_s, $($StandardCharsets::aliases_MS1255()));
}

$String* MS1255::historicalName() {
	return "Cp1255"_s;
}

bool MS1255::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS1255, cs)));
}

$CharsetDecoder* MS1255::newDecoder() {
	$init($MS1255$Holder);
	return $new($SingleByte$Decoder, this, $MS1255$Holder::b2c, true, false);
}

$CharsetEncoder* MS1255::newEncoder() {
	$init($MS1255$Holder);
	return $new($SingleByte$Encoder, this, $MS1255$Holder::c2b, $MS1255$Holder::c2bIndex, true);
}

MS1255::MS1255() {
}

$Class* MS1255::load$($String* name, bool initialize) {
	$loadClass(MS1255, name, initialize, &_MS1255_ClassInfo_, allocate$MS1255);
	return class$;
}

$Class* MS1255::class$ = nullptr;

		} // cs
	} // nio
} // sun