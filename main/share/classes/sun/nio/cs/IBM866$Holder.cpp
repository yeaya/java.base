#include <sun/nio/cs/IBM866$Holder.h>
#include <sun/nio/cs/IBM866.h>
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

$String* IBM866$Holder::b2cTable = nullptr;
$chars* IBM866$Holder::b2c = nullptr;
$chars* IBM866$Holder::c2b = nullptr;
$chars* IBM866$Holder::c2bIndex = nullptr;

void IBM866$Holder::init$() {
}

void IBM866$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM866$Holder::b2cTable, $cstr({0x0410, 0x0411, 0x0412, 0x0413, 0x0414, 0x0415, 0x0416, 0x0417, 0x0418, 0x0419, 0x041a, 0x041b, 0x041c, 0x041d, 0x041e, 0x041f, 0x0420, 0x0421, 0x0422, 0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 0x0428, 0x0429, 0x042a, 0x042b, 0x042c, 0x042d, 0x042e, 0x042f, 0x0430, 0x0431, 0x0432, 0x0433, 0x0434, 0x0435, 0x0436, 0x0437, 0x0438, 0x0439, 0x043a, 0x043b, 0x043c, 0x043d, 0x043e, 0x043f, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x2561, 0x2562, 0x2556, 0x2555, 0x2563, 0x2551, 0x2557, 0x255d, 0x255c, 0x255b, 0x2510, 0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x255e, 0x255f, 0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x2567, 0x2568, 0x2564, 0x2565, 0x2559, 0x2558, 0x2552, 0x2553, 0x256b, 0x256a, 0x2518, 0x250c, 0x2588, 0x2584, 0x258c, 0x2590, 0x2580, 0x0440, 0x0441, 0x0442, 0x0443, 0x0444, 0x0445, 0x0446, 0x0447, 0x0448, 0x0449, 0x044a, 0x044b, 0x044c, 0x044d, 0x044e, 0x044f, 0x0401, 0x0451, 0x0404, 0x0454, 0x0407, 0x0457, 0x040e, 0x045e, 0xb0, 0x2219, 0xb7, 0x221a, 0x2116, 0xa4, 0x25a0, 0xa0, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(IBM866$Holder::b2c, IBM866$Holder::b2cTable->toCharArray());
	$assignStatic(IBM866$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM866$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM866$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM866$Holder::c2b, IBM866$Holder::c2bIndex);
	}
}

IBM866$Holder::IBM866$Holder() {
}

$Class* IBM866$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM866$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM866$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM866$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM866$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM866$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.IBM866$Holder", "sun.nio.cs.IBM866", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.IBM866$Holder",
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
		"sun.nio.cs.IBM866"
	};
	$loadClass(IBM866$Holder, name, initialize, &classInfo$$, IBM866$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM866$Holder);
	});
	return class$;
}

$Class* IBM866$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun