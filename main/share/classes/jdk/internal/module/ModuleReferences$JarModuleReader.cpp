#include <jdk/internal/module/ModuleReferences$JarModuleReader.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Runtime$Version.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/stream/Stream.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <jdk/internal/module/ModuleReferences$SafeCloseModuleReader.h>
#include <jdk/internal/module/ModuleReferences.h>
#include <sun/net/www/ParseUtil.h>
#include <jcpp.h>

#undef OPEN_READ

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $Path = ::java::nio::file::Path;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $Stream = ::java::util::stream::Stream;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $ModuleReferences$SafeCloseModuleReader = ::jdk::internal::module::ModuleReferences$SafeCloseModuleReader;
using $ParseUtil = ::sun::net::www::ParseUtil;

namespace jdk {
	namespace internal {
		namespace module {

class ModuleReferences$JarModuleReader$$Lambda$getName : public $Function {
	$class(ModuleReferences$JarModuleReader$$Lambda$getName, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ZipEntry, inst$)->getName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleReferences$JarModuleReader$$Lambda$getName>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleReferences$JarModuleReader$$Lambda$getName::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleReferences$JarModuleReader$$Lambda$getName, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleReferences$JarModuleReader$$Lambda$getName, apply, $Object*, Object$*)},
	{}
};
$ClassInfo ModuleReferences$JarModuleReader$$Lambda$getName::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleReferences$JarModuleReader$$Lambda$getName",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ModuleReferences$JarModuleReader$$Lambda$getName::load$($String* name, bool initialize) {
	$loadClass(ModuleReferences$JarModuleReader$$Lambda$getName, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleReferences$JarModuleReader$$Lambda$getName::class$ = nullptr;

$FieldInfo _ModuleReferences$JarModuleReader_FieldInfo_[] = {
	{"jf", "Ljava/util/jar/JarFile;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferences$JarModuleReader, jf)},
	{"uri", "Ljava/net/URI;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferences$JarModuleReader, uri)},
	{}
};

$MethodInfo _ModuleReferences$JarModuleReader_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;Ljava/net/URI;)V", nullptr, 0, $method(ModuleReferences$JarModuleReader, init$, void, $Path*, $URI*)},
	{"getEntry", "(Ljava/lang/String;)Ljava/util/jar/JarEntry;", nullptr, $PRIVATE, $method(ModuleReferences$JarModuleReader, getEntry, $JarEntry*, $String*)},
	{"implClose", "()V", nullptr, 0, $virtualMethod(ModuleReferences$JarModuleReader, implClose, void), "java.io.IOException"},
	{"implFind", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", 0, $virtualMethod(ModuleReferences$JarModuleReader, implFind, $Optional*, $String*), "java.io.IOException"},
	{"implList", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", 0, $virtualMethod(ModuleReferences$JarModuleReader, implList, $Stream*), "java.io.IOException"},
	{"implOpen", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/io/InputStream;>;", 0, $virtualMethod(ModuleReferences$JarModuleReader, implOpen, $Optional*, $String*), "java.io.IOException"},
	{"newJarFile", "(Ljava/nio/file/Path;)Ljava/util/jar/JarFile;", nullptr, $STATIC, $staticMethod(ModuleReferences$JarModuleReader, newJarFile, $JarFile*, $Path*)},
	{}
};

$InnerClassInfo _ModuleReferences$JarModuleReader_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleReferences$JarModuleReader", "jdk.internal.module.ModuleReferences", "JarModuleReader", $STATIC},
	{"jdk.internal.module.ModuleReferences$SafeCloseModuleReader", "jdk.internal.module.ModuleReferences", "SafeCloseModuleReader", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ModuleReferences$JarModuleReader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleReferences$JarModuleReader",
	"jdk.internal.module.ModuleReferences$SafeCloseModuleReader",
	nullptr,
	_ModuleReferences$JarModuleReader_FieldInfo_,
	_ModuleReferences$JarModuleReader_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleReferences$JarModuleReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleReferences"
};

$Object* allocate$ModuleReferences$JarModuleReader($Class* clazz) {
	return $of($alloc(ModuleReferences$JarModuleReader));
}

$JarFile* ModuleReferences$JarModuleReader::newJarFile($Path* path) {
	$init(ModuleReferences$JarModuleReader);
	$useLocalCurrentObjectStackCache();
	try {
		$var($File, var$0, $new($File, $($nc(path)->toString())));
		return $new($JarFile, var$0, true, $ZipFile::OPEN_READ, $($JarFile::runtimeVersion()));
	} catch ($IOException& ioe) {
		$throwNew($UncheckedIOException, ioe);
	}
	$shouldNotReachHere();
}

void ModuleReferences$JarModuleReader::init$($Path* path, $URI* uri) {
	$ModuleReferences$SafeCloseModuleReader::init$();
	$set(this, jf, newJarFile(path));
	$set(this, uri, uri);
}

$JarEntry* ModuleReferences$JarModuleReader::getEntry($String* name) {
	return $nc(this->jf)->getJarEntry($cast($String, $Objects::requireNonNull(name)));
}

$Optional* ModuleReferences$JarModuleReader::implFind($String* name$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$var($JarEntry, je, getEntry(name));
	if (je != nullptr) {
		if ($nc(this->jf)->isMultiRelease()) {
			$assign(name, je->getRealName());
		}
		bool var$0 = je->isDirectory();
		if (var$0 && !$nc(name)->endsWith("/"_s)) {
			$plusAssign(name, "/"_s);
		}
		$var($String, encodedPath, $ParseUtil::encodePath(name, false));
		$var($String, uris, $str({"jar:"_s, this->uri, "!/"_s, encodedPath}));
		return $Optional::of($($URI::create(uris)));
	} else {
		return $Optional::empty();
	}
}

$Optional* ModuleReferences$JarModuleReader::implOpen($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($JarEntry, je, getEntry(name));
	if (je != nullptr) {
		return $Optional::of($($nc(this->jf)->getInputStream(je)));
	} else {
		return $Optional::empty();
	}
}

$Stream* ModuleReferences$JarModuleReader::implList() {
	$useLocalCurrentObjectStackCache();
	$var($List, names, $nc($($nc($($nc(this->jf)->versionedStream()))->map(static_cast<$Function*>($$new(ModuleReferences$JarModuleReader$$Lambda$getName)))))->toList());
	return $nc(names)->stream();
}

void ModuleReferences$JarModuleReader::implClose() {
	$nc(this->jf)->close();
}

ModuleReferences$JarModuleReader::ModuleReferences$JarModuleReader() {
}

$Class* ModuleReferences$JarModuleReader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ModuleReferences$JarModuleReader$$Lambda$getName::classInfo$.name)) {
			return ModuleReferences$JarModuleReader$$Lambda$getName::load$(name, initialize);
		}
	}
	$loadClass(ModuleReferences$JarModuleReader, name, initialize, &_ModuleReferences$JarModuleReader_ClassInfo_, allocate$ModuleReferences$JarModuleReader);
	return class$;
}

$Class* ModuleReferences$JarModuleReader::class$ = nullptr;

		} // module
	} // internal
} // jdk