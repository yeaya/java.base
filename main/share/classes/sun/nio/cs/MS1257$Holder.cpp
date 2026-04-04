#include <sun/nio/cs/MS1257$Holder.h>
#include <sun/nio/cs/MS1257.h>
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

$String* MS1257$Holder::b2cTable = nullptr;
$chars* MS1257$Holder::b2c = nullptr;
$chars* MS1257$Holder::c2b = nullptr;
$chars* MS1257$Holder::c2bIndex = nullptr;

void MS1257$Holder::init$() {
}

void MS1257$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MS1257$Holder::b2cTable, $cstr({0x20ac, 0xfffd, 0x201a, 0xfffd, 0x201e, 0x2026, 0x2020, 0x2021, 0xfffd, 0x2030, 0xfffd, 0x2039, 0xfffd, 0xa8, 0x02c7, 0xb8, 0xfffd, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014, 0xfffd, 0x2122, 0xfffd, 0x203a, 0xfffd, 0xaf, 0x02db, 0xfffd, 0xa0, 0xfffd, 0xa2, 0xa3, 0xa4, 0xfffd, 0xa6, 0xa7, 0xd8, 0xa9, 0x0156, 0xab, 0xac, 0xad, 0xae, 0xc6, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xf8, 0xb9, 0x0157, 0xbb, 0xbc, 0xbd, 0xbe, 0xe6, 0x0104, 0x012e, 0x0100, 0x0106, 0xc4, 0xc5, 0x0118, 0x0112, 0x010c, 0xc9, 0x0179, 0x0116, 0x0122, 0x0136, 0x012a, 0x013b, 0x0160, 0x0143, 0x0145, 0xd3, 0x014c, 0xd5, 0xd6, 0xd7, 0x0172, 0x0141, 0x015a, 0x016a, 0xdc, 0x017b, 0x017d, 0xdf, 0x0105, 0x012f, 0x0101, 0x0107, 0xe4, 0xe5, 0x0119, 0x0113, 0x010d, 0xe9, 0x017a, 0x0117, 0x0123, 0x0137, 0x012b, 0x013c, 0x0161, 0x0144, 0x0146, 0xf3, 0x014d, 0xf5, 0xf6, 0xf7, 0x0173, 0x0142, 0x015b, 0x016b, 0xfc, 0x017c, 0x017e, 0x02d9, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(MS1257$Holder::b2c, MS1257$Holder::b2cTable->toCharArray());
	$assignStatic(MS1257$Holder::c2b, $new($chars, 1536));
	$assignStatic(MS1257$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MS1257$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MS1257$Holder::c2b, MS1257$Holder::c2bIndex);
	}
}

MS1257$Holder::MS1257$Holder() {
}

$Class* MS1257$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1257$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1257$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1257$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1257$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MS1257$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.MS1257$Holder", "sun.nio.cs.MS1257", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.MS1257$Holder",
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
		"sun.nio.cs.MS1257"
	};
	$loadClass(MS1257$Holder, name, initialize, &classInfo$$, MS1257$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MS1257$Holder);
	});
	return class$;
}

$Class* MS1257$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun