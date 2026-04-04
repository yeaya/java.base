#include <sun/nio/cs/MS1258$Holder.h>
#include <sun/nio/cs/MS1258.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$String* MS1258$Holder::b2cTable = nullptr;
$chars* MS1258$Holder::b2c = nullptr;
$chars* MS1258$Holder::c2b = nullptr;
$chars* MS1258$Holder::c2bIndex = nullptr;

void MS1258$Holder::init$() {
}

void MS1258$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MS1258$Holder::b2cTable, $cstr({0x20ac, 0xfffd, 0x201a, 0x0192, 0x201e, 0x2026, 0x2020, 0x2021, 0x02c6, 0x2030, 0xfffd, 0x2039, 0x0152, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014, 0x02dc, 0x2122, 0xfffd, 0x203a, 0x0153, 0xfffd, 0xfffd, 0x0178, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0x0102, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0x0300, 0xcd, 0xce, 0xcf, 0x0110, 0xd1, 0x0309, 0xd3, 0xd4, 0x01a0, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0x01af, 0x0303, 0xdf, 0xe0, 0xe1, 0xe2, 0x0103, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0x0301, 0xed, 0xee, 0xef, 0x0111, 0xf1, 0x0323, 0xf3, 0xf4, 0x01a1, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0x01b0, 0x20ab, 0xff, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(MS1258$Holder::b2c, MS1258$Holder::b2cTable->toCharArray());
	$assignStatic(MS1258$Holder::c2b, $new($chars, 1792));
	$assignStatic(MS1258$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MS1258$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MS1258$Holder::c2b, MS1258$Holder::c2bIndex);
	}
}

MS1258$Holder::MS1258$Holder() {
}

$Class* MS1258$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1258$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1258$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1258$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1258$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MS1258$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.MS1258$Holder", "sun.nio.cs.MS1258", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.MS1258$Holder",
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
		"sun.nio.cs.MS1258"
	};
	$loadClass(MS1258$Holder, name, initialize, &classInfo$$, MS1258$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MS1258$Holder);
	});
	return class$;
}

$Class* MS1258$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun