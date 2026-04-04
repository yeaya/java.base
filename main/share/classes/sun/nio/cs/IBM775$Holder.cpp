#include <sun/nio/cs/IBM775$Holder.h>
#include <sun/nio/cs/IBM775.h>
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

$String* IBM775$Holder::b2cTable = nullptr;
$chars* IBM775$Holder::b2c = nullptr;
$chars* IBM775$Holder::c2b = nullptr;
$chars* IBM775$Holder::c2bIndex = nullptr;

void IBM775$Holder::init$() {
}

void IBM775$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM775$Holder::b2cTable, $cstr({0x0106, 0xfc, 0xe9, 0x0101, 0xe4, 0x0123, 0xe5, 0x0107, 0x0142, 0x0113, 0x0156, 0x0157, 0x012b, 0x0179, 0xc4, 0xc5, 0xc9, 0xe6, 0xc6, 0x014d, 0xf6, 0x0122, 0xa2, 0x015a, 0x015b, 0xd6, 0xdc, 0xf8, 0xa3, 0xd8, 0xd7, 0xa4, 0x0100, 0x012a, 0xf3, 0x017b, 0x017c, 0x017a, 0x201d, 0xa6, 0xa9, 0xae, 0xac, 0xbd, 0xbc, 0x0141, 0xab, 0xbb, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x0104, 0x010c, 0x0118, 0x0116, 0x2563, 0x2551, 0x2557, 0x255d, 0x012e, 0x0160, 0x2510, 0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x0172, 0x016a, 0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x017d, 0x0105, 0x010d, 0x0119, 0x0117, 0x012f, 0x0161, 0x0173, 0x016b, 0x017e, 0x2518, 0x250c, 0x2588, 0x2584, 0x258c, 0x2590, 0x2580, 0xd3, 0xdf, 0x014c, 0x0143, 0xf5, 0xd5, 0xb5, 0x0144, 0x0136, 0x0137, 0x013b, 0x013c, 0x0146, 0x0112, 0x0145, 0x2019, 0xad, 0xb1, 0x201c, 0xbe, 0xb6, 0xa7, 0xf7, 0x201e, 0xb0, 0x2219, 0xb7, 0xb9, 0xb3, 0xb2, 0x25a0, 0xa0, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(IBM775$Holder::b2c, IBM775$Holder::b2cTable->toCharArray());
	$assignStatic(IBM775$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM775$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM775$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM775$Holder::c2b, IBM775$Holder::c2bIndex);
	}
}

IBM775$Holder::IBM775$Holder() {
}

$Class* IBM775$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM775$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM775$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM775$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM775$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM775$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.IBM775$Holder", "sun.nio.cs.IBM775", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.IBM775$Holder",
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
		"sun.nio.cs.IBM775"
	};
	$loadClass(IBM775$Holder, name, initialize, &classInfo$$, IBM775$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM775$Holder);
	});
	return class$;
}

$Class* IBM775$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun