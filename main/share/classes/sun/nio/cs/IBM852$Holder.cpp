#include <sun/nio/cs/IBM852$Holder.h>
#include <sun/nio/cs/IBM852.h>
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

$String* IBM852$Holder::b2cTable = nullptr;
$chars* IBM852$Holder::b2c = nullptr;
$chars* IBM852$Holder::c2b = nullptr;
$chars* IBM852$Holder::c2bIndex = nullptr;

void IBM852$Holder::init$() {
}

void IBM852$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM852$Holder::b2cTable, $cstr({0xc7, 0xfc, 0xe9, 0xe2, 0xe4, 0x016f, 0x0107, 0xe7, 0x0142, 0xeb, 0x0150, 0x0151, 0xee, 0x0179, 0xc4, 0x0106, 0xc9, 0x0139, 0x013a, 0xf4, 0xf6, 0x013d, 0x013e, 0x015a, 0x015b, 0xd6, 0xdc, 0x0164, 0x0165, 0x0141, 0xd7, 0x010d, 0xe1, 0xed, 0xf3, 0xfa, 0x0104, 0x0105, 0x017d, 0x017e, 0x0118, 0x0119, 0xac, 0x017a, 0x010c, 0x015f, 0xab, 0xbb, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0xc1, 0xc2, 0x011a, 0x015e, 0x2563, 0x2551, 0x2557, 0x255d, 0x017b, 0x017c, 0x2510, 0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x0102, 0x0103, 0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0xa4, 0x0111, 0x0110, 0x010e, 0xcb, 0x010f, 0x0147, 0xcd, 0xce, 0x011b, 0x2518, 0x250c, 0x2588, 0x2584, 0x0162, 0x016e, 0x2580, 0xd3, 0xdf, 0xd4, 0x0143, 0x0144, 0x0148, 0x0160, 0x0161, 0x0154, 0xda, 0x0155, 0x0170, 0xfd, 0xdd, 0x0163, 0xb4, 0xad, 0x02dd, 0x02db, 0x02c7, 0x02d8, 0xa7, 0xf7, 0xb8, 0xb0, 0xa8, 0x02d9, 0x0171, 0x0158, 0x0159, 0x25a0, 0xa0, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(IBM852$Holder::b2c, IBM852$Holder::b2cTable->toCharArray());
	$assignStatic(IBM852$Holder::c2b, $new($chars, 1024));
	$assignStatic(IBM852$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM852$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM852$Holder::c2b, IBM852$Holder::c2bIndex);
	}
}

IBM852$Holder::IBM852$Holder() {
}

$Class* IBM852$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM852$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM852$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM852$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM852$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM852$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.IBM852$Holder", "sun.nio.cs.IBM852", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.IBM852$Holder",
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
		"sun.nio.cs.IBM852"
	};
	$loadClass(IBM852$Holder, name, initialize, &classInfo$$, IBM852$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM852$Holder);
	});
	return class$;
}

$Class* IBM852$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun