#include <sun/nio/cs/Big5_Solaris$Holder.h>
#include <java/util/Arrays.h>
#include <sun/nio/cs/Big5$DecodeHolder.h>
#include <sun/nio/cs/Big5$EncodeHolder.h>
#include <sun/nio/cs/Big5_Solaris.h>
#include <sun/nio/cs/DoubleByte.h>
#include <jcpp.h>

#undef B2C_UNMAPPABLE

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Big5$DecodeHolder = ::sun::nio::cs::Big5$DecodeHolder;
using $Big5$EncodeHolder = ::sun::nio::cs::Big5$EncodeHolder;
using $DoubleByte = ::sun::nio::cs::DoubleByte;

namespace sun {
	namespace nio {
		namespace cs {

$charArray2* Big5_Solaris$Holder::b2c = nullptr;
$chars* Big5_Solaris$Holder::b2cSB = nullptr;
$chars* Big5_Solaris$Holder::c2b = nullptr;
$chars* Big5_Solaris$Holder::c2bIndex = nullptr;

void Big5_Solaris$Holder::init$() {
}

void Big5_Solaris$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$init($Big5$DecodeHolder);
		$assignStatic(Big5_Solaris$Holder::b2c, $cast($charArray2, $nc($Big5$DecodeHolder::b2c)->clone()));
		$var($ints, sol, $new($ints, {
			0x0000f9d6,
			0x00007881,
			0x0000f9d7,
			0x000092b9,
			0x0000f9d8,
			0x000088cf,
			0x0000f9d9,
			0x000058bb,
			0x0000f9da,
			0x00006052,
			0x0000f9db,
			0x00007ca7,
			0x0000f9dc,
			0x00005afa
		}));
		$init($DoubleByte);
		if (Big5_Solaris$Holder::b2c->get(249) == $DoubleByte::B2C_UNMAPPABLE) {
			Big5_Solaris$Holder::b2c->set(249, $$new($chars, 254 - 64 + 1));
			$Arrays::fill(Big5_Solaris$Holder::b2c->get(249), (char16_t)0xfffd);
		}
		for (int32_t i = 0; i < sol->length;) {
			int32_t var$0 = sol->get(i++) & (255 - 64);
			$nc(Big5_Solaris$Holder::b2c->get(249))->set(var$0, (char16_t)sol->get(i++));
		}
		$assignStatic(Big5_Solaris$Holder::b2cSB, $Big5$DecodeHolder::b2cSB);
		$init($Big5$EncodeHolder);
		$assignStatic(Big5_Solaris$Holder::c2b, $cast($chars, $nc($Big5$EncodeHolder::c2b)->clone()));
		$assignStatic(Big5_Solaris$Holder::c2bIndex, $cast($chars, $nc($Big5$EncodeHolder::c2bIndex)->clone()));
		$assign(sol, $new($ints, {
			0x00007881,
			0x0000f9d6,
			0x000092b9,
			0x0000f9d7,
			0x000088cf,
			0x0000f9d8,
			0x000058bb,
			0x0000f9d9,
			0x00006052,
			0x0000f9da,
			0x00007ca7,
			0x0000f9db,
			0x00005afa,
			0x0000f9dc
		}));
		for (int32_t i = 0; i < sol->length;) {
			int32_t c = sol->get(i++);
			Big5_Solaris$Holder::c2b->set(Big5_Solaris$Holder::c2bIndex->get(c >> 8) + (c & 0xff), (char16_t)sol->get(i++));
		}
	}
}

Big5_Solaris$Holder::Big5_Solaris$Holder() {
}

$Class* Big5_Solaris$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2c", "[[C", nullptr, $STATIC | $FINAL, $staticField(Big5_Solaris$Holder, b2c)},
		{"b2cSB", "[C", nullptr, $STATIC | $FINAL, $staticField(Big5_Solaris$Holder, b2cSB)},
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(Big5_Solaris$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(Big5_Solaris$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Big5_Solaris$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.Big5_Solaris$Holder", "sun.nio.cs.Big5_Solaris", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.Big5_Solaris$Holder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.Big5_Solaris"
	};
	$loadClass(Big5_Solaris$Holder, name, initialize, &classInfo$$, Big5_Solaris$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Big5_Solaris$Holder);
	});
	return class$;
}

$Class* Big5_Solaris$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun