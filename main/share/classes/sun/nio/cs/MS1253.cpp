#include <sun/nio/cs/MS1253.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/MS1253$Holder.h>
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
using $MS1253$Holder = ::sun::nio::cs::MS1253$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS1253_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS1253::*)()>(&MS1253::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS1253_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1253$Holder", "sun.nio.cs.MS1253", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1253_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS1253",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS1253_MethodInfo_,
	nullptr,
	nullptr,
	_MS1253_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1253$Holder"
};

$Object* allocate$MS1253($Class* clazz) {
	return $of($alloc(MS1253));
}

int32_t MS1253::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS1253::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS1253::toString() {
	 return this->$Charset::toString();
}

$Object* MS1253::clone() {
	 return this->$Charset::clone();
}

void MS1253::finalize() {
	this->$Charset::finalize();
}

void MS1253::init$() {
	$Charset::init$("windows-1253"_s, $($StandardCharsets::aliases_MS1253()));
}

$String* MS1253::historicalName() {
	return "Cp1253"_s;
}

bool MS1253::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS1253, cs)));
}

$CharsetDecoder* MS1253::newDecoder() {
	$init($MS1253$Holder);
	return $new($SingleByte$Decoder, this, $MS1253$Holder::b2c, true, false);
}

$CharsetEncoder* MS1253::newEncoder() {
	$init($MS1253$Holder);
	return $new($SingleByte$Encoder, this, $MS1253$Holder::c2b, $MS1253$Holder::c2bIndex, true);
}

MS1253::MS1253() {
}

$Class* MS1253::load$($String* name, bool initialize) {
	$loadClass(MS1253, name, initialize, &_MS1253_ClassInfo_, allocate$MS1253);
	return class$;
}

$Class* MS1253::class$ = nullptr;

		} // cs
	} // nio
} // sun