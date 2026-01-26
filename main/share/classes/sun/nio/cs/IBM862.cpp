#include <sun/nio/cs/IBM862.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/IBM862$Holder.h>
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
using $IBM862$Holder = ::sun::nio::cs::IBM862$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _IBM862_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(IBM862, init$, void)},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(IBM862, contains, bool, $Charset*)},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IBM862, historicalName, $String*)},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(IBM862, newDecoder, $CharsetDecoder*)},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(IBM862, newEncoder, $CharsetEncoder*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM862_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM862$Holder", "sun.nio.cs.IBM862", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM862_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.IBM862",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM862_MethodInfo_,
	nullptr,
	nullptr,
	_IBM862_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM862$Holder"
};

$Object* allocate$IBM862($Class* clazz) {
	return $of($alloc(IBM862));
}

int32_t IBM862::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM862::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* IBM862::toString() {
	 return this->$Charset::toString();
}

$Object* IBM862::clone() {
	 return this->$Charset::clone();
}

void IBM862::finalize() {
	this->$Charset::finalize();
}

void IBM862::init$() {
	$Charset::init$("IBM862"_s, $($StandardCharsets::aliases_IBM862()));
}

$String* IBM862::historicalName() {
	return "Cp862"_s;
}

bool IBM862::contains($Charset* cs) {
	return ($instanceOf(IBM862, cs));
}

$CharsetDecoder* IBM862::newDecoder() {
	$init($IBM862$Holder);
	return $new($SingleByte$Decoder, this, $IBM862$Holder::b2c, false, false);
}

$CharsetEncoder* IBM862::newEncoder() {
	$init($IBM862$Holder);
	return $new($SingleByte$Encoder, this, $IBM862$Holder::c2b, $IBM862$Holder::c2bIndex, false);
}

IBM862::IBM862() {
}

$Class* IBM862::load$($String* name, bool initialize) {
	$loadClass(IBM862, name, initialize, &_IBM862_ClassInfo_, allocate$IBM862);
	return class$;
}

$Class* IBM862::class$ = nullptr;

		} // cs
	} // nio
} // sun