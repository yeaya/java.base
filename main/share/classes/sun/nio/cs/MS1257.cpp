#include <sun/nio/cs/MS1257.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/MS1257$Holder.h>
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
using $MS1257$Holder = ::sun::nio::cs::MS1257$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

int32_t MS1257::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS1257::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* MS1257::toString() {
	 return this->$Charset::toString();
}

$Object* MS1257::clone() {
	 return this->$Charset::clone();
}

void MS1257::finalize() {
	this->$Charset::finalize();
}

void MS1257::init$() {
	$Charset::init$("windows-1257"_s, $($StandardCharsets::aliases_MS1257()));
}

$String* MS1257::historicalName() {
	return "Cp1257"_s;
}

bool MS1257::contains($Charset* cs) {
	return (($$nc($nc(cs)->name())->equals("US-ASCII"_s)) || ($instanceOf(MS1257, cs)));
}

$CharsetDecoder* MS1257::newDecoder() {
	$init($MS1257$Holder);
	return $new($SingleByte$Decoder, this, $MS1257$Holder::b2c, true, false);
}

$CharsetEncoder* MS1257::newEncoder() {
	$init($MS1257$Holder);
	return $new($SingleByte$Encoder, this, $MS1257$Holder::c2b, $MS1257$Holder::c2bIndex, true);
}

MS1257::MS1257() {
}

$Class* MS1257::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
		{"<init>", "()V", nullptr, $PUBLIC, $method(MS1257, init$, void)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(MS1257, contains, bool, $Charset*)},
		{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MS1257, historicalName, $String*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(MS1257, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(MS1257, newEncoder, $CharsetEncoder*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.MS1257$Holder", "sun.nio.cs.MS1257", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.MS1257",
		"java.nio.charset.Charset",
		"sun.nio.cs.HistoricallyNamedCharset",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.cs.MS1257$Holder"
	};
	$loadClass(MS1257, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MS1257));
	});
	return class$;
}

$Class* MS1257::class$ = nullptr;

		} // cs
	} // nio
} // sun