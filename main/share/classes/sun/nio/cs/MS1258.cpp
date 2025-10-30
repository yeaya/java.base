#include <sun/nio/cs/MS1258.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/MS1258$Holder.h>
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
using $MS1258$Holder = ::sun::nio::cs::MS1258$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS1258_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS1258::*)()>(&MS1258::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS1258_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1258$Holder", "sun.nio.cs.MS1258", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1258_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS1258",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS1258_MethodInfo_,
	nullptr,
	nullptr,
	_MS1258_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1258$Holder"
};

$Object* allocate$MS1258($Class* clazz) {
	return $of($alloc(MS1258));
}

int32_t MS1258::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS1258::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS1258::toString() {
	 return this->$Charset::toString();
}

$Object* MS1258::clone() {
	 return this->$Charset::clone();
}

void MS1258::finalize() {
	this->$Charset::finalize();
}

void MS1258::init$() {
	$Charset::init$("windows-1258"_s, $($StandardCharsets::aliases_MS1258()));
}

$String* MS1258::historicalName() {
	return "Cp1258"_s;
}

bool MS1258::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS1258, cs)));
}

$CharsetDecoder* MS1258::newDecoder() {
	$init($MS1258$Holder);
	return $new($SingleByte$Decoder, this, $MS1258$Holder::b2c, true, false);
}

$CharsetEncoder* MS1258::newEncoder() {
	$init($MS1258$Holder);
	return $new($SingleByte$Encoder, this, $MS1258$Holder::c2b, $MS1258$Holder::c2bIndex, true);
}

MS1258::MS1258() {
}

$Class* MS1258::load$($String* name, bool initialize) {
	$loadClass(MS1258, name, initialize, &_MS1258_ClassInfo_, allocate$MS1258);
	return class$;
}

$Class* MS1258::class$ = nullptr;

		} // cs
	} // nio
} // sun