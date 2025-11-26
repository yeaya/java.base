#include <sun/nio/cs/MS1258$Holder.h>

#include <sun/nio/cs/MS1258.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MS1258 = ::sun::nio::cs::MS1258;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS1258$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1258$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1258$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1258$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1258$Holder, c2bIndex)},
	{}
};

$MethodInfo _MS1258$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MS1258$Holder::*)()>(&MS1258$Holder::init$))},
	{}
};

$InnerClassInfo _MS1258$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1258$Holder", "sun.nio.cs.MS1258", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1258$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS1258$Holder",
	"java.lang.Object",
	nullptr,
	_MS1258$Holder_FieldInfo_,
	_MS1258$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MS1258$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1258"
};

$Object* allocate$MS1258$Holder($Class* clazz) {
	return $of($alloc(MS1258$Holder));
}

$String* MS1258$Holder::b2cTable = nullptr;
$chars* MS1258$Holder::b2c = nullptr;
$chars* MS1258$Holder::c2b = nullptr;
$chars* MS1258$Holder::c2bIndex = nullptr;

void MS1258$Holder::init$() {
}

void clinit$MS1258$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MS1258$Holder::b2cTable, $cstr({0x20AC, 0xFFFD, 0x201A, 0x192, 0x201E, 0x2026, 0x2020, 0x2021, 0x2C6, 0x2030, 0xFFFD, 0x2039, 0x152, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x2018, 0x2019, 0x201C, 0x201D, 0x2022, 0x2013, 0x2014, 0x2DC, 0x2122, 0xFFFD, 0x203A, 0x153, 0xFFFD, 0xFFFD, 0x178, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0xC0, 0xC1, 0xC2, 0x102, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0x300, 0xCD, 0xCE, 0xCF, 0x110, 0xD1, 0x309, 0xD3, 0xD4, 0x1A0, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0x1AF, 0x303, 0xDF, 0xE0, 0xE1, 0xE2, 0x103, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0x301, 0xED, 0xEE, 0xEF, 0x111, 0xF1, 0x323, 0xF3, 0xF4, 0x1A1, 0xF6, 0xF7, 0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0x1B0, 0x20AB, 0xFF, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MS1258$Holder::b2c, $nc(MS1258$Holder::b2cTable)->toCharArray());
	$assignStatic(MS1258$Holder::c2b, $new($chars, 1792));
	$assignStatic(MS1258$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MS1258$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MS1258$Holder::c2b, MS1258$Holder::c2bIndex);
	}
}

MS1258$Holder::MS1258$Holder() {
}

$Class* MS1258$Holder::load$($String* name, bool initialize) {
	$loadClass(MS1258$Holder, name, initialize, &_MS1258$Holder_ClassInfo_, clinit$MS1258$Holder, allocate$MS1258$Holder);
	return class$;
}

$Class* MS1258$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun