#include <OpsAfterClose4DataInputStream.h>

#include <OpsAfterClose4DataInputStream$1.h>
#include <OpsAfterClose4DataInputStream$10.h>
#include <OpsAfterClose4DataInputStream$11.h>
#include <OpsAfterClose4DataInputStream$12.h>
#include <OpsAfterClose4DataInputStream$13.h>
#include <OpsAfterClose4DataInputStream$14.h>
#include <OpsAfterClose4DataInputStream$15.h>
#include <OpsAfterClose4DataInputStream$16.h>
#include <OpsAfterClose4DataInputStream$17.h>
#include <OpsAfterClose4DataInputStream$18.h>
#include <OpsAfterClose4DataInputStream$19.h>
#include <OpsAfterClose4DataInputStream$2.h>
#include <OpsAfterClose4DataInputStream$20.h>
#include <OpsAfterClose4DataInputStream$21.h>
#include <OpsAfterClose4DataInputStream$22.h>
#include <OpsAfterClose4DataInputStream$3.h>
#include <OpsAfterClose4DataInputStream$4.h>
#include <OpsAfterClose4DataInputStream$5.h>
#include <OpsAfterClose4DataInputStream$6.h>
#include <OpsAfterClose4DataInputStream$7.h>
#include <OpsAfterClose4DataInputStream$8.h>
#include <OpsAfterClose4DataInputStream$9.h>
#include <java/io/DataInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef AVAILABLE
#undef CLOSE
#undef MARK
#undef MARK_SUPPORTED
#undef READ
#undef READ_BUF
#undef READ_BUF_OFF
#undef READ_BYTE
#undef READ_CHAR
#undef READ_DOUBLE
#undef READ_FLOAT
#undef READ_FULLY
#undef READ_FULLY_BUF
#undef READ_INT
#undef READ_LONG
#undef READ_SHORT
#undef READ_UTF
#undef RESET
#undef SKIP
#undef SKIP_BYTES

using $OpsAfterClose4DataInputStream$1 = ::OpsAfterClose4DataInputStream$1;
using $OpsAfterClose4DataInputStream$10 = ::OpsAfterClose4DataInputStream$10;
using $OpsAfterClose4DataInputStream$11 = ::OpsAfterClose4DataInputStream$11;
using $OpsAfterClose4DataInputStream$12 = ::OpsAfterClose4DataInputStream$12;
using $OpsAfterClose4DataInputStream$13 = ::OpsAfterClose4DataInputStream$13;
using $OpsAfterClose4DataInputStream$14 = ::OpsAfterClose4DataInputStream$14;
using $OpsAfterClose4DataInputStream$15 = ::OpsAfterClose4DataInputStream$15;
using $OpsAfterClose4DataInputStream$16 = ::OpsAfterClose4DataInputStream$16;
using $OpsAfterClose4DataInputStream$17 = ::OpsAfterClose4DataInputStream$17;
using $OpsAfterClose4DataInputStream$18 = ::OpsAfterClose4DataInputStream$18;
using $OpsAfterClose4DataInputStream$19 = ::OpsAfterClose4DataInputStream$19;
using $OpsAfterClose4DataInputStream$2 = ::OpsAfterClose4DataInputStream$2;
using $OpsAfterClose4DataInputStream$20 = ::OpsAfterClose4DataInputStream$20;
using $OpsAfterClose4DataInputStream$21 = ::OpsAfterClose4DataInputStream$21;
using $OpsAfterClose4DataInputStream$22 = ::OpsAfterClose4DataInputStream$22;
using $OpsAfterClose4DataInputStream$3 = ::OpsAfterClose4DataInputStream$3;
using $OpsAfterClose4DataInputStream$4 = ::OpsAfterClose4DataInputStream$4;
using $OpsAfterClose4DataInputStream$5 = ::OpsAfterClose4DataInputStream$5;
using $OpsAfterClose4DataInputStream$6 = ::OpsAfterClose4DataInputStream$6;
using $OpsAfterClose4DataInputStream$7 = ::OpsAfterClose4DataInputStream$7;
using $OpsAfterClose4DataInputStream$8 = ::OpsAfterClose4DataInputStream$8;
using $OpsAfterClose4DataInputStream$9 = ::OpsAfterClose4DataInputStream$9;
using $OpsAfterClose4DataInputStreamArray = $Array<OpsAfterClose4DataInputStream>;
using $DataInputStream = ::java::io::DataInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _OpsAfterClose4DataInputStream_FieldInfo_[] = {
	{"READ", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ)},
	{"READ_BUF", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_BUF)},
	{"READ_BUF_OFF", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_BUF_OFF)},
	{"AVAILABLE", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, AVAILABLE)},
	{"SKIP", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, SKIP)},
	{"MARK", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, MARK)},
	{"RESET", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, RESET)},
	{"MARK_SUPPORTED", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, MARK_SUPPORTED)},
	{"CLOSE", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, CLOSE)},
	{"READ_BYTE", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_BYTE)},
	{"READ_CHAR", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_CHAR)},
	{"READ_DOUBLE", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_DOUBLE)},
	{"READ_FLOAT", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_FLOAT)},
	{"READ_INT", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_INT)},
	{"READ_LONG", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_LONG)},
	{"READ_SHORT", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_SHORT)},
	{"READ_UnsignedByte", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_UnsignedByte)},
	{"READ_UnsignedShort", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_UnsignedShort)},
	{"READ_UTF", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_UTF)},
	{"SKIP_BYTES", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, SKIP_BYTES)},
	{"READ_FULLY", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_FULLY)},
	{"READ_FULLY_BUF", "LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4DataInputStream, READ_FULLY_BUF)},
	{"$VALUES", "[LOpsAfterClose4DataInputStream;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(OpsAfterClose4DataInputStream, $VALUES)},
	{}
};

$MethodInfo _OpsAfterClose4DataInputStream_MethodInfo_[] = {
	{"$values", "()[LOpsAfterClose4DataInputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$OpsAfterClose4DataInputStreamArray*(*)()>(&OpsAfterClose4DataInputStream::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(OpsAfterClose4DataInputStream::*)($String*,int32_t)>(&OpsAfterClose4DataInputStream::init$))},
	{"check", "(Ljava/io/DataInputStream;)Z", nullptr, $ABSTRACT},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OpsAfterClose4DataInputStream::main)), "java.lang.Exception"},
	{"testDataInputStream", "(Ljava/io/DataInputStream;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($DataInputStream*)>(&OpsAfterClose4DataInputStream::testDataInputStream)), "java.lang.Exception"},
	{"valueOf", "(Ljava/lang/String;)LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OpsAfterClose4DataInputStream*(*)($String*)>(&OpsAfterClose4DataInputStream::valueOf))},
	{"values", "()[LOpsAfterClose4DataInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OpsAfterClose4DataInputStreamArray*(*)()>(&OpsAfterClose4DataInputStream::values))},
	{}
};

$InnerClassInfo _OpsAfterClose4DataInputStream_InnerClassesInfo_[] = {
	{"OpsAfterClose4DataInputStream$22", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$21", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$20", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$19", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$18", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$17", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$16", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$15", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$14", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$13", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$12", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$11", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$10", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$9", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$8", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$7", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$6", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$5", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$4", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$3", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$2", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4DataInputStream$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4DataInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT | $ENUM,
	"OpsAfterClose4DataInputStream",
	"java.lang.Enum",
	nullptr,
	_OpsAfterClose4DataInputStream_FieldInfo_,
	_OpsAfterClose4DataInputStream_MethodInfo_,
	"Ljava/lang/Enum<LOpsAfterClose4DataInputStream;>;",
	nullptr,
	_OpsAfterClose4DataInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"OpsAfterClose4DataInputStream$22,OpsAfterClose4DataInputStream$21,OpsAfterClose4DataInputStream$20,OpsAfterClose4DataInputStream$19,OpsAfterClose4DataInputStream$18,OpsAfterClose4DataInputStream$17,OpsAfterClose4DataInputStream$16,OpsAfterClose4DataInputStream$15,OpsAfterClose4DataInputStream$14,OpsAfterClose4DataInputStream$13,OpsAfterClose4DataInputStream$12,OpsAfterClose4DataInputStream$11,OpsAfterClose4DataInputStream$10,OpsAfterClose4DataInputStream$9,OpsAfterClose4DataInputStream$8,OpsAfterClose4DataInputStream$7,OpsAfterClose4DataInputStream$6,OpsAfterClose4DataInputStream$5,OpsAfterClose4DataInputStream$4,OpsAfterClose4DataInputStream$3,OpsAfterClose4DataInputStream$2,OpsAfterClose4DataInputStream$1"
};

$Object* allocate$OpsAfterClose4DataInputStream($Class* clazz) {
	return $of($alloc(OpsAfterClose4DataInputStream));
}

OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_BUF = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_BUF_OFF = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::AVAILABLE = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::SKIP = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::MARK = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::RESET = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::MARK_SUPPORTED = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::CLOSE = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_BYTE = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_CHAR = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_DOUBLE = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_FLOAT = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_INT = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_LONG = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_SHORT = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_UnsignedByte = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_UnsignedShort = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_UTF = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::SKIP_BYTES = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_FULLY = nullptr;
OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::READ_FULLY_BUF = nullptr;
$OpsAfterClose4DataInputStreamArray* OpsAfterClose4DataInputStream::$VALUES = nullptr;

$OpsAfterClose4DataInputStreamArray* OpsAfterClose4DataInputStream::$values() {
	$init(OpsAfterClose4DataInputStream);
	return $new($OpsAfterClose4DataInputStreamArray, {
		OpsAfterClose4DataInputStream::READ,
		OpsAfterClose4DataInputStream::READ_BUF,
		OpsAfterClose4DataInputStream::READ_BUF_OFF,
		OpsAfterClose4DataInputStream::AVAILABLE,
		OpsAfterClose4DataInputStream::SKIP,
		OpsAfterClose4DataInputStream::MARK,
		OpsAfterClose4DataInputStream::RESET,
		OpsAfterClose4DataInputStream::MARK_SUPPORTED,
		OpsAfterClose4DataInputStream::CLOSE,
		OpsAfterClose4DataInputStream::READ_BYTE,
		OpsAfterClose4DataInputStream::READ_CHAR,
		OpsAfterClose4DataInputStream::READ_DOUBLE,
		OpsAfterClose4DataInputStream::READ_FLOAT,
		OpsAfterClose4DataInputStream::READ_INT,
		OpsAfterClose4DataInputStream::READ_LONG,
		OpsAfterClose4DataInputStream::READ_SHORT,
		OpsAfterClose4DataInputStream::READ_UnsignedByte,
		OpsAfterClose4DataInputStream::READ_UnsignedShort,
		OpsAfterClose4DataInputStream::READ_UTF,
		OpsAfterClose4DataInputStream::SKIP_BYTES,
		OpsAfterClose4DataInputStream::READ_FULLY,
		OpsAfterClose4DataInputStream::READ_FULLY_BUF
	});
}

$OpsAfterClose4DataInputStreamArray* OpsAfterClose4DataInputStream::values() {
	$init(OpsAfterClose4DataInputStream);
	return $cast($OpsAfterClose4DataInputStreamArray, OpsAfterClose4DataInputStream::$VALUES->clone());
}

OpsAfterClose4DataInputStream* OpsAfterClose4DataInputStream::valueOf($String* name) {
	$init(OpsAfterClose4DataInputStream);
	return $cast(OpsAfterClose4DataInputStream, $Enum::valueOf(OpsAfterClose4DataInputStream::class$, name));
}

void OpsAfterClose4DataInputStream::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void OpsAfterClose4DataInputStream::main($StringArray* args) {
	$init(OpsAfterClose4DataInputStream);
	bool failed = false;
	$var($File, f, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "f.txt"_s));
	f->createNewFile();
	f->deleteOnExit();
	$var($FileInputStream, fis, $new($FileInputStream, f));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($DataInputStream, dis, $new($DataInputStream, $$new($FileInputStream, f)));
			{
				$var($Throwable, var$1, nullptr);
				try {
					if (testDataInputStream(dis)) {
						failed = true;
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					dis->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			fis->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool OpsAfterClose4DataInputStream::testDataInputStream($DataInputStream* is) {
	$init(OpsAfterClose4DataInputStream);
	$nc(is)->close();
	bool failed = false;
	bool result = false;
	$init($System);
	$nc($System::out)->println($$str({"Testing :"_s, is}));
	{
		$var($OpsAfterClose4DataInputStreamArray, arr$, OpsAfterClose4DataInputStream::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			OpsAfterClose4DataInputStream* op = arr$->get(i$);
			{
				result = $nc(op)->check(is);
				if (!result) {
					failed = true;
				}
				$nc($System::out)->println($$str({op, ":"_s, $$str(result)}));
			}
		}
	}
	if (failed) {
		$nc($System::out)->println($$str({"Test failed for the failed operation{s} above for :"_s, is}));
	}
	return failed;
}

void clinit$OpsAfterClose4DataInputStream($Class* class$) {
	$assignStatic(OpsAfterClose4DataInputStream::READ, $new($OpsAfterClose4DataInputStream$1, "READ"_s, 0));
	$assignStatic(OpsAfterClose4DataInputStream::READ_BUF, $new($OpsAfterClose4DataInputStream$2, "READ_BUF"_s, 1));
	$assignStatic(OpsAfterClose4DataInputStream::READ_BUF_OFF, $new($OpsAfterClose4DataInputStream$3, "READ_BUF_OFF"_s, 2));
	$assignStatic(OpsAfterClose4DataInputStream::AVAILABLE, $new($OpsAfterClose4DataInputStream$4, "AVAILABLE"_s, 3));
	$assignStatic(OpsAfterClose4DataInputStream::SKIP, $new($OpsAfterClose4DataInputStream$5, "SKIP"_s, 4));
	$assignStatic(OpsAfterClose4DataInputStream::MARK, $new($OpsAfterClose4DataInputStream$6, "MARK"_s, 5));
	$assignStatic(OpsAfterClose4DataInputStream::RESET, $new($OpsAfterClose4DataInputStream$7, "RESET"_s, 6));
	$assignStatic(OpsAfterClose4DataInputStream::MARK_SUPPORTED, $new($OpsAfterClose4DataInputStream$8, "MARK_SUPPORTED"_s, 7));
	$assignStatic(OpsAfterClose4DataInputStream::CLOSE, $new($OpsAfterClose4DataInputStream$9, "CLOSE"_s, 8));
	$assignStatic(OpsAfterClose4DataInputStream::READ_BYTE, $new($OpsAfterClose4DataInputStream$10, "READ_BYTE"_s, 9));
	$assignStatic(OpsAfterClose4DataInputStream::READ_CHAR, $new($OpsAfterClose4DataInputStream$11, "READ_CHAR"_s, 10));
	$assignStatic(OpsAfterClose4DataInputStream::READ_DOUBLE, $new($OpsAfterClose4DataInputStream$12, "READ_DOUBLE"_s, 11));
	$assignStatic(OpsAfterClose4DataInputStream::READ_FLOAT, $new($OpsAfterClose4DataInputStream$13, "READ_FLOAT"_s, 12));
	$assignStatic(OpsAfterClose4DataInputStream::READ_INT, $new($OpsAfterClose4DataInputStream$14, "READ_INT"_s, 13));
	$assignStatic(OpsAfterClose4DataInputStream::READ_LONG, $new($OpsAfterClose4DataInputStream$15, "READ_LONG"_s, 14));
	$assignStatic(OpsAfterClose4DataInputStream::READ_SHORT, $new($OpsAfterClose4DataInputStream$16, "READ_SHORT"_s, 15));
	$assignStatic(OpsAfterClose4DataInputStream::READ_UnsignedByte, $new($OpsAfterClose4DataInputStream$17, "READ_UnsignedByte"_s, 16));
	$assignStatic(OpsAfterClose4DataInputStream::READ_UnsignedShort, $new($OpsAfterClose4DataInputStream$18, "READ_UnsignedShort"_s, 17));
	$assignStatic(OpsAfterClose4DataInputStream::READ_UTF, $new($OpsAfterClose4DataInputStream$19, "READ_UTF"_s, 18));
	$assignStatic(OpsAfterClose4DataInputStream::SKIP_BYTES, $new($OpsAfterClose4DataInputStream$20, "SKIP_BYTES"_s, 19));
	$assignStatic(OpsAfterClose4DataInputStream::READ_FULLY, $new($OpsAfterClose4DataInputStream$21, "READ_FULLY"_s, 20));
	$assignStatic(OpsAfterClose4DataInputStream::READ_FULLY_BUF, $new($OpsAfterClose4DataInputStream$22, "READ_FULLY_BUF"_s, 21));
	$assignStatic(OpsAfterClose4DataInputStream::$VALUES, OpsAfterClose4DataInputStream::$values());
}

OpsAfterClose4DataInputStream::OpsAfterClose4DataInputStream() {
}

$Class* OpsAfterClose4DataInputStream::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4DataInputStream, name, initialize, &_OpsAfterClose4DataInputStream_ClassInfo_, clinit$OpsAfterClose4DataInputStream, allocate$OpsAfterClose4DataInputStream);
	return class$;
}

$Class* OpsAfterClose4DataInputStream::class$ = nullptr;