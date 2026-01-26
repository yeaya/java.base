#include <sun/nio/cs/ISO_8859_6.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ISO_8859_6$Holder.h>
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
using $ISO_8859_6$Holder = ::sun::nio::cs::ISO_8859_6$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _ISO_8859_6_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ISO_8859_6, init$, void)},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(ISO_8859_6, contains, bool, $Charset*)},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ISO_8859_6, historicalName, $String*)},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(ISO_8859_6, newDecoder, $CharsetDecoder*)},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(ISO_8859_6, newEncoder, $CharsetEncoder*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ISO_8859_6_InnerClassesInfo_[] = {
	{"sun.nio.cs.ISO_8859_6$Holder", "sun.nio.cs.ISO_8859_6", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO_8859_6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ISO_8859_6",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_ISO_8859_6_MethodInfo_,
	nullptr,
	nullptr,
	_ISO_8859_6_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ISO_8859_6$Holder"
};

$Object* allocate$ISO_8859_6($Class* clazz) {
	return $of($alloc(ISO_8859_6));
}

int32_t ISO_8859_6::hashCode() {
	 return this->$Charset::hashCode();
}

bool ISO_8859_6::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* ISO_8859_6::toString() {
	 return this->$Charset::toString();
}

$Object* ISO_8859_6::clone() {
	 return this->$Charset::clone();
}

void ISO_8859_6::finalize() {
	this->$Charset::finalize();
}

void ISO_8859_6::init$() {
	$Charset::init$("ISO-8859-6"_s, $($StandardCharsets::aliases_ISO_8859_6()));
}

$String* ISO_8859_6::historicalName() {
	return "ISO8859_6"_s;
}

bool ISO_8859_6::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(ISO_8859_6, cs)));
}

$CharsetDecoder* ISO_8859_6::newDecoder() {
	$init($ISO_8859_6$Holder);
	return $new($SingleByte$Decoder, this, $ISO_8859_6$Holder::b2c, true, false);
}

$CharsetEncoder* ISO_8859_6::newEncoder() {
	$init($ISO_8859_6$Holder);
	return $new($SingleByte$Encoder, this, $ISO_8859_6$Holder::c2b, $ISO_8859_6$Holder::c2bIndex, true);
}

ISO_8859_6::ISO_8859_6() {
}

$Class* ISO_8859_6::load$($String* name, bool initialize) {
	$loadClass(ISO_8859_6, name, initialize, &_ISO_8859_6_ClassInfo_, allocate$ISO_8859_6);
	return class$;
}

$Class* ISO_8859_6::class$ = nullptr;

		} // cs
	} // nio
} // sun