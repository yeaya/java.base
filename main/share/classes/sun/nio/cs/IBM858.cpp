#include <sun/nio/cs/IBM858.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/IBM858$Holder.h>
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
using $IBM858$Holder = ::sun::nio::cs::IBM858$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _IBM858_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM858::*)()>(&IBM858::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM858_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM858$Holder", "sun.nio.cs.IBM858", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM858_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.IBM858",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM858_MethodInfo_,
	nullptr,
	nullptr,
	_IBM858_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM858$Holder"
};

$Object* allocate$IBM858($Class* clazz) {
	return $of($alloc(IBM858));
}

int32_t IBM858::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM858::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* IBM858::toString() {
	 return this->$Charset::toString();
}

$Object* IBM858::clone() {
	 return this->$Charset::clone();
}

void IBM858::finalize() {
	this->$Charset::finalize();
}

void IBM858::init$() {
	$Charset::init$("IBM00858"_s, $($StandardCharsets::aliases_IBM858()));
}

$String* IBM858::historicalName() {
	return "Cp858"_s;
}

bool IBM858::contains($Charset* cs) {
	return ($instanceOf(IBM858, cs));
}

$CharsetDecoder* IBM858::newDecoder() {
	$init($IBM858$Holder);
	return $new($SingleByte$Decoder, this, $IBM858$Holder::b2c, false, false);
}

$CharsetEncoder* IBM858::newEncoder() {
	$init($IBM858$Holder);
	return $new($SingleByte$Encoder, this, $IBM858$Holder::c2b, $IBM858$Holder::c2bIndex, false);
}

IBM858::IBM858() {
}

$Class* IBM858::load$($String* name, bool initialize) {
	$loadClass(IBM858, name, initialize, &_IBM858_ClassInfo_, allocate$IBM858);
	return class$;
}

$Class* IBM858::class$ = nullptr;

		} // cs
	} // nio
} // sun