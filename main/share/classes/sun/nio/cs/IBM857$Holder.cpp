#include <sun/nio/cs/IBM857$Holder.h>

#include <sun/nio/cs/IBM857.h>
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

$FieldInfo _IBM857$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM857$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM857$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM857$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM857$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM857$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM857$Holder::*)()>(&IBM857$Holder::init$))},
	{}
};

$InnerClassInfo _IBM857$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM857$Holder", "sun.nio.cs.IBM857", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM857$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.IBM857$Holder",
	"java.lang.Object",
	nullptr,
	_IBM857$Holder_FieldInfo_,
	_IBM857$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM857$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM857"
};

$Object* allocate$IBM857$Holder($Class* clazz) {
	return $of($alloc(IBM857$Holder));
}

$String* IBM857$Holder::b2cTable = nullptr;
$chars* IBM857$Holder::b2c = nullptr;
$chars* IBM857$Holder::c2b = nullptr;
$chars* IBM857$Holder::c2bIndex = nullptr;

void IBM857$Holder::init$() {
}

void clinit$IBM857$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM857$Holder::b2cTable, $cstr({0xC7, 0xFC, 0xE9, 0xE2, 0xE4, 0xE0, 0xE5, 0xE7, 0xEA, 0xEB, 0xE8, 0xEF, 0xEE, 0x131, 0xC4, 0xC5, 0xC9, 0xE6, 0xC6, 0xF4, 0xF6, 0xF2, 0xFB, 0xF9, 0x130, 0xD6, 0xDC, 0xF8, 0xA3, 0xD8, 0x15E, 0x15F, 0xE1, 0xED, 0xF3, 0xFA, 0xF1, 0xD1, 0x11E, 0x11F, 0xBF, 0xAE, 0xAC, 0xBD, 0xBC, 0xA1, 0xAB, 0xBB, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0xC1, 0xC2, 0xC0, 0xA9, 0x2563, 0x2551, 0x2557, 0x255D, 0xA2, 0xA5, 0x2510, 0x2514, 0x2534, 0x252C, 0x251C, 0x2500, 0x253C, 0xE3, 0xC3, 0x255A, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256C, 0xA4, 0xBA, 0xAA, 0xCA, 0xCB, 0xC8, 0xFFFD, 0xCD, 0xCE, 0xCF, 0x2518, 0x250C, 0x2588, 0x2584, 0xA6, 0xCC, 0x2580, 0xD3, 0xDF, 0xD4, 0xD2, 0xF5, 0xD5, 0xB5, 0xFFFD, 0xD7, 0xDA, 0xDB, 0xD9, 0xEC, 0xFF, 0xAF, 0xB4, 0xAD, 0xB1, 0xFFFD, 0xBE, 0xB6, 0xA7, 0xF7, 0xB8, 0xB0, 0xA8, 0xB7, 0xB9, 0xB3, 0xB2, 0x25A0, 0xA0, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM857$Holder::b2c, $nc(IBM857$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM857$Holder::c2b, $new($chars, 1024));
	$assignStatic(IBM857$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM857$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM857$Holder::c2b, IBM857$Holder::c2bIndex);
	}
}

IBM857$Holder::IBM857$Holder() {
}

$Class* IBM857$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM857$Holder, name, initialize, &_IBM857$Holder_ClassInfo_, clinit$IBM857$Holder, allocate$IBM857$Holder);
	return class$;
}

$Class* IBM857$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun