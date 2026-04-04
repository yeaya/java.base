#include <sun/nio/cs/DoubleByte$Encoder_DBCSONLY.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte.h>
#include <jcpp.h>

#undef MAX_SINGLEBYTE

using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;

namespace sun {
	namespace nio {
		namespace cs {

void DoubleByte$Encoder_DBCSONLY::init$($Charset* cs, $bytes* repl, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible) {
	$DoubleByte$Encoder::init$(cs, 2.0f, 2.0f, repl, c2b, c2bIndex, isASCIICompatible);
}

int32_t DoubleByte$Encoder_DBCSONLY::encodeChar(char16_t ch) {
	int32_t bb = $DoubleByte$Encoder::encodeChar(ch);
	if (bb <= $DoubleByte$Encoder::MAX_SINGLEBYTE) {
		return 0x0000fffd;
	}
	return bb;
}

DoubleByte$Encoder_DBCSONLY::DoubleByte$Encoder_DBCSONLY() {
}

$Class* DoubleByte$Encoder_DBCSONLY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;[B[C[CZ)V", nullptr, $PUBLIC, $method(DoubleByte$Encoder_DBCSONLY, init$, void, $Charset*, $bytes*, $chars*, $chars*, bool)},
		{"encodeChar", "(C)I", nullptr, $PUBLIC, $virtualMethod(DoubleByte$Encoder_DBCSONLY, encodeChar, int32_t, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.DoubleByte$Encoder_DBCSONLY", "sun.nio.cs.DoubleByte", "Encoder_DBCSONLY", $PUBLIC | $STATIC},
		{"sun.nio.cs.DoubleByte$Encoder", "sun.nio.cs.DoubleByte", "Encoder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.DoubleByte$Encoder_DBCSONLY",
		"sun.nio.cs.DoubleByte$Encoder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.DoubleByte"
	};
	$loadClass(DoubleByte$Encoder_DBCSONLY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DoubleByte$Encoder_DBCSONLY));
	});
	return class$;
}

$Class* DoubleByte$Encoder_DBCSONLY::class$ = nullptr;

		} // cs
	} // nio
} // sun