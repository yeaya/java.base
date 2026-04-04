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

void ProxyGenerator$1::init$($String* val$name, $bytes* val$classFile) {
	$set(this, val$name, val$name);
	$set(this, val$classFile, val$classFile);
}

$Object* ProxyGenerator$1::run() {
	$useLocalObjectStack();
	try {
		int32_t i = $nc(this->val$name)->lastIndexOf(u'.');
		$var($Path, path, nullptr);
		if (i > 0) {
			$var($Path, dir, $Path::of($($ProxyGenerator::dotToSlash($(this->val$name->substring(0, i)))), $$new($StringArray, 0)));
			$Files::createDirectories(dir, $$new($FileAttributeArray, 0));
			$assign(path, $nc(dir)->resolve($$str({$(this->val$name->substring(i + 1)), ".class"_s})));
		} else {
			$assign(path, $Path::of($$str({this->val$name, ".class"_s}), $$new($StringArray, 0)));
		}
		$Files::write(path, this->val$classFile, $$new($OpenOptionArray, 0));
		return nullptr;
	} catch ($IOException& e) {
		$throwNew($InternalError, $$str({"I/O exception saving generated file: "_s, e}));
	}
	$shouldNotReachHere();
}

ProxyGenerator$1::ProxyGenerator$1() {
}

$Class* ProxyGenerator$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$classFile", "[B", nullptr, $FINAL | $SYNTHETIC, $field(ProxyGenerator$1, val$classFile)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ProxyGenerator$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[B)V", "()V", 0, $method(ProxyGenerator$1, init$, void, $String*, $bytes*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ProxyGenerator$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.reflect.ProxyGenerator",
		"generateProxyClass",
		"(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/util/List;I)[B"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.reflect.ProxyGenerator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.reflect.ProxyGenerator$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.reflect.ProxyGenerator"
	};
	$loadClass(ProxyGenerator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyGenerator$1);
	});
	return class$;
}

$Class* ProxyGenerator$1::class$ = nullptr;

		} // reflect
	} // lang
} // java