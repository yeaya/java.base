#include <sun/nio/cs/MS1256$Holder.h>

#include <sun/nio/cs/MS1256.h>
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

$FieldInfo _MS1256$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1256$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1256$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1256$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS1256$Holder, c2bIndex)},
	{}
};

$MethodInfo _MS1256$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(MS1256$Holder, init$, void)},
	{}
};

$InnerClassInfo _MS1256$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS1256$Holder", "sun.nio.cs.MS1256", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS1256$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS1256$Holder",
	"java.lang.Object",
	nullptr,
	_MS1256$Holder_FieldInfo_,
	_MS1256$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MS1256$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS1256"
};

$Object* allocate$MS1256$Holder($Class* clazz) {
	return $of($alloc(MS1256$Holder));
}

$String* MS1256$Holder::b2cTable = nullptr;
$chars* MS1256$Holder::b2c = nullptr;
$chars* MS1256$Holder::c2b = nullptr;
$chars* MS1256$Holder::c2bIndex = nullptr;

void MS1256$Holder::init$() {
}

void clinit$MS1256$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MS1256$Holder::b2cTable, $cstr({0x20AC, 0x67E, 0x201A, 0x192, 0x201E, 0x2026, 0x2020, 0x2021, 0x2C6, 0x2030, 0x679, 0x2039, 0x152, 0x686, 0x698, 0x688, 0x6AF, 0x2018, 0x2019, 0x201C, 0x201D, 0x2022, 0x2013, 0x2014, 0x6A9, 0x2122, 0x691, 0x203A, 0x153, 0x200C, 0x200D, 0x6BA, 0xA0, 0x60C, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0x6BE, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0x61B, 0xBB, 0xBC, 0xBD, 0xBE, 0x61F, 0x6C1, 0x621, 0x622, 0x623, 0x624, 0x625, 0x626, 0x627, 0x628, 0x629, 0x62A, 0x62B, 0x62C, 0x62D, 0x62E, 0x62F, 0x630, 0x631, 0x632, 0x633, 0x634, 0x635, 0x636, 0xD7, 0x637, 0x638, 0x639, 0x63A, 0x640, 0x641, 0x642, 0x643, 0xE0, 0x644, 0xE2, 0x645, 0x646, 0x647, 0x648, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0x649, 0x64A, 0xEE, 0xEF, 0x64B, 0x64C, 0x64D, 0x64E, 0xF4, 0x64F, 0x650, 0xF7, 0x651, 0xF9, 0x652, 0xFB, 0xFC, 0x200E, 0x200F, 0x6D2, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MS1256$Holder::b2c, $nc(MS1256$Holder::b2cTable)->toCharArray());
	$assignStatic(MS1256$Holder::c2b, $new($chars, 1536));
	$assignStatic(MS1256$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MS1256$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MS1256$Holder::c2b, MS1256$Holder::c2bIndex);
	}
}

MS1256$Holder::MS1256$Holder() {
}

$Class* MS1256$Holder::load$($String* name, bool initialize) {
	$loadClass(MS1256$Holder, name, initialize, &_MS1256$Holder_ClassInfo_, clinit$MS1256$Holder, allocate$MS1256$Holder);
	return class$;
}

$Class* MS1256$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun