#include <sun/nio/cs/JIS_X_0201$Holder.h>

#include <sun/nio/cs/JIS_X_0201.h>
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

$FieldInfo _JIS_X_0201$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JIS_X_0201$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JIS_X_0201$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JIS_X_0201$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JIS_X_0201$Holder, c2bIndex)},
	{}
};

$MethodInfo _JIS_X_0201$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JIS_X_0201$Holder::*)()>(&JIS_X_0201$Holder::init$))},
	{}
};

$InnerClassInfo _JIS_X_0201$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.JIS_X_0201$Holder", "sun.nio.cs.JIS_X_0201", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JIS_X_0201$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.JIS_X_0201$Holder",
	"java.lang.Object",
	nullptr,
	_JIS_X_0201$Holder_FieldInfo_,
	_JIS_X_0201$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_JIS_X_0201$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.JIS_X_0201"
};

$Object* allocate$JIS_X_0201$Holder($Class* clazz) {
	return $of($alloc(JIS_X_0201$Holder));
}

$String* JIS_X_0201$Holder::b2cTable = nullptr;
$chars* JIS_X_0201$Holder::b2c = nullptr;
$chars* JIS_X_0201$Holder::c2b = nullptr;
$chars* JIS_X_0201$Holder::c2bIndex = nullptr;

void JIS_X_0201$Holder::init$() {
}

void clinit$JIS_X_0201$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JIS_X_0201$Holder::b2cTable, $cstr({0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFF61, 0xFF62, 0xFF63, 0xFF64, 0xFF65, 0xFF66, 0xFF67, 0xFF68, 0xFF69, 0xFF6A, 0xFF6B, 0xFF6C, 0xFF6D, 0xFF6E, 0xFF6F, 0xFF70, 0xFF71, 0xFF72, 0xFF73, 0xFF74, 0xFF75, 0xFF76, 0xFF77, 0xFF78, 0xFF79, 0xFF7A, 0xFF7B, 0xFF7C, 0xFF7D, 0xFF7E, 0xFF7F, 0xFF80, 0xFF81, 0xFF82, 0xFF83, 0xFF84, 0xFF85, 0xFF86, 0xFF87, 0xFF88, 0xFF89, 0xFF8A, 0xFF8B, 0xFF8C, 0xFF8D, 0xFF8E, 0xFF8F, 0xFF90, 0xFF91, 0xFF92, 0xFF93, 0xFF94, 0xFF95, 0xFF96, 0xFF97, 0xFF98, 0xFF99, 0xFF9A, 0xFF9B, 0xFF9C, 0xFF9D, 0xFF9E, 0xFF9F, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(JIS_X_0201$Holder::b2c, $nc(JIS_X_0201$Holder::b2cTable)->toCharArray());
	$assignStatic(JIS_X_0201$Holder::c2b, $new($chars, 768));
	$assignStatic(JIS_X_0201$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, JIS_X_0201$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(c2bNR, $new($chars, 4));
		c2bNR->set(0, (char16_t)126);
		c2bNR->set(1, (char16_t)8254);
		c2bNR->set(2, (char16_t)92);
		c2bNR->set(3, (char16_t)165);
		$SingleByte::initC2B(b2cMap, c2bNR, JIS_X_0201$Holder::c2b, JIS_X_0201$Holder::c2bIndex);
	}
}

JIS_X_0201$Holder::JIS_X_0201$Holder() {
}

$Class* JIS_X_0201$Holder::load$($String* name, bool initialize) {
	$loadClass(JIS_X_0201$Holder, name, initialize, &_JIS_X_0201$Holder_ClassInfo_, clinit$JIS_X_0201$Holder, allocate$JIS_X_0201$Holder);
	return class$;
}

$Class* JIS_X_0201$Holder::class$ = nullptr;

		} // cs
	} // nio
} // sun