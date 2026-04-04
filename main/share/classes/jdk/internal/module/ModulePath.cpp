#include <jdk/internal/module/ModulePath.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runtime$Version.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/FindException.h>
#include <java/lang/module/InvalidModuleDescriptorException.h>
#include <java/lang/module/ModuleDescriptor$Builder.h>
#include <java/lang/module/ModuleDescriptor$Version.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/module/ModuleReference.h>
#include <java/net/URI.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileVisitOption.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/BiPredicate.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/jar/Attributes$Name.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/Manifest.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipException.h>
#include <java/util/zip/ZipFile.h>
#include <jdk/internal/jmod/JmodFile$Entry.h>
#include <jdk/internal/jmod/JmodFile$Section.h>
#include <jdk/internal/jmod/JmodFile.h>
#include <jdk/internal/module/Checks.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModuleInfo$Attributes.h>
#include <jdk/internal/module/ModuleInfo.h>
#include <jdk/internal/module/ModulePatcher.h>
#include <jdk/internal/module/ModulePath$Patterns.h>
#include <jdk/internal/module/ModuleReferences.h>
#include <jdk/internal/module/ModuleResolution.h>
#include <jdk/internal/module/ModuleTarget.h>
#include <jdk/internal/perf/PerfCounter.h>
#include <sun/nio/cs/UTF_8.h>
#include <jcpp.h>

#undef AUTOMATIC_MODULE_NAME
#undef CLASSES
#undef DASH_VERSION
#undef FALSE
#undef INSTANCE
#undef LEADING_DOTS
#undef MAIN_CLASS
#undef MAX_VALUE
#undef MODULE_INFO
#undef NON_ALPHANUM
#undef OPEN_READ
#undef REPEATING_DOTS
#undef SERVICES_PREFIX
#undef TRAILING_DOTS
#undef TRUE

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $FileVisitOptionArray = $Array<::java::nio::file::FileVisitOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $PathArray = $Array<::java::nio::file::Path>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime$Version = ::java::lang::Runtime$Version;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $FindException = ::java::lang::module::FindException;
using $InvalidModuleDescriptorException = ::java::lang::module::InvalidModuleDescriptorException;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Builder = ::java::lang::module::ModuleDescriptor$Builder;
using $ModuleDescriptor$Version = ::java::lang::module::ModuleDescriptor$Version;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $URI = ::java::net::URI;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $Files = ::java::nio::file::Files;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $BiPredicate = ::java::util::function::BiPredicate;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Attributes = ::java::util::jar::Attributes;
using $Attributes$Name = ::java::util::jar::Attributes$Name;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $Manifest = ::java::util::jar::Manifest;
using $Matcher = ::java::util::regex::Matcher;
using $Collectors = ::java::util::stream::Collectors;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipException = ::java::util::zip::ZipException;
using $ZipFile = ::java::util::zip::ZipFile;
using $JmodFile = ::jdk::internal::jmod::JmodFile;
using $JmodFile$Entry = ::jdk::internal::jmod::JmodFile$Entry;
using $JmodFile$Section = ::jdk::internal::jmod::JmodFile$Section;
using $Checks = ::jdk::internal::module::Checks;
using $ModuleHashes = ::jdk::internal::module::ModuleHashes;
using $ModuleInfo = ::jdk::internal::module::ModuleInfo;
using $ModuleInfo$Attributes = ::jdk::internal::module::ModuleInfo$Attributes;
using $ModulePatcher = ::jdk::internal::module::ModulePatcher;
using $ModulePath$Patterns = ::jdk::internal::module::ModulePath$Patterns;
using $ModuleReferences = ::jdk::internal::module::ModuleReferences;
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;
using $ModuleTarget = ::jdk::internal::module::ModuleTarget;
using $PerfCounter = ::jdk::internal::perf::PerfCounter;
using $UTF_8 = ::sun::nio::cs::UTF_8;

namespace jdk {
	namespace internal {
		namespace module {

class ModulePath$$Lambda$lambda$jmodPackages$0 : public $Predicate {
	$class(ModulePath$$Lambda$lambda$jmodPackages$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return ModulePath::lambda$jmodPackages$0($cast($JmodFile$Entry, e));
	}
};
$Class* ModulePath$$Lambda$lambda$jmodPackages$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$lambda$jmodPackages$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$lambda$jmodPackages$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$lambda$jmodPackages$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$lambda$jmodPackages$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$lambda$jmodPackages$0);
	});
	return class$;
}
$Class* ModulePath$$Lambda$lambda$jmodPackages$0::class$ = nullptr;

class ModulePath$$Lambda$name$1 : public $Function {
	$class(ModulePath$$Lambda$name$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($JmodFile$Entry, inst$)->name());
	}
};
$Class* ModulePath$$Lambda$name$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$name$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$name$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$name$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$name$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$name$1);
	});
	return class$;
}
$Class* ModulePath$$Lambda$name$1::class$ = nullptr;

class ModulePath$$Lambda$toPackageName$2 : public $Function {
	$class(ModulePath$$Lambda$toPackageName$2, $NO_CLASS_INIT, $Function)
public:
	void init$(ModulePath* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* name) override {
		 return $nc(inst$)->toPackageName($cast($String, name));
	}
	ModulePath* inst$ = nullptr;
};
$Class* ModulePath$$Lambda$toPackageName$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModulePath$$Lambda$toPackageName$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModulePath;)V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$toPackageName$2, init$, void, ModulePath*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$toPackageName$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$toPackageName$2",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$toPackageName$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$toPackageName$2);
	});
	return class$;
}
$Class* ModulePath$$Lambda$toPackageName$2::class$ = nullptr;

class ModulePath$$Lambda$stream$3 : public $Function {
	$class(ModulePath$$Lambda$stream$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($Optional, inst$)->stream();
	}
};
$Class* ModulePath$$Lambda$stream$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$stream$3, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$stream$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$stream$3",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$stream$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$stream$3);
	});
	return class$;
}
$Class* ModulePath$$Lambda$stream$3::class$ = nullptr;

class ModulePath$$Lambda$lambda$readJMod$1$4 : public $Supplier {
	$class(ModulePath$$Lambda$lambda$readJMod$1$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ModulePath* inst, $JmodFile* jf) {
		$set(this, inst$, inst);
		$set(this, jf, jf);
	}
	virtual $Object* get() override {
		 return $nc(inst$)->lambda$readJMod$1(jf);
	}
	ModulePath* inst$ = nullptr;
	$JmodFile* jf = nullptr;
};
$Class* ModulePath$$Lambda$lambda$readJMod$1$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModulePath$$Lambda$lambda$readJMod$1$4, inst$)},
		{"jf", "Ljdk/internal/jmod/JmodFile;", nullptr, $PUBLIC, $field(ModulePath$$Lambda$lambda$readJMod$1$4, jf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModulePath;Ljdk/internal/jmod/JmodFile;)V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$lambda$readJMod$1$4, init$, void, ModulePath*, $JmodFile*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$lambda$readJMod$1$4, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$lambda$readJMod$1$4",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$lambda$readJMod$1$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$lambda$readJMod$1$4);
	});
	return class$;
}
$Class* ModulePath$$Lambda$lambda$readJMod$1$4::class$ = nullptr;

class ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5 : public $Predicate {
	$class(ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return ModulePath::lambda$deriveModuleDescriptor$2($cast($JarEntry, e));
	}
};
$Class* ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5);
	});
	return class$;
}
$Class* ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5::class$ = nullptr;

class ModulePath$$Lambda$getName$6 : public $Function {
	$class(ModulePath$$Lambda$getName$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ZipEntry, inst$)->getName());
	}
};
$Class* ModulePath$$Lambda$getName$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$getName$6, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$getName$6, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$getName$6",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$getName$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$getName$6);
	});
	return class$;
}
$Class* ModulePath$$Lambda$getName$6::class$ = nullptr;

class ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7 : public $Predicate {
	$class(ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return ModulePath::lambda$deriveModuleDescriptor$3($cast($String, e));
	}
};
$Class* ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7);
	});
	return class$;
}
$Class* ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7::class$ = nullptr;

class ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8 : public $Predicate {
	$class(ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return ModulePath::lambda$deriveModuleDescriptor$4($cast($String, e));
	}
};
$Class* ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8);
	});
	return class$;
}
$Class* ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8::class$ = nullptr;

class ModulePath$$Lambda$toServiceName$9 : public $Function {
	$class(ModulePath$$Lambda$toServiceName$9, $NO_CLASS_INIT, $Function)
public:
	void init$(ModulePath* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* cf) override {
		 return $nc(inst$)->toServiceName($cast($String, cf));
	}
	ModulePath* inst$ = nullptr;
};
$Class* ModulePath$$Lambda$toServiceName$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModulePath$$Lambda$toServiceName$9, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModulePath;)V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$toServiceName$9, init$, void, ModulePath*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$toServiceName$9, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$toServiceName$9",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$toServiceName$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$toServiceName$9);
	});
	return class$;
}
$Class* ModulePath$$Lambda$toServiceName$9::class$ = nullptr;

class ModulePath$$Lambda$lambda$readJar$6$10 : public $Supplier {
	$class(ModulePath$$Lambda$lambda$readJar$6$10, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ModulePath* inst, $JarFile* jf) {
		$set(this, inst$, inst);
		$set(this, jf, jf);
	}
	virtual $Object* get() override {
		 return $nc(inst$)->lambda$readJar$6(jf);
	}
	ModulePath* inst$ = nullptr;
	$JarFile* jf = nullptr;
};
$Class* ModulePath$$Lambda$lambda$readJar$6$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModulePath$$Lambda$lambda$readJar$6$10, inst$)},
		{"jf", "Ljava/util/jar/JarFile;", nullptr, $PUBLIC, $field(ModulePath$$Lambda$lambda$readJar$6$10, jf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModulePath;Ljava/util/jar/JarFile;)V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$lambda$readJar$6$10, init$, void, ModulePath*, $JarFile*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$lambda$readJar$6$10, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$lambda$readJar$6$10",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$lambda$readJar$6$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$lambda$readJar$6$10);
	});
	return class$;
}
$Class* ModulePath$$Lambda$lambda$readJar$6$10::class$ = nullptr;

class ModulePath$$Lambda$lambda$explodedPackages$7$11 : public $BiPredicate {
	$class(ModulePath$$Lambda$lambda$explodedPackages$7$11, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$(ModulePath* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* path, Object$* attrs) override {
		 return $nc(inst$)->lambda$explodedPackages$7($cast($Path, path), $cast($BasicFileAttributes, attrs));
	}
	ModulePath* inst$ = nullptr;
};
$Class* ModulePath$$Lambda$lambda$explodedPackages$7$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModulePath$$Lambda$lambda$explodedPackages$7$11, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModulePath;)V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$lambda$explodedPackages$7$11, init$, void, ModulePath*)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$lambda$explodedPackages$7$11, test, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$lambda$explodedPackages$7$11",
		"java.lang.Object",
		"java.util.function.BiPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$lambda$explodedPackages$7$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$lambda$explodedPackages$7$11);
	});
	return class$;
}
$Class* ModulePath$$Lambda$lambda$explodedPackages$7$11::class$ = nullptr;

class ModulePath$$Lambda$lambda$explodedPackages$8$12 : public $Function {
	$class(ModulePath$$Lambda$lambda$explodedPackages$8$12, $NO_CLASS_INIT, $Function)
public:
	void init$($Path* dir) {
		$set(this, dir, dir);
	}
	virtual $Object* apply(Object$* path) override {
		 return $of(ModulePath::lambda$explodedPackages$8(dir, $cast($Path, path)));
	}
	$Path* dir = nullptr;
};
$Class* ModulePath$$Lambda$lambda$explodedPackages$8$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dir", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(ModulePath$$Lambda$lambda$explodedPackages$8$12, dir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$lambda$explodedPackages$8$12, init$, void, $Path*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$lambda$explodedPackages$8$12, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$lambda$explodedPackages$8$12",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$lambda$explodedPackages$8$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$lambda$explodedPackages$8$12);
	});
	return class$;
}
$Class* ModulePath$$Lambda$lambda$explodedPackages$8$12::class$ = nullptr;

class ModulePath$$Lambda$toPackageName$13 : public $Function {
	$class(ModulePath$$Lambda$toPackageName$13, $NO_CLASS_INIT, $Function)
public:
	void init$(ModulePath* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* file) override {
		 return $nc(inst$)->toPackageName($cast($Path, file));
	}
	ModulePath* inst$ = nullptr;
};
$Class* ModulePath$$Lambda$toPackageName$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModulePath$$Lambda$toPackageName$13, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModulePath;)V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$toPackageName$13, init$, void, ModulePath*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$toPackageName$13, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$toPackageName$13",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$toPackageName$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$toPackageName$13);
	});
	return class$;
}
$Class* ModulePath$$Lambda$toPackageName$13::class$ = nullptr;

class ModulePath$$Lambda$lambda$readExplodedModule$9$14 : public $Supplier {
	$class(ModulePath$$Lambda$lambda$readExplodedModule$9$14, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ModulePath* inst, $Path* dir) {
		$set(this, inst$, inst);
		$set(this, dir, dir);
	}
	virtual $Object* get() override {
		 return $nc(inst$)->lambda$readExplodedModule$9(dir);
	}
	ModulePath* inst$ = nullptr;
	$Path* dir = nullptr;
};
$Class* ModulePath$$Lambda$lambda$readExplodedModule$9$14::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModulePath$$Lambda$lambda$readExplodedModule$9$14, inst$)},
		{"dir", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(ModulePath$$Lambda$lambda$readExplodedModule$9$14, dir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModulePath;Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(ModulePath$$Lambda$lambda$readExplodedModule$9$14, init$, void, ModulePath*, $Path*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModulePath$$Lambda$lambda$readExplodedModule$9$14, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModulePath$$Lambda$lambda$readExplodedModule$9$14",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModulePath$$Lambda$lambda$readExplodedModule$9$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath$$Lambda$lambda$readExplodedModule$9$14);
	});
	return class$;
}
$Class* ModulePath$$Lambda$lambda$readExplodedModule$9$14::class$ = nullptr;

bool ModulePath::$assertionsDisabled = false;
$String* ModulePath::MODULE_INFO = nullptr;
$String* ModulePath::SERVICES_PREFIX = nullptr;
$Attributes$Name* ModulePath::AUTOMATIC_MODULE_NAME = nullptr;
$PerfCounter* ModulePath::scanTime = nullptr;
$PerfCounter* ModulePath::moduleCount = nullptr;

void ModulePath::init$($Runtime$Version* version, bool isLinkPhase, $ModulePatcher* patcher, $PathArray* entries) {
	$useLocalObjectStack();
	$set(this, cachedModules, $new($HashMap));
	$set(this, releaseVersion, version);
	this->isLinkPhase = isLinkPhase;
	$set(this, patcher, patcher);
	$set(this, entries, $cast($PathArray, $nc(entries)->clone()));
	{
		$var($PathArray, arr$, this->entries);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Path, entry, arr$->get(i$));
			{
				$Objects::requireNonNull(entry);
			}
		}
	}
}

$ModuleFinder* ModulePath::of($ModulePatcher* patcher, $PathArray* entries) {
	$init(ModulePath);
	return $new(ModulePath, $($JarFile::runtimeVersion()), false, patcher, entries);
}

$ModuleFinder* ModulePath::of($PathArray* entries) {
	$init(ModulePath);
	return of(($ModulePatcher*)nullptr, entries);
}

$ModuleFinder* ModulePath::of($Runtime$Version* version, bool isLinkPhase, $PathArray* entries) {
	$init(ModulePath);
	return $new(ModulePath, version, isLinkPhase, nullptr, entries);
}

$Optional* ModulePath::find($String* name) {
	$Objects::requireNonNull(name);
	$var($ModuleReference, m, $cast($ModuleReference, this->cachedModules->get(name)));
	if (m != nullptr) {
		return $Optional::of(m);
	}
	while (hasNextEntry()) {
		scanNextEntry();
		$assign(m, $cast($ModuleReference, this->cachedModules->get(name)));
		if (m != nullptr) {
			return $Optional::of(m);
		}
	}
	return $Optional::empty();
}

$Set* ModulePath::findAll() {
	$useLocalObjectStack();
	while (hasNextEntry()) {
		scanNextEntry();
	}
	return $cast($Set, $$nc($$nc(this->cachedModules->values())->stream())->collect($($Collectors::toSet())));
}

bool ModulePath::hasNextEntry() {
	return this->next < $nc(this->entries)->length;
}

void ModulePath::scanNextEntry() {
	$useLocalObjectStack();
	if (hasNextEntry()) {
		int64_t t0 = $System::nanoTime();
		$var($Path, entry, $nc(this->entries)->get(this->next));
		$var($Map, modules, scan(entry));
		++this->next;
		int32_t initialSize = this->cachedModules->size();
		{
			$var($Iterator, i$, $$nc($nc(modules)->entrySet())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					$var($Object, var$0, $cast($String, $nc(e)->getKey()));
					this->cachedModules->putIfAbsent(var$0, $$cast($ModuleReference, e->getValue()));
				}
			}
		}
		int32_t added = this->cachedModules->size() - initialSize;
		$nc(ModulePath::moduleCount)->add(added);
		$nc(ModulePath::scanTime)->addElapsedTimeFrom(t0);
	}
}

$Map* ModulePath::scan($Path* entry) {
	$useLocalObjectStack();
	$var($BasicFileAttributes, attrs, nullptr);
	try {
		$load($BasicFileAttributes);
		$assign(attrs, $Files::readAttributes(entry, $BasicFileAttributes::class$, $$new($LinkOptionArray, 0)));
	} catch ($NoSuchFileException& e) {
		return $Map::of();
	} catch ($IOException& ioe) {
		$throwNew($FindException, ioe);
	}
	try {
		if ($nc(attrs)->isDirectory()) {
			$var($Path, mi, $nc(entry)->resolve(ModulePath::MODULE_INFO));
			if (!$Files::exists(mi, $$new($LinkOptionArray, 0))) {
				return scanDirectory(entry);
			}
		}
		$var($ModuleReference, mref, readModule(entry, attrs));
		if (mref != nullptr) {
			$var($String, name, $$nc(mref->descriptor())->name());
			return $Map::of(name, mref);
		}
		$var($String, msg, nullptr);
		if (!this->isLinkPhase && $$nc($nc(entry)->toString())->endsWith(".jmod"_s)) {
			$assign(msg, "JMOD format not supported at execution time"_s);
		} else {
			$assign(msg, "Module format not recognized"_s);
		}
		$throwNew($FindException, $$str({msg, ": "_s, entry}));
	} catch ($IOException& ioe) {
		$throwNew($FindException, ioe);
	}
	$shouldNotReachHere();
}

$Map* ModulePath::scanDirectory($Path* dir) {
	$useLocalObjectStack();
	$var($Map, nameToReference, $new($HashMap));
	{
		$var($DirectoryStream, stream, $Files::newDirectoryStream(dir));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($Iterator, i$, $nc(stream)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Path, entry, $cast($Path, i$->next()));
					{
						$var($BasicFileAttributes, attrs, nullptr);
						try {
							$load($BasicFileAttributes);
							$assign(attrs, $Files::readAttributes(entry, $BasicFileAttributes::class$, $$new($LinkOptionArray, 0)));
						} catch ($NoSuchFileException& ignore) {
							continue;
						}
						$var($ModuleReference, mref, readModule(entry, attrs));
						if (mref != nullptr) {
							$var($String, name, $$nc(mref->descriptor())->name());
							$var($ModuleReference, previous, $cast($ModuleReference, nameToReference->put(name, mref)));
							if (previous != nullptr) {
								$var($String, fn1, fileName(mref));
								$var($String, fn2, fileName(previous));
								$throwNew($FindException, $$str({"Two versions of module "_s, name, " found in "_s, dir, " ("_s, fn1, " and "_s, fn2, ")"_s}));
							}
						}
					}
				}
			} catch ($Throwable& t$) {
				if (stream != nullptr) {
					try {
						stream->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (stream != nullptr) {
				stream->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return nameToReference;
}

$ModuleReference* ModulePath::readModule($Path* entry, $BasicFileAttributes* attrs) {
	$useLocalObjectStack();
	try {
		if ($nc(attrs)->isDirectory()) {
			return readExplodedModule(entry);
		}
		if (attrs->isRegularFile()) {
			$var($String, fn, $$nc($nc(entry)->getFileName())->toString());
			bool isDefaultFileSystem = this->isDefaultFileSystem(entry);
			if ($nc(fn)->endsWith(".jar"_s)) {
				if (isDefaultFileSystem) {
					return readJar(entry);
				} else {
					$var($Path, tmpdir, $Files::createTempDirectory("mlib"_s, $$new($FileAttributeArray, 0)));
					$var($Path, target, $Files::copy(entry, $($nc(tmpdir)->resolve(fn)), $$new($CopyOptionArray, 0)));
					return readJar(target);
				}
			}
			if (isDefaultFileSystem && this->isLinkPhase && fn->endsWith(".jmod"_s)) {
				return readJMod(entry);
			}
		}
		return nullptr;
	} catch ($InvalidModuleDescriptorException& e) {
		$throwNew($FindException, $$str({"Error reading module: "_s, entry}), e);
	}
	$shouldNotReachHere();
}

$String* ModulePath::fileName($ModuleReference* mref) {
	$useLocalObjectStack();
	$var($URI, uri, $cast($URI, $$nc($nc(mref)->location())->orElse(nullptr)));
	if (uri != nullptr) {
		if ($$nc(uri->getScheme())->equalsIgnoreCase("file"_s)) {
			$var($Path, file, $Path::of(uri));
			return $$nc($nc(file)->getFileName())->toString();
		} else {
			return uri->toString();
		}
	} else {
		return "<unknown>"_s;
	}
}

$Set* ModulePath::jmodPackages($JmodFile* jf) {
	$useLocalObjectStack();
	return $cast($Set, $$nc($$nc($$nc($$nc($$nc($nc(jf)->stream())->filter($$new(ModulePath$$Lambda$lambda$jmodPackages$0)))->map($$new(ModulePath$$Lambda$name$1)))->map($$new(ModulePath$$Lambda$toPackageName$2, this)))->flatMap($$new(ModulePath$$Lambda$stream$3)))->collect($($Collectors::toSet())));
}

$ModuleReference* ModulePath::readJMod($Path* file) {
	$useLocalObjectStack();
	{
		$var($JmodFile, jf, $new($JmodFile, file));
		$var($Throwable, var$0, nullptr);
		$var($ModuleReference, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$var($ModuleInfo$Attributes, attrs, nullptr);
				{
					$init($JmodFile$Section);
					$var($InputStream, in, jf->getInputStream($JmodFile$Section::CLASSES, ModulePath::MODULE_INFO));
					$var($Throwable, var$3, nullptr);
					try {
						try {
							$assign(attrs, $ModuleInfo::read(in, $$new(ModulePath$$Lambda$lambda$readJMod$1$4, this, jf)));
						} catch ($Throwable& t$) {
							if (in != nullptr) {
								try {
									in->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$4) {
						$assign(var$3, var$4);
					} /*finally*/ {
						if (in != nullptr) {
							in->close();
						}
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
				}
				$assign(var$2, $ModuleReferences::newJModModule(attrs, file));
				return$1 = true;
				goto $finally;
			} catch ($Throwable& t$) {
				try {
					jf->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			jf->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Optional* ModulePath::toServiceName($String* cf) {
	$useLocalObjectStack();
	if (!ModulePath::$assertionsDisabled && !$nc(cf)->startsWith(ModulePath::SERVICES_PREFIX)) {
		$throwNew($AssertionError);
	}
	int32_t index = $nc(cf)->lastIndexOf("/"_s) + 1;
	if (index < cf->length()) {
		$var($String, prefix, cf->substring(0, index));
		if (prefix->equals(ModulePath::SERVICES_PREFIX)) {
			$var($String, sn, cf->substring(index));
			if ($Checks::isClassName(sn)) {
				return $Optional::of(sn);
			}
		}
	}
	return $Optional::empty();
}

$String* ModulePath::nextLine($BufferedReader* reader) {
	$var($String, ln, $nc(reader)->readLine());
	if (ln != nullptr) {
		int32_t ci = ln->indexOf(u'#');
		if (ci >= 0) {
			$assign(ln, ln->substring(0, ci));
		}
		$assign(ln, ln->trim());
	}
	return ln;
}

$ModuleDescriptor* ModulePath::deriveModuleDescriptor($JarFile* jf) {
	$useLocalObjectStack();
	$var($Manifest, man, $nc(jf)->getManifest());
	$var($Attributes, attrs, nullptr);
	$var($String, moduleName, nullptr);
	if (man != nullptr) {
		$assign(attrs, man->getMainAttributes());
		if (attrs != nullptr) {
			$assign(moduleName, attrs->getValue(ModulePath::AUTOMATIC_MODULE_NAME));
		}
	}
	$var($String, fn, jf->getName());
	$init($File);
	int32_t i = $nc(fn)->lastIndexOf($File::separator);
	if (i != -1) {
		$assign(fn, fn->substring(i + 1));
	}
	$var($String, name, fn->substring(0, fn->length() - 4));
	$var($String, vs, nullptr);
	$init($ModulePath$Patterns);
	$var($Matcher, matcher, $nc($ModulePath$Patterns::DASH_VERSION)->matcher(name));
	if ($nc(matcher)->find()) {
		int32_t start = matcher->start();
		try {
			$var($String, tail, name->substring(start + 1));
			$ModuleDescriptor$Version::parse(tail);
			$assign(vs, tail);
		} catch ($IllegalArgumentException& ignore) {
		}
		$assign(name, name->substring(0, start));
	}
	$var($ModuleDescriptor$Builder, builder, nullptr);
	if (moduleName != nullptr) {
		try {
			$assign(builder, $ModuleDescriptor::newAutomaticModule(moduleName));
		} catch ($IllegalArgumentException& e) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append(ModulePath::AUTOMATIC_MODULE_NAME);
			var$0->append(": "_s);
			var$0->append($(e->getMessage()));
			$throwNew($FindException, $$str(var$0));
		}
	} else {
		$assign(builder, $ModuleDescriptor::newAutomaticModule($(cleanModuleName(name))));
	}
	if (vs != nullptr) {
		$nc(builder)->version(vs);
	}
	$var($Predicate, var$1, $new(ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8));
	$var($Map, map, $cast($Map, $$nc($$nc($$nc($$nc(jf->versionedStream())->filter($$new(ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5)))->map($$new(ModulePath$$Lambda$getName$6)))->filter($$new(ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7)))->collect($($Collectors::partitioningBy(var$1, $($Collectors::toSet()))))));
	$var($Set, classFiles, $cast($Set, $nc(map)->get($Boolean::FALSE)));
	$var($Set, configFiles, $cast($Set, map->get($Boolean::TRUE)));
	$var($Set, packages, $cast($Set, $$nc($$nc($$nc($$nc($nc(classFiles)->stream())->map($$new(ModulePath$$Lambda$toPackageName$2, this)))->flatMap($$new(ModulePath$$Lambda$stream$3)))->distinct())->collect($($Collectors::toSet()))));
	$nc(builder)->packages(packages);
	$var($Set, serviceNames, $cast($Set, $$nc($$nc($$nc($nc(configFiles)->stream())->map($$new(ModulePath$$Lambda$toServiceName$9, this)))->flatMap($$new(ModulePath$$Lambda$stream$3)))->collect($($Collectors::toSet()))));
	{
		$var($Iterator, i$, $nc(serviceNames)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, sn, $cast($String, i$->next()));
			{
				$var($JarEntry, entry, jf->getJarEntry($$str({ModulePath::SERVICES_PREFIX, sn})));
				$var($List, providerClasses, $new($ArrayList));
				{
					$var($InputStream, in, jf->getInputStream(entry));
					$var($Throwable, var$2, nullptr);
					try {
						try {
							$init($UTF_8);
							$var($BufferedReader, reader, $new($BufferedReader, $$new($InputStreamReader, in, $UTF_8::INSTANCE)));
							$var($String, cn, nullptr);
							while (($assign(cn, nextLine(reader))) != nullptr) {
								if (!$nc(cn)->isEmpty()) {
									$var($String, pn, packageName(cn));
									if (!$nc(packages)->contains(pn)) {
										$var($String, msg, $str({"Provider class "_s, cn, " not in module"_s}));
										$throwNew($InvalidModuleDescriptorException, msg);
									}
									providerClasses->add(cn);
								}
							}
						} catch ($Throwable& t$) {
							if (in != nullptr) {
								try {
									in->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$3) {
						$assign(var$2, var$3);
					} /*finally*/ {
						if (in != nullptr) {
							in->close();
						}
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
				}
				if (!providerClasses->isEmpty()) {
					builder->provides(sn, providerClasses);
				}
			}
		}
	}
	if (attrs != nullptr) {
		$init($Attributes$Name);
		$var($String, mainClass, attrs->getValue($Attributes$Name::MAIN_CLASS));
		if (mainClass != nullptr) {
			$assign(mainClass, mainClass->replace(u'/', u'.'));
			if ($Checks::isClassName(mainClass)) {
				$var($String, pn, packageName(mainClass));
				if ($nc(packages)->contains(pn)) {
					builder->mainClass(mainClass);
				}
			}
		}
	}
	return builder->build();
}

$String* ModulePath::cleanModuleName($String* mn$renamed) {
	$init(ModulePath);
	$useLocalObjectStack();
	$var($String, mn, mn$renamed);
	$init($ModulePath$Patterns);
	$assign(mn, $$nc($nc($ModulePath$Patterns::NON_ALPHANUM)->matcher(mn))->replaceAll("."_s));
	$assign(mn, $$nc($nc($ModulePath$Patterns::REPEATING_DOTS)->matcher(mn))->replaceAll("."_s));
	bool var$0 = !$nc(mn)->isEmpty();
	if (var$0 && mn->charAt(0) == u'.') {
		$assign(mn, $$nc($nc($ModulePath$Patterns::LEADING_DOTS)->matcher(mn))->replaceAll(""_s));
	}
	int32_t len = $nc(mn)->length();
	if (len > 0 && mn->charAt(len - 1) == u'.') {
		$assign(mn, $$nc($nc($ModulePath$Patterns::TRAILING_DOTS)->matcher(mn))->replaceAll(""_s));
	}
	return mn;
}

$Set* ModulePath::jarPackages($JarFile* jf) {
	$useLocalObjectStack();
	return $cast($Set, $$nc($$nc($$nc($$nc($$nc($nc(jf)->versionedStream())->filter($$new(ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5)))->map($$new(ModulePath$$Lambda$getName$6)))->map($$new(ModulePath$$Lambda$toPackageName$2, this)))->flatMap($$new(ModulePath$$Lambda$stream$3)))->collect($($Collectors::toSet())));
}

$ModuleReference* ModulePath::readJar($Path* file) {
	$useLocalObjectStack();
	try {
		$var($JarFile, jf, $new($JarFile, $($nc(file)->toFile()), true, $ZipFile::OPEN_READ, this->releaseVersion));
		$var($Throwable, var$0, nullptr);
		$var($ModuleReference, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$var($ModuleInfo$Attributes, attrs, nullptr);
				$var($JarEntry, entry, jf->getJarEntry(ModulePath::MODULE_INFO));
				if (entry == nullptr) {
					try {
						$var($ModuleDescriptor, md, deriveModuleDescriptor(jf));
						$assign(attrs, $new($ModuleInfo$Attributes, md, nullptr, nullptr, nullptr));
					} catch ($RuntimeException& e) {
						$throwNew($FindException, $$str({"Unable to derive module descriptor for "_s, $(jf->getName())}), e);
					}
				} else {
					$var($InputStream, var$3, jf->getInputStream(entry));
					$assign(attrs, $ModuleInfo::read(var$3, $$new(ModulePath$$Lambda$lambda$readJar$6$10, this, jf)));
				}
				$assign(var$2, $ModuleReferences::newJarModule(attrs, this->patcher, file));
				return$1 = true;
				goto $finally;
			} catch ($Throwable& t$) {
				try {
					jf->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			jf->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	} catch ($ZipException& e) {
		$throwNew($FindException, $$str({"Error reading "_s, file}), e);
	}
	$shouldNotReachHere();
}

$Set* ModulePath::explodedPackages($Path* dir) {
	$useLocalObjectStack();
	try {
		return $cast($Set, $$nc($$nc($$nc($$nc($Files::find(dir, $Integer::MAX_VALUE, ($$new(ModulePath$$Lambda$lambda$explodedPackages$7$11, this)), $$new($FileVisitOptionArray, 0)))->map($$new(ModulePath$$Lambda$lambda$explodedPackages$8$12, dir)))->map($$new(ModulePath$$Lambda$toPackageName$13, this)))->flatMap($$new(ModulePath$$Lambda$stream$3)))->collect($($Collectors::toSet())));
	} catch ($IOException& x) {
		$throwNew($UncheckedIOException, x);
	}
	$shouldNotReachHere();
}

$ModuleReference* ModulePath::readExplodedModule($Path* dir) {
	$useLocalObjectStack();
	$var($Path, mi, $nc(dir)->resolve(ModulePath::MODULE_INFO));
	$var($ModuleInfo$Attributes, attrs, nullptr);
	try {
		$var($InputStream, in, $Files::newInputStream(mi, $$new($OpenOptionArray, 0)));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($InputStream, var$1, $new($BufferedInputStream, in));
				$assign(attrs, $ModuleInfo::read(var$1, $$new(ModulePath$$Lambda$lambda$readExplodedModule$9$14, this, dir)));
			} catch ($Throwable& t$) {
				if (in != nullptr) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			if (in != nullptr) {
				in->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($NoSuchFileException& e) {
		return nullptr;
	}
	return $ModuleReferences::newExplodedModule(attrs, this->patcher, dir);
}

$String* ModulePath::packageName($String* cn) {
	$init(ModulePath);
	int32_t index = $nc(cn)->lastIndexOf(u'.');
	return (index == -1) ? ""_s : cn->substring(0, index);
}

$Optional* ModulePath::toPackageName($String* name) {
	$useLocalObjectStack();
	if (!ModulePath::$assertionsDisabled && ! !$nc(name)->endsWith("/"_s)) {
		$throwNew($AssertionError);
	}
	int32_t index = $nc(name)->lastIndexOf("/"_s);
	if (index == -1) {
		bool var$0 = name->endsWith(".class"_s);
		if (var$0 && !name->equals(ModulePath::MODULE_INFO)) {
			$var($String, msg, $str({name, " found in top-level directory (unnamed package not allowed in module)"_s}));
			$throwNew($InvalidModuleDescriptorException, msg);
		}
		return $Optional::empty();
	}
	$var($String, pn, $(name->substring(0, index))->replace(u'/', u'.'));
	if ($Checks::isPackageName(pn)) {
		return $Optional::of(pn);
	} else {
		return $Optional::empty();
	}
}

$Optional* ModulePath::toPackageName($Path* file) {
	$useLocalObjectStack();
	if (!ModulePath::$assertionsDisabled && !($nc(file)->getRoot() == nullptr)) {
		$throwNew($AssertionError);
	}
	$var($Path, parent, $nc(file)->getParent());
	if (parent == nullptr) {
		$var($String, name, file->toString());
		bool var$0 = $nc(name)->endsWith(".class"_s);
		if (var$0 && !name->equals(ModulePath::MODULE_INFO)) {
			$var($String, msg, $str({name, " found in top-level directory (unnamed package not allowed in module)"_s}));
			$throwNew($InvalidModuleDescriptorException, msg);
		}
		return $Optional::empty();
	}
	$init($File);
	$var($String, pn, $$nc($nc(parent)->toString())->replace($File::separatorChar, u'.'));
	if ($Checks::isPackageName(pn)) {
		return $Optional::of(pn);
	} else {
		return $Optional::empty();
	}
}

bool ModulePath::isHidden($Path* file) {
	try {
		return $Files::isHidden(file);
	} catch ($IOException& ioe) {
		return false;
	}
	$shouldNotReachHere();
}

bool ModulePath::isDefaultFileSystem($Path* path) {
	$useLocalObjectStack();
	return $$nc($$nc($$nc($nc(path)->getFileSystem())->provider())->getScheme())->equalsIgnoreCase("file"_s);
}

$Set* ModulePath::lambda$readExplodedModule$9($Path* dir) {
	return explodedPackages(dir);
}

$Path* ModulePath::lambda$explodedPackages$8($Path* dir, $Path* path) {
	$init(ModulePath);
	return $nc(dir)->relativize(path);
}

bool ModulePath::lambda$explodedPackages$7($Path* path, $BasicFileAttributes* attrs) {
	bool var$0 = $nc(attrs)->isRegularFile();
	return var$0 && !isHidden(path);
}

$Set* ModulePath::lambda$readJar$6($JarFile* jf) {
	return jarPackages(jf);
}

bool ModulePath::lambda$deriveModuleDescriptor$4($String* e) {
	$init(ModulePath);
	return $nc(e)->startsWith(ModulePath::SERVICES_PREFIX);
}

bool ModulePath::lambda$deriveModuleDescriptor$3($String* e) {
	$init(ModulePath);
	bool var$0 = $nc(e)->endsWith(".class"_s);
	return (var$0 ^ e->startsWith(ModulePath::SERVICES_PREFIX));
}

bool ModulePath::lambda$deriveModuleDescriptor$2($JarEntry* e) {
	$init(ModulePath);
	return !$nc(e)->isDirectory();
}

$Set* ModulePath::lambda$readJMod$1($JmodFile* jf) {
	return jmodPackages(jf);
}

bool ModulePath::lambda$jmodPackages$0($JmodFile$Entry* e) {
	$init(ModulePath);
	$init($JmodFile$Section);
	return $nc(e)->section() == $JmodFile$Section::CLASSES;
}

void ModulePath::clinit$($Class* clazz) {
	$assignStatic(ModulePath::MODULE_INFO, "module-info.class"_s);
	$assignStatic(ModulePath::SERVICES_PREFIX, "META-INF/services/"_s);
	ModulePath::$assertionsDisabled = !ModulePath::class$->desiredAssertionStatus();
	$assignStatic(ModulePath::AUTOMATIC_MODULE_NAME, $new($Attributes$Name, "Automatic-Module-Name"_s));
	$assignStatic(ModulePath::scanTime, $PerfCounter::newPerfCounter("jdk.module.finder.modulepath.scanTime"_s));
	$assignStatic(ModulePath::moduleCount, $PerfCounter::newPerfCounter("jdk.module.finder.modulepath.modules"_s));
}

ModulePath::ModulePath() {
}

$Class* ModulePath::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$lambda$jmodPackages$0")) {
			return ModulePath$$Lambda$lambda$jmodPackages$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$name$1")) {
			return ModulePath$$Lambda$name$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$toPackageName$2")) {
			return ModulePath$$Lambda$toPackageName$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$stream$3")) {
			return ModulePath$$Lambda$stream$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$lambda$readJMod$1$4")) {
			return ModulePath$$Lambda$lambda$readJMod$1$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5")) {
			return ModulePath$$Lambda$lambda$deriveModuleDescriptor$2$5::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$getName$6")) {
			return ModulePath$$Lambda$getName$6::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7")) {
			return ModulePath$$Lambda$lambda$deriveModuleDescriptor$3$7::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8")) {
			return ModulePath$$Lambda$lambda$deriveModuleDescriptor$4$8::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$toServiceName$9")) {
			return ModulePath$$Lambda$toServiceName$9::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$lambda$readJar$6$10")) {
			return ModulePath$$Lambda$lambda$readJar$6$10::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$lambda$explodedPackages$7$11")) {
			return ModulePath$$Lambda$lambda$explodedPackages$7$11::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$lambda$explodedPackages$8$12")) {
			return ModulePath$$Lambda$lambda$explodedPackages$8$12::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$toPackageName$13")) {
			return ModulePath$$Lambda$toPackageName$13::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModulePath$$Lambda$lambda$readExplodedModule$9$14")) {
			return ModulePath$$Lambda$lambda$readExplodedModule$9$14::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ModulePath, $assertionsDisabled)},
		{"MODULE_INFO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModulePath, MODULE_INFO)},
		{"releaseVersion", "Ljava/lang/Runtime$Version;", nullptr, $PRIVATE | $FINAL, $field(ModulePath, releaseVersion)},
		{"isLinkPhase", "Z", nullptr, $PRIVATE | $FINAL, $field(ModulePath, isLinkPhase)},
		{"patcher", "Ljdk/internal/module/ModulePatcher;", nullptr, $PRIVATE | $FINAL, $field(ModulePath, patcher)},
		{"entries", "[Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(ModulePath, entries)},
		{"next", "I", nullptr, $PRIVATE, $field(ModulePath, next)},
		{"cachedModules", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleReference;>;", $PRIVATE | $FINAL, $field(ModulePath, cachedModules)},
		{"SERVICES_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModulePath, SERVICES_PREFIX)},
		{"AUTOMATIC_MODULE_NAME", "Ljava/util/jar/Attributes$Name;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModulePath, AUTOMATIC_MODULE_NAME)},
		{"scanTime", "Ljdk/internal/perf/PerfCounter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModulePath, scanTime)},
		{"moduleCount", "Ljdk/internal/perf/PerfCounter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModulePath, moduleCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runtime$Version;ZLjdk/internal/module/ModulePatcher;[Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $TRANSIENT, $method(ModulePath, init$, void, $Runtime$Version*, bool, $ModulePatcher*, $PathArray*)},
		{"cleanModuleName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(ModulePath, cleanModuleName, $String*, $String*)},
		{"deriveModuleDescriptor", "(Ljava/util/jar/JarFile;)Ljava/lang/module/ModuleDescriptor;", nullptr, $PRIVATE, $method(ModulePath, deriveModuleDescriptor, $ModuleDescriptor*, $JarFile*), "java.io.IOException"},
		{"explodedPackages", "(Ljava/nio/file/Path;)Ljava/util/Set;", "(Ljava/nio/file/Path;)Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $method(ModulePath, explodedPackages, $Set*, $Path*)},
		{"fileName", "(Ljava/lang/module/ModuleReference;)Ljava/lang/String;", nullptr, $PRIVATE, $method(ModulePath, fileName, $String*, $ModuleReference*)},
		{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(ModulePath, find, $Optional*, $String*)},
		{"findAll", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(ModulePath, findAll, $Set*)},
		{"hasNextEntry", "()Z", nullptr, $PRIVATE, $method(ModulePath, hasNextEntry, bool)},
		{"isDefaultFileSystem", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE, $method(ModulePath, isDefaultFileSystem, bool, $Path*)},
		{"isHidden", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE, $method(ModulePath, isHidden, bool, $Path*)},
		{"jarPackages", "(Ljava/util/jar/JarFile;)Ljava/util/Set;", "(Ljava/util/jar/JarFile;)Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $method(ModulePath, jarPackages, $Set*, $JarFile*)},
		{"jmodPackages", "(Ljdk/internal/jmod/JmodFile;)Ljava/util/Set;", "(Ljdk/internal/jmod/JmodFile;)Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $method(ModulePath, jmodPackages, $Set*, $JmodFile*)},
		{"lambda$deriveModuleDescriptor$2", "(Ljava/util/jar/JarEntry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModulePath, lambda$deriveModuleDescriptor$2, bool, $JarEntry*)},
		{"lambda$deriveModuleDescriptor$3", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModulePath, lambda$deriveModuleDescriptor$3, bool, $String*)},
		{"lambda$deriveModuleDescriptor$4", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModulePath, lambda$deriveModuleDescriptor$4, bool, $String*)},
		{"lambda$explodedPackages$7", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(ModulePath, lambda$explodedPackages$7, bool, $Path*, $BasicFileAttributes*)},
		{"lambda$explodedPackages$8", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModulePath, lambda$explodedPackages$8, $Path*, $Path*, $Path*)},
		{"lambda$jmodPackages$0", "(Ljdk/internal/jmod/JmodFile$Entry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModulePath, lambda$jmodPackages$0, bool, $JmodFile$Entry*)},
		{"lambda$readExplodedModule$9", "(Ljava/nio/file/Path;)Ljava/util/Set;", nullptr, $PRIVATE | $SYNTHETIC, $method(ModulePath, lambda$readExplodedModule$9, $Set*, $Path*)},
		{"lambda$readJMod$1", "(Ljdk/internal/jmod/JmodFile;)Ljava/util/Set;", nullptr, $PRIVATE | $SYNTHETIC, $method(ModulePath, lambda$readJMod$1, $Set*, $JmodFile*)},
		{"lambda$readJar$6", "(Ljava/util/jar/JarFile;)Ljava/util/Set;", nullptr, $PRIVATE | $SYNTHETIC, $method(ModulePath, lambda$readJar$6, $Set*, $JarFile*)},
		{"nextLine", "(Ljava/io/BufferedReader;)Ljava/lang/String;", nullptr, $PRIVATE, $method(ModulePath, nextLine, $String*, $BufferedReader*), "java.io.IOException"},
		{"of", "(Ljdk/internal/module/ModulePatcher;[Ljava/nio/file/Path;)Ljava/lang/module/ModuleFinder;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(ModulePath, of, $ModuleFinder*, $ModulePatcher*, $PathArray*)},
		{"of", "([Ljava/nio/file/Path;)Ljava/lang/module/ModuleFinder;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(ModulePath, of, $ModuleFinder*, $PathArray*)},
		{"of", "(Ljava/lang/Runtime$Version;Z[Ljava/nio/file/Path;)Ljava/lang/module/ModuleFinder;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(ModulePath, of, $ModuleFinder*, $Runtime$Version*, bool, $PathArray*)},
		{"packageName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(ModulePath, packageName, $String*, $String*)},
		{"readExplodedModule", "(Ljava/nio/file/Path;)Ljava/lang/module/ModuleReference;", nullptr, $PRIVATE, $method(ModulePath, readExplodedModule, $ModuleReference*, $Path*), "java.io.IOException"},
		{"readJMod", "(Ljava/nio/file/Path;)Ljava/lang/module/ModuleReference;", nullptr, $PRIVATE, $method(ModulePath, readJMod, $ModuleReference*, $Path*), "java.io.IOException"},
		{"readJar", "(Ljava/nio/file/Path;)Ljava/lang/module/ModuleReference;", nullptr, $PRIVATE, $method(ModulePath, readJar, $ModuleReference*, $Path*), "java.io.IOException"},
		{"readModule", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/lang/module/ModuleReference;", nullptr, $PRIVATE, $method(ModulePath, readModule, $ModuleReference*, $Path*, $BasicFileAttributes*), "java.io.IOException"},
		{"scan", "(Ljava/nio/file/Path;)Ljava/util/Map;", "(Ljava/nio/file/Path;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleReference;>;", $PRIVATE, $method(ModulePath, scan, $Map*, $Path*)},
		{"scanDirectory", "(Ljava/nio/file/Path;)Ljava/util/Map;", "(Ljava/nio/file/Path;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleReference;>;", $PRIVATE, $method(ModulePath, scanDirectory, $Map*, $Path*), "java.io.IOException"},
		{"scanNextEntry", "()V", nullptr, $PRIVATE, $method(ModulePath, scanNextEntry, void)},
		{"toPackageName", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/String;>;", $PRIVATE, $method(ModulePath, toPackageName, $Optional*, $String*)},
		{"toPackageName", "(Ljava/nio/file/Path;)Ljava/util/Optional;", "(Ljava/nio/file/Path;)Ljava/util/Optional<Ljava/lang/String;>;", $PRIVATE, $method(ModulePath, toPackageName, $Optional*, $Path*)},
		{"toServiceName", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/String;>;", $PRIVATE, $method(ModulePath, toServiceName, $Optional*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModulePath$Patterns", "jdk.internal.module.ModulePath", "Patterns", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.module.ModulePath",
		"java.lang.Object",
		"java.lang.module.ModuleFinder",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.module.ModulePath$Patterns"
	};
	$loadClass(ModulePath, name, initialize, &classInfo$$, ModulePath::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ModulePath);
	});
	return class$;
}

$Class* ModulePath::class$ = nullptr;

		} // module
	} // internal
} // jdk