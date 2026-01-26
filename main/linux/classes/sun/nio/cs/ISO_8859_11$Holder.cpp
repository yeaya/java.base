#include <sun/nio/cs/ISO_8859_11$Holder.h>

#include <sun/nio/cs/ISO_8859_11.h>
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

$FieldInfo _ISO_8859_11$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_11$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_11$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_11$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_11$Holder, c2bIndex)},
	{}
};

$MethodInfo _ISO_8859_11$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ISO_8859_11$Holder, init$, void)},
	{}
};

$InnerClassInfo _ISO_8859_11$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ISO_8859_11$Holder", "sun.nio.cs.ISO_8859_11", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO_8859_11$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ISO_8859_11$Holder",
	"java.lang.Object",
	nullptr,
	_ISO_8859_11$Holder_FieldInfo_,
	_ISO_8859_11$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO_8859_11$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ISO_8859_11"
};

$Object* allocate$ISO_8859_11$Holder($Class* clazz) {
	return $of($alloc(ISO_8859_11$Holder));
}

$String* ISO_8859_11$Holder::b2cTable = nullptr;
$chars* ISO_8859_11$Holder::b2c = nullptr;
$chars* ISO_8859_11$Holder::c2b = nullptr;
$chars* ISO_8859_11$Holder::c2bIndex = nullptr;

void ISO_8859_11$Holder::init$() {
}

void clinit$ISO_8859_11$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ISO_8859_11$Holder::b2cTable, $cstr({0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0xE01, 0xE02, 0xE03, 0xE04, 0xE05, 0xE06, 0xE07, 0xE08, 0xE09, 0xE0A, 0xE0B, 0xE0C, 0xE0D, 0xE0E, 0xE0F, 0xE10, 0xE11, 0xE12, 0xE13, 0xE14, 0xE15, 0xE16, 0xE17, 0xE18, 0xE19, 0xE1A, 0xE1B, 0xE1C, 0xE1D, 0xE1E, 0xE1F, 0xE20, 0xE21, 0xE22, 0xE23, 0xE24, 0xE25, 0xE26, 0xE27, 0xE28, 0xE29, 0xE2A, 0xE2B, 0xE2C, 0xE2D, 0xE2E, 0xE2F, 0xE30, 0xE31, 0xE32, 0xE33, 0xE34, 0xE35, 0xE36, 0xE37, 0xE38, 0xE39, 0xE3A, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xE3F, 0xE40, 0xE41, 0xE42, 0xE43, 0xE44, 0xE45, 0xE46, 0xE47, 0xE48, 0xE49, 0xE4A, 0xE4B, 0xE4C, 0xE4D, 0xE4E, 0xE4F, 0xE50, 0xE51, 0xE52, 0xE53, 0xE54, 0xE55, 0xE56, 0xE57, 0xE58, 0xE59, 0xE5A, 0xE5B, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(ISO_8859_11$Holder::b2c, $nc(ISO_8859_11$Holder::b2cTable)->toCharArray());
	$assignStatic(ISO_8859_11$Holder::c2b, $new($chars, 768));
	$assignStatic(ISO_8859_11$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, ISO_8859_11$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, ISO_8859_11$Holder::c2b, ISO_8859_11$Holder::c2bIndex);
	}
}

ISO_8859_11$Holder::ISO_8859_11$Holder() {
}

$Class* ISO_8859_11$Holder::load$($String* name, bool initialize) {
	$loadClass(ISO_8859_11$Holder, name, initialize, &_ISO_8859_11$Holder_ClassInfo_, clinit$ISO_8859_11$Holder, allocate$ISO_8859_11$Holder);
	return class$;
}

$Class* ISO_8859_11$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun