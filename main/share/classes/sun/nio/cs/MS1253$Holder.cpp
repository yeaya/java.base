#include <sun/nio/cs/MS1253$Holder.h>

#include <sun/nio/cs/MS1253.h>
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

$FieldInfo _MS1253$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1253$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1253$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1253$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1253$Holder, c2bIndex)},
	{}
};

$MethodInfo _MS1253$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(MS1253$Holder, init$, void)},
	{}
};

$InnerClassInfo _MS1253$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1253$Holder", "sun.nio.cs.MS1253", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1253$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS1253$Holder",
	"java.lang.Object",
	nullptr,
	_MS1253$Holder_FieldInfo_,
	_MS1253$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MS1253$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1253"
};

$Object* allocate$MS1253$Holder($Class* clazz) {
	return $of($alloc(MS1253$Holder));
}

$String* MS1253$Holder::b2cTable = nullptr;
$chars* MS1253$Holder::b2c = nullptr;
$chars* MS1253$Holder::c2b = nullptr;
$chars* MS1253$Holder::c2bIndex = nullptr;

void MS1253$Holder::init$() {
}

void clinit$MS1253$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MS1253$Holder::b2cTable, $cstr({0x20AC, 0xFFFD, 0x201A, 0x192, 0x201E, 0x2026, 0x2020, 0x2021, 0xFFFD, 0x2030, 0xFFFD, 0x2039, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x2018, 0x2019, 0x201C, 0x201D, 0x2022, 0x2013, 0x2014, 0xFFFD, 0x2122, 0xFFFD, 0x203A, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xA0, 0x385, 0x386, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xFFFD, 0xAB, 0xAC, 0xAD, 0xAE, 0x2015, 0xB0, 0xB1, 0xB2, 0xB3, 0x384, 0xB5, 0xB6, 0xB7, 0x388, 0x389, 0x38A, 0xBB, 0x38C, 0xBD, 0x38E, 0x38F, 0x390, 0x391, 0x392, 0x393, 0x394, 0x395, 0x396, 0x397, 0x398, 0x399, 0x39A, 0x39B, 0x39C, 0x39D, 0x39E, 0x39F, 0x3A0, 0x3A1, 0xFFFD, 0x3A3, 0x3A4, 0x3A5, 0x3A6, 0x3A7, 0x3A8, 0x3A9, 0x3AA, 0x3AB, 0x3AC, 0x3AD, 0x3AE, 0x3AF, 0x3B0, 0x3B1, 0x3B2, 0x3B3, 0x3B4, 0x3B5, 0x3B6, 0x3B7, 0x3B8, 0x3B9, 0x3BA, 0x3BB, 0x3BC, 0x3BD, 0x3BE, 0x3BF, 0x3C0, 0x3C1, 0x3C2, 0x3C3, 0x3C4, 0x3C5, 0x3C6, 0x3C7, 0x3C8, 0x3C9, 0x3CA, 0x3CB, 0x3CC, 0x3CD, 0x3CE, 0xFFFD, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MS1253$Holder::b2c, $nc(MS1253$Holder::b2cTable)->toCharArray());
	$assignStatic(MS1253$Holder::c2b, $new($chars, 1536));
	$assignStatic(MS1253$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MS1253$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MS1253$Holder::c2b, MS1253$Holder::c2bIndex);
	}
}

MS1253$Holder::MS1253$Holder() {
}

$Class* MS1253$Holder::load$($String* name, bool initialize) {
	$loadClass(MS1253$Holder, name, initialize, &_MS1253$Holder_ClassInfo_, clinit$MS1253$Holder, allocate$MS1253$Holder);
	return class$;
}

$Class* MS1253$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun