#include <jdk/internal/module/ModuleReferences$JModModuleReader.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
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
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/jmod/JmodFile$Entry.h>
#include <jdk/internal/jmod/JmodFile$Section.h>
#include <jdk/internal/jmod/JmodFile.h>
#include <jdk/internal/module/ModuleReferences$SafeCloseModuleReader.h>
#include <jdk/internal/module/ModuleReferences.h>
#include <sun/net/www/ParseUtil.h>
#include <jcpp.h>

#undef CLASSES

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
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $JmodFile = ::jdk::internal::jmod::JmodFile;
using $JmodFile$Entry = ::jdk::internal::jmod::JmodFile$Entry;
using $JmodFile$Section = ::jdk::internal::jmod::JmodFile$Section;
using $ModuleReferences$SafeCloseModuleReader = ::jdk::internal::module::ModuleReferences$SafeCloseModuleReader;
using $ParseUtil = ::sun::net::www::ParseUtil;

namespace jdk {
	namespace internal {
		namespace module {

class ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0 : public $Predicate {
	$class(ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return ModuleReferences$JModModuleReader::lambda$implList$0($cast($JmodFile$Entry, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0::*)()>(&ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0::load$($String* name, bool initialize) {
	$loadClass(ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0::class$ = nullptr;

class ModuleReferences$JModModuleReader$$Lambda$name$1 : public $Function {
	$class(ModuleReferences$JModModuleReader$$Lambda$name$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($JmodFile$Entry, inst$)->name());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleReferences$JModModuleReader$$Lambda$name$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleReferences$JModModuleReader$$Lambda$name$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleReferences$JModModuleReader$$Lambda$name$1::*)()>(&ModuleReferences$JModModuleReader$$Lambda$name$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleReferences$JModModuleReader$$Lambda$name$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleReferences$JModModuleReader$$Lambda$name$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ModuleReferences$JModModuleReader$$Lambda$name$1::load$($String* name, bool initialize) {
	$loadClass(ModuleReferences$JModModuleReader$$Lambda$name$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleReferences$JModModuleReader$$Lambda$name$1::class$ = nullptr;

$FieldInfo _ModuleReferences$JModModuleReader_FieldInfo_[] = {
	{"jf", "Ljdk/internal/jmod/JmodFile;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferences$JModModuleReader, jf)},
	{"uri", "Ljava/net/URI;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferences$JModModuleReader, uri)},
	{}
};

$MethodInfo _ModuleReferences$JModModuleReader_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;Ljava/net/URI;)V", nullptr, 0, $method(static_cast<void(ModuleReferences$JModModuleReader::*)($Path*,$URI*)>(&ModuleReferences$JModModuleReader::init$))},
	{"getEntry", "(Ljava/lang/String;)Ljdk/internal/jmod/JmodFile$Entry;", nullptr, $PRIVATE, $method(static_cast<$JmodFile$Entry*(ModuleReferences$JModModuleReader::*)($String*)>(&ModuleReferences$JModModuleReader::getEntry))},
	{"implClose", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"implFind", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", 0},
	{"implList", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", 0, nullptr, "java.io.IOException"},
	{"implOpen", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/io/InputStream;>;", 0, nullptr, "java.io.IOException"},
	{"lambda$implList$0", "(Ljdk/internal/jmod/JmodFile$Entry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JmodFile$Entry*)>(&ModuleReferences$JModModuleReader::lambda$implList$0))},
	{"newJmodFile", "(Ljava/nio/file/Path;)Ljdk/internal/jmod/JmodFile;", nullptr, $STATIC, $method(static_cast<$JmodFile*(*)($Path*)>(&ModuleReferences$JModModuleReader::newJmodFile))},
	{}
};

$InnerClassInfo _ModuleReferences$JModModuleReader_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleReferences$JModModuleReader", "jdk.internal.module.ModuleReferences", "JModModuleReader", $STATIC},
	{"jdk.internal.module.ModuleReferences$SafeCloseModuleReader", "jdk.internal.module.ModuleReferences", "SafeCloseModuleReader", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ModuleReferences$JModModuleReader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleReferences$JModModuleReader",
	"jdk.internal.module.ModuleReferences$SafeCloseModuleReader",
	nullptr,
	_ModuleReferences$JModModuleReader_FieldInfo_,
	_ModuleReferences$JModModuleReader_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleReferences$JModModuleReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleReferences"
};

$Object* allocate$ModuleReferences$JModModuleReader($Class* clazz) {
	return $of($alloc(ModuleReferences$JModModuleReader));
}

$JmodFile* ModuleReferences$JModModuleReader::newJmodFile($Path* path) {
	$init(ModuleReferences$JModModuleReader);
	try {
		return $new($JmodFile, path);
	} catch ($IOException& ioe) {
		$throwNew($UncheckedIOException, ioe);
	}
	$shouldNotReachHere();
}

void ModuleReferences$JModModuleReader::init$($Path* path, $URI* uri) {
	$ModuleReferences$SafeCloseModuleReader::init$();
	$set(this, jf, newJmodFile(path));
	$set(this, uri, uri);
}

$JmodFile$Entry* ModuleReferences$JModModuleReader::getEntry($String* name) {
	$Objects::requireNonNull(name);
	$init($JmodFile$Section);
	return $nc(this->jf)->getEntry($JmodFile$Section::CLASSES, name);
}

$Optional* ModuleReferences$JModModuleReader::implFind($String* name$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$var($JmodFile$Entry, je, getEntry(name));
	if (je != nullptr) {
		bool var$0 = je->isDirectory();
		if (var$0 && !$nc(name)->endsWith("/"_s)) {
			$plusAssign(name, "/"_s);
		}
		$var($String, encodedPath, $ParseUtil::encodePath(name, false));
		$var($String, uris, $str({"jmod:"_s, this->uri, "!/"_s, encodedPath}));
		return $Optional::of($($URI::create(uris)));
	} else {
		return $Optional::empty();
	}
}

$Optional* ModuleReferences$JModModuleReader::implOpen($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($JmodFile$Entry, je, getEntry(name));
	if (je != nullptr) {
		return $Optional::of($($nc(this->jf)->getInputStream(je)));
	} else {
		return $Optional::empty();
	}
}

$Stream* ModuleReferences$JModModuleReader::implList() {
	$useLocalCurrentObjectStackCache();
	$var($List, names, $nc($($nc($($nc($($nc(this->jf)->stream()))->filter(static_cast<$Predicate*>($$new(ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0)))))->map(static_cast<$Function*>($$new(ModuleReferences$JModModuleReader$$Lambda$name$1)))))->toList());
	return $nc(names)->stream();
}

void ModuleReferences$JModModuleReader::implClose() {
	$nc(this->jf)->close();
}

bool ModuleReferences$JModModuleReader::lambda$implList$0($JmodFile$Entry* e) {
	$init(ModuleReferences$JModModuleReader);
	$init($JmodFile$Section);
	return $nc(e)->section() == $JmodFile$Section::CLASSES;
}

ModuleReferences$JModModuleReader::ModuleReferences$JModModuleReader() {
}

$Class* ModuleReferences$JModModuleReader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0::classInfo$.name)) {
			return ModuleReferences$JModModuleReader$$Lambda$lambda$implList$0::load$(name, initialize);
		}
		if (name->equals(ModuleReferences$JModModuleReader$$Lambda$name$1::classInfo$.name)) {
			return ModuleReferences$JModModuleReader$$Lambda$name$1::load$(name, initialize);
		}
	}
	$loadClass(ModuleReferences$JModModuleReader, name, initialize, &_ModuleReferences$JModModuleReader_ClassInfo_, allocate$ModuleReferences$JModModuleReader);
	return class$;
}

$Class* ModuleReferences$JModModuleReader::class$ = nullptr;

		} // module
	} // internal
} // jdk