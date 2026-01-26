#include <sun/nio/cs/IBM852$Holder.h>

#include <sun/nio/cs/IBM852.h>
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

$FieldInfo _IBM852$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM852$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM852$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM852$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM852$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM852$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(IBM852$Holder, init$, void)},
	{}
};

$InnerClassInfo _IBM852$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM852$Holder", "sun.nio.cs.IBM852", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM852$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.IBM852$Holder",
	"java.lang.Object",
	nullptr,
	_IBM852$Holder_FieldInfo_,
	_IBM852$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM852$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM852"
};

$Object* allocate$IBM852$Holder($Class* clazz) {
	return $of($alloc(IBM852$Holder));
}

$String* IBM852$Holder::b2cTable = nullptr;
$chars* IBM852$Holder::b2c = nullptr;
$chars* IBM852$Holder::c2b = nullptr;
$chars* IBM852$Holder::c2bIndex = nullptr;

void IBM852$Holder::init$() {
}

void clinit$IBM852$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM852$Holder::b2cTable, $cstr({0xC7, 0xFC, 0xE9, 0xE2, 0xE4, 0x16F, 0x107, 0xE7, 0x142, 0xEB, 0x150, 0x151, 0xEE, 0x179, 0xC4, 0x106, 0xC9, 0x139, 0x13A, 0xF4, 0xF6, 0x13D, 0x13E, 0x15A, 0x15B, 0xD6, 0xDC, 0x164, 0x165, 0x141, 0xD7, 0x10D, 0xE1, 0xED, 0xF3, 0xFA, 0x104, 0x105, 0x17D, 0x17E, 0x118, 0x119, 0xAC, 0x17A, 0x10C, 0x15F, 0xAB, 0xBB, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0xC1, 0xC2, 0x11A, 0x15E, 0x2563, 0x2551, 0x2557, 0x255D, 0x17B, 0x17C, 0x2510, 0x2514, 0x2534, 0x252C, 0x251C, 0x2500, 0x253C, 0x102, 0x103, 0x255A, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256C, 0xA4, 0x111, 0x110, 0x10E, 0xCB, 0x10F, 0x147, 0xCD, 0xCE, 0x11B, 0x2518, 0x250C, 0x2588, 0x2584, 0x162, 0x16E, 0x2580, 0xD3, 0xDF, 0xD4, 0x143, 0x144, 0x148, 0x160, 0x161, 0x154, 0xDA, 0x155, 0x170, 0xFD, 0xDD, 0x163, 0xB4, 0xAD, 0x2DD, 0x2DB, 0x2C7, 0x2D8, 0xA7, 0xF7, 0xB8, 0xB0, 0xA8, 0x2D9, 0x171, 0x158, 0x159, 0x25A0, 0xA0, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM852$Holder::b2c, $nc(IBM852$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM852$Holder::c2b, $new($chars, 1024));
	$assignStatic(IBM852$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM852$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM852$Holder::c2b, IBM852$Holder::c2bIndex);
	}
}

IBM852$Holder::IBM852$Holder() {
}

$Class* IBM852$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM852$Holder, name, initialize, &_IBM852$Holder_ClassInfo_, clinit$IBM852$Holder, allocate$IBM852$Holder);
	return class$;
}

$Class* IBM852$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun