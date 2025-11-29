#include <sun/nio/cs/EUC_JP.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/EUC_JP$Decoder.h>
#include <sun/nio/cs/EUC_JP$Encoder.h>
#include <sun/nio/cs/JIS_X_0201.h>
#include <sun/nio/cs/JIS_X_0208.h>
#include <sun/nio/cs/JIS_X_0212.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <jcpp.h>

#undef EUC_JP

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $EUC_JP$Decoder = ::sun::nio::cs::EUC_JP$Decoder;
using $EUC_JP$Encoder = ::sun::nio::cs::EUC_JP$Encoder;
using $JIS_X_0201 = ::sun::nio::cs::JIS_X_0201;
using $JIS_X_0208 = ::sun::nio::cs::JIS_X_0208;
using $JIS_X_0212 = ::sun::nio::cs::JIS_X_0212;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _EUC_JP_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EUC_JP::*)()>(&EUC_JP::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _EUC_JP_InnerClassesInfo_[] = {
	{"sun.nio.cs.EUC_JP$Encoder", "sun.nio.cs.EUC_JP", "Encoder", $STATIC},
	{"sun.nio.cs.EUC_JP$Decoder", "sun.nio.cs.EUC_JP", "Decoder", $STATIC},
	{}
};

$ClassInfo _EUC_JP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.EUC_JP",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_EUC_JP_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_JP_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.EUC_JP$Encoder,sun.nio.cs.EUC_JP$Decoder"
};

$Object* allocate$EUC_JP($Class* clazz) {
	return $of($alloc(EUC_JP));
}

int32_t EUC_JP::hashCode() {
	 return this->$Charset::hashCode();
}

bool EUC_JP::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* EUC_JP::toString() {
	 return this->$Charset::toString();
}

$Object* EUC_JP::clone() {
	 return this->$Charset::clone();
}

void EUC_JP::finalize() {
	this->$Charset::finalize();
}

void EUC_JP::init$() {
	$Charset::init$("EUC-JP"_s, $($StandardCharsets::aliases_EUC_JP()));
}

$String* EUC_JP::historicalName() {
	return "EUC_JP"_s;
}

bool EUC_JP::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf($JIS_X_0201, cs)) || ($instanceOf($JIS_X_0208, cs)) || ($instanceOf($JIS_X_0212, cs)) || ($instanceOf(EUC_JP, cs)));
}

$CharsetDecoder* EUC_JP::newDecoder() {
	return $new($EUC_JP$Decoder, this);
}

$CharsetEncoder* EUC_JP::newEncoder() {
	return $new($EUC_JP$Encoder, this);
}

EUC_JP::EUC_JP() {
}

$Class* EUC_JP::load$($String* name, bool initialize) {
	$loadClass(EUC_JP, name, initialize, &_EUC_JP_ClassInfo_, allocate$EUC_JP);
	return class$;
}

$Class* EUC_JP::class$ = nullptr;

		} // cs
	} // nio
} // sun