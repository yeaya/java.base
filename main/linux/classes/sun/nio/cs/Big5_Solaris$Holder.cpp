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

$FieldInfo _Big5_Solaris$Holder_FieldInfo_[] = {
	{"b2c", "[[C", nullptr, $STATIC | $FINAL, $staticField(Big5_Solaris$Holder, b2c)},
	{"b2cSB", "[C", nullptr, $STATIC | $FINAL, $staticField(Big5_Solaris$Holder, b2cSB)},
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(Big5_Solaris$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(Big5_Solaris$Holder, c2bIndex)},
	{}
};

$MethodInfo _Big5_Solaris$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Big5_Solaris$Holder, init$, void)},
	{}
};

$InnerClassInfo _Big5_Solaris$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.Big5_Solaris$Holder", "sun.nio.cs.Big5_Solaris", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Big5_Solaris$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.Big5_Solaris$Holder",
	"java.lang.Object",
	nullptr,
	_Big5_Solaris$Holder_FieldInfo_,
	_Big5_Solaris$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_Big5_Solaris$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.Big5_Solaris"
};

$Object* allocate$Big5_Solaris$Holder($Class* clazz) {
	return $of($alloc(Big5_Solaris$Holder));
}

$charArray2* Big5_Solaris$Holder::b2c = nullptr;
$chars* Big5_Solaris$Holder::b2cSB = nullptr;
$chars* Big5_Solaris$Holder::c2b = nullptr;
$chars* Big5_Solaris$Holder::c2bIndex = nullptr;

void Big5_Solaris$Holder::init$() {
}

void clinit$Big5_Solaris$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$init($Big5$DecodeHolder);
		$assignStatic(Big5_Solaris$Holder::b2c, $cast($charArray2, $nc($Big5$DecodeHolder::b2c)->clone()));
		$var($ints, sol, $new($ints, {
			0x0000F9D6,
			30849,
			0x0000F9D7,
			0x000092B9,
			0x0000F9D8,
			0x000088CF,
			0x0000F9D9,
			22715,
			0x0000F9DA,
			24658,
			0x0000F9DB,
			31911,
			0x0000F9DC,
			23290
		}));
		$init($DoubleByte);
		if ($nc(Big5_Solaris$Holder::b2c)->get(249) == $DoubleByte::B2C_UNMAPPABLE) {
			$nc(Big5_Solaris$Holder::b2c)->set(249, $$new($chars, 254 - 64 + 1));
			$Arrays::fill($nc(Big5_Solaris$Holder::b2c)->get(249), (char16_t)0xFFFD);
		}
		for (int32_t i = 0; i < sol->length;) {
			int32_t var$0 = (int32_t)(sol->get(i++) & (uint32_t)(255 - 64));
			$nc($nc(Big5_Solaris$Holder::b2c)->get(249))->set(var$0, (char16_t)sol->get(i++));
		}
		$assignStatic(Big5_Solaris$Holder::b2cSB, $Big5$DecodeHolder::b2cSB);
		$init($Big5$EncodeHolder);
		$assignStatic(Big5_Solaris$Holder::c2b, $cast($chars, $nc($Big5$EncodeHolder::c2b)->clone()));
		$assignStatic(Big5_Solaris$Holder::c2bIndex, $cast($chars, $nc($Big5$EncodeHolder::c2bIndex)->clone()));
		$assign(sol, $new($ints, {
			30849,
			0x0000F9D6,
			0x000092B9,
			0x0000F9D7,
			0x000088CF,
			0x0000F9D8,
			22715,
			0x0000F9D9,
			24658,
			0x0000F9DA,
			31911,
			0x0000F9DB,
			23290,
			0x0000F9DC
		}));
		for (int32_t i = 0; i < sol->length;) {
			int32_t c = sol->get(i++);
			$nc(Big5_Solaris$Holder::c2b)->set($nc(Big5_Solaris$Holder::c2bIndex)->get(c >> 8) + ((int32_t)(c & (uint32_t)255)), (char16_t)sol->get(i++));
		}
	}
}

Big5_Solaris$Holder::Big5_Solaris$Holder() {
}

$Class* Big5_Solaris$Holder::load$($String* name, bool initialize) {
	$loadClass(Big5_Solaris$Holder, name, initialize, &_Big5_Solaris$Holder_ClassInfo_, clinit$Big5_Solaris$Holder, allocate$Big5_Solaris$Holder);
	return class$;
}

$Class* Big5_Solaris$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun