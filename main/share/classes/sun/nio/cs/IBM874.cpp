#include <sun/nio/cs/IBM874.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/IBM874$Holder.h>
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
using $IBM874$Holder = ::sun::nio::cs::IBM874$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _IBM874_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM874::*)()>(&IBM874::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM874_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM874$Holder", "sun.nio.cs.IBM874", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM874_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.IBM874",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM874_MethodInfo_,
	nullptr,
	nullptr,
	_IBM874_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM874$Holder"
};

$Object* allocate$IBM874($Class* clazz) {
	return $of($alloc(IBM874));
}

int32_t IBM874::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM874::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* IBM874::toString() {
	 return this->$Charset::toString();
}

$Object* IBM874::clone() {
	 return this->$Charset::clone();
}

void IBM874::finalize() {
	this->$Charset::finalize();
}

void IBM874::init$() {
	$Charset::init$("x-IBM874"_s, $($StandardCharsets::aliases_IBM874()));
}

$String* IBM874::historicalName() {
	return "Cp874"_s;
}

bool IBM874::contains($Charset* cs) {
	return ($instanceOf(IBM874, cs));
}

$CharsetDecoder* IBM874::newDecoder() {
	$init($IBM874$Holder);
	return $new($SingleByte$Decoder, this, $IBM874$Holder::b2c, false, false);
}

$CharsetEncoder* IBM874::newEncoder() {
	$init($IBM874$Holder);
	return $new($SingleByte$Encoder, this, $IBM874$Holder::c2b, $IBM874$Holder::c2bIndex, false);
}

IBM874::IBM874() {
}

$Class* IBM874::load$($String* name, bool initialize) {
	$loadClass(IBM874, name, initialize, &_IBM874_ClassInfo_, allocate$IBM874);
	return class$;
}

$Class* IBM874::class$ = nullptr;

		} // cs
	} // nio
} // sun