#include <jdk/internal/jmod/JmodFile.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <jdk/internal/jmod/JmodFile$Entry.h>
#include <jdk/internal/jmod/JmodFile$Section.h>
#include <jcpp.h>

#undef JMOD_MAGIC_NUMBER
#undef JMOD_MAJOR_VERSION
#undef JMOD_MINOR_VERSION

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $JmodFile$Entry = ::jdk::internal::jmod::JmodFile$Entry;
using $JmodFile$Section = ::jdk::internal::jmod::JmodFile$Section;

namespace jdk {
	namespace internal {
		namespace jmod {

class JmodFile$$Lambda$Entry : public $Function {
	$class(JmodFile$$Lambda$Entry, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* e) override {
		 return $new($JmodFile$Entry, $cast($ZipEntry, e));
	}
};
$Class* JmodFile$$Lambda$Entry::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JmodFile$$Lambda$Entry, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JmodFile$$Lambda$Entry, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.jmod.JmodFile$$Lambda$Entry",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(JmodFile$$Lambda$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JmodFile$$Lambda$Entry);
	});
	return class$;
}
$Class* JmodFile$$Lambda$Entry::class$ = nullptr;

$bytes* JmodFile::JMOD_MAGIC_NUMBER = nullptr;

void JmodFile::checkMagic($Path* file) {
	$init(JmodFile);
	$useLocalObjectStack();
	{
		$var($InputStream, in, $Files::newInputStream(file, $$new($OpenOptionArray, 0)));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($bytes, magic, $nc(in)->readNBytes(4));
				if ($nc(magic)->length != 4) {
					$throwNew($IOException, $$str({"Invalid JMOD file: "_s, file}));
				}
				if (magic->get(0) != JmodFile::JMOD_MAGIC_NUMBER->get(0) || magic->get(1) != JmodFile::JMOD_MAGIC_NUMBER->get(1)) {
					$throwNew($IOException, $$str({"Invalid JMOD file: "_s, $($nc(file)->toString())}));
				}
				if (magic->get(2) > JmodFile::JMOD_MAJOR_VERSION || (magic->get(2) == JmodFile::JMOD_MAJOR_VERSION && magic->get(3) > JmodFile::JMOD_MINOR_VERSION)) {
					$throwNew($IOException, $$str({"Unsupported jmod version: "_s, $$str(magic->get(2)), "."_s, $$str(magic->get(3)), " in "_s, $($nc(file)->toString())}));
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
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (in != nullptr) {
				in->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JmodFile::init$($Path* file) {
	checkMagic(file);
	$set(this, file, file);
	$set(this, zipfile, $new($ZipFile, $($nc(file)->toFile())));
}

void JmodFile::writeMagicNumber($OutputStream* os) {
	$init(JmodFile);
	$nc(os)->write(JmodFile::JMOD_MAGIC_NUMBER);
}

$JmodFile$Entry* JmodFile::getEntry($JmodFile$Section* section, $String* name) {
	$useLocalObjectStack();
	$var($String, entry, $str({$($nc(section)->jmodDir()), "/"_s, name}));
	$var($ZipEntry, ze, $nc(this->zipfile)->getEntry(entry));
	return (ze != nullptr) ? $new($JmodFile$Entry, ze) : ($JmodFile$Entry*)nullptr;
}

$InputStream* JmodFile::getInputStream($JmodFile$Section* section, $String* name) {
	$useLocalObjectStack();
	$var($String, entry, $str({$($nc(section)->jmodDir()), "/"_s, name}));
	$var($ZipEntry, e, $nc(this->zipfile)->getEntry(entry));
	if (e == nullptr) {
		$throwNew($IOException, $$str({name, " not found: "_s, this->file}));
	}
	return this->zipfile->getInputStream(e);
}

$InputStream* JmodFile::getInputStream($JmodFile$Entry* entry) {
	return $nc(this->zipfile)->getInputStream($($nc(entry)->zipEntry()));
}

$Stream* JmodFile::stream() {
	$useLocalObjectStack();
	return $$nc($nc(this->zipfile)->stream())->map($$new(JmodFile$$Lambda$Entry));
}

void JmodFile::close() {
	if (this->zipfile != nullptr) {
		this->zipfile->close();
	}
}

void JmodFile::clinit$($Class* clazz) {
	$assignStatic(JmodFile::JMOD_MAGIC_NUMBER, $new($bytes, {
		74,
		77,
		(int8_t)JmodFile::JMOD_MAJOR_VERSION,
		(int8_t)JmodFile::JMOD_MINOR_VERSION
	}));
}

JmodFile::JmodFile() {
}

$Class* JmodFile::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.jmod.JmodFile$$Lambda$Entry")) {
			return JmodFile$$Lambda$Entry::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"JMOD_MAJOR_VERSION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JmodFile, JMOD_MAJOR_VERSION)},
		{"JMOD_MINOR_VERSION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JmodFile, JMOD_MINOR_VERSION)},
		{"JMOD_MAGIC_NUMBER", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JmodFile, JMOD_MAGIC_NUMBER)},
		{"file", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(JmodFile, file)},
		{"zipfile", "Ljava/util/zip/ZipFile;", nullptr, $PRIVATE | $FINAL, $field(JmodFile, zipfile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(JmodFile, init$, void, $Path*), "java.io.IOException"},
		{"checkMagic", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JmodFile, checkMagic, void, $Path*), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(JmodFile, close, void), "java.io.IOException"},
		{"getEntry", "(Ljdk/internal/jmod/JmodFile$Section;Ljava/lang/String;)Ljdk/internal/jmod/JmodFile$Entry;", nullptr, $PUBLIC, $virtualMethod(JmodFile, getEntry, $JmodFile$Entry*, $JmodFile$Section*, $String*)},
		{"getInputStream", "(Ljdk/internal/jmod/JmodFile$Section;Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(JmodFile, getInputStream, $InputStream*, $JmodFile$Section*, $String*), "java.io.IOException"},
		{"getInputStream", "(Ljdk/internal/jmod/JmodFile$Entry;)Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(JmodFile, getInputStream, $InputStream*, $JmodFile$Entry*), "java.io.IOException"},
		{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljdk/internal/jmod/JmodFile$Entry;>;", $PUBLIC, $virtualMethod(JmodFile, stream, $Stream*)},
		{"writeMagicNumber", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JmodFile, writeMagicNumber, void, $OutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jmod.JmodFile$Entry", "jdk.internal.jmod.JmodFile", "Entry", $PUBLIC | $STATIC},
		{"jdk.internal.jmod.JmodFile$Section", "jdk.internal.jmod.JmodFile", "Section", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.jmod.JmodFile",
		"java.lang.Object",
		"java.lang.AutoCloseable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.jmod.JmodFile$Entry,jdk.internal.jmod.JmodFile$Section"
	};
	$loadClass(JmodFile, name, initialize, &classInfo$$, JmodFile::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JmodFile);
	});
	return class$;
}

$Class* JmodFile::class$ = nullptr;

		} // jmod
	} // internal
} // jdk