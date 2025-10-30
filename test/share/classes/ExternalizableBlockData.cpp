#include <ExternalizableBlockData.h>

#include <Foo4ExternalizableBlockData.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamConstants.h>
#include <java/io/OutputStream.h>
#include <java/lang/Error.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef PROTOCOL_VERSION_1

using $Foo4ExternalizableBlockData = ::Foo4ExternalizableBlockData;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectStreamConstants = ::java::io::ObjectStreamConstants;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

$MethodInfo _ExternalizableBlockData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExternalizableBlockData::*)()>(&ExternalizableBlockData::init$))},
	{"getFileBytes", "(Ljava/io/File;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($File*)>(&ExternalizableBlockData::getFileBytes)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ExternalizableBlockData::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ExternalizableBlockData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExternalizableBlockData",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExternalizableBlockData_MethodInfo_
};

$Object* allocate$ExternalizableBlockData($Class* clazz) {
	return $of($alloc(ExternalizableBlockData));
}

void ExternalizableBlockData::init$() {
}

void ExternalizableBlockData::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, oldExternalizableBytes, getFileBytes($$new($File, $($System::getProperty("test.src"_s, "."_s)), "old.ser"_s)));
	$var($Foo4ExternalizableBlockData, foo, $new($Foo4ExternalizableBlockData, 2989, 0x0000BEEF, "burrito"_s));
	$var($ByteArrayOutputStream, bout, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, oout, $new($ObjectOutputStream, bout));
	oout->useProtocolVersion($ObjectStreamConstants::PROTOCOL_VERSION_1);
	oout->writeObject(foo);
	oout->close();
	if (!$Arrays::equals($(bout->toByteArray()), oldExternalizableBytes)) {
		$throwNew($Error);
	}
	$var($ObjectInputStream, oin, $new($ObjectInputStream, $$new($ByteArrayInputStream, oldExternalizableBytes)));
	if (!foo->equals($(oin->readObject()))) {
		$throwNew($Error);
	}
	$assign(bout, $new($ByteArrayOutputStream));
	$assign(oout, $new($ObjectOutputStream, bout));
	oout->writeObject(foo);
	oout->close();
	if ($Arrays::equals($(bout->toByteArray()), oldExternalizableBytes)) {
		$throwNew($Error);
	}
}

$bytes* ExternalizableBlockData::getFileBytes($File* file) {
	$useLocalCurrentObjectStackCache();
	$var($FileInputStream, fin, $new($FileInputStream, file));
	$var($ByteArrayOutputStream, bout, $new($ByteArrayOutputStream));
	$var($bytes, buf, $new($bytes, 256));
	int32_t n = 0;
	while ((n = fin->read(buf)) != -1) {
		bout->write(buf, 0, n);
	}
	fin->close();
	return bout->toByteArray();
}

ExternalizableBlockData::ExternalizableBlockData() {
}

$Class* ExternalizableBlockData::load$($String* name, bool initialize) {
	$loadClass(ExternalizableBlockData, name, initialize, &_ExternalizableBlockData_ClassInfo_, allocate$ExternalizableBlockData);
	return class$;
}

$Class* ExternalizableBlockData::class$ = nullptr;