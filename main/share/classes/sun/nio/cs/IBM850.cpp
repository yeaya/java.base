#include <sun/nio/cs/IBM850.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/IBM850$Holder.h>
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
using $IBM850$Holder = ::sun::nio::cs::IBM850$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _IBM850_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM850::*)()>(&IBM850::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM850_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM850$Holder", "sun.nio.cs.IBM850", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM850_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.IBM850",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM850_MethodInfo_,
	nullptr,
	nullptr,
	_IBM850_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM850$Holder"
};

$Object* allocate$IBM850($Class* clazz) {
	return $of($alloc(IBM850));
}

int32_t IBM850::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM850::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* IBM850::toString() {
	 return this->$Charset::toString();
}

$Object* IBM850::clone() {
	 return this->$Charset::clone();
}

void IBM850::finalize() {
	this->$Charset::finalize();
}

void IBM850::init$() {
	$Charset::init$("IBM850"_s, $($StandardCharsets::aliases_IBM850()));
}

$String* IBM850::historicalName() {
	return "Cp850"_s;
}

bool IBM850::contains($Charset* cs) {
	return ($instanceOf(IBM850, cs));
}

$CharsetDecoder* IBM850::newDecoder() {
	$init($IBM850$Holder);
	return $new($SingleByte$Decoder, this, $IBM850$Holder::b2c, false, false);
}

$CharsetEncoder* IBM850::newEncoder() {
	$init($IBM850$Holder);
	return $new($SingleByte$Encoder, this, $IBM850$Holder::c2b, $IBM850$Holder::c2bIndex, false);
}

IBM850::IBM850() {
}

$Class* IBM850::load$($String* name, bool initialize) {
	$loadClass(IBM850, name, initialize, &_IBM850_ClassInfo_, allocate$IBM850);
	return class$;
}

$Class* IBM850::class$ = nullptr;

		} // cs
	} // nio
} // sun