#include <jdk/internal/jmod/JmodFile.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

#undef JMOD_MINOR_VERSION
#undef JMOD_MAGIC_NUMBER
#undef JMOD_MAJOR_VERSION

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
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
		 return $of($new($JmodFile$Entry, $cast($ZipEntry, e)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JmodFile$$Lambda$Entry>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JmodFile$$Lambda$Entry::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JmodFile$$Lambda$Entry::*)()>(&JmodFile$$Lambda$Entry::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JmodFile$$Lambda$Entry::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jmod.JmodFile$$Lambda$Entry",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JmodFile$$Lambda$Entry::load$($String* name, bool initialize) {
	$loadClass(JmodFile$$Lambda$Entry, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JmodFile$$Lambda$Entry::class$ = nullptr;

$FieldInfo _JmodFile_FieldInfo_[] = {
	{"JMOD_MAJOR_VERSION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JmodFile, JMOD_MAJOR_VERSION)},
	{"JMOD_MINOR_VERSION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JmodFile, JMOD_MINOR_VERSION)},
	{"JMOD_MAGIC_NUMBER", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JmodFile, JMOD_MAGIC_NUMBER)},
	{"file", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(JmodFile, file)},
	{"zipfile", "Ljava/util/zip/ZipFile;", nullptr, $PRIVATE | $FINAL, $field(JmodFile, zipfile)},
	{}
};

$MethodInfo _JmodFile_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(JmodFile::*)($Path*)>(&JmodFile::init$)), "java.io.IOException"},
	{"checkMagic", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Path*)>(&JmodFile::checkMagic)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getEntry", "(Ljdk/internal/jmod/JmodFile$Section;Ljava/lang/String;)Ljdk/internal/jmod/JmodFile$Entry;", nullptr, $PUBLIC},
	{"getInputStream", "(Ljdk/internal/jmod/JmodFile$Section;Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getInputStream", "(Ljdk/internal/jmod/JmodFile$Entry;)Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljdk/internal/jmod/JmodFile$Entry;>;", $PUBLIC},
	{"writeMagicNumber", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($OutputStream*)>(&JmodFile::writeMagicNumber)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JmodFile_InnerClassesInfo_[] = {
	{"jdk.internal.jmod.JmodFile$Entry", "jdk.internal.jmod.JmodFile", "Entry", $PUBLIC | $STATIC},
	{"jdk.internal.jmod.JmodFile$Section", "jdk.internal.jmod.JmodFile", "Section", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JmodFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.jmod.JmodFile",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	_JmodFile_FieldInfo_,
	_JmodFile_MethodInfo_,
	nullptr,
	nullptr,
	_JmodFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.jmod.JmodFile$Entry,jdk.internal.jmod.JmodFile$Section"
};

$Object* allocate$JmodFile($Class* clazz) {
	return $of($alloc(JmodFile));
}

$bytes* JmodFile::JMOD_MAGIC_NUMBER = nullptr;

void JmodFile::checkMagic($Path* file) {
	$init(JmodFile);
	{
		$var($InputStream, in, $Files::newInputStream(file, $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($bytes, magic, $nc(in)->readNBytes(4));
					if ($nc(magic)->length != 4) {
						$throwNew($IOException, $$str({"Invalid JMOD file: "_s, file}));
					}
					if ($nc(magic)->get(0) != $nc(JmodFile::JMOD_MAGIC_NUMBER)->get(0) || $nc(magic)->get(1) != $nc(JmodFile::JMOD_MAGIC_NUMBER)->get(1)) {
						$throwNew($IOException, $$str({"Invalid JMOD file: "_s, $($nc(file)->toString())}));
					}
					if ($nc(magic)->get(2) > JmodFile::JMOD_MAJOR_VERSION || ($nc(magic)->get(2) == JmodFile::JMOD_MAJOR_VERSION && magic->get(3) > JmodFile::JMOD_MINOR_VERSION)) {
						$throwNew($IOException, $$str({"Unsupported jmod version: "_s, $$str(magic->get(2)), "."_s, $$str(magic->get(3)), " in "_s, $($nc(file)->toString())}));
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (in != nullptr) {
						try {
							in->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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
	$var($String, entry, $str({$($nc(section)->jmodDir()), "/"_s, name}));
	$var($ZipEntry, ze, $nc(this->zipfile)->getEntry(entry));
	return (ze != nullptr) ? $new($JmodFile$Entry, ze) : ($JmodFile$Entry*)nullptr;
}

$InputStream* JmodFile::getInputStream($JmodFile$Section* section, $String* name) {
	$var($String, entry, $str({$($nc(section)->jmodDir()), "/"_s, name}));
	$var($ZipEntry, e, $nc(this->zipfile)->getEntry(entry));
	if (e == nullptr) {
		$throwNew($IOException, $$str({name, " not found: "_s, this->file}));
	}
	return $nc(this->zipfile)->getInputStream(e);
}

$InputStream* JmodFile::getInputStream($JmodFile$Entry* entry) {
	return $nc(this->zipfile)->getInputStream($($nc(entry)->zipEntry()));
}

$Stream* JmodFile::stream() {
	return $nc($($nc(this->zipfile)->stream()))->map(static_cast<$Function*>($$new(JmodFile$$Lambda$Entry)));
}

void JmodFile::close() {
	if (this->zipfile != nullptr) {
		$nc(this->zipfile)->close();
	}
}

void clinit$JmodFile($Class* class$) {
	$assignStatic(JmodFile::JMOD_MAGIC_NUMBER, $new($bytes, {
		(int8_t)74,
		(int8_t)77,
		(int8_t)JmodFile::JMOD_MAJOR_VERSION,
		(int8_t)JmodFile::JMOD_MINOR_VERSION
	}));
}

JmodFile::JmodFile() {
}

$Class* JmodFile::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JmodFile$$Lambda$Entry::classInfo$.name)) {
			return JmodFile$$Lambda$Entry::load$(name, initialize);
		}
	}
	$loadClass(JmodFile, name, initialize, &_JmodFile_ClassInfo_, clinit$JmodFile, allocate$JmodFile);
	return class$;
}

$Class* JmodFile::class$ = nullptr;

		} // jmod
	} // internal
} // jdk