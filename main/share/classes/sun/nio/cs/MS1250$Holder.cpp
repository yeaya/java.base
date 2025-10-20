#include <sun/nio/cs/MS1250$Holder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/cs/MS1250.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MS1250 = ::sun::nio::cs::MS1250;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS1250$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1250$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1250$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1250$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1250$Holder, c2bIndex)},
	{}
};

$MethodInfo _MS1250$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MS1250$Holder::*)()>(&MS1250$Holder::init$))},
	{}
};

$InnerClassInfo _MS1250$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1250$Holder", "sun.nio.cs.MS1250", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1250$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS1250$Holder",
	"java.lang.Object",
	nullptr,
	_MS1250$Holder_FieldInfo_,
	_MS1250$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MS1250$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1250"
};

$Object* allocate$MS1250$Holder($Class* clazz) {
	return $of($alloc(MS1250$Holder));
}

$String* MS1250$Holder::b2cTable = nullptr;
$chars* MS1250$Holder::b2c = nullptr;
$chars* MS1250$Holder::c2b = nullptr;
$chars* MS1250$Holder::c2bIndex = nullptr;

void MS1250$Holder::init$() {
}

void clinit$MS1250$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MS1250$Holder::b2cTable, $cstr({0x20AC, 0xFFFD, 0x201A, 0xFFFD, 0x201E, 0x2026, 0x2020, 0x2021, 0xFFFD, 0x2030, 0x160, 0x2039, 0x15A, 0x164, 0x17D, 0x179, 0xFFFD, 0x2018, 0x2019, 0x201C, 0x201D, 0x2022, 0x2013, 0x2014, 0xFFFD, 0x2122, 0x161, 0x203A, 0x15B, 0x165, 0x17E, 0x17A, 0xA0, 0x2C7, 0x2D8, 0x141, 0xA4, 0x104, 0xA6, 0xA7, 0xA8, 0xA9, 0x15E, 0xAB, 0xAC, 0xAD, 0xAE, 0x17B, 0xB0, 0xB1, 0x2DB, 0x142, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0x105, 0x15F, 0xBB, 0x13D, 0x2DD, 0x13E, 0x17C, 0x154, 0xC1, 0xC2, 0x102, 0xC4, 0x139, 0x106, 0xC7, 0x10C, 0xC9, 0x118, 0xCB, 0x11A, 0xCD, 0xCE, 0x10E, 0x110, 0x143, 0x147, 0xD3, 0xD4, 0x150, 0xD6, 0xD7, 0x158, 0x16E, 0xDA, 0x170, 0xDC, 0xDD, 0x162, 0xDF, 0x155, 0xE1, 0xE2, 0x103, 0xE4, 0x13A, 0x107, 0xE7, 0x10D, 0xE9, 0x119, 0xEB, 0x11B, 0xED, 0xEE, 0x10F, 0x111, 0x144, 0x148, 0xF3, 0xF4, 0x151, 0xF6, 0xF7, 0x159, 0x16F, 0xFA, 0x171, 0xFC, 0xFD, 0x163, 0x2D9, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MS1250$Holder::b2c, $nc(MS1250$Holder::b2cTable)->toCharArray());
	$assignStatic(MS1250$Holder::c2b, $new($chars, 1536));
	$assignStatic(MS1250$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MS1250$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MS1250$Holder::c2b, MS1250$Holder::c2bIndex);
	}
}

MS1250$Holder::MS1250$Holder() {
}

$Class* MS1250$Holder::load$($String* name, bool initialize) {
	$loadClass(MS1250$Holder, name, initialize, &_MS1250$Holder_ClassInfo_, clinit$MS1250$Holder, allocate$MS1250$Holder);
	return class$;
}

$Class* MS1250$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun