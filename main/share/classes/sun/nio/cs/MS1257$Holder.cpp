#include <sun/nio/cs/MS1257$Holder.h>

#include <sun/nio/cs/MS1257.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MS1257 = ::sun::nio::cs::MS1257;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS1257$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1257$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1257$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1257$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1257$Holder, c2bIndex)},
	{}
};

$MethodInfo _MS1257$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MS1257$Holder::*)()>(&MS1257$Holder::init$))},
	{}
};

$InnerClassInfo _MS1257$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1257$Holder", "sun.nio.cs.MS1257", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1257$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS1257$Holder",
	"java.lang.Object",
	nullptr,
	_MS1257$Holder_FieldInfo_,
	_MS1257$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MS1257$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1257"
};

$Object* allocate$MS1257$Holder($Class* clazz) {
	return $of($alloc(MS1257$Holder));
}

$String* MS1257$Holder::b2cTable = nullptr;
$chars* MS1257$Holder::b2c = nullptr;
$chars* MS1257$Holder::c2b = nullptr;
$chars* MS1257$Holder::c2bIndex = nullptr;

void MS1257$Holder::init$() {
}

void clinit$MS1257$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MS1257$Holder::b2cTable, $cstr({0x20AC, 0xFFFD, 0x201A, 0xFFFD, 0x201E, 0x2026, 0x2020, 0x2021, 0xFFFD, 0x2030, 0xFFFD, 0x2039, 0xFFFD, 0xA8, 0x2C7, 0xB8, 0xFFFD, 0x2018, 0x2019, 0x201C, 0x201D, 0x2022, 0x2013, 0x2014, 0xFFFD, 0x2122, 0xFFFD, 0x203A, 0xFFFD, 0xAF, 0x2DB, 0xFFFD, 0xA0, 0xFFFD, 0xA2, 0xA3, 0xA4, 0xFFFD, 0xA6, 0xA7, 0xD8, 0xA9, 0x156, 0xAB, 0xAC, 0xAD, 0xAE, 0xC6, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xF8, 0xB9, 0x157, 0xBB, 0xBC, 0xBD, 0xBE, 0xE6, 0x104, 0x12E, 0x100, 0x106, 0xC4, 0xC5, 0x118, 0x112, 0x10C, 0xC9, 0x179, 0x116, 0x122, 0x136, 0x12A, 0x13B, 0x160, 0x143, 0x145, 0xD3, 0x14C, 0xD5, 0xD6, 0xD7, 0x172, 0x141, 0x15A, 0x16A, 0xDC, 0x17B, 0x17D, 0xDF, 0x105, 0x12F, 0x101, 0x107, 0xE4, 0xE5, 0x119, 0x113, 0x10D, 0xE9, 0x17A, 0x117, 0x123, 0x137, 0x12B, 0x13C, 0x161, 0x144, 0x146, 0xF3, 0x14D, 0xF5, 0xF6, 0xF7, 0x173, 0x142, 0x15B, 0x16B, 0xFC, 0x17C, 0x17E, 0x2D9, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MS1257$Holder::b2c, $nc(MS1257$Holder::b2cTable)->toCharArray());
	$assignStatic(MS1257$Holder::c2b, $new($chars, 1536));
	$assignStatic(MS1257$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MS1257$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MS1257$Holder::c2b, MS1257$Holder::c2bIndex);
	}
}

MS1257$Holder::MS1257$Holder() {
}

$Class* MS1257$Holder::load$($String* name, bool initialize) {
	$loadClass(MS1257$Holder, name, initialize, &_MS1257$Holder_ClassInfo_, clinit$MS1257$Holder, allocate$MS1257$Holder);
	return class$;
}

$Class* MS1257$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun