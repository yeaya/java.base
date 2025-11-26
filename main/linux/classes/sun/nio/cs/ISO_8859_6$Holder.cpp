#include <sun/nio/cs/ISO_8859_6$Holder.h>

#include <sun/nio/cs/ISO_8859_6.h>
#include <sun/nio/cs/SingleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ISO_8859_6 = ::sun::nio::cs::ISO_8859_6;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _ISO_8859_6$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_6$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_6$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_6$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_6$Holder, c2bIndex)},
	{}
};

$MethodInfo _ISO_8859_6$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ISO_8859_6$Holder::*)()>(&ISO_8859_6$Holder::init$))},
	{}
};

$InnerClassInfo _ISO_8859_6$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ISO_8859_6$Holder", "sun.nio.cs.ISO_8859_6", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO_8859_6$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ISO_8859_6$Holder",
	"java.lang.Object",
	nullptr,
	_ISO_8859_6$Holder_FieldInfo_,
	_ISO_8859_6$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO_8859_6$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ISO_8859_6"
};

$Object* allocate$ISO_8859_6$Holder($Class* clazz) {
	return $of($alloc(ISO_8859_6$Holder));
}

$String* ISO_8859_6$Holder::b2cTable = nullptr;
$chars* ISO_8859_6$Holder::b2c = nullptr;
$chars* ISO_8859_6$Holder::c2b = nullptr;
$chars* ISO_8859_6$Holder::c2bIndex = nullptr;

void ISO_8859_6$Holder::init$() {
}

void clinit$ISO_8859_6$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ISO_8859_6$Holder::b2cTable, $cstr({0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0xFFFD, 0xFFFD, 0xFFFD, 0xA4, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x60C, 0xAD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x61B, 0xFFFD, 0xFFFD, 0xFFFD, 0x61F, 0xFFFD, 0x621, 0x622, 0x623, 0x624, 0x625, 0x626, 0x627, 0x628, 0x629, 0x62A, 0x62B, 0x62C, 0x62D, 0x62E, 0x62F, 0x630, 0x631, 0x632, 0x633, 0x634, 0x635, 0x636, 0x637, 0x638, 0x639, 0x63A, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x640, 0x641, 0x642, 0x643, 0x644, 0x645, 0x646, 0x647, 0x648, 0x649, 0x64A, 0x64B, 0x64C, 0x64D, 0x64E, 0x64F, 0x650, 0x651, 0x652, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(ISO_8859_6$Holder::b2c, $nc(ISO_8859_6$Holder::b2cTable)->toCharArray());
	$assignStatic(ISO_8859_6$Holder::c2b, $new($chars, 768));
	$assignStatic(ISO_8859_6$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, ISO_8859_6$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, ISO_8859_6$Holder::c2b, ISO_8859_6$Holder::c2bIndex);
	}
}

ISO_8859_6$Holder::ISO_8859_6$Holder() {
}

$Class* ISO_8859_6$Holder::load$($String* name, bool initialize) {
	$loadClass(ISO_8859_6$Holder, name, initialize, &_ISO_8859_6$Holder_ClassInfo_, clinit$ISO_8859_6$Holder, allocate$ISO_8859_6$Holder);
	return class$;
}

$Class* ISO_8859_6$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun