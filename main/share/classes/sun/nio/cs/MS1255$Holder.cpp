#include <sun/nio/cs/MS1255$Holder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/cs/MS1255.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MS1255 = ::sun::nio::cs::MS1255;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS1255$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1255$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1255$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1255$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1255$Holder, c2bIndex)},
	{}
};

$MethodInfo _MS1255$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MS1255$Holder::*)()>(&MS1255$Holder::init$))},
	{}
};

$InnerClassInfo _MS1255$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1255$Holder", "sun.nio.cs.MS1255", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1255$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS1255$Holder",
	"java.lang.Object",
	nullptr,
	_MS1255$Holder_FieldInfo_,
	_MS1255$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MS1255$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1255"
};

$Object* allocate$MS1255$Holder($Class* clazz) {
	return $of($alloc(MS1255$Holder));
}

$String* MS1255$Holder::b2cTable = nullptr;
$chars* MS1255$Holder::b2c = nullptr;
$chars* MS1255$Holder::c2b = nullptr;
$chars* MS1255$Holder::c2bIndex = nullptr;

void MS1255$Holder::init$() {
}

void clinit$MS1255$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MS1255$Holder::b2cTable, $cstr({0x20AC, 0xFFFD, 0x201A, 0x192, 0x201E, 0x2026, 0x2020, 0x2021, 0x2C6, 0x2030, 0xFFFD, 0x2039, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x2018, 0x2019, 0x201C, 0x201D, 0x2022, 0x2013, 0x2014, 0x2DC, 0x2122, 0xFFFD, 0x203A, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xA0, 0xA1, 0xA2, 0xA3, 0x20AA, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xD7, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xF7, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0x5B0, 0x5B1, 0x5B2, 0x5B3, 0x5B4, 0x5B5, 0x5B6, 0x5B7, 0x5B8, 0x5B9, 0xFFFD, 0x5BB, 0x5BC, 0x5BD, 0x5BE, 0x5BF, 0x5C0, 0x5C1, 0x5C2, 0x5C3, 0x5F0, 0x5F1, 0x5F2, 0x5F3, 0x5F4, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x5D0, 0x5D1, 0x5D2, 0x5D3, 0x5D4, 0x5D5, 0x5D6, 0x5D7, 0x5D8, 0x5D9, 0x5DA, 0x5DB, 0x5DC, 0x5DD, 0x5DE, 0x5DF, 0x5E0, 0x5E1, 0x5E2, 0x5E3, 0x5E4, 0x5E5, 0x5E6, 0x5E7, 0x5E8, 0x5E9, 0x5EA, 0xFFFD, 0xFFFD, 0x200E, 0x200F, 0xFFFD, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MS1255$Holder::b2c, $nc(MS1255$Holder::b2cTable)->toCharArray());
	$assignStatic(MS1255$Holder::c2b, $new($chars, 1792));
	$assignStatic(MS1255$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MS1255$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MS1255$Holder::c2b, MS1255$Holder::c2bIndex);
	}
}

MS1255$Holder::MS1255$Holder() {
}

$Class* MS1255$Holder::load$($String* name, bool initialize) {
	$loadClass(MS1255$Holder, name, initialize, &_MS1255$Holder_ClassInfo_, clinit$MS1255$Holder, allocate$MS1255$Holder);
	return class$;
}

$Class* MS1255$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun