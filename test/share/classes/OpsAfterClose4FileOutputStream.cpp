#include <OpsAfterClose4FileOutputStream.h>

#include <OpsAfterClose4FileOutputStream$1.h>
#include <OpsAfterClose4FileOutputStream$2.h>
#include <OpsAfterClose4FileOutputStream$3.h>
#include <OpsAfterClose4FileOutputStream$4.h>
#include <OpsAfterClose4FileOutputStream$5.h>
#include <OpsAfterClose4FileOutputStream$6.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef WRITE_BUF
#undef GET_FD
#undef CLOSE
#undef WRITE_BUF_OFF
#undef GET_CHANNEL
#undef WRITE

using $OpsAfterClose4FileOutputStream$1 = ::OpsAfterClose4FileOutputStream$1;
using $OpsAfterClose4FileOutputStream$2 = ::OpsAfterClose4FileOutputStream$2;
using $OpsAfterClose4FileOutputStream$3 = ::OpsAfterClose4FileOutputStream$3;
using $OpsAfterClose4FileOutputStream$4 = ::OpsAfterClose4FileOutputStream$4;
using $OpsAfterClose4FileOutputStream$5 = ::OpsAfterClose4FileOutputStream$5;
using $OpsAfterClose4FileOutputStream$6 = ::OpsAfterClose4FileOutputStream$6;
using $OpsAfterClose4FileOutputStreamArray = $Array<OpsAfterClose4FileOutputStream>;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _OpsAfterClose4FileOutputStream_FieldInfo_[] = {
	{"WRITE", "LOpsAfterClose4FileOutputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileOutputStream, WRITE)},
	{"WRITE_BUF", "LOpsAfterClose4FileOutputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileOutputStream, WRITE_BUF)},
	{"WRITE_BUF_OFF", "LOpsAfterClose4FileOutputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileOutputStream, WRITE_BUF_OFF)},
	{"GET_CHANNEL", "LOpsAfterClose4FileOutputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileOutputStream, GET_CHANNEL)},
	{"GET_FD", "LOpsAfterClose4FileOutputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileOutputStream, GET_FD)},
	{"CLOSE", "LOpsAfterClose4FileOutputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileOutputStream, CLOSE)},
	{"$VALUES", "[LOpsAfterClose4FileOutputStream;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(OpsAfterClose4FileOutputStream, $VALUES)},
	{}
};

$MethodInfo _OpsAfterClose4FileOutputStream_MethodInfo_[] = {
	{"$values", "()[LOpsAfterClose4FileOutputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$OpsAfterClose4FileOutputStreamArray*(*)()>(&OpsAfterClose4FileOutputStream::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(OpsAfterClose4FileOutputStream::*)($String*,int32_t)>(&OpsAfterClose4FileOutputStream::init$))},
	{"check", "(Ljava/io/FileOutputStream;)Z", nullptr, $ABSTRACT},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OpsAfterClose4FileOutputStream::main)), "java.lang.Exception"},
	{"testFileOutputStream", "(Ljava/io/FileOutputStream;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($FileOutputStream*)>(&OpsAfterClose4FileOutputStream::testFileOutputStream)), "java.lang.Exception"},
	{"valueOf", "(Ljava/lang/String;)LOpsAfterClose4FileOutputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OpsAfterClose4FileOutputStream*(*)($String*)>(&OpsAfterClose4FileOutputStream::valueOf))},
	{"values", "()[LOpsAfterClose4FileOutputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OpsAfterClose4FileOutputStreamArray*(*)()>(&OpsAfterClose4FileOutputStream::values))},
	{}
};

$InnerClassInfo _OpsAfterClose4FileOutputStream_InnerClassesInfo_[] = {
	{"OpsAfterClose4FileOutputStream$6", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4FileOutputStream$5", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4FileOutputStream$4", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4FileOutputStream$3", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4FileOutputStream$2", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4FileOutputStream$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4FileOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT | $ENUM,
	"OpsAfterClose4FileOutputStream",
	"java.lang.Enum",
	nullptr,
	_OpsAfterClose4FileOutputStream_FieldInfo_,
	_OpsAfterClose4FileOutputStream_MethodInfo_,
	"Ljava/lang/Enum<LOpsAfterClose4FileOutputStream;>;",
	nullptr,
	_OpsAfterClose4FileOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"OpsAfterClose4FileOutputStream$6,OpsAfterClose4FileOutputStream$5,OpsAfterClose4FileOutputStream$4,OpsAfterClose4FileOutputStream$3,OpsAfterClose4FileOutputStream$2,OpsAfterClose4FileOutputStream$1"
};

$Object* allocate$OpsAfterClose4FileOutputStream($Class* clazz) {
	return $of($alloc(OpsAfterClose4FileOutputStream));
}

OpsAfterClose4FileOutputStream* OpsAfterClose4FileOutputStream::WRITE = nullptr;
OpsAfterClose4FileOutputStream* OpsAfterClose4FileOutputStream::WRITE_BUF = nullptr;
OpsAfterClose4FileOutputStream* OpsAfterClose4FileOutputStream::WRITE_BUF_OFF = nullptr;
OpsAfterClose4FileOutputStream* OpsAfterClose4FileOutputStream::GET_CHANNEL = nullptr;
OpsAfterClose4FileOutputStream* OpsAfterClose4FileOutputStream::GET_FD = nullptr;
OpsAfterClose4FileOutputStream* OpsAfterClose4FileOutputStream::CLOSE = nullptr;
$OpsAfterClose4FileOutputStreamArray* OpsAfterClose4FileOutputStream::$VALUES = nullptr;

$OpsAfterClose4FileOutputStreamArray* OpsAfterClose4FileOutputStream::$values() {
	$init(OpsAfterClose4FileOutputStream);
	return $new($OpsAfterClose4FileOutputStreamArray, {
		OpsAfterClose4FileOutputStream::WRITE,
		OpsAfterClose4FileOutputStream::WRITE_BUF,
		OpsAfterClose4FileOutputStream::WRITE_BUF_OFF,
		OpsAfterClose4FileOutputStream::GET_CHANNEL,
		OpsAfterClose4FileOutputStream::GET_FD,
		OpsAfterClose4FileOutputStream::CLOSE
	});
}

$OpsAfterClose4FileOutputStreamArray* OpsAfterClose4FileOutputStream::values() {
	$init(OpsAfterClose4FileOutputStream);
	return $cast($OpsAfterClose4FileOutputStreamArray, OpsAfterClose4FileOutputStream::$VALUES->clone());
}

OpsAfterClose4FileOutputStream* OpsAfterClose4FileOutputStream::valueOf($String* name) {
	$init(OpsAfterClose4FileOutputStream);
	return $cast(OpsAfterClose4FileOutputStream, $Enum::valueOf(OpsAfterClose4FileOutputStream::class$, name));
}

void OpsAfterClose4FileOutputStream::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void OpsAfterClose4FileOutputStream::main($StringArray* args) {
	$init(OpsAfterClose4FileOutputStream);
	bool failed = false;
	$var($File, f, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "f.txt"_s));
	f->createNewFile();
	f->deleteOnExit();
	$var($FileOutputStream, fis, $new($FileOutputStream, f));
	if (testFileOutputStream(fis)) {
		$throwNew($Exception, "Test failed for some of the operation{s} on FileOutputStream, check the messages"_s);
	}
}

bool OpsAfterClose4FileOutputStream::testFileOutputStream($FileOutputStream* r) {
	$init(OpsAfterClose4FileOutputStream);
	$nc(r)->close();
	bool failed = false;
	bool result = false;
	$init($System);
	$nc($System::out)->println($$str({"Testing File:"_s, r}));
	{
		$var($OpsAfterClose4FileOutputStreamArray, arr$, OpsAfterClose4FileOutputStream::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			OpsAfterClose4FileOutputStream* op = arr$->get(i$);
			{
				result = $nc(op)->check(r);
				if (!result) {
					failed = true;
				}
				$nc($System::out)->println($$str({op, ":"_s, $$str(result)}));
			}
		}
	}
	if (failed) {
		$nc($System::out)->println($$str({"Test failed for the failed operation{s} above for the FileOutputStream:"_s, r}));
	}
	return failed;
}

void clinit$OpsAfterClose4FileOutputStream($Class* class$) {
	$assignStatic(OpsAfterClose4FileOutputStream::WRITE, $new($OpsAfterClose4FileOutputStream$1, "WRITE"_s, 0));
	$assignStatic(OpsAfterClose4FileOutputStream::WRITE_BUF, $new($OpsAfterClose4FileOutputStream$2, "WRITE_BUF"_s, 1));
	$assignStatic(OpsAfterClose4FileOutputStream::WRITE_BUF_OFF, $new($OpsAfterClose4FileOutputStream$3, "WRITE_BUF_OFF"_s, 2));
	$assignStatic(OpsAfterClose4FileOutputStream::GET_CHANNEL, $new($OpsAfterClose4FileOutputStream$4, "GET_CHANNEL"_s, 3));
	$assignStatic(OpsAfterClose4FileOutputStream::GET_FD, $new($OpsAfterClose4FileOutputStream$5, "GET_FD"_s, 4));
	$assignStatic(OpsAfterClose4FileOutputStream::CLOSE, $new($OpsAfterClose4FileOutputStream$6, "CLOSE"_s, 5));
	$assignStatic(OpsAfterClose4FileOutputStream::$VALUES, OpsAfterClose4FileOutputStream::$values());
}

OpsAfterClose4FileOutputStream::OpsAfterClose4FileOutputStream() {
}

$Class* OpsAfterClose4FileOutputStream::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4FileOutputStream, name, initialize, &_OpsAfterClose4FileOutputStream_ClassInfo_, clinit$OpsAfterClose4FileOutputStream, allocate$OpsAfterClose4FileOutputStream);
	return class$;
}

$Class* OpsAfterClose4FileOutputStream::class$ = nullptr;