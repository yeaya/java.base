#include <sun/nio/cs/IBM775$Holder.h>

#include <sun/nio/cs/IBM775.h>
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

$FieldInfo _IBM775$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM775$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM775$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM775$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM775$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM775$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(IBM775$Holder, init$, void)},
	{}
};

$InnerClassInfo _IBM775$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM775$Holder", "sun.nio.cs.IBM775", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM775$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.IBM775$Holder",
	"java.lang.Object",
	nullptr,
	_IBM775$Holder_FieldInfo_,
	_IBM775$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM775$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM775"
};

$Object* allocate$IBM775$Holder($Class* clazz) {
	return $of($alloc(IBM775$Holder));
}

$String* IBM775$Holder::b2cTable = nullptr;
$chars* IBM775$Holder::b2c = nullptr;
$chars* IBM775$Holder::c2b = nullptr;
$chars* IBM775$Holder::c2bIndex = nullptr;

void IBM775$Holder::init$() {
}

void clinit$IBM775$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM775$Holder::b2cTable, $cstr({0x106, 0xFC, 0xE9, 0x101, 0xE4, 0x123, 0xE5, 0x107, 0x142, 0x113, 0x156, 0x157, 0x12B, 0x179, 0xC4, 0xC5, 0xC9, 0xE6, 0xC6, 0x14D, 0xF6, 0x122, 0xA2, 0x15A, 0x15B, 0xD6, 0xDC, 0xF8, 0xA3, 0xD8, 0xD7, 0xA4, 0x100, 0x12A, 0xF3, 0x17B, 0x17C, 0x17A, 0x201D, 0xA6, 0xA9, 0xAE, 0xAC, 0xBD, 0xBC, 0x141, 0xAB, 0xBB, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x104, 0x10C, 0x118, 0x116, 0x2563, 0x2551, 0x2557, 0x255D, 0x12E, 0x160, 0x2510, 0x2514, 0x2534, 0x252C, 0x251C, 0x2500, 0x253C, 0x172, 0x16A, 0x255A, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256C, 0x17D, 0x105, 0x10D, 0x119, 0x117, 0x12F, 0x161, 0x173, 0x16B, 0x17E, 0x2518, 0x250C, 0x2588, 0x2584, 0x258C, 0x2590, 0x2580, 0xD3, 0xDF, 0x14C, 0x143, 0xF5, 0xD5, 0xB5, 0x144, 0x136, 0x137, 0x13B, 0x13C, 0x146, 0x112, 0x145, 0x2019, 0xAD, 0xB1, 0x201C, 0xBE, 0xB6, 0xA7, 0xF7, 0x201E, 0xB0, 0x2219, 0xB7, 0xB9, 0xB3, 0xB2, 0x25A0, 0xA0, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM775$Holder::b2c, $nc(IBM775$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM775$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM775$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM775$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM775$Holder::c2b, IBM775$Holder::c2bIndex);
	}
}

IBM775$Holder::IBM775$Holder() {
}

$Class* IBM775$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM775$Holder, name, initialize, &_IBM775$Holder_ClassInfo_, clinit$IBM775$Holder, allocate$IBM775$Holder);
	return class$;
}

$Class* IBM775$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun