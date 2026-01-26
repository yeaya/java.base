#include <sun/nio/cs/IBM866.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/IBM866$Holder.h>
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
using $IBM866$Holder = ::sun::nio::cs::IBM866$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _IBM866_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(IBM866, init$, void)},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(IBM866, contains, bool, $Charset*)},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IBM866, historicalName, $String*)},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(IBM866, newDecoder, $CharsetDecoder*)},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(IBM866, newEncoder, $CharsetEncoder*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM866_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM866$Holder", "sun.nio.cs.IBM866", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM866_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.IBM866",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM866_MethodInfo_,
	nullptr,
	nullptr,
	_IBM866_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM866$Holder"
};

$Object* allocate$IBM866($Class* clazz) {
	return $of($alloc(IBM866));
}

int32_t IBM866::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM866::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* IBM866::toString() {
	 return this->$Charset::toString();
}

$Object* IBM866::clone() {
	 return this->$Charset::clone();
}

void IBM866::finalize() {
	this->$Charset::finalize();
}

void IBM866::init$() {
	$Charset::init$("IBM866"_s, $($StandardCharsets::aliases_IBM866()));
}

$String* IBM866::historicalName() {
	return "Cp866"_s;
}

bool IBM866::contains($Charset* cs) {
	return ($instanceOf(IBM866, cs));
}

$CharsetDecoder* IBM866::newDecoder() {
	$init($IBM866$Holder);
	return $new($SingleByte$Decoder, this, $IBM866$Holder::b2c, false, false);
}

$CharsetEncoder* IBM866::newEncoder() {
	$init($IBM866$Holder);
	return $new($SingleByte$Encoder, this, $IBM866$Holder::c2b, $IBM866$Holder::c2bIndex, false);
}

IBM866::IBM866() {
}

$Class* IBM866::load$($String* name, bool initialize) {
	$loadClass(IBM866, name, initialize, &_IBM866_ClassInfo_, allocate$IBM866);
	return class$;
}

$Class* IBM866::class$ = nullptr;

		} // cs
	} // nio
} // sun