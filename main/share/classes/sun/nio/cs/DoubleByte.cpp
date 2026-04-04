#include <sun/nio/cs/DoubleByte.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef B2C_UNMAPPABLE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace sun {
	namespace nio {
		namespace cs {

$chars* DoubleByte::B2C_UNMAPPABLE = nullptr;

void DoubleByte::init$() {
}

void DoubleByte::clinit$($Class* clazz) {
	{
		$assignStatic(DoubleByte::B2C_UNMAPPABLE, $new($chars, 256));
		$Arrays::fill(DoubleByte::B2C_UNMAPPABLE, (char16_t)0xfffd);
	}
}

DoubleByte::DoubleByte() {
}

$Class* DoubleByte::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"B2C_UNMAPPABLE", "[C", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DoubleByte, B2C_UNMAPPABLE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DoubleByte, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.DoubleByte$Encoder_EUC_SIM", "sun.nio.cs.DoubleByte", "Encoder_EUC_SIM", $PUBLIC | $STATIC},
		{"sun.nio.cs.DoubleByte$Encoder_EBCDIC", "sun.nio.cs.DoubleByte", "Encoder_EBCDIC", $PUBLIC | $STATIC},
		{"sun.nio.cs.DoubleByte$Encoder_DBCSONLY", "sun.nio.cs.DoubleByte", "Encoder_DBCSONLY", $PUBLIC | $STATIC},
		{"sun.nio.cs.DoubleByte$Encoder", "sun.nio.cs.DoubleByte", "Encoder", $PUBLIC | $STATIC},
		{"sun.nio.cs.DoubleByte$Decoder_EUC_SIM", "sun.nio.cs.DoubleByte", "Decoder_EUC_SIM", $PUBLIC | $STATIC},
		{"sun.nio.cs.DoubleByte$Decoder_DBCSONLY", "sun.nio.cs.DoubleByte", "Decoder_DBCSONLY", $PUBLIC | $STATIC},
		{"sun.nio.cs.DoubleByte$Decoder_EBCDIC", "sun.nio.cs.DoubleByte", "Decoder_EBCDIC", $PUBLIC | $STATIC},
		{"sun.nio.cs.DoubleByte$Decoder", "sun.nio.cs.DoubleByte", "Decoder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.DoubleByte",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.cs.DoubleByte$Encoder_EUC_SIM,sun.nio.cs.DoubleByte$Encoder_EBCDIC,sun.nio.cs.DoubleByte$Encoder_DBCSONLY,sun.nio.cs.DoubleByte$Encoder,sun.nio.cs.DoubleByte$Decoder_EUC_SIM,sun.nio.cs.DoubleByte$Decoder_DBCSONLY,sun.nio.cs.DoubleByte$Decoder_EBCDIC,sun.nio.cs.DoubleByte$Decoder"
	};
	$loadClass(DoubleByte, name, initialize, &classInfo$$, DoubleByte::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleByte);
	});
	return class$;
}

$Class* DoubleByte::class$ = nullptr;

		} // cs
	} // nio
} // sun