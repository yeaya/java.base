#include <NameLimits.h>

#include <java/io/IOException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

#undef MAX_PATH
#undef MIN_PATH

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;

$FieldInfo _NameLimits_FieldInfo_[] = {
	{"MAX_PATH", "I", nullptr, $STATIC | $FINAL, $constField(NameLimits, MAX_PATH)},
	{"MIN_PATH", "I", nullptr, $STATIC | $FINAL, $constField(NameLimits, MIN_PATH)},
	{}
};

$MethodInfo _NameLimits_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NameLimits::*)()>(&NameLimits::init$))},
	{"generatePath", "(I)Ljava/nio/file/Path;", nullptr, $STATIC, $method(static_cast<$Path*(*)(int32_t)>(&NameLimits::generatePath))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NameLimits::main)), "java.lang.Exception"},
	{"tryCreateDirectory", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&NameLimits::tryCreateDirectory)), "java.io.IOException"},
	{"tryCreateFile", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&NameLimits::tryCreateFile)), "java.io.IOException"},
	{}
};

$ClassInfo _NameLimits_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NameLimits",
	"java.lang.Object",
	nullptr,
	_NameLimits_FieldInfo_,
	_NameLimits_MethodInfo_
};

$Object* allocate$NameLimits($Class* clazz) {
	return $of($alloc(NameLimits));
}

void NameLimits::init$() {
}

$Path* NameLimits::generatePath(int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (len < NameLimits::MIN_PATH) {
		$throwNew($RuntimeException, "Attempting to generate path less than MIN_PATH"_s);
	}
	$var($StringBuilder, sb, $new($StringBuilder, len));
	sb->append("name"_s);
	while (sb->length() < len) {
		sb->append(u'X');
	}
	return $Paths::get($(sb->toString()), $$new($StringArray, 0));
}

bool NameLimits::tryCreateFile(int32_t len) {
	$useLocalCurrentObjectStackCache();
	$var($Path, name, generatePath(len));
	try {
		$Files::createFile(name, $$new($FileAttributeArray, 0));
	} catch ($IOException& ioe) {
		$nc($System::err)->format("Unable to create file of length %d (full path %d), %s%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf($nc($($nc(name)->toString()))->length()))),
			$($of($Integer::valueOf($nc($($nc($($nc(name)->toAbsolutePath()))->toString()))->length()))),
			$of(ioe)
		}));
		return false;
	}
	$Files::delete$(name);
	return true;
}

bool NameLimits::tryCreateDirectory(int32_t len) {
	$useLocalCurrentObjectStackCache();
	$var($Path, name, generatePath(len));
	try {
		$Files::createDirectory(name, $$new($FileAttributeArray, 0));
	} catch ($IOException& ioe) {
		$nc($System::err)->format("Unable to create directory of length %d (full path %d), %s%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf($nc($($nc(name)->toString()))->length()))),
			$($of($Integer::valueOf($nc($($nc($($nc(name)->toAbsolutePath()))->toString()))->length()))),
			$of(ioe)
		}));
		return false;
	}
	$Files::delete$(name);
	return true;
}

void NameLimits::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t len = 0;
	len = NameLimits::MAX_PATH;
	while (!tryCreateFile(len)) {
		--len;
	}
	$nc($System::out)->format("Testing createFile on paths %d .. %d%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(NameLimits::MIN_PATH))),
		$($of($Integer::valueOf(len)))
	}));
	while (len >= NameLimits::MIN_PATH) {
		if (!tryCreateFile(len--)) {
			$throwNew($RuntimeException, "Test failed"_s);
		}
	}
	len = NameLimits::MAX_PATH;
	while (!tryCreateDirectory(len)) {
		--len;
	}
	$nc($System::out)->format("Testing createDirectory on paths %d .. %d%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(NameLimits::MIN_PATH))),
		$($of($Integer::valueOf(len)))
	}));
	while (len >= NameLimits::MIN_PATH) {
		if (!tryCreateDirectory(len--)) {
			$throwNew($RuntimeException, "Test failed"_s);
		}
	}
}

NameLimits::NameLimits() {
}

$Class* NameLimits::load$($String* name, bool initialize) {
	$loadClass(NameLimits, name, initialize, &_NameLimits_ClassInfo_, allocate$NameLimits);
	return class$;
}

$Class* NameLimits::class$ = nullptr;