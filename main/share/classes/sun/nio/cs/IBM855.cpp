#include <sun/nio/cs/IBM855.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/IBM855$Holder.h>
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
using $IBM855$Holder = ::sun::nio::cs::IBM855$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _IBM855_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(IBM855, init$, void)},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(IBM855, contains, bool, $Charset*)},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IBM855, historicalName, $String*)},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(IBM855, newDecoder, $CharsetDecoder*)},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(IBM855, newEncoder, $CharsetEncoder*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM855_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM855$Holder", "sun.nio.cs.IBM855", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM855_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.IBM855",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM855_MethodInfo_,
	nullptr,
	nullptr,
	_IBM855_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM855$Holder"
};

$Object* allocate$IBM855($Class* clazz) {
	return $of($alloc(IBM855));
}

int32_t IBM855::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM855::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* IBM855::toString() {
	 return this->$Charset::toString();
}

$Object* IBM855::clone() {
	 return this->$Charset::clone();
}

void IBM855::finalize() {
	this->$Charset::finalize();
}

void IBM855::init$() {
	$Charset::init$("IBM855"_s, $($StandardCharsets::aliases_IBM855()));
}

$String* IBM855::historicalName() {
	return "Cp855"_s;
}

bool IBM855::contains($Charset* cs) {
	return ($instanceOf(IBM855, cs));
}

$CharsetDecoder* IBM855::newDecoder() {
	$init($IBM855$Holder);
	return $new($SingleByte$Decoder, this, $IBM855$Holder::b2c, false, false);
}

$CharsetEncoder* IBM855::newEncoder() {
	$init($IBM855$Holder);
	return $new($SingleByte$Encoder, this, $IBM855$Holder::c2b, $IBM855$Holder::c2bIndex, false);
}

IBM855::IBM855() {
}

$Class* IBM855::load$($String* name, bool initialize) {
	$loadClass(IBM855, name, initialize, &_IBM855_ClassInfo_, allocate$IBM855);
	return class$;
}

$Class* IBM855::class$ = nullptr;

		} // cs
	} // nio
} // sun