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
using $DoubleByte = ::sun::nio::cs::DoubleByte;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _DoubleByte$Encoder_DBCSONLY_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;[B[C[CZ)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Encoder_DBCSONLY::*)($Charset*,$bytes*,$chars*,$chars*,bool)>(&DoubleByte$Encoder_DBCSONLY::init$))},
	{"encodeChar", "(C)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DoubleByte$Encoder_DBCSONLY_InnerClassesInfo_[] = {
	{"sun.nio.cs.DoubleByte$Encoder_DBCSONLY", "sun.nio.cs.DoubleByte", "Encoder_DBCSONLY", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Encoder", "sun.nio.cs.DoubleByte", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DoubleByte$Encoder_DBCSONLY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.DoubleByte$Encoder_DBCSONLY",
	"sun.nio.cs.DoubleByte$Encoder",
	nullptr,
	nullptr,
	_DoubleByte$Encoder_DBCSONLY_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleByte$Encoder_DBCSONLY_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.DoubleByte"
};

$Object* allocate$DoubleByte$Encoder_DBCSONLY($Class* clazz) {
	return $of($alloc(DoubleByte$Encoder_DBCSONLY));
}

void DoubleByte$Encoder_DBCSONLY::init$($Charset* cs, $bytes* repl, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible) {
	$DoubleByte$Encoder::init$(cs, 2.0f, 2.0f, repl, c2b, c2bIndex, isASCIICompatible);
}

int32_t DoubleByte$Encoder_DBCSONLY::encodeChar(char16_t ch) {
	int32_t bb = $DoubleByte$Encoder::encodeChar(ch);
	if (bb <= this->MAX_SINGLEBYTE) {
		return 0x0000FFFD;
	}
	return bb;
}

DoubleByte$Encoder_DBCSONLY::DoubleByte$Encoder_DBCSONLY() {
}

$Class* DoubleByte$Encoder_DBCSONLY::load$($String* name, bool initialize) {
	$loadClass(DoubleByte$Encoder_DBCSONLY, name, initialize, &_DoubleByte$Encoder_DBCSONLY_ClassInfo_, allocate$DoubleByte$Encoder_DBCSONLY);
	return class$;
}

$Class* DoubleByte$Encoder_DBCSONLY::class$ = nullptr;

		} // cs
	} // nio
} // sun