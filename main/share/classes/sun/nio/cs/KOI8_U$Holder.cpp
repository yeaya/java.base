#include <sun/nio/cs/KOI8_U$Holder.h>

#include <sun/nio/cs/KOI8_U.h>
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

$FieldInfo _KOI8_U$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KOI8_U$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KOI8_U$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KOI8_U$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KOI8_U$Holder, c2bIndex)},
	{}
};

$MethodInfo _KOI8_U$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(KOI8_U$Holder, init$, void)},
	{}
};

$InnerClassInfo _KOI8_U$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.KOI8_U$Holder", "sun.nio.cs.KOI8_U", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _KOI8_U$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.KOI8_U$Holder",
	"java.lang.Object",
	nullptr,
	_KOI8_U$Holder_FieldInfo_,
	_KOI8_U$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_KOI8_U$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.KOI8_U"
};

$Object* allocate$KOI8_U$Holder($Class* clazz) {
	return $of($alloc(KOI8_U$Holder));
}

$String* KOI8_U$Holder::b2cTable = nullptr;
$chars* KOI8_U$Holder::b2c = nullptr;
$chars* KOI8_U$Holder::c2b = nullptr;
$chars* KOI8_U$Holder::c2bIndex = nullptr;

void KOI8_U$Holder::init$() {
}

void clinit$KOI8_U$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(KOI8_U$Holder::b2cTable, $cstr({0x2500, 0x2502, 0x250C, 0x2510, 0x2514, 0x2518, 0x251C, 0x2524, 0x252C, 0x2534, 0x253C, 0x2580, 0x2584, 0x2588, 0x258C, 0x2590, 0x2591, 0x2592, 0x2593, 0x2320, 0x25A0, 0x2219, 0x221A, 0x2248, 0x2264, 0x2265, 0xA0, 0x2321, 0xB0, 0xB2, 0xB7, 0xF7, 0x2550, 0x2551, 0x2552, 0x451, 0x454, 0x2554, 0x456, 0x457, 0x2557, 0x2558, 0x2559, 0x255A, 0x255B, 0x491, 0x255D, 0x255E, 0x255F, 0x2560, 0x2561, 0x401, 0x404, 0x2563, 0x406, 0x407, 0x2566, 0x2567, 0x2568, 0x2569, 0x256A, 0x490, 0x256C, 0xA9, 0x44E, 0x430, 0x431, 0x446, 0x434, 0x435, 0x444, 0x433, 0x445, 0x438, 0x439, 0x43A, 0x43B, 0x43C, 0x43D, 0x43E, 0x43F, 0x44F, 0x440, 0x441, 0x442, 0x443, 0x436, 0x432, 0x44C, 0x44B, 0x437, 0x448, 0x44D, 0x449, 0x447, 0x44A, 0x42E, 0x410, 0x411, 0x426, 0x414, 0x415, 0x424, 0x413, 0x425, 0x418, 0x419, 0x41A, 0x41B, 0x41C, 0x41D, 0x41E, 0x41F, 0x42F, 0x420, 0x421, 0x422, 0x423, 0x416, 0x412, 0x42C, 0x42B, 0x417, 0x428, 0x42D, 0x429, 0x427, 0x42A, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(KOI8_U$Holder::b2c, $nc(KOI8_U$Holder::b2cTable)->toCharArray());
	$assignStatic(KOI8_U$Holder::c2b, $new($chars, 1280));
	$assignStatic(KOI8_U$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, KOI8_U$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, KOI8_U$Holder::c2b, KOI8_U$Holder::c2bIndex);
	}
}

KOI8_U$Holder::KOI8_U$Holder() {
}

$Class* KOI8_U$Holder::load$($String* name, bool initialize) {
	$loadClass(KOI8_U$Holder, name, initialize, &_KOI8_U$Holder_ClassInfo_, clinit$KOI8_U$Holder, allocate$KOI8_U$Holder);
	return class$;
}

$Class* KOI8_U$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun