#include <jdk/internal/module/ModuleReferences$ExplodedModuleReader.h>

#include <java/io/IOError.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/file/FileVisitOption.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/module/ModuleReferences.h>
#include <jdk/internal/module/Resources.h>
#include <jcpp.h>

#undef MAX_VALUE

using $FileVisitOptionArray = $Array<::java::nio::file::FileVisitOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $IOError = ::java::io::IOError;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $Resources = ::jdk::internal::module::Resources;

namespace jdk {
	namespace internal {
		namespace module {

class ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0 : public $Function {
	$class(ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0, $NO_CLASS_INIT, $Function)
public:
	void init$(ModuleReferences$ExplodedModuleReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* f) override {
		 return $of($nc(inst$)->lambda$list$0($cast($Path, f)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0>());
	}
	ModuleReferences$ExplodedModuleReader* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0, inst$)},
	{}
};
$MethodInfo ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/module/ModuleReferences$ExplodedModuleReader;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0::*)(ModuleReferences$ExplodedModuleReader*)>(&ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0::load$($String* name, bool initialize) {
	$loadClass(ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0::class$ = nullptr;

class ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1 : public $Predicate {
	$class(ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return ModuleReferences$ExplodedModuleReader::lambda$list$1($cast($String, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1::*)()>(&ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1::load$($String* name, bool initialize) {
	$loadClass(ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1::class$ = nullptr;

$FieldInfo _ModuleReferences$ExplodedModuleReader_FieldInfo_[] = {
	{"dir", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferences$ExplodedModuleReader, dir)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ModuleReferences$ExplodedModuleReader, closed)},
	{}
};

$MethodInfo _ModuleReferences$ExplodedModuleReader_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(ModuleReferences$ExplodedModuleReader::*)($Path*)>(&ModuleReferences$ExplodedModuleReader::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(ModuleReferences$ExplodedModuleReader::*)()>(&ModuleReferences$ExplodedModuleReader::ensureOpen)), "java.io.IOException"},
	{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"lambda$list$0", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$String*(ModuleReferences$ExplodedModuleReader::*)($Path*)>(&ModuleReferences$ExplodedModuleReader::lambda$list$0))},
	{"lambda$list$1", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*)>(&ModuleReferences$ExplodedModuleReader::lambda$list$1))},
	{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"open", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/io/InputStream;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/nio/ByteBuffer;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ModuleReferences$ExplodedModuleReader_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleReferences$ExplodedModuleReader", "jdk.internal.module.ModuleReferences", "ExplodedModuleReader", $STATIC},
	{}
};

$ClassInfo _ModuleReferences$ExplodedModuleReader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleReferences$ExplodedModuleReader",
	"java.lang.Object",
	"java.lang.module.ModuleReader",
	_ModuleReferences$ExplodedModuleReader_FieldInfo_,
	_ModuleReferences$ExplodedModuleReader_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleReferences$ExplodedModuleReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleReferences"
};

$Object* allocate$ModuleReferences$ExplodedModuleReader($Class* clazz) {
	return $of($alloc(ModuleReferences$ExplodedModuleReader));
}

void ModuleReferences$ExplodedModuleReader::init$($Path* dir) {
	$useLocalCurrentObjectStackCache();
	$set(this, dir, dir);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		bool unused = $Files::isDirectory(dir, $$new($LinkOptionArray, 0));
	}
}

void ModuleReferences$ExplodedModuleReader::ensureOpen() {
	if (this->closed) {
		$throwNew($IOException, "ModuleReader is closed"_s);
	}
}

$Optional* ModuleReferences$ExplodedModuleReader::find($String* name) {
	$useLocalCurrentObjectStackCache();
	ensureOpen();
	$var($Path, path, $Resources::toFilePath(this->dir, name));
	if (path != nullptr) {
		try {
			return $Optional::of($(path->toUri()));
		} catch ($IOError& e) {
			$throw($cast($IOException, $(e->getCause())));
		}
	} else {
		return $Optional::empty();
	}
}

$Optional* ModuleReferences$ExplodedModuleReader::open($String* name) {
	$useLocalCurrentObjectStackCache();
	ensureOpen();
	$var($Path, path, $Resources::toFilePath(this->dir, name));
	if (path != nullptr) {
		return $Optional::of($($Files::newInputStream(path, $$new($OpenOptionArray, 0))));
	} else {
		return $Optional::empty();
	}
}

$Optional* ModuleReferences$ExplodedModuleReader::read($String* name) {
	$useLocalCurrentObjectStackCache();
	ensureOpen();
	$var($Path, path, $Resources::toFilePath(this->dir, name));
	if (path != nullptr) {
		return $Optional::of($($ByteBuffer::wrap($($Files::readAllBytes(path)))));
	} else {
		return $Optional::empty();
	}
}

$Stream* ModuleReferences$ExplodedModuleReader::list() {
	$useLocalCurrentObjectStackCache();
	ensureOpen();
	return $nc($($nc($($Files::walk(this->dir, $Integer::MAX_VALUE, $$new($FileVisitOptionArray, 0))))->map(static_cast<$Function*>($$new(ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0, this)))))->filter(static_cast<$Predicate*>($$new(ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1)));
}

void ModuleReferences$ExplodedModuleReader::close() {
	this->closed = true;
}

bool ModuleReferences$ExplodedModuleReader::lambda$list$1($String* s) {
	$init(ModuleReferences$ExplodedModuleReader);
	return $nc(s)->length() > 0;
}

$String* ModuleReferences$ExplodedModuleReader::lambda$list$0($Path* f) {
	return $Resources::toResourceName(this->dir, f);
}

ModuleReferences$ExplodedModuleReader::ModuleReferences$ExplodedModuleReader() {
}

$Class* ModuleReferences$ExplodedModuleReader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0::classInfo$.name)) {
			return ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$0::load$(name, initialize);
		}
		if (name->equals(ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1::classInfo$.name)) {
			return ModuleReferences$ExplodedModuleReader$$Lambda$lambda$list$1$1::load$(name, initialize);
		}
	}
	$loadClass(ModuleReferences$ExplodedModuleReader, name, initialize, &_ModuleReferences$ExplodedModuleReader_ClassInfo_, allocate$ModuleReferences$ExplodedModuleReader);
	return class$;
}

$Class* ModuleReferences$ExplodedModuleReader::class$ = nullptr;

		} // module
	} // internal
} // jdk