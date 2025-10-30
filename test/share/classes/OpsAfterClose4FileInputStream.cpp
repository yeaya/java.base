#include <OpsAfterClose4FileInputStream.h>

#include <OpsAfterClose4FileInputStream$1.h>
#include <OpsAfterClose4FileInputStream$2.h>
#include <OpsAfterClose4FileInputStream$3.h>
#include <OpsAfterClose4FileInputStream$4.h>
#include <OpsAfterClose4FileInputStream$5.h>
#include <OpsAfterClose4FileInputStream$6.h>
#include <OpsAfterClose4FileInputStream$7.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLOSE
#undef GET_CHANNEL
#undef GET_FD
#undef READ
#undef READ_BUF
#undef READ_BUF_OFF
#undef SKIP

using $OpsAfterClose4FileInputStream$1 = ::OpsAfterClose4FileInputStream$1;
using $OpsAfterClose4FileInputStream$2 = ::OpsAfterClose4FileInputStream$2;
using $OpsAfterClose4FileInputStream$3 = ::OpsAfterClose4FileInputStream$3;
using $OpsAfterClose4FileInputStream$4 = ::OpsAfterClose4FileInputStream$4;
using $OpsAfterClose4FileInputStream$5 = ::OpsAfterClose4FileInputStream$5;
using $OpsAfterClose4FileInputStream$6 = ::OpsAfterClose4FileInputStream$6;
using $OpsAfterClose4FileInputStream$7 = ::OpsAfterClose4FileInputStream$7;
using $OpsAfterClose4FileInputStreamArray = $Array<OpsAfterClose4FileInputStream>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _OpsAfterClose4FileInputStream_FieldInfo_[] = {
	{"READ", "LOpsAfterClose4FileInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileInputStream, READ)},
	{"READ_BUF", "LOpsAfterClose4FileInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileInputStream, READ_BUF)},
	{"READ_BUF_OFF", "LOpsAfterClose4FileInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileInputStream, READ_BUF_OFF)},
	{"GET_CHANNEL", "LOpsAfterClose4FileInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileInputStream, GET_CHANNEL)},
	{"GET_FD", "LOpsAfterClose4FileInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileInputStream, GET_FD)},
	{"SKIP", "LOpsAfterClose4FileInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileInputStream, SKIP)},
	{"CLOSE", "LOpsAfterClose4FileInputStream;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4FileInputStream, CLOSE)},
	{"$VALUES", "[LOpsAfterClose4FileInputStream;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(OpsAfterClose4FileInputStream, $VALUES)},
	{}
};

$MethodInfo _OpsAfterClose4FileInputStream_MethodInfo_[] = {
	{"$values", "()[LOpsAfterClose4FileInputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$OpsAfterClose4FileInputStreamArray*(*)()>(&OpsAfterClose4FileInputStream::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(OpsAfterClose4FileInputStream::*)($String*,int32_t)>(&OpsAfterClose4FileInputStream::init$))},
	{"check", "(Ljava/io/FileInputStream;)Z", nullptr, $ABSTRACT},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OpsAfterClose4FileInputStream::main)), "java.lang.Exception"},
	{"testFileInputStream", "(Ljava/io/FileInputStream;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($FileInputStream*)>(&OpsAfterClose4FileInputStream::testFileInputStream)), "java.lang.Exception"},
	{"valueOf", "(Ljava/lang/String;)LOpsAfterClose4FileInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OpsAfterClose4FileInputStream*(*)($String*)>(&OpsAfterClose4FileInputStream::valueOf))},
	{"values", "()[LOpsAfterClose4FileInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OpsAfterClose4FileInputStreamArray*(*)()>(&OpsAfterClose4FileInputStream::values))},
	{}
};

$InnerClassInfo _OpsAfterClose4FileInputStream_InnerClassesInfo_[] = {
	{"OpsAfterClose4FileInputStream$7", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4FileInputStream$6", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4FileInputStream$5", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4FileInputStream$4", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4FileInputStream$3", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4FileInputStream$2", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4FileInputStream$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4FileInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT | $ENUM,
	"OpsAfterClose4FileInputStream",
	"java.lang.Enum",
	nullptr,
	_OpsAfterClose4FileInputStream_FieldInfo_,
	_OpsAfterClose4FileInputStream_MethodInfo_,
	"Ljava/lang/Enum<LOpsAfterClose4FileInputStream;>;",
	nullptr,
	_OpsAfterClose4FileInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"OpsAfterClose4FileInputStream$7,OpsAfterClose4FileInputStream$6,OpsAfterClose4FileInputStream$5,OpsAfterClose4FileInputStream$4,OpsAfterClose4FileInputStream$3,OpsAfterClose4FileInputStream$2,OpsAfterClose4FileInputStream$1"
};

$Object* allocate$OpsAfterClose4FileInputStream($Class* clazz) {
	return $of($alloc(OpsAfterClose4FileInputStream));
}

OpsAfterClose4FileInputStream* OpsAfterClose4FileInputStream::READ = nullptr;
OpsAfterClose4FileInputStream* OpsAfterClose4FileInputStream::READ_BUF = nullptr;
OpsAfterClose4FileInputStream* OpsAfterClose4FileInputStream::READ_BUF_OFF = nullptr;
OpsAfterClose4FileInputStream* OpsAfterClose4FileInputStream::GET_CHANNEL = nullptr;
OpsAfterClose4FileInputStream* OpsAfterClose4FileInputStream::GET_FD = nullptr;
OpsAfterClose4FileInputStream* OpsAfterClose4FileInputStream::SKIP = nullptr;
OpsAfterClose4FileInputStream* OpsAfterClose4FileInputStream::CLOSE = nullptr;
$OpsAfterClose4FileInputStreamArray* OpsAfterClose4FileInputStream::$VALUES = nullptr;

$OpsAfterClose4FileInputStreamArray* OpsAfterClose4FileInputStream::$values() {
	$init(OpsAfterClose4FileInputStream);
	return $new($OpsAfterClose4FileInputStreamArray, {
		OpsAfterClose4FileInputStream::READ,
		OpsAfterClose4FileInputStream::READ_BUF,
		OpsAfterClose4FileInputStream::READ_BUF_OFF,
		OpsAfterClose4FileInputStream::GET_CHANNEL,
		OpsAfterClose4FileInputStream::GET_FD,
		OpsAfterClose4FileInputStream::SKIP,
		OpsAfterClose4FileInputStream::CLOSE
	});
}

$OpsAfterClose4FileInputStreamArray* OpsAfterClose4FileInputStream::values() {
	$init(OpsAfterClose4FileInputStream);
	return $cast($OpsAfterClose4FileInputStreamArray, OpsAfterClose4FileInputStream::$VALUES->clone());
}

OpsAfterClose4FileInputStream* OpsAfterClose4FileInputStream::valueOf($String* name) {
	$init(OpsAfterClose4FileInputStream);
	return $cast(OpsAfterClose4FileInputStream, $Enum::valueOf(OpsAfterClose4FileInputStream::class$, name));
}

void OpsAfterClose4FileInputStream::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void OpsAfterClose4FileInputStream::main($StringArray* args) {
	$init(OpsAfterClose4FileInputStream);
	$useLocalCurrentObjectStackCache();
	bool failed = false;
	$var($File, f, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "f.txt"_s));
	f->createNewFile();
	f->deleteOnExit();
	$var($FileInputStream, fis, $new($FileInputStream, f));
	if (testFileInputStream(fis)) {
		$throwNew($Exception, "Test failed for some of the operation{s} on FileInputStream, check the messages"_s);
	}
}

bool OpsAfterClose4FileInputStream::testFileInputStream($FileInputStream* r) {
	$init(OpsAfterClose4FileInputStream);
	$useLocalCurrentObjectStackCache();
	$nc(r)->close();
	bool failed = false;
	bool result = false;
	$nc($System::out)->println($$str({"Testing File:"_s, r}));
	{
		$var($OpsAfterClose4FileInputStreamArray, arr$, OpsAfterClose4FileInputStream::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			OpsAfterClose4FileInputStream* op = arr$->get(i$);
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
		$nc($System::out)->println($$str({"Test failed for the failed operation{s} above for the FileInputStream:"_s, r}));
	}
	return failed;
}

void clinit$OpsAfterClose4FileInputStream($Class* class$) {
	$assignStatic(OpsAfterClose4FileInputStream::READ, $new($OpsAfterClose4FileInputStream$1, "READ"_s, 0));
	$assignStatic(OpsAfterClose4FileInputStream::READ_BUF, $new($OpsAfterClose4FileInputStream$2, "READ_BUF"_s, 1));
	$assignStatic(OpsAfterClose4FileInputStream::READ_BUF_OFF, $new($OpsAfterClose4FileInputStream$3, "READ_BUF_OFF"_s, 2));
	$assignStatic(OpsAfterClose4FileInputStream::GET_CHANNEL, $new($OpsAfterClose4FileInputStream$4, "GET_CHANNEL"_s, 3));
	$assignStatic(OpsAfterClose4FileInputStream::GET_FD, $new($OpsAfterClose4FileInputStream$5, "GET_FD"_s, 4));
	$assignStatic(OpsAfterClose4FileInputStream::SKIP, $new($OpsAfterClose4FileInputStream$6, "SKIP"_s, 5));
	$assignStatic(OpsAfterClose4FileInputStream::CLOSE, $new($OpsAfterClose4FileInputStream$7, "CLOSE"_s, 6));
	$assignStatic(OpsAfterClose4FileInputStream::$VALUES, OpsAfterClose4FileInputStream::$values());
}

OpsAfterClose4FileInputStream::OpsAfterClose4FileInputStream() {
}

$Class* OpsAfterClose4FileInputStream::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4FileInputStream, name, initialize, &_OpsAfterClose4FileInputStream_ClassInfo_, clinit$OpsAfterClose4FileInputStream, allocate$OpsAfterClose4FileInputStream);
	return class$;
}

$Class* OpsAfterClose4FileInputStream::class$ = nullptr;