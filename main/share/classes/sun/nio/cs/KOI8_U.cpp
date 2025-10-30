#include <sun/nio/cs/KOI8_U.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/KOI8_U$Holder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <jcpp.h>

#undef KOI8_U

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $KOI8_U$Holder = ::sun::nio::cs::KOI8_U$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _KOI8_U_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KOI8_U::*)()>(&KOI8_U::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _KOI8_U_InnerClassesInfo_[] = {
	{"sun.nio.cs.KOI8_U$Holder", "sun.nio.cs.KOI8_U", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _KOI8_U_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.KOI8_U",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_KOI8_U_MethodInfo_,
	nullptr,
	nullptr,
	_KOI8_U_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.KOI8_U$Holder"
};

$Object* allocate$KOI8_U($Class* clazz) {
	return $of($alloc(KOI8_U));
}

int32_t KOI8_U::hashCode() {
	 return this->$Charset::hashCode();
}

bool KOI8_U::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* KOI8_U::toString() {
	 return this->$Charset::toString();
}

$Object* KOI8_U::clone() {
	 return this->$Charset::clone();
}

void KOI8_U::finalize() {
	this->$Charset::finalize();
}

void KOI8_U::init$() {
	$Charset::init$("KOI8-U"_s, $($StandardCharsets::aliases_KOI8_U()));
}

$String* KOI8_U::historicalName() {
	return "KOI8_U"_s;
}

bool KOI8_U::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(KOI8_U, cs)));
}

$CharsetDecoder* KOI8_U::newDecoder() {
	$init($KOI8_U$Holder);
	return $new($SingleByte$Decoder, this, $KOI8_U$Holder::b2c, true, false);
}

$CharsetEncoder* KOI8_U::newEncoder() {
	$init($KOI8_U$Holder);
	return $new($SingleByte$Encoder, this, $KOI8_U$Holder::c2b, $KOI8_U$Holder::c2bIndex, true);
}

KOI8_U::KOI8_U() {
}

$Class* KOI8_U::load$($String* name, bool initialize) {
	$loadClass(KOI8_U, name, initialize, &_KOI8_U_ClassInfo_, allocate$KOI8_U);
	return class$;
}

$Class* KOI8_U::class$ = nullptr;

		} // cs
	} // nio
} // sun