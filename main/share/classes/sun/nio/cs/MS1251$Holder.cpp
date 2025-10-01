#include <sun/nio/cs/MS1251$Holder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/cs/MS1251.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MS1251 = ::sun::nio::cs::MS1251;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS1251$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1251$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1251$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1251$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1251$Holder, c2bIndex)},
	{}
};

$MethodInfo _MS1251$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MS1251$Holder::*)()>(&MS1251$Holder::init$))},
	{}
};

$InnerClassInfo _MS1251$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1251$Holder", "sun.nio.cs.MS1251", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1251$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS1251$Holder",
	"java.lang.Object",
	nullptr,
	_MS1251$Holder_FieldInfo_,
	_MS1251$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MS1251$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1251"
};

$Object* allocate$MS1251$Holder($Class* clazz) {
	return $of($alloc(MS1251$Holder));
}

$String* MS1251$Holder::b2cTable = nullptr;
$chars* MS1251$Holder::b2c = nullptr;
$chars* MS1251$Holder::c2b = nullptr;
$chars* MS1251$Holder::c2bIndex = nullptr;

void MS1251$Holder::init$() {
}

void clinit$MS1251$Holder($Class* class$) {
	$assignStatic(MS1251$Holder::b2cTable, $cstr({0x402, 0x403, 0x201A, 0x453, 0x201E, 0x2026, 0x2020, 0x2021, 0x20AC, 0x2030, 0x409, 0x2039, 0x40A, 0x40C, 0x40B, 0x40F, 0x452, 0x2018, 0x2019, 0x201C, 0x201D, 0x2022, 0x2013, 0x2014, 0xFFFD, 0x2122, 0x459, 0x203A, 0x45A, 0x45C, 0x45B, 0x45F, 0xA0, 0x40E, 0x45E, 0x408, 0xA4, 0x490, 0xA6, 0xA7, 0x401, 0xA9, 0x404, 0xAB, 0xAC, 0xAD, 0xAE, 0x407, 0xB0, 0xB1, 0x406, 0x456, 0x491, 0xB5, 0xB6, 0xB7, 0x451, 0x2116, 0x454, 0xBB, 0x458, 0x405, 0x455, 0x457, 0x410, 0x411, 0x412, 0x413, 0x414, 0x415, 0x416, 0x417, 0x418, 0x419, 0x41A, 0x41B, 0x41C, 0x41D, 0x41E, 0x41F, 0x420, 0x421, 0x422, 0x423, 0x424, 0x425, 0x426, 0x427, 0x428, 0x429, 0x42A, 0x42B, 0x42C, 0x42D, 0x42E, 0x42F, 0x430, 0x431, 0x432, 0x433, 0x434, 0x435, 0x436, 0x437, 0x438, 0x439, 0x43A, 0x43B, 0x43C, 0x43D, 0x43E, 0x43F, 0x440, 0x441, 0x442, 0x443, 0x444, 0x445, 0x446, 0x447, 0x448, 0x449, 0x44A, 0x44B, 0x44C, 0x44D, 0x44E, 0x44F, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MS1251$Holder::b2c, $nc(MS1251$Holder::b2cTable)->toCharArray());
	$assignStatic(MS1251$Holder::c2b, $new($chars, 1280));
	$assignStatic(MS1251$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MS1251$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MS1251$Holder::c2b, MS1251$Holder::c2bIndex);
	}
}

MS1251$Holder::MS1251$Holder() {
}

$Class* MS1251$Holder::load$($String* name, bool initialize) {
	$loadClass(MS1251$Holder, name, initialize, &_MS1251$Holder_ClassInfo_, clinit$MS1251$Holder, allocate$MS1251$Holder);
	return class$;
}

$Class* MS1251$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun