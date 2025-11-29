#include <sun/nio/cs/ISO_8859_2$Holder.h>

#include <sun/nio/cs/ISO_8859_2.h>
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

$FieldInfo _ISO_8859_2$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_2$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_2$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_2$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_2$Holder, c2bIndex)},
	{}
};

$MethodInfo _ISO_8859_2$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ISO_8859_2$Holder::*)()>(&ISO_8859_2$Holder::init$))},
	{}
};

$InnerClassInfo _ISO_8859_2$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ISO_8859_2$Holder", "sun.nio.cs.ISO_8859_2", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO_8859_2$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ISO_8859_2$Holder",
	"java.lang.Object",
	nullptr,
	_ISO_8859_2$Holder_FieldInfo_,
	_ISO_8859_2$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO_8859_2$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ISO_8859_2"
};

$Object* allocate$ISO_8859_2$Holder($Class* clazz) {
	return $of($alloc(ISO_8859_2$Holder));
}

$String* ISO_8859_2$Holder::b2cTable = nullptr;
$chars* ISO_8859_2$Holder::b2c = nullptr;
$chars* ISO_8859_2$Holder::c2b = nullptr;
$chars* ISO_8859_2$Holder::c2bIndex = nullptr;

void ISO_8859_2$Holder::init$() {
}

void clinit$ISO_8859_2$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ISO_8859_2$Holder::b2cTable, $cstr({0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0x104, 0x2D8, 0x141, 0xA4, 0x13D, 0x15A, 0xA7, 0xA8, 0x160, 0x15E, 0x164, 0x179, 0xAD, 0x17D, 0x17B, 0xB0, 0x105, 0x2DB, 0x142, 0xB4, 0x13E, 0x15B, 0x2C7, 0xB8, 0x161, 0x15F, 0x165, 0x17A, 0x2DD, 0x17E, 0x17C, 0x154, 0xC1, 0xC2, 0x102, 0xC4, 0x139, 0x106, 0xC7, 0x10C, 0xC9, 0x118, 0xCB, 0x11A, 0xCD, 0xCE, 0x10E, 0x110, 0x143, 0x147, 0xD3, 0xD4, 0x150, 0xD6, 0xD7, 0x158, 0x16E, 0xDA, 0x170, 0xDC, 0xDD, 0x162, 0xDF, 0x155, 0xE1, 0xE2, 0x103, 0xE4, 0x13A, 0x107, 0xE7, 0x10D, 0xE9, 0x119, 0xEB, 0x11B, 0xED, 0xEE, 0x10F, 0x111, 0x144, 0x148, 0xF3, 0xF4, 0x151, 0xF6, 0xF7, 0x159, 0x16F, 0xFA, 0x171, 0xFC, 0xFD, 0x163, 0x2D9, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(ISO_8859_2$Holder::b2c, $nc(ISO_8859_2$Holder::b2cTable)->toCharArray());
	$assignStatic(ISO_8859_2$Holder::c2b, $new($chars, 768));
	$assignStatic(ISO_8859_2$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, ISO_8859_2$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, ISO_8859_2$Holder::c2b, ISO_8859_2$Holder::c2bIndex);
	}
}

ISO_8859_2$Holder::ISO_8859_2$Holder() {
}

$Class* ISO_8859_2$Holder::load$($String* name, bool initialize) {
	$loadClass(ISO_8859_2$Holder, name, initialize, &_ISO_8859_2$Holder_ClassInfo_, clinit$ISO_8859_2$Holder, allocate$ISO_8859_2$Holder);
	return class$;
}

$Class* ISO_8859_2$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun