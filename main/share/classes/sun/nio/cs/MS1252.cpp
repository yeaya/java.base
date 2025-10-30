#include <sun/nio/cs/MS1252.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/MS1252$Holder.h>
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
using $MS1252$Holder = ::sun::nio::cs::MS1252$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS1252_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS1252::*)()>(&MS1252::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS1252_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1252$Holder", "sun.nio.cs.MS1252", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1252_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS1252",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS1252_MethodInfo_,
	nullptr,
	nullptr,
	_MS1252_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1252$Holder"
};

$Object* allocate$MS1252($Class* clazz) {
	return $of($alloc(MS1252));
}

int32_t MS1252::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS1252::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS1252::toString() {
	 return this->$Charset::toString();
}

$Object* MS1252::clone() {
	 return this->$Charset::clone();
}

void MS1252::finalize() {
	this->$Charset::finalize();
}

void MS1252::init$() {
	$Charset::init$("windows-1252"_s, $($StandardCharsets::aliases_MS1252()));
}

$String* MS1252::historicalName() {
	return "Cp1252"_s;
}

bool MS1252::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS1252, cs)));
}

$CharsetDecoder* MS1252::newDecoder() {
	$init($MS1252$Holder);
	return $new($SingleByte$Decoder, this, $MS1252$Holder::b2c, true, false);
}

$CharsetEncoder* MS1252::newEncoder() {
	$init($MS1252$Holder);
	return $new($SingleByte$Encoder, this, $MS1252$Holder::c2b, $MS1252$Holder::c2bIndex, true);
}

MS1252::MS1252() {
}

$Class* MS1252::load$($String* name, bool initialize) {
	$loadClass(MS1252, name, initialize, &_MS1252_ClassInfo_, allocate$MS1252);
	return class$;
}

$Class* MS1252::class$ = nullptr;

		} // cs
	} // nio
} // sun