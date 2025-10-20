#include <OpsAfterClose4RandomAccessFile.h>

#include <OpsAfterClose4RandomAccessFile$1.h>
#include <OpsAfterClose4RandomAccessFile$10.h>
#include <OpsAfterClose4RandomAccessFile$11.h>
#include <OpsAfterClose4RandomAccessFile$12.h>
#include <OpsAfterClose4RandomAccessFile$2.h>
#include <OpsAfterClose4RandomAccessFile$3.h>
#include <OpsAfterClose4RandomAccessFile$4.h>
#include <OpsAfterClose4RandomAccessFile$5.h>
#include <OpsAfterClose4RandomAccessFile$6.h>
#include <OpsAfterClose4RandomAccessFile$7.h>
#include <OpsAfterClose4RandomAccessFile$8.h>
#include <OpsAfterClose4RandomAccessFile$9.h>
#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/io/RandomAccessFile.h>
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

#undef CLOSE
#undef GET_CHANNEL
#undef GET_FD
#undef GET_FILE_PTR
#undef GET_LENGTH
#undef READ
#undef READ_BUF
#undef SEEK
#undef SET_LENGTH
#undef SKIP_BYTES
#undef WRITE
#undef WRITE_BUF

using $OpsAfterClose4RandomAccessFile$1 = ::OpsAfterClose4RandomAccessFile$1;
using $OpsAfterClose4RandomAccessFile$10 = ::OpsAfterClose4RandomAccessFile$10;
using $OpsAfterClose4RandomAccessFile$11 = ::OpsAfterClose4RandomAccessFile$11;
using $OpsAfterClose4RandomAccessFile$12 = ::OpsAfterClose4RandomAccessFile$12;
using $OpsAfterClose4RandomAccessFile$2 = ::OpsAfterClose4RandomAccessFile$2;
using $OpsAfterClose4RandomAccessFile$3 = ::OpsAfterClose4RandomAccessFile$3;
using $OpsAfterClose4RandomAccessFile$4 = ::OpsAfterClose4RandomAccessFile$4;
using $OpsAfterClose4RandomAccessFile$5 = ::OpsAfterClose4RandomAccessFile$5;
using $OpsAfterClose4RandomAccessFile$6 = ::OpsAfterClose4RandomAccessFile$6;
using $OpsAfterClose4RandomAccessFile$7 = ::OpsAfterClose4RandomAccessFile$7;
using $OpsAfterClose4RandomAccessFile$8 = ::OpsAfterClose4RandomAccessFile$8;
using $OpsAfterClose4RandomAccessFile$9 = ::OpsAfterClose4RandomAccessFile$9;
using $OpsAfterClose4RandomAccessFileArray = $Array<OpsAfterClose4RandomAccessFile>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _OpsAfterClose4RandomAccessFile_FieldInfo_[] = {
	{"READ", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, READ)},
	{"READ_BUF", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, READ_BUF)},
	{"GET_CHANNEL", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, GET_CHANNEL)},
	{"GET_FD", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, GET_FD)},
	{"GET_FILE_PTR", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, GET_FILE_PTR)},
	{"GET_LENGTH", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, GET_LENGTH)},
	{"SEEK", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, SEEK)},
	{"SET_LENGTH", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, SET_LENGTH)},
	{"SKIP_BYTES", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, SKIP_BYTES)},
	{"WRITE", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, WRITE)},
	{"WRITE_BUF", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, WRITE_BUF)},
	{"CLOSE", "LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OpsAfterClose4RandomAccessFile, CLOSE)},
	{"$VALUES", "[LOpsAfterClose4RandomAccessFile;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(OpsAfterClose4RandomAccessFile, $VALUES)},
	{}
};

$MethodInfo _OpsAfterClose4RandomAccessFile_MethodInfo_[] = {
	{"$values", "()[LOpsAfterClose4RandomAccessFile;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$OpsAfterClose4RandomAccessFileArray*(*)()>(&OpsAfterClose4RandomAccessFile::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(OpsAfterClose4RandomAccessFile::*)($String*,int32_t)>(&OpsAfterClose4RandomAccessFile::init$))},
	{"check", "(Ljava/io/RandomAccessFile;)Z", nullptr, $ABSTRACT},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OpsAfterClose4RandomAccessFile::main)), "java.lang.Exception"},
	{"testRandomAccessFile", "(Ljava/io/RandomAccessFile;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($RandomAccessFile*)>(&OpsAfterClose4RandomAccessFile::testRandomAccessFile)), "java.lang.Exception"},
	{"valueOf", "(Ljava/lang/String;)LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OpsAfterClose4RandomAccessFile*(*)($String*)>(&OpsAfterClose4RandomAccessFile::valueOf))},
	{"values", "()[LOpsAfterClose4RandomAccessFile;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OpsAfterClose4RandomAccessFileArray*(*)()>(&OpsAfterClose4RandomAccessFile::values))},
	{}
};

$InnerClassInfo _OpsAfterClose4RandomAccessFile_InnerClassesInfo_[] = {
	{"OpsAfterClose4RandomAccessFile$12", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4RandomAccessFile$11", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4RandomAccessFile$10", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4RandomAccessFile$9", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4RandomAccessFile$8", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4RandomAccessFile$7", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4RandomAccessFile$6", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4RandomAccessFile$5", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4RandomAccessFile$4", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4RandomAccessFile$3", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4RandomAccessFile$2", nullptr, nullptr, $FINAL | $ENUM},
	{"OpsAfterClose4RandomAccessFile$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4RandomAccessFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT | $ENUM,
	"OpsAfterClose4RandomAccessFile",
	"java.lang.Enum",
	nullptr,
	_OpsAfterClose4RandomAccessFile_FieldInfo_,
	_OpsAfterClose4RandomAccessFile_MethodInfo_,
	"Ljava/lang/Enum<LOpsAfterClose4RandomAccessFile;>;",
	nullptr,
	_OpsAfterClose4RandomAccessFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	"OpsAfterClose4RandomAccessFile$12,OpsAfterClose4RandomAccessFile$11,OpsAfterClose4RandomAccessFile$10,OpsAfterClose4RandomAccessFile$9,OpsAfterClose4RandomAccessFile$8,OpsAfterClose4RandomAccessFile$7,OpsAfterClose4RandomAccessFile$6,OpsAfterClose4RandomAccessFile$5,OpsAfterClose4RandomAccessFile$4,OpsAfterClose4RandomAccessFile$3,OpsAfterClose4RandomAccessFile$2,OpsAfterClose4RandomAccessFile$1"
};

$Object* allocate$OpsAfterClose4RandomAccessFile($Class* clazz) {
	return $of($alloc(OpsAfterClose4RandomAccessFile));
}

OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::READ = nullptr;
OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::READ_BUF = nullptr;
OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::GET_CHANNEL = nullptr;
OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::GET_FD = nullptr;
OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::GET_FILE_PTR = nullptr;
OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::GET_LENGTH = nullptr;
OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::SEEK = nullptr;
OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::SET_LENGTH = nullptr;
OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::SKIP_BYTES = nullptr;
OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::WRITE = nullptr;
OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::WRITE_BUF = nullptr;
OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::CLOSE = nullptr;
$OpsAfterClose4RandomAccessFileArray* OpsAfterClose4RandomAccessFile::$VALUES = nullptr;

$OpsAfterClose4RandomAccessFileArray* OpsAfterClose4RandomAccessFile::$values() {
	$init(OpsAfterClose4RandomAccessFile);
	return $new($OpsAfterClose4RandomAccessFileArray, {
		OpsAfterClose4RandomAccessFile::READ,
		OpsAfterClose4RandomAccessFile::READ_BUF,
		OpsAfterClose4RandomAccessFile::GET_CHANNEL,
		OpsAfterClose4RandomAccessFile::GET_FD,
		OpsAfterClose4RandomAccessFile::GET_FILE_PTR,
		OpsAfterClose4RandomAccessFile::GET_LENGTH,
		OpsAfterClose4RandomAccessFile::SEEK,
		OpsAfterClose4RandomAccessFile::SET_LENGTH,
		OpsAfterClose4RandomAccessFile::SKIP_BYTES,
		OpsAfterClose4RandomAccessFile::WRITE,
		OpsAfterClose4RandomAccessFile::WRITE_BUF,
		OpsAfterClose4RandomAccessFile::CLOSE
	});
}

$OpsAfterClose4RandomAccessFileArray* OpsAfterClose4RandomAccessFile::values() {
	$init(OpsAfterClose4RandomAccessFile);
	return $cast($OpsAfterClose4RandomAccessFileArray, OpsAfterClose4RandomAccessFile::$VALUES->clone());
}

OpsAfterClose4RandomAccessFile* OpsAfterClose4RandomAccessFile::valueOf($String* name) {
	$init(OpsAfterClose4RandomAccessFile);
	return $cast(OpsAfterClose4RandomAccessFile, $Enum::valueOf(OpsAfterClose4RandomAccessFile::class$, name));
}

void OpsAfterClose4RandomAccessFile::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void OpsAfterClose4RandomAccessFile::main($StringArray* args) {
	$init(OpsAfterClose4RandomAccessFile);
	$useLocalCurrentObjectStackCache();
	bool failed = false;
	$var($File, f, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "raf.txt"_s));
	f->createNewFile();
	f->deleteOnExit();
	$var($RandomAccessFile, raf, $new($RandomAccessFile, f, "rw"_s));
	if (testRandomAccessFile(raf)) {
		$throwNew($Exception, "Test failed for some of the operation{s} on RandomAccessFile, check the messages"_s);
	}
}

bool OpsAfterClose4RandomAccessFile::testRandomAccessFile($RandomAccessFile* r) {
	$init(OpsAfterClose4RandomAccessFile);
	$useLocalCurrentObjectStackCache();
	$nc(r)->close();
	bool failed = false;
	bool result = false;
	$init($System);
	$nc($System::out)->println($$str({"Testing File:"_s, r}));
	{
		$var($OpsAfterClose4RandomAccessFileArray, arr$, OpsAfterClose4RandomAccessFile::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			OpsAfterClose4RandomAccessFile* op = arr$->get(i$);
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
		$nc($System::out)->println($$str({"Test failed for the failed operation{s} above for the RandomAccessFile:"_s, r}));
	}
	return failed;
}

void clinit$OpsAfterClose4RandomAccessFile($Class* class$) {
	$assignStatic(OpsAfterClose4RandomAccessFile::READ, $new($OpsAfterClose4RandomAccessFile$1, "READ"_s, 0));
	$assignStatic(OpsAfterClose4RandomAccessFile::READ_BUF, $new($OpsAfterClose4RandomAccessFile$2, "READ_BUF"_s, 1));
	$assignStatic(OpsAfterClose4RandomAccessFile::GET_CHANNEL, $new($OpsAfterClose4RandomAccessFile$3, "GET_CHANNEL"_s, 2));
	$assignStatic(OpsAfterClose4RandomAccessFile::GET_FD, $new($OpsAfterClose4RandomAccessFile$4, "GET_FD"_s, 3));
	$assignStatic(OpsAfterClose4RandomAccessFile::GET_FILE_PTR, $new($OpsAfterClose4RandomAccessFile$5, "GET_FILE_PTR"_s, 4));
	$assignStatic(OpsAfterClose4RandomAccessFile::GET_LENGTH, $new($OpsAfterClose4RandomAccessFile$6, "GET_LENGTH"_s, 5));
	$assignStatic(OpsAfterClose4RandomAccessFile::SEEK, $new($OpsAfterClose4RandomAccessFile$7, "SEEK"_s, 6));
	$assignStatic(OpsAfterClose4RandomAccessFile::SET_LENGTH, $new($OpsAfterClose4RandomAccessFile$8, "SET_LENGTH"_s, 7));
	$assignStatic(OpsAfterClose4RandomAccessFile::SKIP_BYTES, $new($OpsAfterClose4RandomAccessFile$9, "SKIP_BYTES"_s, 8));
	$assignStatic(OpsAfterClose4RandomAccessFile::WRITE, $new($OpsAfterClose4RandomAccessFile$10, "WRITE"_s, 9));
	$assignStatic(OpsAfterClose4RandomAccessFile::WRITE_BUF, $new($OpsAfterClose4RandomAccessFile$11, "WRITE_BUF"_s, 10));
	$assignStatic(OpsAfterClose4RandomAccessFile::CLOSE, $new($OpsAfterClose4RandomAccessFile$12, "CLOSE"_s, 11));
	$assignStatic(OpsAfterClose4RandomAccessFile::$VALUES, OpsAfterClose4RandomAccessFile::$values());
}

OpsAfterClose4RandomAccessFile::OpsAfterClose4RandomAccessFile() {
}

$Class* OpsAfterClose4RandomAccessFile::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4RandomAccessFile, name, initialize, &_OpsAfterClose4RandomAccessFile_ClassInfo_, clinit$OpsAfterClose4RandomAccessFile, allocate$OpsAfterClose4RandomAccessFile);
	return class$;
}

$Class* OpsAfterClose4RandomAccessFile::class$ = nullptr;