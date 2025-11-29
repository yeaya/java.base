#include <sun/nio/cs/JIS_X_0201.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/JIS_X_0201$Holder.h>
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
using $JIS_X_0201$Holder = ::sun::nio::cs::JIS_X_0201$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _JIS_X_0201_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JIS_X_0201::*)()>(&JIS_X_0201::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _JIS_X_0201_InnerClassesInfo_[] = {
	{"sun.nio.cs.JIS_X_0201$Holder", "sun.nio.cs.JIS_X_0201", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JIS_X_0201_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.JIS_X_0201",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_JIS_X_0201_MethodInfo_,
	nullptr,
	nullptr,
	_JIS_X_0201_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.JIS_X_0201$Holder"
};

$Object* allocate$JIS_X_0201($Class* clazz) {
	return $of($alloc(JIS_X_0201));
}

int32_t JIS_X_0201::hashCode() {
	 return this->$Charset::hashCode();
}

bool JIS_X_0201::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* JIS_X_0201::toString() {
	 return this->$Charset::toString();
}

$Object* JIS_X_0201::clone() {
	 return this->$Charset::clone();
}

void JIS_X_0201::finalize() {
	this->$Charset::finalize();
}

void JIS_X_0201::init$() {
	$Charset::init$("JIS_X0201"_s, $($StandardCharsets::aliases_JIS_X_0201()));
}

$String* JIS_X_0201::historicalName() {
	return "JIS_X0201"_s;
}

bool JIS_X_0201::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(JIS_X_0201, cs)));
}

$CharsetDecoder* JIS_X_0201::newDecoder() {
	$init($JIS_X_0201$Holder);
	return $new($SingleByte$Decoder, this, $JIS_X_0201$Holder::b2c, true, false);
}

$CharsetEncoder* JIS_X_0201::newEncoder() {
	$init($JIS_X_0201$Holder);
	return $new($SingleByte$Encoder, this, $JIS_X_0201$Holder::c2b, $JIS_X_0201$Holder::c2bIndex, true);
}

JIS_X_0201::JIS_X_0201() {
}

$Class* JIS_X_0201::load$($String* name, bool initialize) {
	$loadClass(JIS_X_0201, name, initialize, &_JIS_X_0201_ClassInfo_, allocate$JIS_X_0201);
	return class$;
}

$Class* JIS_X_0201::class$ = nullptr;

		} // cs
	} // nio
} // sun