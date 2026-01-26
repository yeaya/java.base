#include <sun/nio/cs/IBM857.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/IBM857$Holder.h>
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
using $IBM857$Holder = ::sun::nio::cs::IBM857$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _IBM857_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(IBM857, init$, void)},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(IBM857, contains, bool, $Charset*)},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IBM857, historicalName, $String*)},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(IBM857, newDecoder, $CharsetDecoder*)},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(IBM857, newEncoder, $CharsetEncoder*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM857_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM857$Holder", "sun.nio.cs.IBM857", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM857_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.IBM857",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM857_MethodInfo_,
	nullptr,
	nullptr,
	_IBM857_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM857$Holder"
};

$Object* allocate$IBM857($Class* clazz) {
	return $of($alloc(IBM857));
}

int32_t IBM857::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM857::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* IBM857::toString() {
	 return this->$Charset::toString();
}

$Object* IBM857::clone() {
	 return this->$Charset::clone();
}

void IBM857::finalize() {
	this->$Charset::finalize();
}

void IBM857::init$() {
	$Charset::init$("IBM857"_s, $($StandardCharsets::aliases_IBM857()));
}

$String* IBM857::historicalName() {
	return "Cp857"_s;
}

bool IBM857::contains($Charset* cs) {
	return ($instanceOf(IBM857, cs));
}

$CharsetDecoder* IBM857::newDecoder() {
	$init($IBM857$Holder);
	return $new($SingleByte$Decoder, this, $IBM857$Holder::b2c, false, false);
}

$CharsetEncoder* IBM857::newEncoder() {
	$init($IBM857$Holder);
	return $new($SingleByte$Encoder, this, $IBM857$Holder::c2b, $IBM857$Holder::c2bIndex, false);
}

IBM857::IBM857() {
}

$Class* IBM857::load$($String* name, bool initialize) {
	$loadClass(IBM857, name, initialize, &_IBM857_ClassInfo_, allocate$IBM857);
	return class$;
}

$Class* IBM857::class$ = nullptr;

		} // cs
	} // nio
} // sun