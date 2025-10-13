#include <FileExtensionAndMap.h>

#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/Semaphore.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

#undef CACHED_EXECUTORSERVICE
#undef EMPTY_RECORD
#undef READ
#undef READ_WRITE
#undef REPLACE_EXISTING
#undef TMPDIR
#undef WRITE

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $CopyOption = ::java::nio::file::CopyOption;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $Future = ::java::util::concurrent::Future;
using $Semaphore = ::java::util::concurrent::Semaphore;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntStream = ::java::util::stream::IntStream;

class FileExtensionAndMap$$Lambda$lambda$main$1 : public $Runnable {
	$class(FileExtensionAndMap$$Lambda$lambda$main$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($String* targetFolder) {
		$set(this, targetFolder, targetFolder);
	}
	virtual void run() override {
		FileExtensionAndMap::lambda$main$1(targetFolder);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FileExtensionAndMap$$Lambda$lambda$main$1>());
	}
	$String* targetFolder = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FileExtensionAndMap$$Lambda$lambda$main$1::fieldInfos[2] = {
	{"targetFolder", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FileExtensionAndMap$$Lambda$lambda$main$1, targetFolder)},
	{}
};
$MethodInfo FileExtensionAndMap$$Lambda$lambda$main$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileExtensionAndMap$$Lambda$lambda$main$1::*)($String*)>(&FileExtensionAndMap$$Lambda$lambda$main$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FileExtensionAndMap$$Lambda$lambda$main$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"FileExtensionAndMap$$Lambda$lambda$main$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* FileExtensionAndMap$$Lambda$lambda$main$1::load$($String* name, bool initialize) {
	$loadClass(FileExtensionAndMap$$Lambda$lambda$main$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FileExtensionAndMap$$Lambda$lambda$main$1::class$ = nullptr;

class FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1 : public $Runnable {
	$class(FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($String* fileName, $FileChannel* fc, int64_t startPosition, int32_t blockSize, $Semaphore* concurrencySemaphore) {
		$set(this, fileName, fileName);
		$set(this, fc, fc);
		this->startPosition = startPosition;
		this->blockSize = blockSize;
		$set(this, concurrencySemaphore, concurrencySemaphore);
	}
	virtual void run() override {
		FileExtensionAndMap::lambda$testCreateBigFile$2(fileName, fc, startPosition, blockSize, concurrencySemaphore);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1>());
	}
	$String* fileName = nullptr;
	$FileChannel* fc = nullptr;
	int64_t startPosition = 0;
	int32_t blockSize = 0;
	$Semaphore* concurrencySemaphore = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1::fieldInfos[6] = {
	{"fileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1, fileName)},
	{"fc", "Ljava/nio/channels/FileChannel;", nullptr, $PUBLIC, $field(FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1, fc)},
	{"startPosition", "J", nullptr, $PUBLIC, $field(FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1, startPosition)},
	{"blockSize", "I", nullptr, $PUBLIC, $field(FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1, blockSize)},
	{"concurrencySemaphore", "Ljava/util/concurrent/Semaphore;", nullptr, $PUBLIC, $field(FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1, concurrencySemaphore)},
	{}
};
$MethodInfo FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/nio/channels/FileChannel;JILjava/util/concurrent/Semaphore;)V", nullptr, $PUBLIC, $method(static_cast<void(FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1::*)($String*,$FileChannel*,int64_t,int32_t,$Semaphore*)>(&FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1::load$($String* name, bool initialize) {
	$loadClass(FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1::class$ = nullptr;

class FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2 : public $IntConsumer {
	$class(FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($MappedByteBuffer* mappedByteBuffer, $bytes* EMPTY_RECORD, $String* fileName, int64_t startPosition) {
		$set(this, mappedByteBuffer, mappedByteBuffer);
		$set(this, EMPTY_RECORD, EMPTY_RECORD);
		$set(this, fileName, fileName);
		this->startPosition = startPosition;
	}
	virtual void accept(int32_t recordIndex) override {
		FileExtensionAndMap::lambda$writeTemplateData$4(mappedByteBuffer, EMPTY_RECORD, fileName, startPosition, recordIndex);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2>());
	}
	$MappedByteBuffer* mappedByteBuffer = nullptr;
	$bytes* EMPTY_RECORD = nullptr;
	$String* fileName = nullptr;
	int64_t startPosition = 0;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2::fieldInfos[5] = {
	{"mappedByteBuffer", "Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC, $field(FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2, mappedByteBuffer)},
	{"EMPTY_RECORD", "[B", nullptr, $PUBLIC, $field(FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2, EMPTY_RECORD)},
	{"fileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2, fileName)},
	{"startPosition", "J", nullptr, $PUBLIC, $field(FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2, startPosition)},
	{}
};
$MethodInfo FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2::methodInfos[3] = {
	{"<init>", "(Ljava/nio/MappedByteBuffer;[BLjava/lang/String;J)V", nullptr, $PUBLIC, $method(static_cast<void(FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2::*)($MappedByteBuffer*,$bytes*,$String*,int64_t)>(&FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2::load$($String* name, bool initialize) {
	$loadClass(FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2::class$ = nullptr;

class FileExtensionAndMap$$Lambda$lambda$main$0$3 : public $IntConsumer {
	$class(FileExtensionAndMap$$Lambda$lambda$main$0$3, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($String* targetFolder) {
		$set(this, targetFolder, targetFolder);
	}
	virtual void accept(int32_t index) override {
		FileExtensionAndMap::lambda$main$0(targetFolder, index);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FileExtensionAndMap$$Lambda$lambda$main$0$3>());
	}
	$String* targetFolder = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FileExtensionAndMap$$Lambda$lambda$main$0$3::fieldInfos[2] = {
	{"targetFolder", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FileExtensionAndMap$$Lambda$lambda$main$0$3, targetFolder)},
	{}
};
$MethodInfo FileExtensionAndMap$$Lambda$lambda$main$0$3::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileExtensionAndMap$$Lambda$lambda$main$0$3::*)($String*)>(&FileExtensionAndMap$$Lambda$lambda$main$0$3::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FileExtensionAndMap$$Lambda$lambda$main$0$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"FileExtensionAndMap$$Lambda$lambda$main$0$3",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* FileExtensionAndMap$$Lambda$lambda$main$0$3::load$($String* name, bool initialize) {
	$loadClass(FileExtensionAndMap$$Lambda$lambda$main$0$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FileExtensionAndMap$$Lambda$lambda$main$0$3::class$ = nullptr;

$FieldInfo _FileExtensionAndMap_FieldInfo_[] = {
	{"CACHED_EXECUTORSERVICE", "Ljava/util/concurrent/ExecutorService;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileExtensionAndMap, CACHED_EXECUTORSERVICE)},
	{"TMPDIR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileExtensionAndMap, TMPDIR)},
	{"useRaf", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FileExtensionAndMap, useRaf)},
	{}
};

$MethodInfo _FileExtensionAndMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileExtensionAndMap::*)()>(&FileExtensionAndMap::init$))},
	{"lambda$main$0", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,int32_t)>(&FileExtensionAndMap::lambda$main$0))},
	{"lambda$main$1", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*)>(&FileExtensionAndMap::lambda$main$1))},
	{"lambda$testCreateBigFile$2", "(Ljava/lang/String;Ljava/nio/channels/FileChannel;JILjava/util/concurrent/Semaphore;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$FileChannel*,int64_t,int32_t,$Semaphore*)>(&FileExtensionAndMap::lambda$testCreateBigFile$2))},
	{"lambda$writeTemplateData$4", "(Ljava/nio/MappedByteBuffer;[BLjava/lang/String;JI)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($MappedByteBuffer*,$bytes*,$String*,int64_t,int32_t)>(&FileExtensionAndMap::lambda$writeTemplateData$4))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FileExtensionAndMap::main)), "java.lang.Exception"},
	{"testCreateBigFile", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Path*)>(&FileExtensionAndMap::testCreateBigFile)), "java.io.IOException"},
	{"testFileCopy", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Path*,$Path*)>(&FileExtensionAndMap::testFileCopy)), "java.io.IOException"},
	{"writeTemplateData", "(Ljava/lang/String;Ljava/nio/channels/FileChannel;JILjava/util/concurrent/Semaphore;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$FileChannel*,int64_t,int32_t,$Semaphore*)>(&FileExtensionAndMap::writeTemplateData))},
	{}
};

$ClassInfo _FileExtensionAndMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FileExtensionAndMap",
	"java.lang.Object",
	nullptr,
	_FileExtensionAndMap_FieldInfo_,
	_FileExtensionAndMap_MethodInfo_
};

$Object* allocate$FileExtensionAndMap($Class* clazz) {
	return $of($alloc(FileExtensionAndMap));
}

$ExecutorService* FileExtensionAndMap::CACHED_EXECUTORSERVICE = nullptr;
$String* FileExtensionAndMap::TMPDIR = nullptr;
bool FileExtensionAndMap::useRaf = false;

void FileExtensionAndMap::init$() {
}

void FileExtensionAndMap::main($StringArray* args) {
	$init(FileExtensionAndMap);
	if ($nc(args)->length > 2) {
		$throwNew($IllegalArgumentException, "Arguments: [true|false [targetFolder]]"_s);
	}
	$init($File);
	$var($String, defaultFolder, $str({FileExtensionAndMap::TMPDIR, $File::separator, "target"_s}));
	if ($nc(args)->length > 0) {
		FileExtensionAndMap::useRaf = $nc($($Boolean::valueOf(args->get(0))))->booleanValue();
		if (args->length > 1) {
			$assign(defaultFolder, args->get(1));
		}
	}
	$var($String, targetFolder, defaultFolder);
	$var($Path, p, $Paths::get(targetFolder, $$new($StringArray, 0)));
	bool targetExists = $Files::exists(p, $$new($LinkOptionArray, 0));
	if (!targetExists) {
		$Files::createDirectory(p, $$new($FileAttributeArray, 0));
	}
	$init($System);
	$nc($System::out)->printf("Using RandomAccessFile: %s; target folder: %s%n"_s, $$new($ObjectArray, {
		$($of($Boolean::valueOf(FileExtensionAndMap::useRaf))),
		$of(targetFolder)
	}));
	$var($ForkJoinPool, fjPool, $new($ForkJoinPool, 3));
	$nc($($cast($ForkJoinTask, fjPool->submit(static_cast<$Runnable*>($$new(FileExtensionAndMap$$Lambda$lambda$main$1, targetFolder))))))->join();
	if (!targetExists) {
		$Files::delete$(p);
	}
}

void FileExtensionAndMap::testFileCopy($Path* source, $Path* target) {
	$init(FileExtensionAndMap);
	$init($StandardCopyOption);
	$Files::copy(source, target, $$new($CopyOptionArray, {static_cast<$CopyOption*>($StandardCopyOption::REPLACE_EXISTING)}));
	$init($System);
	$nc($System::out)->println($$str({"Finished copying file with fileName: "_s, $($nc(source)->getFileName())}));
}

void FileExtensionAndMap::testCreateBigFile($Path* segmentFile) {
	$init(FileExtensionAndMap);
	$var($Semaphore, concurrencySemaphore, $new($Semaphore, 5));
	int64_t fileSize = (int64_t)3 * (int64_t)1024 * (int64_t)1024 * (int64_t)1024;
	int32_t blockSize = 10 * 1024 * 1024;
	int32_t loopCount = (int32_t)$Math::floorDiv(fileSize, blockSize);
	$var($String, fileName, $nc($($nc(segmentFile)->getFileName()))->toString());
	if (FileExtensionAndMap::useRaf) {
		{
			$var($RandomAccessFile, raf, $new($RandomAccessFile, $(segmentFile->toFile()), "rw"_s));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						raf->setLength(fileSize);
						{
							$var($Throwable, var$1, nullptr);
							try {
								$var($FileChannel, fc, raf->getChannel());
								{
									$var($Throwable, var$2, nullptr);
									try {
										try {
											for (int32_t i = 0; i < loopCount; ++i) {
												int64_t startPosition = (int64_t)1 * blockSize * i;
												concurrencySemaphore->acquireUninterruptibly();
												$nc(FileExtensionAndMap::CACHED_EXECUTORSERVICE)->submit(static_cast<$Runnable*>($$new(FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1, fileName, fc, startPosition, blockSize, concurrencySemaphore)));
											}
										} catch ($Throwable&) {
											$var($Throwable, t$, $catch());
											if (fc != nullptr) {
												try {
													fc->close();
												} catch ($Throwable&) {
													$var($Throwable, x2, $catch());
													t$->addSuppressed(x2);
												}
											}
											$throw(t$);
										}
									} catch ($Throwable&) {
										$assign(var$2, $catch());
									} /*finally*/ {
										if (fc != nullptr) {
											fc->close();
										}
									}
									if (var$2 != nullptr) {
										$throw(var$2);
									}
								}
							} catch ($Throwable&) {
								$assign(var$1, $catch());
							} /*finally*/ {
								concurrencySemaphore->acquireUninterruptibly(5);
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							raf->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					raf->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} else {
		$var($Path, file, $Files::createFile(segmentFile, $$new($FileAttributeArray, 0)));
		{
				$init($StandardOpenOption);
			$var($FileChannel, fc, $FileChannel::open(file, $$new($OpenOptionArray, {
				static_cast<$OpenOption*>($StandardOpenOption::READ),
				static_cast<$OpenOption*>($StandardOpenOption::WRITE)
			})));
			{
				$var($Throwable, var$3, nullptr);
				try {
					try {
						for (int32_t i = 0; i < loopCount; ++i) {
							int64_t startPosition = (int64_t)1 * blockSize * i;
							concurrencySemaphore->acquireUninterruptibly();
							$nc(FileExtensionAndMap::CACHED_EXECUTORSERVICE)->submit(static_cast<$Runnable*>($$new(FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1, fileName, fc, startPosition, blockSize, concurrencySemaphore)));
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (fc != nullptr) {
							try {
								fc->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$3, $catch());
				} /*finally*/ {
					if (fc != nullptr) {
						fc->close();
					}
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
			}
		}
	}
}

void FileExtensionAndMap::writeTemplateData($String* fileName, $FileChannel* fc, int64_t startPosition, int32_t blockSize, $Semaphore* concurrencySemaphore) {
	$init(FileExtensionAndMap);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($bytes, EMPTY_RECORD, $new($bytes, blockSize / 256));
				$init($FileChannel$MapMode);
				$var($MappedByteBuffer, mappedByteBuffer, $nc(fc)->map($FileChannel$MapMode::READ_WRITE, startPosition, blockSize));
				$nc($($IntStream::range(0, 256)))->forEach(static_cast<$IntConsumer*>($$new(FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2, mappedByteBuffer, EMPTY_RECORD, fileName, startPosition)));
				$nc(mappedByteBuffer)->force();
			} catch ($Throwable&) {
				$var($Throwable, th, $catch());
				if (!($instanceOf($ClosedChannelException, th))) {
					$init($System);
					$nc($System::err)->println($$str({"Error in FileExtensionAndMap.writeTemplateData empty record for fileName: "_s, fileName, ", startPosition: "_s, $$str(startPosition), " : "_s, $(th->getMessage())}));
					th->printStackTrace($System::err);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(concurrencySemaphore)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void FileExtensionAndMap::lambda$writeTemplateData$4($MappedByteBuffer* mappedByteBuffer, $bytes* EMPTY_RECORD, $String* fileName, int64_t startPosition, int32_t recordIndex) {
	$init(FileExtensionAndMap);
	try {
		$nc(mappedByteBuffer)->position((recordIndex * $nc(EMPTY_RECORD)->length));
		mappedByteBuffer->put(EMPTY_RECORD, 0, $nc(EMPTY_RECORD)->length);
	} catch ($Throwable&) {
		$var($Throwable, th, $catch());
		$init($System);
		$nc($System::err)->println($$str({"Error in FileExtensionAndMap.writeTemplateData empty record for fileName: "_s, fileName, ", startPosition: "_s, $$str(startPosition), ", recordIndex: "_s, $$str(recordIndex), " : "_s, $(th->getMessage())}));
		th->printStackTrace($System::err);
	}
}

void FileExtensionAndMap::lambda$testCreateBigFile$2($String* fileName, $FileChannel* fc, int64_t startPosition, int32_t blockSize, $Semaphore* concurrencySemaphore) {
	$init(FileExtensionAndMap);
	writeTemplateData(fileName, fc, startPosition, blockSize, concurrencySemaphore);
}

void FileExtensionAndMap::lambda$main$1($String* targetFolder) {
	$init(FileExtensionAndMap);
	$nc($($nc($($IntStream::range(0, 20)))->parallel()))->forEach(static_cast<$IntConsumer*>($$new(FileExtensionAndMap$$Lambda$lambda$main$0$3, targetFolder)));
}

void FileExtensionAndMap::lambda$main$0($String* targetFolder, int32_t index) {
	$init(FileExtensionAndMap);
	$var($String, fileName, $str({"testBigFile_"_s, $$str(index), ".dat"_s}));
	$var($Path, source, nullptr);
	$var($Path, target, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$assign(source, $Paths::get(FileExtensionAndMap::TMPDIR, $$new($StringArray, {fileName})));
				testCreateBigFile(source);
				$assign(target, $Paths::get(targetFolder, $$new($StringArray, {fileName})));
				testFileCopy(source, target);
			} catch ($Throwable&) {
				$var($Throwable, th, $catch());
				$init($System);
				$nc($System::err)->println($$str({"Error copying file with fileName: "_s, fileName, " : "_s, $(th->getMessage())}));
				th->printStackTrace($System::err);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			try {
				if (source != nullptr) {
					$Files::deleteIfExists(source);
				}
			} catch ($Throwable&) {
				$catch();
			}
			try {
				if (target != nullptr) {
					$Files::deleteIfExists(target);
				}
			} catch ($Throwable&) {
				$catch();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$FileExtensionAndMap($Class* class$) {
	$assignStatic(FileExtensionAndMap::CACHED_EXECUTORSERVICE, $Executors::newCachedThreadPool());
	$assignStatic(FileExtensionAndMap::TMPDIR, $System::getProperty("test.dir"_s, "."_s));
	FileExtensionAndMap::useRaf = false;
}

FileExtensionAndMap::FileExtensionAndMap() {
}

$Class* FileExtensionAndMap::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FileExtensionAndMap$$Lambda$lambda$main$1::classInfo$.name)) {
			return FileExtensionAndMap$$Lambda$lambda$main$1::load$(name, initialize);
		}
		if (name->equals(FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1::classInfo$.name)) {
			return FileExtensionAndMap$$Lambda$lambda$testCreateBigFile$2$1::load$(name, initialize);
		}
		if (name->equals(FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2::classInfo$.name)) {
			return FileExtensionAndMap$$Lambda$lambda$writeTemplateData$4$2::load$(name, initialize);
		}
		if (name->equals(FileExtensionAndMap$$Lambda$lambda$main$0$3::classInfo$.name)) {
			return FileExtensionAndMap$$Lambda$lambda$main$0$3::load$(name, initialize);
		}
	}
	$loadClass(FileExtensionAndMap, name, initialize, &_FileExtensionAndMap_ClassInfo_, clinit$FileExtensionAndMap, allocate$FileExtensionAndMap);
	return class$;
}

$Class* FileExtensionAndMap::class$ = nullptr;