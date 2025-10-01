#include <LastErrorString.h>

#include <LastErrorString$1.h>
#include <LastErrorString$10.h>
#include <LastErrorString$11.h>
#include <LastErrorString$12.h>
#include <LastErrorString$13.h>
#include <LastErrorString$14.h>
#include <LastErrorString$15.h>
#include <LastErrorString$16.h>
#include <LastErrorString$17.h>
#include <LastErrorString$18.h>
#include <LastErrorString$19.h>
#include <LastErrorString$2.h>
#include <LastErrorString$20.h>
#include <LastErrorString$3.h>
#include <LastErrorString$4.h>
#include <LastErrorString$5.h>
#include <LastErrorString$6.h>
#include <LastErrorString$7.h>
#include <LastErrorString$8.h>
#include <LastErrorString$9.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef UNWRITEABLE_DIR
#undef INVALID_PATH
#undef READABLE_FILE
#undef WRITEABLE_FILE
#undef UNREADABLE_FILE

using $LastErrorString$1 = ::LastErrorString$1;
using $LastErrorString$10 = ::LastErrorString$10;
using $LastErrorString$11 = ::LastErrorString$11;
using $LastErrorString$12 = ::LastErrorString$12;
using $LastErrorString$13 = ::LastErrorString$13;
using $LastErrorString$14 = ::LastErrorString$14;
using $LastErrorString$15 = ::LastErrorString$15;
using $LastErrorString$16 = ::LastErrorString$16;
using $LastErrorString$17 = ::LastErrorString$17;
using $LastErrorString$18 = ::LastErrorString$18;
using $LastErrorString$19 = ::LastErrorString$19;
using $LastErrorString$2 = ::LastErrorString$2;
using $LastErrorString$20 = ::LastErrorString$20;
using $LastErrorString$3 = ::LastErrorString$3;
using $LastErrorString$4 = ::LastErrorString$4;
using $LastErrorString$5 = ::LastErrorString$5;
using $LastErrorString$6 = ::LastErrorString$6;
using $LastErrorString$7 = ::LastErrorString$7;
using $LastErrorString$8 = ::LastErrorString$8;
using $LastErrorString$9 = ::LastErrorString$9;
using $LastErrorString$ClosedFISTest = ::LastErrorString$ClosedFISTest;
using $LastErrorString$ClosedFOSTest = ::LastErrorString$ClosedFOSTest;
using $LastErrorString$ClosedRAFTest = ::LastErrorString$ClosedRAFTest;
using $LastErrorString$ReadOnlyRAFTest = ::LastErrorString$ReadOnlyRAFTest;
using $LastErrorString$Test = ::LastErrorString$Test;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _LastErrorString_FieldInfo_[] = {
	{"UNWRITEABLE_DIR", "Ljava/lang/String;", nullptr, $STATIC, $staticField(LastErrorString, UNWRITEABLE_DIR)},
	{"UNREADABLE_FILE", "Ljava/lang/String;", nullptr, $STATIC, $staticField(LastErrorString, UNREADABLE_FILE)},
	{"READABLE_FILE", "Ljava/lang/String;", nullptr, $STATIC, $staticField(LastErrorString, READABLE_FILE)},
	{"WRITEABLE_FILE", "Ljava/lang/String;", nullptr, $STATIC, $staticField(LastErrorString, WRITEABLE_FILE)},
	{"INVALID_PATH", "Ljava/lang/String;", nullptr, $STATIC, $staticField(LastErrorString, INVALID_PATH)},
	{}
};

$MethodInfo _LastErrorString_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LastErrorString::*)()>(&LastErrorString::init$))},
	{"go", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&LastErrorString::go)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LastErrorString::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _LastErrorString_InnerClassesInfo_[] = {
	{"LastErrorString$ReadOnlyRAFTest", "LastErrorString", "ReadOnlyRAFTest", $STATIC | $ABSTRACT},
	{"LastErrorString$ClosedRAFTest", "LastErrorString", "ClosedRAFTest", $STATIC | $ABSTRACT},
	{"LastErrorString$ClosedFOSTest", "LastErrorString", "ClosedFOSTest", $STATIC | $ABSTRACT},
	{"LastErrorString$ClosedFISTest", "LastErrorString", "ClosedFISTest", $STATIC | $ABSTRACT},
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{"LastErrorString$20", nullptr, nullptr, 0},
	{"LastErrorString$19", nullptr, nullptr, 0},
	{"LastErrorString$18", nullptr, nullptr, 0},
	{"LastErrorString$17", nullptr, nullptr, 0},
	{"LastErrorString$16", nullptr, nullptr, 0},
	{"LastErrorString$15", nullptr, nullptr, 0},
	{"LastErrorString$14", nullptr, nullptr, 0},
	{"LastErrorString$13", nullptr, nullptr, 0},
	{"LastErrorString$12", nullptr, nullptr, 0},
	{"LastErrorString$11", nullptr, nullptr, 0},
	{"LastErrorString$10", nullptr, nullptr, 0},
	{"LastErrorString$9", nullptr, nullptr, 0},
	{"LastErrorString$8", nullptr, nullptr, 0},
	{"LastErrorString$7", nullptr, nullptr, 0},
	{"LastErrorString$6", nullptr, nullptr, 0},
	{"LastErrorString$5", nullptr, nullptr, 0},
	{"LastErrorString$4", nullptr, nullptr, 0},
	{"LastErrorString$3", nullptr, nullptr, 0},
	{"LastErrorString$2", nullptr, nullptr, 0},
	{"LastErrorString$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LastErrorString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LastErrorString",
	"java.lang.Object",
	nullptr,
	_LastErrorString_FieldInfo_,
	_LastErrorString_MethodInfo_,
	nullptr,
	nullptr,
	_LastErrorString_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LastErrorString$ReadOnlyRAFTest,LastErrorString$ClosedRAFTest,LastErrorString$ClosedFOSTest,LastErrorString$ClosedFISTest,LastErrorString$Test,LastErrorString$20,LastErrorString$19,LastErrorString$18,LastErrorString$17,LastErrorString$16,LastErrorString$15,LastErrorString$14,LastErrorString$13,LastErrorString$12,LastErrorString$11,LastErrorString$10,LastErrorString$9,LastErrorString$8,LastErrorString$7,LastErrorString$6,LastErrorString$5,LastErrorString$4,LastErrorString$3,LastErrorString$2,LastErrorString$1"
};

$Object* allocate$LastErrorString($Class* clazz) {
	return $of($alloc(LastErrorString));
}

$String* LastErrorString::UNWRITEABLE_DIR = nullptr;
$String* LastErrorString::UNREADABLE_FILE = nullptr;
$String* LastErrorString::READABLE_FILE = nullptr;
$String* LastErrorString::WRITEABLE_FILE = nullptr;
$String* LastErrorString::INVALID_PATH = nullptr;

void LastErrorString::init$() {
}

void LastErrorString::go() {
	$init(LastErrorString);
	$$new($LastErrorString$1, "File.createNewFile"_s)->go();
	$$new($LastErrorString$2, "File.getCanonicalpath"_s)->go();
	$$new($LastErrorString$3, "FileInputStream(file)"_s)->go();
	$$new($LastErrorString$4, "FileInputStream(dir)"_s)->go();
	$$new($LastErrorString$5, "read()"_s)->go();
	$$new($LastErrorString$6, "read(byte[])"_s)->go();
	$$new($LastErrorString$7, "skip"_s)->go();
	$$new($LastErrorString$8, "available"_s)->go();
	$$new($LastErrorString$9, "FileOutputStream"_s)->go();
	$$new($LastErrorString$10, "write()"_s)->go();
	$$new($LastErrorString$11, "write(byte[])"_s)->go();
	$$new($LastErrorString$12, "RandomAccessFile"_s)->go();
	$$new($LastErrorString$13, "getFilePointer"_s)->go();
	$$new($LastErrorString$14, "length"_s)->go();
	$$new($LastErrorString$15, "seek"_s)->go();
	$$new($LastErrorString$16, "setLength"_s)->go();
	$$new($LastErrorString$17, "readShort"_s)->go();
	$$new($LastErrorString$18, "readInt"_s)->go();
	$$new($LastErrorString$19, "writeShort"_s)->go();
	$$new($LastErrorString$20, "getFilePointer"_s)->go();
}

void LastErrorString::main($StringArray* args) {
	$init(LastErrorString);
	go();
}

void clinit$LastErrorString($Class* class$) {
	{
		$init($File);
		if ($File::separatorChar == u'/') {
			$assignStatic(LastErrorString::UNWRITEABLE_DIR, "/etc/dfs"_s);
			$assignStatic(LastErrorString::UNREADABLE_FILE, "/etc/shadow"_s);
		} else {
			if ($File::separatorChar == u'\\') {
				$assignStatic(LastErrorString::UNREADABLE_FILE, "c:/pagefile.sys"_s);
				$assignStatic(LastErrorString::UNWRITEABLE_DIR, "z:/fooBAR/baz/GORP"_s);
			} else {
				$throwNew($RuntimeException, "What kind of system is this?"_s);
			}
		}
		$var($File, d, $new($File, $($System::getProperty("test.src"_s, "."_s))));
		$assignStatic(LastErrorString::READABLE_FILE, $$new($File, d, "LastErrorString.java"_s)->getPath());
		$assignStatic(LastErrorString::WRITEABLE_FILE, "x.LastErrorString"_s);
		$var($String, s, "foo/"_s);
		for (;;) {
			$assign(s, $str({s, s}));
			if ($nc(s)->length() > 8192) {
				break;
			}
		}
		$plusAssign(s, "bar"_s);
		$assignStatic(LastErrorString::INVALID_PATH, s);
	}
}

LastErrorString::LastErrorString() {
}

$Class* LastErrorString::load$($String* name, bool initialize) {
	$loadClass(LastErrorString, name, initialize, &_LastErrorString_ClassInfo_, clinit$LastErrorString, allocate$LastErrorString);
	return class$;
}

$Class* LastErrorString::class$ = nullptr;