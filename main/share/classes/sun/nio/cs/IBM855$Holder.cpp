#include <sun/nio/cs/IBM855$Holder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/cs/IBM855.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IBM855 = ::sun::nio::cs::IBM855;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _IBM855$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM855$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM855$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM855$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM855$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM855$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM855$Holder::*)()>(&IBM855$Holder::init$))},
	{}
};

$InnerClassInfo _IBM855$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM855$Holder", "sun.nio.cs.IBM855", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM855$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.IBM855$Holder",
	"java.lang.Object",
	nullptr,
	_IBM855$Holder_FieldInfo_,
	_IBM855$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM855$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM855"
};

$Object* allocate$IBM855$Holder($Class* clazz) {
	return $of($alloc(IBM855$Holder));
}

$String* IBM855$Holder::b2cTable = nullptr;
$chars* IBM855$Holder::b2c = nullptr;
$chars* IBM855$Holder::c2b = nullptr;
$chars* IBM855$Holder::c2bIndex = nullptr;

void IBM855$Holder::init$() {
}

void clinit$IBM855$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM855$Holder::b2cTable, $cstr({0x452, 0x402, 0x453, 0x403, 0x451, 0x401, 0x454, 0x404, 0x455, 0x405, 0x456, 0x406, 0x457, 0x407, 0x458, 0x408, 0x459, 0x409, 0x45A, 0x40A, 0x45B, 0x40B, 0x45C, 0x40C, 0x45E, 0x40E, 0x45F, 0x40F, 0x44E, 0x42E, 0x44A, 0x42A, 0x430, 0x410, 0x431, 0x411, 0x446, 0x426, 0x434, 0x414, 0x435, 0x415, 0x444, 0x424, 0x433, 0x413, 0xAB, 0xBB, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x445, 0x425, 0x438, 0x418, 0x2563, 0x2551, 0x2557, 0x255D, 0x439, 0x419, 0x2510, 0x2514, 0x2534, 0x252C, 0x251C, 0x2500, 0x253C, 0x43A, 0x41A, 0x255A, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256C, 0xA4, 0x43B, 0x41B, 0x43C, 0x41C, 0x43D, 0x41D, 0x43E, 0x41E, 0x43F, 0x2518, 0x250C, 0x2588, 0x2584, 0x41F, 0x44F, 0x2580, 0x42F, 0x440, 0x420, 0x441, 0x421, 0x442, 0x422, 0x443, 0x423, 0x436, 0x416, 0x432, 0x412, 0x44C, 0x42C, 0x2116, 0xAD, 0x44B, 0x42B, 0x437, 0x417, 0x448, 0x428, 0x44D, 0x42D, 0x449, 0x429, 0x447, 0x427, 0xA7, 0x25A0, 0xA0, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM855$Holder::b2c, $nc(IBM855$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM855$Holder::c2b, $new($chars, 1024));
	$assignStatic(IBM855$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM855$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM855$Holder::c2b, IBM855$Holder::c2bIndex);
	}
}

IBM855$Holder::IBM855$Holder() {
}

$Class* IBM855$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM855$Holder, name, initialize, &_IBM855$Holder_ClassInfo_, clinit$IBM855$Holder, allocate$IBM855$Holder);
	return class$;
}

$Class* IBM855$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun