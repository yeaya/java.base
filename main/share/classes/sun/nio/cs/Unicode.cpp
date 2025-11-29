#include <sun/nio/cs/Unicode.h>

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/ISO_8859_1.h>
#include <sun/nio/cs/ISO_8859_15.h>
#include <sun/nio/cs/ISO_8859_16.h>
#include <sun/nio/cs/MS1252.h>
#include <sun/nio/cs/US_ASCII.h>
#include <sun/nio/cs/UTF_16.h>
#include <sun/nio/cs/UTF_16BE.h>
#include <sun/nio/cs/UTF_16LE.h>
#include <sun/nio/cs/UTF_16LE_BOM.h>
#include <sun/nio/cs/UTF_8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $ISO_8859_1 = ::sun::nio::cs::ISO_8859_1;
using $ISO_8859_15 = ::sun::nio::cs::ISO_8859_15;
using $ISO_8859_16 = ::sun::nio::cs::ISO_8859_16;
using $MS1252 = ::sun::nio::cs::MS1252;
using $US_ASCII = ::sun::nio::cs::US_ASCII;
using $UTF_16 = ::sun::nio::cs::UTF_16;
using $UTF_16BE = ::sun::nio::cs::UTF_16BE;
using $UTF_16LE = ::sun::nio::cs::UTF_16LE;
using $UTF_16LE_BOM = ::sun::nio::cs::UTF_16LE_BOM;
using $UTF_8 = ::sun::nio::cs::UTF_8;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _Unicode_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Unicode::*)($String*,$StringArray*)>(&Unicode::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _Unicode_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.nio.cs.Unicode",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_Unicode_MethodInfo_
};

$Object* allocate$Unicode($Class* clazz) {
	return $of($alloc(Unicode));
}

int32_t Unicode::hashCode() {
	 return this->$Charset::hashCode();
}

bool Unicode::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* Unicode::toString() {
	 return this->$Charset::toString();
}

$Object* Unicode::clone() {
	 return this->$Charset::clone();
}

void Unicode::finalize() {
	this->$Charset::finalize();
}

void Unicode::init$($String* name, $StringArray* aliases) {
	$Charset::init$(name, aliases);
}

bool Unicode::contains($Charset* cs) {
	$useLocalCurrentObjectStackCache();
	bool var$41 = ($instanceOf($US_ASCII, cs)) || ($instanceOf($ISO_8859_1, cs)) || ($instanceOf($ISO_8859_15, cs)) || ($instanceOf($ISO_8859_16, cs)) || ($instanceOf($MS1252, cs)) || ($instanceOf($UTF_8, cs)) || ($instanceOf($UTF_16, cs)) || ($instanceOf($UTF_16BE, cs)) || ($instanceOf($UTF_16LE, cs)) || ($instanceOf($UTF_16LE_BOM, cs)) || ($nc($($nc(cs)->name()))->equals("GBK"_s));
	bool var$40 = var$41 || ($nc($($nc(cs)->name()))->equals("GB18030"_s));
	bool var$39 = var$40 || ($nc($($nc(cs)->name()))->equals("ISO-8859-2"_s));
	bool var$38 = var$39 || ($nc($($nc(cs)->name()))->equals("ISO-8859-3"_s));
	bool var$37 = var$38 || ($nc($($nc(cs)->name()))->equals("ISO-8859-4"_s));
	bool var$36 = var$37 || ($nc($($nc(cs)->name()))->equals("ISO-8859-5"_s));
	bool var$35 = var$36 || ($nc($($nc(cs)->name()))->equals("ISO-8859-6"_s));
	bool var$34 = var$35 || ($nc($($nc(cs)->name()))->equals("ISO-8859-7"_s));
	bool var$33 = var$34 || ($nc($($nc(cs)->name()))->equals("ISO-8859-8"_s));
	bool var$32 = var$33 || ($nc($($nc(cs)->name()))->equals("ISO-8859-9"_s));
	bool var$31 = var$32 || ($nc($($nc(cs)->name()))->equals("ISO-8859-13"_s));
	bool var$30 = var$31 || ($nc($($nc(cs)->name()))->equals("JIS_X0201"_s));
	bool var$29 = var$30 || ($nc($($nc(cs)->name()))->equals("x-JIS0208"_s));
	bool var$28 = var$29 || ($nc($($nc(cs)->name()))->equals("JIS_X0212-1990"_s));
	bool var$27 = var$28 || ($nc($($nc(cs)->name()))->equals("GB2312"_s));
	bool var$26 = var$27 || ($nc($($nc(cs)->name()))->equals("EUC-KR"_s));
	bool var$25 = var$26 || ($nc($($nc(cs)->name()))->equals("x-EUC-TW"_s));
	bool var$24 = var$25 || ($nc($($nc(cs)->name()))->equals("EUC-JP"_s));
	bool var$23 = var$24 || ($nc($($nc(cs)->name()))->equals("x-euc-jp-linux"_s));
	bool var$22 = var$23 || ($nc($($nc(cs)->name()))->equals("KOI8-R"_s));
	bool var$21 = var$22 || ($nc($($nc(cs)->name()))->equals("TIS-620"_s));
	bool var$20 = var$21 || ($nc($($nc(cs)->name()))->equals("x-ISCII91"_s));
	bool var$19 = var$20 || ($nc($($nc(cs)->name()))->equals("windows-1251"_s));
	bool var$18 = var$19 || ($nc($($nc(cs)->name()))->equals("windows-1253"_s));
	bool var$17 = var$18 || ($nc($($nc(cs)->name()))->equals("windows-1254"_s));
	bool var$16 = var$17 || ($nc($($nc(cs)->name()))->equals("windows-1255"_s));
	bool var$15 = var$16 || ($nc($($nc(cs)->name()))->equals("windows-1256"_s));
	bool var$14 = var$15 || ($nc($($nc(cs)->name()))->equals("windows-1257"_s));
	bool var$13 = var$14 || ($nc($($nc(cs)->name()))->equals("windows-1258"_s));
	bool var$12 = var$13 || ($nc($($nc(cs)->name()))->equals("windows-932"_s));
	bool var$11 = var$12 || ($nc($($nc(cs)->name()))->equals("x-mswin-936"_s));
	bool var$10 = var$11 || ($nc($($nc(cs)->name()))->equals("x-windows-949"_s));
	bool var$9 = var$10 || ($nc($($nc(cs)->name()))->equals("x-windows-950"_s));
	bool var$8 = var$9 || ($nc($($nc(cs)->name()))->equals("windows-31j"_s));
	bool var$7 = var$8 || ($nc($($nc(cs)->name()))->equals("Big5"_s));
	bool var$6 = var$7 || ($nc($($nc(cs)->name()))->equals("Big5-HKSCS"_s));
	bool var$5 = var$6 || ($nc($($nc(cs)->name()))->equals("x-MS950-HKSCS"_s));
	bool var$4 = var$5 || ($nc($($nc(cs)->name()))->equals("ISO-2022-JP"_s));
	bool var$3 = var$4 || ($nc($($nc(cs)->name()))->equals("ISO-2022-KR"_s));
	bool var$2 = var$3 || ($nc($($nc(cs)->name()))->equals("x-ISO-2022-CN-CNS"_s));
	bool var$1 = var$2 || ($nc($($nc(cs)->name()))->equals("x-ISO-2022-CN-GB"_s));
	bool var$0 = var$1 || ($nc($($nc(cs)->name()))->equals("x-Johab"_s));
	return (var$0 || ($nc($($nc(cs)->name()))->equals("Shift_JIS"_s)));
}

Unicode::Unicode() {
}

$Class* Unicode::load$($String* name, bool initialize) {
	$loadClass(Unicode, name, initialize, &_Unicode_ClassInfo_, allocate$Unicode);
	return class$;
}

$Class* Unicode::class$ = nullptr;

		} // cs
	} // nio
} // sun