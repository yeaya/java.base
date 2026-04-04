#include <sun/nio/cs/ISO_8859_4$Holder.h>
#include <sun/nio/cs/ISO_8859_4.h>
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

$String* ISO_8859_4$Holder::b2cTable = nullptr;
$chars* ISO_8859_4$Holder::b2c = nullptr;
$chars* ISO_8859_4$Holder::c2b = nullptr;
$chars* ISO_8859_4$Holder::c2bIndex = nullptr;

void ISO_8859_4$Holder::init$() {
}

void ISO_8859_4$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(ISO_8859_4$Holder::b2cTable, $cstr({0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0x0104, 0x0138, 0x0156, 0xa4, 0x0128, 0x013b, 0xa7, 0xa8, 0x0160, 0x0112, 0x0122, 0x0166, 0xad, 0x017d, 0xaf, 0xb0, 0x0105, 0x02db, 0x0157, 0xb4, 0x0129, 0x013c, 0x02c7, 0xb8, 0x0161, 0x0113, 0x0123, 0x0167, 0x014a, 0x017e, 0x014b, 0x0100, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0x012e, 0x010c, 0xc9, 0x0118, 0xcb, 0x0116, 0xcd, 0xce, 0x012a, 0x0110, 0x0145, 0x014c, 0x0136, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0x0172, 0xda, 0xdb, 0xdc, 0x0168, 0x016a, 0xdf, 0x0101, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0x012f, 0x010d, 0xe9, 0x0119, 0xeb, 0x0117, 0xed, 0xee, 0x012b, 0x0111, 0x0146, 0x014d, 0x0137, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0x0173, 0xfa, 0xfb, 0xfc, 0x0169, 0x016b, 0x02d9, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(ISO_8859_4$Holder::b2c, ISO_8859_4$Holder::b2cTable->toCharArray());
	$assignStatic(ISO_8859_4$Holder::c2b, $new($chars, 768));
	$assignStatic(ISO_8859_4$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, ISO_8859_4$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, ISO_8859_4$Holder::c2b, ISO_8859_4$Holder::c2bIndex);
	}
}

ISO_8859_4$Holder::ISO_8859_4$Holder() {
}

$Class* ISO_8859_4$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_4$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_4$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_4$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_4$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ISO_8859_4$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ISO_8859_4$Holder", "sun.nio.cs.ISO_8859_4", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ISO_8859_4$Holder",
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
		"sun.nio.cs.ISO_8859_4"
	};
	$loadClass(ISO_8859_4$Holder, name, initialize, &classInfo$$, ISO_8859_4$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ISO_8859_4$Holder);
	});
	return class$;
}

$Class* ISO_8859_4$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun