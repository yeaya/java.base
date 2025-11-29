#include <sun/nio/cs/IBM737.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/IBM737$Holder.h>
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
using $IBM737$Holder = ::sun::nio::cs::IBM737$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _IBM737_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM737::*)()>(&IBM737::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM737_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM737$Holder", "sun.nio.cs.IBM737", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM737_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.IBM737",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM737_MethodInfo_,
	nullptr,
	nullptr,
	_IBM737_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM737$Holder"
};

$Object* allocate$IBM737($Class* clazz) {
	return $of($alloc(IBM737));
}

int32_t IBM737::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM737::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* IBM737::toString() {
	 return this->$Charset::toString();
}

$Object* IBM737::clone() {
	 return this->$Charset::clone();
}

void IBM737::finalize() {
	this->$Charset::finalize();
}

void IBM737::init$() {
	$Charset::init$("x-IBM737"_s, $($StandardCharsets::aliases_IBM737()));
}

$String* IBM737::historicalName() {
	return "Cp737"_s;
}

bool IBM737::contains($Charset* cs) {
	return ($instanceOf(IBM737, cs));
}

$CharsetDecoder* IBM737::newDecoder() {
	$init($IBM737$Holder);
	return $new($SingleByte$Decoder, this, $IBM737$Holder::b2c, false, false);
}

$CharsetEncoder* IBM737::newEncoder() {
	$init($IBM737$Holder);
	return $new($SingleByte$Encoder, this, $IBM737$Holder::c2b, $IBM737$Holder::c2bIndex, false);
}

IBM737::IBM737() {
}

$Class* IBM737::load$($String* name, bool initialize) {
	$loadClass(IBM737, name, initialize, &_IBM737_ClassInfo_, allocate$IBM737);
	return class$;
}

$Class* IBM737::class$ = nullptr;

		} // cs
	} // nio
} // sun