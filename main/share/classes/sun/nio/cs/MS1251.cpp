#include <sun/nio/cs/MS1251.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/MS1251$Holder.h>
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
using $MS1251$Holder = ::sun::nio::cs::MS1251$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS1251_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS1251::*)()>(&MS1251::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS1251_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1251$Holder", "sun.nio.cs.MS1251", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1251_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS1251",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS1251_MethodInfo_,
	nullptr,
	nullptr,
	_MS1251_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1251$Holder"
};

$Object* allocate$MS1251($Class* clazz) {
	return $of($alloc(MS1251));
}

int32_t MS1251::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS1251::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS1251::toString() {
	 return this->$Charset::toString();
}

$Object* MS1251::clone() {
	 return this->$Charset::clone();
}

void MS1251::finalize() {
	this->$Charset::finalize();
}

void MS1251::init$() {
	$Charset::init$("windows-1251"_s, $($StandardCharsets::aliases_MS1251()));
}

$String* MS1251::historicalName() {
	return "Cp1251"_s;
}

bool MS1251::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS1251, cs)));
}

$CharsetDecoder* MS1251::newDecoder() {
	$init($MS1251$Holder);
	return $new($SingleByte$Decoder, this, $MS1251$Holder::b2c, true, false);
}

$CharsetEncoder* MS1251::newEncoder() {
	$init($MS1251$Holder);
	return $new($SingleByte$Encoder, this, $MS1251$Holder::c2b, $MS1251$Holder::c2bIndex, true);
}

MS1251::MS1251() {
}

$Class* MS1251::load$($String* name, bool initialize) {
	$loadClass(MS1251, name, initialize, &_MS1251_ClassInfo_, allocate$MS1251);
	return class$;
}

$Class* MS1251::class$ = nullptr;

		} // cs
	} // nio
} // sun