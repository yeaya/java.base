#include <sun/nio/cs/KOI8_R.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/KOI8_R$Holder.h>
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
using $KOI8_R$Holder = ::sun::nio::cs::KOI8_R$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _KOI8_R_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KOI8_R::*)()>(&KOI8_R::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _KOI8_R_InnerClassesInfo_[] = {
	{"sun.nio.cs.KOI8_R$Holder", "sun.nio.cs.KOI8_R", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _KOI8_R_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.KOI8_R",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_KOI8_R_MethodInfo_,
	nullptr,
	nullptr,
	_KOI8_R_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.KOI8_R$Holder"
};

$Object* allocate$KOI8_R($Class* clazz) {
	return $of($alloc(KOI8_R));
}

int32_t KOI8_R::hashCode() {
	 return this->$Charset::hashCode();
}

bool KOI8_R::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* KOI8_R::toString() {
	 return this->$Charset::toString();
}

$Object* KOI8_R::clone() {
	 return this->$Charset::clone();
}

void KOI8_R::finalize() {
	this->$Charset::finalize();
}

void KOI8_R::init$() {
	$Charset::init$("KOI8-R"_s, $($StandardCharsets::aliases_KOI8_R()));
}

$String* KOI8_R::historicalName() {
	return "KOI8_R"_s;
}

bool KOI8_R::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(KOI8_R, cs)));
}

$CharsetDecoder* KOI8_R::newDecoder() {
	$init($KOI8_R$Holder);
	return $new($SingleByte$Decoder, this, $KOI8_R$Holder::b2c, true, false);
}

$CharsetEncoder* KOI8_R::newEncoder() {
	$init($KOI8_R$Holder);
	return $new($SingleByte$Encoder, this, $KOI8_R$Holder::c2b, $KOI8_R$Holder::c2bIndex, true);
}

KOI8_R::KOI8_R() {
}

$Class* KOI8_R::load$($String* name, bool initialize) {
	$loadClass(KOI8_R, name, initialize, &_KOI8_R_ClassInfo_, allocate$KOI8_R);
	return class$;
}

$Class* KOI8_R::class$ = nullptr;

		} // cs
	} // nio
} // sun