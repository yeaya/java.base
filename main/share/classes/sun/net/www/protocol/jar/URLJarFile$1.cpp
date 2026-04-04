#include <sun/net/www/protocol/jar/URLJarFile$1.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Runtime$Version.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/jar/JarFile.h>
#include <sun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController.h>
#include <sun/net/www/protocol/jar/URLJarFile.h>
#include <jcpp.h>

#undef REPLACE_EXISTING

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime$Version = ::java::lang::Runtime$Version;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $JarFile = ::java::util::jar::JarFile;
using $URLJarFile = ::sun::net::www::protocol::jar::URLJarFile;
using $URLJarFile$URLJarFileCloseController = ::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

void URLJarFile$1::init$($InputStream* val$in, $URLJarFile$URLJarFileCloseController* val$closeController, $Runtime$Version* val$version) {
	$set(this, val$in, val$in);
	$set(this, val$closeController, val$closeController);
	$set(this, val$version, val$version);
}

$Object* URLJarFile$1::run() {
	$useLocalObjectStack();
	$var($Path, tmpFile, $Files::createTempFile("jar_cache"_s, nullptr, $$new($FileAttributeArray, 0)));
	try {
		$init($StandardCopyOption);
		$Files::copy(this->val$in, tmpFile, $$new($CopyOptionArray, {$StandardCopyOption::REPLACE_EXISTING}));
		$var($JarFile, jarFile, $new($URLJarFile, $($nc(tmpFile)->toFile()), this->val$closeController, this->val$version));
		$$nc(tmpFile->toFile())->deleteOnExit();
		return $of(jarFile);
	} catch ($Throwable& thr) {
		try {
			$Files::delete$(tmpFile);
		} catch ($IOException& ioe) {
			thr->addSuppressed(ioe);
		}
		$throw(thr);
	}
	$shouldNotReachHere();
}

URLJarFile$1::URLJarFile$1() {
}

$Class* URLJarFile$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$version", "Ljava/lang/Runtime$Version;", nullptr, $FINAL | $SYNTHETIC, $field(URLJarFile$1, val$version)},
		{"val$closeController", "Lsun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController;", nullptr, $FINAL | $SYNTHETIC, $field(URLJarFile$1, val$closeController)},
		{"val$in", "Ljava/io/InputStream;", nullptr, $FINAL | $SYNTHETIC, $field(URLJarFile$1, val$in)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;Lsun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController;Ljava/lang/Runtime$Version;)V", nullptr, 0, $method(URLJarFile$1, init$, void, $InputStream*, $URLJarFile$URLJarFileCloseController*, $Runtime$Version*)},
		{"run", "()Ljava/util/jar/JarFile;", nullptr, $PUBLIC, $virtualMethod(URLJarFile$1, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.jar.URLJarFile",
		"retrieve",
		"(Ljava/net/URL;Lsun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController;)Ljava/util/jar/JarFile;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.jar.URLJarFile$1", nullptr, nullptr, 0},
		{"sun.net.www.protocol.jar.URLJarFile$URLJarFileCloseController", "sun.net.www.protocol.jar.URLJarFile", "URLJarFileCloseController", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.jar.URLJarFile$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/util/jar/JarFile;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.jar.URLJarFile"
	};
	$loadClass(URLJarFile$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLJarFile$1);
	});
	return class$;
}

$Class* URLJarFile$1::class$ = nullptr;

				} // jar
			} // protocol
		} // www
	} // net
} // sun