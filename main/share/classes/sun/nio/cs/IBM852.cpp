#include <sun/nio/cs/IBM852.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/IBM852$Holder.h>
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
using $IBM852$Holder = ::sun::nio::cs::IBM852$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _IBM852_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM852::*)()>(&IBM852::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM852_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM852$Holder", "sun.nio.cs.IBM852", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM852_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.IBM852",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM852_MethodInfo_,
	nullptr,
	nullptr,
	_IBM852_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM852$Holder"
};

$Object* allocate$IBM852($Class* clazz) {
	return $of($alloc(IBM852));
}

int32_t IBM852::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM852::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* IBM852::toString() {
	 return this->$Charset::toString();
}

$Object* IBM852::clone() {
	 return this->$Charset::clone();
}

void IBM852::finalize() {
	this->$Charset::finalize();
}

void IBM852::init$() {
	$Charset::init$("IBM852"_s, $($StandardCharsets::aliases_IBM852()));
}

$String* IBM852::historicalName() {
	return "Cp852"_s;
}

bool IBM852::contains($Charset* cs) {
	return ($instanceOf(IBM852, cs));
}

$CharsetDecoder* IBM852::newDecoder() {
	$init($IBM852$Holder);
	return $new($SingleByte$Decoder, this, $IBM852$Holder::b2c, false, false);
}

$CharsetEncoder* IBM852::newEncoder() {
	$init($IBM852$Holder);
	return $new($SingleByte$Encoder, this, $IBM852$Holder::c2b, $IBM852$Holder::c2bIndex, false);
}

IBM852::IBM852() {
}

$Class* IBM852::load$($String* name, bool initialize) {
	$loadClass(IBM852, name, initialize, &_IBM852_ClassInfo_, allocate$IBM852);
	return class$;
}

$Class* IBM852::class$ = nullptr;

		} // cs
	} // nio
} // sun