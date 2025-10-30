#include <sun/nio/cs/ISO_8859_9$Holder.h>

#include <sun/nio/cs/ISO_8859_9.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ISO_8859_9 = ::sun::nio::cs::ISO_8859_9;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _ISO_8859_9$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_9$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_9$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_9$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_9$Holder, c2bIndex)},
	{}
};

$MethodInfo _ISO_8859_9$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ISO_8859_9$Holder::*)()>(&ISO_8859_9$Holder::init$))},
	{}
};

$InnerClassInfo _ISO_8859_9$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ISO_8859_9$Holder", "sun.nio.cs.ISO_8859_9", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO_8859_9$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ISO_8859_9$Holder",
	"java.lang.Object",
	nullptr,
	_ISO_8859_9$Holder_FieldInfo_,
	_ISO_8859_9$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO_8859_9$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ISO_8859_9"
};

$Object* allocate$ISO_8859_9$Holder($Class* clazz) {
	return $of($alloc(ISO_8859_9$Holder));
}

$String* ISO_8859_9$Holder::b2cTable = nullptr;
$chars* ISO_8859_9$Holder::b2c = nullptr;
$chars* ISO_8859_9$Holder::c2b = nullptr;
$chars* ISO_8859_9$Holder::c2bIndex = nullptr;

void ISO_8859_9$Holder::init$() {
}

void clinit$ISO_8859_9$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ISO_8859_9$Holder::b2cTable, $cstr({0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0x11E, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0x130, 0x15E, 0xDF, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF, 0x11F, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0x131, 0x15F, 0xFF, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(ISO_8859_9$Holder::b2c, $nc(ISO_8859_9$Holder::b2cTable)->toCharArray());
	$assignStatic(ISO_8859_9$Holder::c2b, $new($chars, 512));
	$assignStatic(ISO_8859_9$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, ISO_8859_9$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, ISO_8859_9$Holder::c2b, ISO_8859_9$Holder::c2bIndex);
	}
}

ISO_8859_9$Holder::ISO_8859_9$Holder() {
}

$Class* ISO_8859_9$Holder::load$($String* name, bool initialize) {
	$loadClass(ISO_8859_9$Holder, name, initialize, &_ISO_8859_9$Holder_ClassInfo_, clinit$ISO_8859_9$Holder, allocate$ISO_8859_9$Holder);
	return class$;
}

$Class* ISO_8859_9$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun