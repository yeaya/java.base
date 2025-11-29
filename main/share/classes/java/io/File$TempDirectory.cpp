#include <java/io/File$TempDirectory.h>

#include <java/io/File.h>
#include <java/io/FileSystem.h>
#include <java/io/IOException.h>
#include <java/lang/Math.h>
#include <java/lang/SecurityManager.h>
#include <java/security/SecureRandom.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileSystem = ::java::io::FileSystem;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace io {

$FieldInfo _File$TempDirectory_FieldInfo_[] = {
	{"tmpdir", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(File$TempDirectory, tmpdir)},
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(File$TempDirectory, random)},
	{}
};

$MethodInfo _File$TempDirectory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(File$TempDirectory::*)()>(&File$TempDirectory::init$))},
	{"generateFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;", nullptr, $STATIC, $method(static_cast<$File*(*)($String*,$String*,$File*)>(&File$TempDirectory::generateFile)), "java.io.IOException"},
	{"location", "()Ljava/io/File;", nullptr, $STATIC, $method(static_cast<$File*(*)()>(&File$TempDirectory::location))},
	{"shortenSubName", "(III)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&File$TempDirectory::shortenSubName))},
	{}
};

$InnerClassInfo _File$TempDirectory_InnerClassesInfo_[] = {
	{"java.io.File$TempDirectory", "java.io.File", "TempDirectory", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _File$TempDirectory_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.File$TempDirectory",
	"java.lang.Object",
	nullptr,
	_File$TempDirectory_FieldInfo_,
	_File$TempDirectory_MethodInfo_,
	nullptr,
	nullptr,
	_File$TempDirectory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.File"
};

$Object* allocate$File$TempDirectory($Class* clazz) {
	return $of($alloc(File$TempDirectory));
}

$File* File$TempDirectory::tmpdir = nullptr;
$SecureRandom* File$TempDirectory::random = nullptr;

void File$TempDirectory::init$() {
}

$File* File$TempDirectory::location() {
	$init(File$TempDirectory);
	return File$TempDirectory::tmpdir;
}

int32_t File$TempDirectory::shortenSubName(int32_t subNameLength, int32_t excess, int32_t nameMin) {
	$init(File$TempDirectory);
	int32_t newLength = $Math::max(nameMin, subNameLength - excess);
	if (newLength < subNameLength) {
		return newLength;
	}
	return subNameLength;
}

$File* File$TempDirectory::generateFile($String* prefix$renamed, $String* suffix, $File* dir) {
	$init(File$TempDirectory);
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	int64_t n = $nc(File$TempDirectory::random)->nextLong();
	$var($String, nus, $Long::toUnsignedString(n));
	$assign(prefix, ($$new($File, prefix))->getName());
	int32_t prefixLength = $nc(prefix)->length();
	int32_t nusLength = $nc(nus)->length();
	int32_t suffixLength = $nc(suffix)->length();
	$var($String, name, nullptr);
	int32_t nameMax = $nc($File::fs)->getNameMax($($nc(dir)->getPath()));
	int32_t excess = prefixLength + nusLength + suffixLength - nameMax;
	if (excess <= 0) {
		$assign(name, $str({prefix, nus, suffix}));
	} else {
		prefixLength = shortenSubName(prefixLength, excess, 3);
		excess = prefixLength + nusLength + suffixLength - nameMax;
		if (excess > 0) {
			suffixLength = shortenSubName(suffixLength, excess, suffix->indexOf("."_s) == 0 ? 4 : 0);
			suffixLength = shortenSubName(suffixLength, excess, 3);
			excess = prefixLength + nusLength + suffixLength - nameMax;
		}
		if (excess > 0 && excess <= nusLength - 5) {
			nusLength = shortenSubName(nusLength, excess, 5);
		}
		$var($StringBuilder, sb, $new($StringBuilder, prefixLength + nusLength + suffixLength));
		sb->append(prefixLength < prefix->length() ? $(prefix->substring(0, prefixLength)) : prefix);
		sb->append(nusLength < nus->length() ? $(nus->substring(0, nusLength)) : nus);
		sb->append(suffixLength < suffix->length() ? $(suffix->substring(0, suffixLength)) : suffix);
		$assign(name, sb->toString());
	}
	$assign(name, $nc($File::fs)->normalize(name));
	$var($File, f, $new($File, dir, name));
	bool var$0 = !$nc(name)->equals($(f->getName()));
	if (var$0 || f->isInvalid()) {
		if ($System::getSecurityManager() != nullptr) {
			$throwNew($IOException, "Unable to create temporary file"_s);
		} else {
			$throwNew($IOException, $$str({"Unable to create temporary file, "_s, name}));
		}
	}
	return f;
}

void clinit$File$TempDirectory($Class* class$) {
	$assignStatic(File$TempDirectory::tmpdir, $new($File, $($GetPropertyAction::privilegedGetProperty("java.io.tmpdir"_s))));
	$assignStatic(File$TempDirectory::random, $new($SecureRandom));
}

File$TempDirectory::File$TempDirectory() {
}

$Class* File$TempDirectory::load$($String* name, bool initialize) {
	$loadClass(File$TempDirectory, name, initialize, &_File$TempDirectory_ClassInfo_, clinit$File$TempDirectory, allocate$File$TempDirectory);
	return class$;
}

$Class* File$TempDirectory::class$ = nullptr;

	} // io
} // java