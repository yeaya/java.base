#include <java/lang/reflect/ProxyGenerator$1.h>

#include <java/io/IOException.h>
#include <java/lang/InternalError.h>
#include <java/lang/reflect/ProxyGenerator.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxyGenerator = ::java::lang::reflect::ProxyGenerator;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _ProxyGenerator$1_FieldInfo_[] = {
	{"val$classFile", "[B", nullptr, $FINAL | $SYNTHETIC, $field(ProxyGenerator$1, val$classFile)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ProxyGenerator$1, val$name)},
	{}
};

$MethodInfo _ProxyGenerator$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[B)V", "()V", 0, $method(static_cast<void(ProxyGenerator$1::*)($String*,$bytes*)>(&ProxyGenerator$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProxyGenerator$1_EnclosingMethodInfo_ = {
	"java.lang.reflect.ProxyGenerator",
	"generateProxyClass",
	"(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/util/List;I)[B"
};

$InnerClassInfo _ProxyGenerator$1_InnerClassesInfo_[] = {
	{"java.lang.reflect.ProxyGenerator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProxyGenerator$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.reflect.ProxyGenerator$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ProxyGenerator$1_FieldInfo_,
	_ProxyGenerator$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_ProxyGenerator$1_EnclosingMethodInfo_,
	_ProxyGenerator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.reflect.ProxyGenerator"
};

$Object* allocate$ProxyGenerator$1($Class* clazz) {
	return $of($alloc(ProxyGenerator$1));
}

void ProxyGenerator$1::init$($String* val$name, $bytes* val$classFile) {
	$set(this, val$name, val$name);
	$set(this, val$classFile, val$classFile);
}

$Object* ProxyGenerator$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t i = $nc(this->val$name)->lastIndexOf((int32_t)u'.');
		$var($Path, path, nullptr);
		if (i > 0) {
			$var($Path, dir, $Path::of($($ProxyGenerator::dotToSlash($($nc(this->val$name)->substring(0, i)))), $$new($StringArray, 0)));
			$Files::createDirectories(dir, $$new($FileAttributeArray, 0));
			$assign(path, $nc(dir)->resolve($$str({$($nc(this->val$name)->substring(i + 1)), ".class"_s})));
		} else {
			$assign(path, $Path::of($$str({this->val$name, ".class"_s}), $$new($StringArray, 0)));
		}
		$Files::write(path, this->val$classFile, $$new($OpenOptionArray, 0));
		return $of(nullptr);
	} catch ($IOException& e) {
		$throwNew($InternalError, $$str({"I/O exception saving generated file: "_s, e}));
	}
	$shouldNotReachHere();
}

ProxyGenerator$1::ProxyGenerator$1() {
}

$Class* ProxyGenerator$1::load$($String* name, bool initialize) {
	$loadClass(ProxyGenerator$1, name, initialize, &_ProxyGenerator$1_ClassInfo_, allocate$ProxyGenerator$1);
	return class$;
}

$Class* ProxyGenerator$1::class$ = nullptr;

		} // reflect
	} // lang
} // java