#include <sun/nio/cs/MS874.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/MS874$Holder.h>
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
using $MS874$Holder = ::sun::nio::cs::MS874$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS874_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS874::*)()>(&MS874::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS874_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS874$Holder", "sun.nio.cs.MS874", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS874_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS874",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS874_MethodInfo_,
	nullptr,
	nullptr,
	_MS874_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS874$Holder"
};

$Object* allocate$MS874($Class* clazz) {
	return $of($alloc(MS874));
}

int32_t MS874::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS874::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS874::toString() {
	 return this->$Charset::toString();
}

$Object* MS874::clone() {
	 return this->$Charset::clone();
}

void MS874::finalize() {
	this->$Charset::finalize();
}

void MS874::init$() {
	$Charset::init$("x-windows-874"_s, $($StandardCharsets::aliases_MS874()));
}

$String* MS874::historicalName() {
	return "MS874"_s;
}

bool MS874::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS874, cs)));
}

$CharsetDecoder* MS874::newDecoder() {
	$init($MS874$Holder);
	return $new($SingleByte$Decoder, this, $MS874$Holder::b2c, true, false);
}

$CharsetEncoder* MS874::newEncoder() {
	$init($MS874$Holder);
	return $new($SingleByte$Encoder, this, $MS874$Holder::c2b, $MS874$Holder::c2bIndex, true);
}

MS874::MS874() {
}

$Class* MS874::load$($String* name, bool initialize) {
	$loadClass(MS874, name, initialize, &_MS874_ClassInfo_, allocate$MS874);
	return class$;
}

$Class* MS874::class$ = nullptr;

		} // cs
	} // nio
} // sun