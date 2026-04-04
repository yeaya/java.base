#include <sun/nio/cs/MS1256$Holder.h>
#include <sun/nio/cs/MS1256.h>
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

$String* MS1256$Holder::b2cTable = nullptr;
$chars* MS1256$Holder::b2c = nullptr;
$chars* MS1256$Holder::c2b = nullptr;
$chars* MS1256$Holder::c2bIndex = nullptr;

void MS1256$Holder::init$() {
}

void MS1256$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MS1256$Holder::b2cTable, $cstr({0x20ac, 0x067e, 0x201a, 0x0192, 0x201e, 0x2026, 0x2020, 0x2021, 0x02c6, 0x2030, 0x0679, 0x2039, 0x0152, 0x0686, 0x0698, 0x0688, 0x06af, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014, 0x06a9, 0x2122, 0x0691, 0x203a, 0x0153, 0x200c, 0x200d, 0x06ba, 0xa0, 0x060c, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0x06be, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0x061b, 0xbb, 0xbc, 0xbd, 0xbe, 0x061f, 0x06c1, 0x0621, 0x0622, 0x0623, 0x0624, 0x0625, 0x0626, 0x0627, 0x0628, 0x0629, 0x062a, 0x062b, 0x062c, 0x062d, 0x062e, 0x062f, 0x0630, 0x0631, 0x0632, 0x0633, 0x0634, 0x0635, 0x0636, 0xd7, 0x0637, 0x0638, 0x0639, 0x063a, 0x0640, 0x0641, 0x0642, 0x0643, 0xe0, 0x0644, 0xe2, 0x0645, 0x0646, 0x0647, 0x0648, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0x0649, 0x064a, 0xee, 0xef, 0x064b, 0x064c, 0x064d, 0x064e, 0xf4, 0x064f, 0x0650, 0xf7, 0x0651, 0xf9, 0x0652, 0xfb, 0xfc, 0x200e, 0x200f, 0x06d2, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(MS1256$Holder::b2c, MS1256$Holder::b2cTable->toCharArray());
	$assignStatic(MS1256$Holder::c2b, $new($chars, 1536));
	$assignStatic(MS1256$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MS1256$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MS1256$Holder::c2b, MS1256$Holder::c2bIndex);
	}
}

MS1256$Holder::MS1256$Holder() {
}

$Class* MS1256$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1256$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1256$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1256$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1256$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MS1256$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.MS1256$Holder", "sun.nio.cs.MS1256", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.MS1256$Holder",
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
		"sun.nio.cs.MS1256"
	};
	$loadClass(MS1256$Holder, name, initialize, &classInfo$$, MS1256$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MS1256$Holder);
	});
	return class$;
}

$Class* MS1256$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun