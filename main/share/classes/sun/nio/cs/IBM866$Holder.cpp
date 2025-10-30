#include <sun/nio/cs/IBM866$Holder.h>

#include <sun/nio/cs/IBM866.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IBM866 = ::sun::nio::cs::IBM866;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _IBM866$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM866$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM866$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM866$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM866$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM866$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM866$Holder::*)()>(&IBM866$Holder::init$))},
	{}
};

$InnerClassInfo _IBM866$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM866$Holder", "sun.nio.cs.IBM866", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM866$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.IBM866$Holder",
	"java.lang.Object",
	nullptr,
	_IBM866$Holder_FieldInfo_,
	_IBM866$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM866$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM866"
};

$Object* allocate$IBM866$Holder($Class* clazz) {
	return $of($alloc(IBM866$Holder));
}

$String* IBM866$Holder::b2cTable = nullptr;
$chars* IBM866$Holder::b2c = nullptr;
$chars* IBM866$Holder::c2b = nullptr;
$chars* IBM866$Holder::c2bIndex = nullptr;

void IBM866$Holder::init$() {
}

void clinit$IBM866$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM866$Holder::b2cTable, $cstr({0x410, 0x411, 0x412, 0x413, 0x414, 0x415, 0x416, 0x417, 0x418, 0x419, 0x41A, 0x41B, 0x41C, 0x41D, 0x41E, 0x41F, 0x420, 0x421, 0x422, 0x423, 0x424, 0x425, 0x426, 0x427, 0x428, 0x429, 0x42A, 0x42B, 0x42C, 0x42D, 0x42E, 0x42F, 0x430, 0x431, 0x432, 0x433, 0x434, 0x435, 0x436, 0x437, 0x438, 0x439, 0x43A, 0x43B, 0x43C, 0x43D, 0x43E, 0x43F, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x2561, 0x2562, 0x2556, 0x2555, 0x2563, 0x2551, 0x2557, 0x255D, 0x255C, 0x255B, 0x2510, 0x2514, 0x2534, 0x252C, 0x251C, 0x2500, 0x253C, 0x255E, 0x255F, 0x255A, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256C, 0x2567, 0x2568, 0x2564, 0x2565, 0x2559, 0x2558, 0x2552, 0x2553, 0x256B, 0x256A, 0x2518, 0x250C, 0x2588, 0x2584, 0x258C, 0x2590, 0x2580, 0x440, 0x441, 0x442, 0x443, 0x444, 0x445, 0x446, 0x447, 0x448, 0x449, 0x44A, 0x44B, 0x44C, 0x44D, 0x44E, 0x44F, 0x401, 0x451, 0x404, 0x454, 0x407, 0x457, 0x40E, 0x45E, 0xB0, 0x2219, 0xB7, 0x221A, 0x2116, 0xA4, 0x25A0, 0xA0, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM866$Holder::b2c, $nc(IBM866$Holder::b2cTable)->toCharArray());
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
	$loadClass(IBM866$Holder, name, initialize, &_IBM866$Holder_ClassInfo_, clinit$IBM866$Holder, allocate$IBM866$Holder);
	return class$;
}

$Class* IBM866$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun