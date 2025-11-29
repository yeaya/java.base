#include <sun/nio/cs/MS1256.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/MS1256$Holder.h>
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
using $MS1256$Holder = ::sun::nio::cs::MS1256$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _MS1256_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS1256::*)()>(&MS1256::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS1256_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1256$Holder", "sun.nio.cs.MS1256", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1256_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.MS1256",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS1256_MethodInfo_,
	nullptr,
	nullptr,
	_MS1256_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1256$Holder"
};

$Object* allocate$MS1256($Class* clazz) {
	return $of($alloc(MS1256));
}

int32_t MS1256::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS1256::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS1256::toString() {
	 return this->$Charset::toString();
}

$Object* MS1256::clone() {
	 return this->$Charset::clone();
}

void MS1256::finalize() {
	this->$Charset::finalize();
}

void MS1256::init$() {
	$Charset::init$("windows-1256"_s, $($StandardCharsets::aliases_MS1256()));
}

$String* MS1256::historicalName() {
	return "Cp1256"_s;
}

bool MS1256::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(MS1256, cs)));
}

$CharsetDecoder* MS1256::newDecoder() {
	$init($MS1256$Holder);
	return $new($SingleByte$Decoder, this, $MS1256$Holder::b2c, true, false);
}

$CharsetEncoder* MS1256::newEncoder() {
	$init($MS1256$Holder);
	return $new($SingleByte$Encoder, this, $MS1256$Holder::c2b, $MS1256$Holder::c2bIndex, true);
}

MS1256::MS1256() {
}

$Class* MS1256::load$($String* name, bool initialize) {
	$loadClass(MS1256, name, initialize, &_MS1256_ClassInfo_, allocate$MS1256);
	return class$;
}

$Class* MS1256::class$ = nullptr;

		} // cs
	} // nio
} // sun