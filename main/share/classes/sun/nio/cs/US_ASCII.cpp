#include <sun/nio/cs/US_ASCII.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <sun/nio/cs/US_ASCII$Decoder.h>
#include <sun/nio/cs/US_ASCII$Encoder.h>
#include <jcpp.h>

#undef INSTANCE
#undef US_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;
using $US_ASCII$Decoder = ::sun::nio::cs::US_ASCII$Decoder;
using $US_ASCII$Encoder = ::sun::nio::cs::US_ASCII$Encoder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _US_ASCII_FieldInfo_[] = {
	{"INSTANCE", "Lsun/nio/cs/US_ASCII;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(US_ASCII, INSTANCE)},
	{}
};

$MethodInfo _US_ASCII_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(US_ASCII::*)()>(&US_ASCII::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _US_ASCII_InnerClassesInfo_[] = {
	{"sun.nio.cs.US_ASCII$Encoder", "sun.nio.cs.US_ASCII", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.US_ASCII$Decoder", "sun.nio.cs.US_ASCII", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _US_ASCII_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.US_ASCII",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	_US_ASCII_FieldInfo_,
	_US_ASCII_MethodInfo_,
	nullptr,
	nullptr,
	_US_ASCII_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.US_ASCII$Encoder,sun.nio.cs.US_ASCII$Decoder"
};

$Object* allocate$US_ASCII($Class* clazz) {
	return $of($alloc(US_ASCII));
}

int32_t US_ASCII::hashCode() {
	 return this->$Charset::hashCode();
}

bool US_ASCII::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* US_ASCII::toString() {
	 return this->$Charset::toString();
}

$Object* US_ASCII::clone() {
	 return this->$Charset::clone();
}

void US_ASCII::finalize() {
	this->$Charset::finalize();
}

US_ASCII* US_ASCII::INSTANCE = nullptr;

void US_ASCII::init$() {
	$Charset::init$("US-ASCII"_s, $($StandardCharsets::aliases_US_ASCII()));
}

$String* US_ASCII::historicalName() {
	return "ASCII"_s;
}

bool US_ASCII::contains($Charset* cs) {
	return ($instanceOf(US_ASCII, cs));
}

$CharsetDecoder* US_ASCII::newDecoder() {
	return $new($US_ASCII$Decoder, this);
}

$CharsetEncoder* US_ASCII::newEncoder() {
	return $new($US_ASCII$Encoder, this);
}

void clinit$US_ASCII($Class* class$) {
	$assignStatic(US_ASCII::INSTANCE, $new(US_ASCII));
}

US_ASCII::US_ASCII() {
}

$Class* US_ASCII::load$($String* name, bool initialize) {
	$loadClass(US_ASCII, name, initialize, &_US_ASCII_ClassInfo_, clinit$US_ASCII, allocate$US_ASCII);
	return class$;
}

$Class* US_ASCII::class$ = nullptr;

		} // cs
	} // nio
} // sun