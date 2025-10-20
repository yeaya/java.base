#include <sun/nio/cs/ISO_8859_13$Holder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/cs/ISO_8859_13.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ISO_8859_13 = ::sun::nio::cs::ISO_8859_13;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _ISO_8859_13$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_13$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_13$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_13$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_13$Holder, c2bIndex)},
	{}
};

$MethodInfo _ISO_8859_13$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ISO_8859_13$Holder::*)()>(&ISO_8859_13$Holder::init$))},
	{}
};

$InnerClassInfo _ISO_8859_13$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ISO_8859_13$Holder", "sun.nio.cs.ISO_8859_13", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO_8859_13$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ISO_8859_13$Holder",
	"java.lang.Object",
	nullptr,
	_ISO_8859_13$Holder_FieldInfo_,
	_ISO_8859_13$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO_8859_13$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ISO_8859_13"
};

$Object* allocate$ISO_8859_13$Holder($Class* clazz) {
	return $of($alloc(ISO_8859_13$Holder));
}

$String* ISO_8859_13$Holder::b2cTable = nullptr;
$chars* ISO_8859_13$Holder::b2c = nullptr;
$chars* ISO_8859_13$Holder::c2b = nullptr;
$chars* ISO_8859_13$Holder::c2bIndex = nullptr;

void ISO_8859_13$Holder::init$() {
}

void clinit$ISO_8859_13$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ISO_8859_13$Holder::b2cTable, $cstr({0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0x201D, 0xA2, 0xA3, 0xA4, 0x201E, 0xA6, 0xA7, 0xD8, 0xA9, 0x156, 0xAB, 0xAC, 0xAD, 0xAE, 0xC6, 0xB0, 0xB1, 0xB2, 0xB3, 0x201C, 0xB5, 0xB6, 0xB7, 0xF8, 0xB9, 0x157, 0xBB, 0xBC, 0xBD, 0xBE, 0xE6, 0x104, 0x12E, 0x100, 0x106, 0xC4, 0xC5, 0x118, 0x112, 0x10C, 0xC9, 0x179, 0x116, 0x122, 0x136, 0x12A, 0x13B, 0x160, 0x143, 0x145, 0xD3, 0x14C, 0xD5, 0xD6, 0xD7, 0x172, 0x141, 0x15A, 0x16A, 0xDC, 0x17B, 0x17D, 0xDF, 0x105, 0x12F, 0x101, 0x107, 0xE4, 0xE5, 0x119, 0x113, 0x10D, 0xE9, 0x17A, 0x117, 0x123, 0x137, 0x12B, 0x13C, 0x161, 0x144, 0x146, 0xF3, 0x14D, 0xF5, 0xF6, 0xF7, 0x173, 0x142, 0x15B, 0x16B, 0xFC, 0x17C, 0x17E, 0x2019, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(ISO_8859_13$Holder::b2c, $nc(ISO_8859_13$Holder::b2cTable)->toCharArray());
	$assignStatic(ISO_8859_13$Holder::c2b, $new($chars, 768));
	$assignStatic(ISO_8859_13$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, ISO_8859_13$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, ISO_8859_13$Holder::c2b, ISO_8859_13$Holder::c2bIndex);
	}
}

ISO_8859_13$Holder::ISO_8859_13$Holder() {
}

$Class* ISO_8859_13$Holder::load$($String* name, bool initialize) {
	$loadClass(ISO_8859_13$Holder, name, initialize, &_ISO_8859_13$Holder_ClassInfo_, clinit$ISO_8859_13$Holder, allocate$ISO_8859_13$Holder);
	return class$;
}

$Class* ISO_8859_13$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun