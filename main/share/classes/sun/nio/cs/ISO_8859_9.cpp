#include <sun/nio/cs/ISO_8859_9.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ISO_8859_9$Holder.h>
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
using $ISO_8859_9$Holder = ::sun::nio::cs::ISO_8859_9$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _ISO_8859_9_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ISO_8859_9::*)()>(&ISO_8859_9::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ISO_8859_9_InnerClassesInfo_[] = {
	{"sun.nio.cs.ISO_8859_9$Holder", "sun.nio.cs.ISO_8859_9", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO_8859_9_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ISO_8859_9",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_ISO_8859_9_MethodInfo_,
	nullptr,
	nullptr,
	_ISO_8859_9_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ISO_8859_9$Holder"
};

$Object* allocate$ISO_8859_9($Class* clazz) {
	return $of($alloc(ISO_8859_9));
}

int32_t ISO_8859_9::hashCode() {
	 return this->$Charset::hashCode();
}

bool ISO_8859_9::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* ISO_8859_9::toString() {
	 return this->$Charset::toString();
}

$Object* ISO_8859_9::clone() {
	 return this->$Charset::clone();
}

void ISO_8859_9::finalize() {
	this->$Charset::finalize();
}

void ISO_8859_9::init$() {
	$Charset::init$("ISO-8859-9"_s, $($StandardCharsets::aliases_ISO_8859_9()));
}

$String* ISO_8859_9::historicalName() {
	return "ISO8859_9"_s;
}

bool ISO_8859_9::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(ISO_8859_9, cs)));
}

$CharsetDecoder* ISO_8859_9::newDecoder() {
	$init($ISO_8859_9$Holder);
	return $new($SingleByte$Decoder, this, $ISO_8859_9$Holder::b2c, true, false);
}

$CharsetEncoder* ISO_8859_9::newEncoder() {
	$init($ISO_8859_9$Holder);
	return $new($SingleByte$Encoder, this, $ISO_8859_9$Holder::c2b, $ISO_8859_9$Holder::c2bIndex, true);
}

ISO_8859_9::ISO_8859_9() {
}

$Class* ISO_8859_9::load$($String* name, bool initialize) {
	$loadClass(ISO_8859_9, name, initialize, &_ISO_8859_9_ClassInfo_, allocate$ISO_8859_9);
	return class$;
}

$Class* ISO_8859_9::class$ = nullptr;

		} // cs
	} // nio
} // sun