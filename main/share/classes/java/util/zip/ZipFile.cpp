#include <java/util/zip/ZipFile.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/charset/Charset.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntFunction.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <java/util/zip/ZipCoder.h>
#include <java/util/zip/ZipConstants.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipException.h>
#include <java/util/zip/ZipFile$1.h>
#include <java/util/zip/ZipFile$CleanableResource.h>
#include <java/util/zip/ZipFile$EntrySpliterator.h>
#include <java/util/zip/ZipFile$Source.h>
#include <java/util/zip/ZipFile$ZipEntryIterator.h>
#include <java/util/zip/ZipFile$ZipFileInflaterInputStream.h>
#include <java/util/zip/ZipFile$ZipFileInputStream.h>
#include <java/util/zip/ZipUtils.h>
#include <jdk/internal/access/JavaUtilJarAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/VM.h>
#include <jdk/internal/perf/PerfCounter.h>
#include <sun/nio/cs/UTF_8.h>
#include <jcpp.h>

#undef CENHDR
#undef DEFLATED
#undef INSTANCE
#undef JUJA
#undef OPEN_DELETE
#undef OPEN_READ
#undef STORED

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Charset = ::java::nio::charset::Charset;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $IntFunction = ::java::util::function::IntFunction;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $ZipCoder = ::java::util::zip::ZipCoder;
using $ZipConstants = ::java::util::zip::ZipConstants;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipException = ::java::util::zip::ZipException;
using $ZipFile$1 = ::java::util::zip::ZipFile$1;
using $ZipFile$CleanableResource = ::java::util::zip::ZipFile$CleanableResource;
using $ZipFile$EntrySpliterator = ::java::util::zip::ZipFile$EntrySpliterator;
using $ZipFile$Source = ::java::util::zip::ZipFile$Source;
using $ZipFile$ZipEntryIterator = ::java::util::zip::ZipFile$ZipEntryIterator;
using $ZipFile$ZipFileInflaterInputStream = ::java::util::zip::ZipFile$ZipFileInflaterInputStream;
using $ZipFile$ZipFileInputStream = ::java::util::zip::ZipFile$ZipFileInputStream;
using $ZipUtils = ::java::util::zip::ZipUtils;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $VM = ::jdk::internal::misc::VM;
using $PerfCounter = ::jdk::internal::perf::PerfCounter;
using $UTF_8 = ::sun::nio::cs::UTF_8;

namespace java {
	namespace util {
		namespace zip {

class ZipFile$$Lambda$lambda$stream$0 : public $IntFunction {
	$class(ZipFile$$Lambda$lambda$stream$0, $NO_CLASS_INIT, $IntFunction)
public:
	void init$(ZipFile* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(int32_t pos) override {
		 return $of($nc(inst$)->lambda$stream$0(pos));
	}
	ZipFile* inst$ = nullptr;
};
$Class* ZipFile$$Lambda$lambda$stream$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ZipFile$$Lambda$lambda$stream$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/zip/ZipFile;)V", nullptr, $PUBLIC, $method(ZipFile$$Lambda$lambda$stream$0, init$, void, ZipFile*)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ZipFile$$Lambda$lambda$stream$0, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.zip.ZipFile$$Lambda$lambda$stream$0",
		"java.lang.Object",
		"java.util.function.IntFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ZipFile$$Lambda$lambda$stream$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFile$$Lambda$lambda$stream$0);
	});
	return class$;
}
$Class* ZipFile$$Lambda$lambda$stream$0::class$ = nullptr;

class ZipFile$$Lambda$getEntryName$1 : public $IntFunction {
	$class(ZipFile$$Lambda$getEntryName$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$(ZipFile* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(int32_t pos) override {
		 return $of($nc(inst$)->getEntryName(pos));
	}
	ZipFile* inst$ = nullptr;
};
$Class* ZipFile$$Lambda$getEntryName$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ZipFile$$Lambda$getEntryName$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/zip/ZipFile;)V", nullptr, $PUBLIC, $method(ZipFile$$Lambda$getEntryName$1, init$, void, ZipFile*)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ZipFile$$Lambda$getEntryName$1, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.zip.ZipFile$$Lambda$getEntryName$1",
		"java.lang.Object",
		"java.util.function.IntFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ZipFile$$Lambda$getEntryName$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFile$$Lambda$getEntryName$1);
	});
	return class$;
}
$Class* ZipFile$$Lambda$getEntryName$1::class$ = nullptr;

class ZipFile$$Lambda$lambda$jarStream$1$2 : public $IntFunction {
	$class(ZipFile$$Lambda$lambda$jarStream$1$2, $NO_CLASS_INIT, $IntFunction)
public:
	void init$(ZipFile* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(int32_t pos) override {
		 return $of($nc(inst$)->lambda$jarStream$1(pos));
	}
	ZipFile* inst$ = nullptr;
};
$Class* ZipFile$$Lambda$lambda$jarStream$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ZipFile$$Lambda$lambda$jarStream$1$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/zip/ZipFile;)V", nullptr, $PUBLIC, $method(ZipFile$$Lambda$lambda$jarStream$1$2, init$, void, ZipFile*)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ZipFile$$Lambda$lambda$jarStream$1$2, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.zip.ZipFile$$Lambda$lambda$jarStream$1$2",
		"java.lang.Object",
		"java.util.function.IntFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ZipFile$$Lambda$lambda$jarStream$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFile$$Lambda$lambda$jarStream$1$2);
	});
	return class$;
}
$Class* ZipFile$$Lambda$lambda$jarStream$1$2::class$ = nullptr;

int32_t ZipFile::hashCode() {
	 return this->$ZipConstants::hashCode();
}

bool ZipFile::equals(Object$* obj) {
	 return this->$ZipConstants::equals(obj);
}

$Object* ZipFile::clone() {
	 return this->$ZipConstants::clone();
}

$String* ZipFile::toString() {
	 return this->$ZipConstants::toString();
}

void ZipFile::finalize() {
	this->$ZipConstants::finalize();
}

bool ZipFile::isWindows = false;

void ZipFile::init$($String* name) {
	ZipFile::init$($$new($File, name), ZipFile::OPEN_READ);
}

void ZipFile::init$($File* file, int32_t mode) {
	$init($UTF_8);
	ZipFile::init$(file, mode, $UTF_8::INSTANCE);
}

void ZipFile::init$($File* file) {
	ZipFile::init$(file, ZipFile::OPEN_READ);
}

void ZipFile::init$($File* file$renamed, int32_t mode, $Charset* charset) {
	$useLocalObjectStack();
	$var($File, file, file$renamed);
	if (((mode & ZipFile::OPEN_READ) == 0) || ((mode & ~(ZipFile::OPEN_READ | ZipFile::OPEN_DELETE)) != 0)) {
		$throwNew($IllegalArgumentException, $$str({"Illegal mode: 0x"_s, $($Integer::toHexString(mode))}));
	}
	$var($String, name, $nc(file)->getPath());
	$assign(file, $new($File, name));
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkRead(name);
		if ((mode & ZipFile::OPEN_DELETE) != 0) {
			sm->checkDelete(name);
		}
	}
	$Objects::requireNonNull(charset, "charset"_s);
	$set(this, name, name);
	int64_t t0 = $System::nanoTime();
	$set(this, res, $new($ZipFile$CleanableResource, this, $($ZipCoder::get(charset)), file, mode));
	$$nc($PerfCounter::getZipFileOpenTime())->addElapsedTimeFrom(t0);
	$$nc($PerfCounter::getZipFileCount())->increment();
}

void ZipFile::init$($String* name, $Charset* charset) {
	ZipFile::init$($$new($File, name), ZipFile::OPEN_READ, charset);
}

void ZipFile::init$($File* file, $Charset* charset) {
	ZipFile::init$(file, ZipFile::OPEN_READ, charset);
}

$String* ZipFile::getComment() {
	$synchronized(this) {
		ensureOpen();
		if ($nc($nc(this->res)->zsrc)->comment == nullptr) {
			return nullptr;
		}
		return $nc(this->res->zsrc->zc)->toString(this->res->zsrc->comment);
	}
}

$ZipEntry* ZipFile::getEntry($String* name) {
	$Objects::requireNonNull(name, "name"_s);
	$var($ZipEntry, entry, nullptr);
	$synchronized(this) {
		ensureOpen();
		int32_t pos = $nc($nc(this->res)->zsrc)->getEntryPos(name, true);
		if (pos != -1) {
			$assign(entry, getZipEntry(name, pos));
		}
	}
	return entry;
}

$InputStream* ZipFile::getInputStream($ZipEntry* entry) {
	$useLocalObjectStack();
	$Objects::requireNonNull(entry, "entry"_s);
	int32_t pos = 0;
	$var($ZipFile$ZipFileInputStream, in, nullptr);
	$var($ZipFile$Source, zsrc, $nc(this->res)->zsrc);
	$var($Set, istreams, this->res->istreams);
	$synchronized(this) {
		ensureOpen();
		if ($Objects::equals(this->lastEntryName, $nc(entry)->name)) {
			pos = this->lastEntryPos;
		} else {
			pos = $nc(zsrc)->getEntryPos(entry->name, false);
		}
		if (pos == -1) {
			return nullptr;
		}
		$assign(in, $new($ZipFile$ZipFileInputStream, this, $nc(zsrc)->cen, pos));
		{
			int64_t size = 0;
			$var($InputStream, is, nullptr);
			switch ($ZipUtils::CENHOW(zsrc->cen, pos)) {
			case ZipFile::STORED:
				$synchronized(istreams) {
					istreams->add(in);
				}
				return in;
			case ZipFile::DEFLATED:
				size = $ZipUtils::CENLEN(zsrc->cen, pos) + 2;
				if (size > 0x00010000) {
					size = 8192;
				}
				if (size <= 0) {
					size = 4096;
				}
				$assign(is, $new($ZipFile$ZipFileInflaterInputStream, this, in, this->res, (int32_t)size));
				$synchronized(istreams) {
					istreams->add(is);
				}
				return is;
			default:
				$throwNew($ZipException, "invalid compression method"_s);
			}
		}
	}
}

$String* ZipFile::getName() {
	return this->name;
}

$Enumeration* ZipFile::entries() {
	$synchronized(this) {
		ensureOpen();
		return $new($ZipFile$ZipEntryIterator, this, $nc($nc(this->res)->zsrc)->total);
	}
}

$Enumeration* ZipFile::jarEntries() {
	$synchronized(this) {
		ensureOpen();
		return $new($ZipFile$ZipEntryIterator, this, $nc($nc(this->res)->zsrc)->total);
	}
}

$Stream* ZipFile::stream() {
	$useLocalObjectStack();
	$synchronized(this) {
		ensureOpen();
		return $StreamSupport::stream($$new($ZipFile$EntrySpliterator, this, 0, $nc($nc(this->res)->zsrc)->total, $$new(ZipFile$$Lambda$lambda$stream$0, this)), false);
	}
}

$String* ZipFile::getEntryName(int32_t pos) {
	$useLocalObjectStack();
	$var($bytes, cen, $nc($nc(this->res)->zsrc)->cen);
	int32_t nlen = $ZipUtils::CENNAM(cen, pos);
	$var($ZipCoder, zc, $nc(this->res->zsrc)->zipCoderForPos(pos));
	return $nc(zc)->toString(cen, pos + $ZipConstants::CENHDR, nlen);
}

$Stream* ZipFile::entryNameStream() {
	$useLocalObjectStack();
	$synchronized(this) {
		ensureOpen();
		return $StreamSupport::stream($$new($ZipFile$EntrySpliterator, this, 0, $nc($nc(this->res)->zsrc)->total, $$new(ZipFile$$Lambda$getEntryName$1, this)), false);
	}
}

$Stream* ZipFile::jarStream() {
	$useLocalObjectStack();
	$synchronized(this) {
		ensureOpen();
		return $StreamSupport::stream($$new($ZipFile$EntrySpliterator, this, 0, $nc($nc(this->res)->zsrc)->total, $$new(ZipFile$$Lambda$lambda$jarStream$1$2, this)), false);
	}
}

$ZipEntry* ZipFile::getZipEntry($String* name$renamed, int32_t pos) {
	$useLocalObjectStack();
	$var($String, name, name$renamed);
	$var($bytes, cen, $nc($nc(this->res)->zsrc)->cen);
	int32_t nlen = $ZipUtils::CENNAM(cen, pos);
	int32_t elen = $ZipUtils::CENEXT(cen, pos);
	int32_t clen = $ZipUtils::CENCOM(cen, pos);
	$var($ZipCoder, zc, $nc(this->res->zsrc)->zipCoderForPos(pos));
	if (name != nullptr) {
		bool var$1 = nlen > 0 && !name->isEmpty();
		bool var$0 = var$1 && $nc(zc)->hasTrailingSlash(cen, pos + $ZipConstants::CENHDR + nlen);
		if (var$0 && !name->endsWith("/"_s)) {
			$plusAssign(name, u'/');
		}
	} else {
		$assign(name, $nc(zc)->toString(cen, pos + $ZipConstants::CENHDR, nlen));
	}
	$var($ZipEntry, e, nullptr);
	if ($instanceOf($JarFile, this)) {
		$assign(e, $nc($ZipFile$Source::JUJA)->entryFor($cast($JarFile, this), name));
	} else {
		$assign(e, $new($ZipEntry, name));
	}
	$nc(e)->flag = $ZipUtils::CENFLG(cen, pos);
	e->xdostime = $ZipUtils::CENTIM(cen, pos);
	e->crc = $ZipUtils::CENCRC(cen, pos);
	e->size = $ZipUtils::CENLEN(cen, pos);
	e->csize = $ZipUtils::CENSIZ(cen, pos);
	e->method = $ZipUtils::CENHOW(cen, pos);
	if ($ZipUtils::CENVEM_FA(cen, pos) == 3) {
		e->extraAttributes = $ZipUtils::CENATX_PERMS(cen, pos) & 0xffff;
	}
	if (elen != 0) {
		int32_t start = pos + $ZipConstants::CENHDR + nlen;
		e->setExtra0($($Arrays::copyOfRange(cen, start, start + elen)), true, false);
	}
	if (clen != 0) {
		int32_t start = pos + $ZipConstants::CENHDR + nlen + elen;
		$set(e, comment, $nc(zc)->toString(cen, start, clen));
	}
	$set(this, lastEntryName, e->name);
	this->lastEntryPos = pos;
	return e;
}

int32_t ZipFile::size() {
	$synchronized(this) {
		ensureOpen();
		return $nc($nc(this->res)->zsrc)->total;
	}
}

void ZipFile::close() {
	if (this->closeRequested) {
		return;
	}
	this->closeRequested = true;
	$synchronized(this) {
		try {
			$nc(this->res)->clean();
		} catch ($UncheckedIOException& ioe) {
			$throw($$cast($IOException, ioe->getCause()));
		}
	}
}

void ZipFile::ensureOpen() {
	if (this->closeRequested) {
		$throwNew($IllegalStateException, "zip file closed"_s);
	}
	if ($nc(this->res)->zsrc == nullptr) {
		$throwNew($IllegalStateException, "The object is not initialized."_s);
	}
}

void ZipFile::ensureOpenOrZipException() {
	if (this->closeRequested) {
		$throwNew($ZipException, "ZipFile closed"_s);
	}
}

$List* ZipFile::getManifestAndSignatureRelatedFiles() {
	$useLocalObjectStack();
	$synchronized(this) {
		ensureOpen();
		$var($ZipFile$Source, zsrc, $nc(this->res)->zsrc);
		$var($ints, metanames, $nc(zsrc)->signatureMetaNames);
		$var($List, files, nullptr);
		if (zsrc->manifestPos >= 0) {
			$assign(files, $new($ArrayList));
			files->add($(getEntryName(zsrc->manifestPos)));
		}
		if (metanames != nullptr) {
			if (files == nullptr) {
				$assign(files, $new($ArrayList));
			}
			for (int32_t i = 0; i < metanames->length; ++i) {
				$nc(files)->add($(getEntryName(metanames->get(i))));
			}
		}
		return files == nullptr ? $List::of() : files;
	}
}

int32_t ZipFile::getManifestNum() {
	$synchronized(this) {
		ensureOpen();
		return $nc($nc(this->res)->zsrc)->manifestNum;
	}
}

$String* ZipFile::getManifestName(bool onlyIfSignatureRelatedFiles) {
	$synchronized(this) {
		ensureOpen();
		$var($ZipFile$Source, zsrc, $nc(this->res)->zsrc);
		int32_t pos = $nc(zsrc)->manifestPos;
		if (pos >= 0 && (!onlyIfSignatureRelatedFiles || zsrc->signatureMetaNames != nullptr)) {
			return getEntryName(pos);
		}
	}
	return nullptr;
}

$ints* ZipFile::getMetaInfVersions() {
	$synchronized(this) {
		ensureOpen();
		return $nc($nc(this->res)->zsrc)->metaVersions;
	}
}

$JarEntry* ZipFile::lambda$jarStream$1(int32_t pos) {
	return $cast($JarEntry, getZipEntry(nullptr, pos));
}

$ZipEntry* ZipFile::lambda$stream$0(int32_t pos) {
	return getZipEntry(nullptr, pos);
}

void ZipFile::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$SharedSecrets::setJavaUtilZipFileAccess($$new($ZipFile$1));
		ZipFile::isWindows = $$nc($VM::getSavedProperty("os.name"_s))->contains("Windows"_s);
	}
}

ZipFile::ZipFile() {
}

$Class* ZipFile::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.zip.ZipFile$$Lambda$lambda$stream$0")) {
			return ZipFile$$Lambda$lambda$stream$0::load$(name, initialize);
		}
		if (name->equals("java.util.zip.ZipFile$$Lambda$getEntryName$1")) {
			return ZipFile$$Lambda$getEntryName$1::load$(name, initialize);
		}
		if (name->equals("java.util.zip.ZipFile$$Lambda$lambda$jarStream$1$2")) {
			return ZipFile$$Lambda$lambda$jarStream$1$2::load$(name, initialize);
		}
	}
	$CompoundAttribute resfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ZipFile, name)},
		{"closeRequested", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ZipFile, closeRequested)},
		{"res", "Ljava/util/zip/ZipFile$CleanableResource;", nullptr, $PRIVATE | $FINAL, $field(ZipFile, res), resfieldAnnotations$$},
		{"STORED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZipFile, STORED)},
		{"DEFLATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZipFile, DEFLATED)},
		{"OPEN_READ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipFile, OPEN_READ)},
		{"OPEN_DELETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipFile, OPEN_DELETE)},
		{"lastEntryName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ZipFile, lastEntryName)},
		{"lastEntryPos", "I", nullptr, $PRIVATE, $field(ZipFile, lastEntryPos)},
		{"isWindows", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ZipFile, isWindows)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ZipFile, init$, void, $String*), "java.io.IOException"},
		{"<init>", "(Ljava/io/File;I)V", nullptr, $PUBLIC, $method(ZipFile, init$, void, $File*, int32_t), "java.io.IOException"},
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(ZipFile, init$, void, $File*), "java.util.zip.ZipException,java.io.IOException"},
		{"<init>", "(Ljava/io/File;ILjava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(ZipFile, init$, void, $File*, int32_t, $Charset*), "java.io.IOException"},
		{"<init>", "(Ljava/lang/String;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(ZipFile, init$, void, $String*, $Charset*), "java.io.IOException"},
		{"<init>", "(Ljava/io/File;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(ZipFile, init$, void, $File*, $Charset*), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ZipFile, close, void), "java.io.IOException"},
		{"ensureOpen", "()V", nullptr, $PRIVATE, $method(ZipFile, ensureOpen, void)},
		{"ensureOpenOrZipException", "()V", nullptr, $PRIVATE, $method(ZipFile, ensureOpenOrZipException, void), "java.io.IOException"},
		{"entries", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<+Ljava/util/zip/ZipEntry;>;", $PUBLIC, $virtualMethod(ZipFile, entries, $Enumeration*)},
		{"entryNameStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PRIVATE, $method(ZipFile, entryNameStream, $Stream*)},
		{"getComment", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ZipFile, getComment, $String*)},
		{"getEntry", "(Ljava/lang/String;)Ljava/util/zip/ZipEntry;", nullptr, $PUBLIC, $virtualMethod(ZipFile, getEntry, $ZipEntry*, $String*)},
		{"getEntryName", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(ZipFile, getEntryName, $String*, int32_t)},
		{"getInputStream", "(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(ZipFile, getInputStream, $InputStream*, $ZipEntry*), "java.io.IOException"},
		{"getManifestAndSignatureRelatedFiles", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $method(ZipFile, getManifestAndSignatureRelatedFiles, $List*)},
		{"getManifestName", "(Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(ZipFile, getManifestName, $String*, bool)},
		{"getManifestNum", "()I", nullptr, $PRIVATE, $method(ZipFile, getManifestNum, int32_t)},
		{"getMetaInfVersions", "()[I", nullptr, $PRIVATE, $method(ZipFile, getMetaInfVersions, $ints*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ZipFile, getName, $String*)},
		{"getZipEntry", "(Ljava/lang/String;I)Ljava/util/zip/ZipEntry;", nullptr, $PRIVATE, $method(ZipFile, getZipEntry, $ZipEntry*, $String*, int32_t)},
		{"jarEntries", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/util/jar/JarEntry;>;", $PRIVATE, $method(ZipFile, jarEntries, $Enumeration*)},
		{"jarStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/jar/JarEntry;>;", $PRIVATE, $method(ZipFile, jarStream, $Stream*)},
		{"lambda$jarStream$1", "(I)Ljava/util/jar/JarEntry;", nullptr, $PRIVATE | $SYNTHETIC, $method(ZipFile, lambda$jarStream$1, $JarEntry*, int32_t)},
		{"lambda$stream$0", "(I)Ljava/util/zip/ZipEntry;", nullptr, $PRIVATE | $SYNTHETIC, $method(ZipFile, lambda$stream$0, $ZipEntry*, int32_t)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ZipFile, size, int32_t)},
		{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<+Ljava/util/zip/ZipEntry;>;", $PUBLIC, $virtualMethod(ZipFile, stream, $Stream*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.zip.ZipFile$Source", "java.util.zip.ZipFile", "Source", $PRIVATE | $STATIC},
		{"java.util.zip.ZipFile$ZipFileInputStream", "java.util.zip.ZipFile", "ZipFileInputStream", $PRIVATE},
		{"java.util.zip.ZipFile$CleanableResource", "java.util.zip.ZipFile", "CleanableResource", $PRIVATE | $STATIC},
		{"java.util.zip.ZipFile$EntrySpliterator", "java.util.zip.ZipFile", "EntrySpliterator", $PRIVATE},
		{"java.util.zip.ZipFile$ZipEntryIterator", "java.util.zip.ZipFile", "ZipEntryIterator", $PRIVATE},
		{"java.util.zip.ZipFile$ZipFileInflaterInputStream", "java.util.zip.ZipFile", "ZipFileInflaterInputStream", $PRIVATE},
		{"java.util.zip.ZipFile$InflaterCleanupAction", "java.util.zip.ZipFile", "InflaterCleanupAction", $PRIVATE | $STATIC},
		{"java.util.zip.ZipFile$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.zip.ZipFile",
		"java.lang.Object",
		"java.util.zip.ZipConstants,java.io.Closeable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.zip.ZipFile$Source,java.util.zip.ZipFile$Source$End,java.util.zip.ZipFile$Source$Key,java.util.zip.ZipFile$ZipFileInputStream,java.util.zip.ZipFile$CleanableResource,java.util.zip.ZipFile$EntrySpliterator,java.util.zip.ZipFile$ZipEntryIterator,java.util.zip.ZipFile$ZipFileInflaterInputStream,java.util.zip.ZipFile$InflaterCleanupAction,java.util.zip.ZipFile$1"
	};
	$loadClass(ZipFile, name, initialize, &classInfo$$, ZipFile::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ZipFile));
	});
	return class$;
}

$Class* ZipFile::class$ = nullptr;

		} // zip
	} // util
} // java