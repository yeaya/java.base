#include <sun/nio/cs/MS1252$Holder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/cs/MS1252.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MS1252 = ::sun::nio::cs::MS1252;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS1252$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1252$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1252$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1252$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1252$Holder, c2bIndex)},
	{}
};

$MethodInfo _MS1252$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MS1252$Holder::*)()>(&MS1252$Holder::init$))},
	{}
};

$InnerClassInfo _MS1252$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1252$Holder", "sun.nio.cs.MS1252", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1252$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS1252$Holder",
	"java.lang.Object",
	nullptr,
	_MS1252$Holder_FieldInfo_,
	_MS1252$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MS1252$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1252"
};

$Object* allocate$MS1252$Holder($Class* clazz) {
	return $of($alloc(MS1252$Holder));
}

$String* MS1252$Holder::b2cTable = nullptr;
$chars* MS1252$Holder::b2c = nullptr;
$chars* MS1252$Holder::c2b = nullptr;
$chars* MS1252$Holder::c2bIndex = nullptr;

void MS1252$Holder::init$() {
}

void clinit$MS1252$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MS1252$Holder::b2cTable, $cstr({0x20AC, 0xFFFD, 0x201A, 0x192, 0x201E, 0x2026, 0x2020, 0x2021, 0x2C6, 0x2030, 0x160, 0x2039, 0x152, 0xFFFD, 0x17D, 0xFFFD, 0xFFFD, 0x2018, 0x2019, 0x201C, 0x201D, 0x2022, 0x2013, 0x2014, 0x2DC, 0x2122, 0x161, 0x203A, 0x153, 0xFFFD, 0x17E, 0x178, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF, 0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MS1252$Holder::b2c, $nc(MS1252$Holder::b2cTable)->toCharArray());
	$assignStatic(MS1252$Holder::c2b, $new($chars, 1536));
	$assignStatic(MS1252$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MS1252$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MS1252$Holder::c2b, MS1252$Holder::c2bIndex);
	}
}

MS1252$Holder::MS1252$Holder() {
}

$Class* MS1252$Holder::load$($String* name, bool initialize) {
	$loadClass(MS1252$Holder, name, initialize, &_MS1252$Holder_ClassInfo_, clinit$MS1252$Holder, allocate$MS1252$Holder);
	return class$;
}

$Class* MS1252$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun