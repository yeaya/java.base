#include <sun/nio/cs/ISO_8859_1.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ISO_8859_1$Decoder.h>
#include <sun/nio/cs/ISO_8859_1$Encoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <sun/nio/cs/US_ASCII.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $ISO_8859_1$Decoder = ::sun::nio::cs::ISO_8859_1$Decoder;
using $ISO_8859_1$Encoder = ::sun::nio::cs::ISO_8859_1$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;
using $US_ASCII = ::sun::nio::cs::US_ASCII;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _ISO_8859_1_FieldInfo_[] = {
	{"INSTANCE", "Lsun/nio/cs/ISO_8859_1;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ISO_8859_1, INSTANCE)},
	{}
};

$MethodInfo _ISO_8859_1_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ISO_8859_1, init$, void)},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(ISO_8859_1, contains, bool, $Charset*)},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ISO_8859_1, historicalName, $String*)},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(ISO_8859_1, newDecoder, $CharsetDecoder*)},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(ISO_8859_1, newEncoder, $CharsetEncoder*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ISO_8859_1_InnerClassesInfo_[] = {
	{"sun.nio.cs.ISO_8859_1$Encoder", "sun.nio.cs.ISO_8859_1", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.ISO_8859_1$Decoder", "sun.nio.cs.ISO_8859_1", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO_8859_1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ISO_8859_1",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	_ISO_8859_1_FieldInfo_,
	_ISO_8859_1_MethodInfo_,
	nullptr,
	nullptr,
	_ISO_8859_1_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ISO_8859_1$Encoder,sun.nio.cs.ISO_8859_1$Decoder"
};

$Object* allocate$ISO_8859_1($Class* clazz) {
	return $of($alloc(ISO_8859_1));
}

int32_t ISO_8859_1::hashCode() {
	 return this->$Charset::hashCode();
}

bool ISO_8859_1::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* ISO_8859_1::toString() {
	 return this->$Charset::toString();
}

$Object* ISO_8859_1::clone() {
	 return this->$Charset::clone();
}

void ISO_8859_1::finalize() {
	this->$Charset::finalize();
}

ISO_8859_1* ISO_8859_1::INSTANCE = nullptr;

void ISO_8859_1::init$() {
	$Charset::init$("ISO-8859-1"_s, $($StandardCharsets::aliases_ISO_8859_1()));
}

$String* ISO_8859_1::historicalName() {
	return "ISO8859_1"_s;
}

bool ISO_8859_1::contains($Charset* cs) {
	return (($instanceOf($US_ASCII, cs)) || ($instanceOf(ISO_8859_1, cs)));
}

$CharsetDecoder* ISO_8859_1::newDecoder() {
	return $new($ISO_8859_1$Decoder, this);
}

$CharsetEncoder* ISO_8859_1::newEncoder() {
	return $new($ISO_8859_1$Encoder, this);
}

void clinit$ISO_8859_1($Class* class$) {
	$assignStatic(ISO_8859_1::INSTANCE, $new(ISO_8859_1));
}

ISO_8859_1::ISO_8859_1() {
}

$Class* ISO_8859_1::load$($String* name, bool initialize) {
	$loadClass(ISO_8859_1, name, initialize, &_ISO_8859_1_ClassInfo_, clinit$ISO_8859_1, allocate$ISO_8859_1);
	return class$;
}

$Class* ISO_8859_1::class$ = nullptr;

		} // cs
	} // nio
} // sun