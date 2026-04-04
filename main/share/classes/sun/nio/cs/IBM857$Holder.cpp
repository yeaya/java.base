#include <sun/nio/cs/IBM857$Holder.h>
#include <sun/nio/cs/IBM857.h>
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

$String* IBM857$Holder::b2cTable = nullptr;
$chars* IBM857$Holder::b2c = nullptr;
$chars* IBM857$Holder::c2b = nullptr;
$chars* IBM857$Holder::c2bIndex = nullptr;

void IBM857$Holder::init$() {
}

void IBM857$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM857$Holder::b2cTable, $cstr({0xc7, 0xfc, 0xe9, 0xe2, 0xe4, 0xe0, 0xe5, 0xe7, 0xea, 0xeb, 0xe8, 0xef, 0xee, 0x0131, 0xc4, 0xc5, 0xc9, 0xe6, 0xc6, 0xf4, 0xf6, 0xf2, 0xfb, 0xf9, 0x0130, 0xd6, 0xdc, 0xf8, 0xa3, 0xd8, 0x015e, 0x015f, 0xe1, 0xed, 0xf3, 0xfa, 0xf1, 0xd1, 0x011e, 0x011f, 0xbf, 0xae, 0xac, 0xbd, 0xbc, 0xa1, 0xab, 0xbb, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0xc1, 0xc2, 0xc0, 0xa9, 0x2563, 0x2551, 0x2557, 0x255d, 0xa2, 0xa5, 0x2510, 0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0xe3, 0xc3, 0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0xa4, 0xba, 0xaa, 0xca, 0xcb, 0xc8, 0xfffd, 0xcd, 0xce, 0xcf, 0x2518, 0x250c, 0x2588, 0x2584, 0xa6, 0xcc, 0x2580, 0xd3, 0xdf, 0xd4, 0xd2, 0xf5, 0xd5, 0xb5, 0xfffd, 0xd7, 0xda, 0xdb, 0xd9, 0xec, 0xff, 0xaf, 0xb4, 0xad, 0xb1, 0xfffd, 0xbe, 0xb6, 0xa7, 0xf7, 0xb8, 0xb0, 0xa8, 0xb7, 0xb9, 0xb3, 0xb2, 0x25a0, 0xa0, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(IBM857$Holder::b2c, IBM857$Holder::b2cTable->toCharArray());
	$assignStatic(IBM857$Holder::c2b, $new($chars, 1024));
	$assignStatic(IBM857$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM857$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM857$Holder::c2b, IBM857$Holder::c2bIndex);
	}
}

IBM857$Holder::IBM857$Holder() {
}

$Class* IBM857$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM857$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM857$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM857$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM857$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM857$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.IBM857$Holder", "sun.nio.cs.IBM857", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.IBM857$Holder",
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
		"sun.nio.cs.IBM857"
	};
	$loadClass(IBM857$Holder, name, initialize, &classInfo$$, IBM857$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM857$Holder);
	});
	return class$;
}

$Class* IBM857$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun