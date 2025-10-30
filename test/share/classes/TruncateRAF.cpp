#include <TruncateRAF.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _TruncateRAF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TruncateRAF::*)()>(&TruncateRAF::init$))},
	{"checkState", "(Ljava/io/RandomAccessFile;Ljava/nio/channels/FileChannel;JJ)V", nullptr, $STATIC, $method(static_cast<void(*)($RandomAccessFile*,$FileChannel*,int64_t,int64_t)>(&TruncateRAF::checkState)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TruncateRAF::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _TruncateRAF_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TruncateRAF",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TruncateRAF_MethodInfo_
};

$Object* allocate$TruncateRAF($Class* clazz) {
	return $of($alloc(TruncateRAF));
}

void TruncateRAF::init$() {
}

void TruncateRAF::checkState($RandomAccessFile* raf, $FileChannel* fch, int64_t expectedOffset, int64_t expectedLength) {
	$useLocalCurrentObjectStackCache();
	int64_t rafLength = $nc(raf)->length();
	int64_t rafOffset = raf->getFilePointer();
	int64_t fchLength = $nc(fch)->size();
	int64_t fchOffset = fch->position();
	if (rafLength != expectedLength) {
		$throwNew($RuntimeException, $$str({"rafLength ("_s, $$str(rafLength), ") != expectedLength ("_s, $$str(expectedLength), ")"_s}));
	}
	if (rafOffset != expectedOffset) {
		$throwNew($RuntimeException, $$str({"rafOffset ("_s, $$str(rafOffset), ") != expectedOffset ("_s, $$str(expectedOffset), ")"_s}));
	}
	if (fchLength != expectedLength) {
		$throwNew($RuntimeException, $$str({"fchLength ("_s, $$str(fchLength), ") != expectedLength ("_s, $$str(expectedLength), ")"_s}));
	}
	if (fchOffset != expectedOffset) {
		$throwNew($RuntimeException, $$str({"fchOffset ("_s, $$str(fchOffset), ") != expectedOffset ("_s, $$str(expectedOffset), ")"_s}));
	}
}

void TruncateRAF::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, "tmp"_s));
	{
		$var($RandomAccessFile, raf, $new($RandomAccessFile, file, "rw"_s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($FileChannel, fch, raf->getChannel());
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								checkState(raf, fch, 0, 0);
								raf->seek(42);
								checkState(raf, fch, 42, 0);
								$nc(fch)->position(84);
								checkState(raf, fch, 84, 0);
								raf->write(1);
								checkState(raf, fch, 85, 85);
								raf->setLength(63);
								checkState(raf, fch, 63, 63);
								fch->write($($ByteBuffer::wrap($$new($bytes, 1))));
								checkState(raf, fch, 64, 64);
								fch->position(32);
								checkState(raf, fch, 32, 64);
								fch->truncate(42);
								checkState(raf, fch, 32, 42);
								fch->truncate(16);
								checkState(raf, fch, 16, 16);
								fch->write($($ByteBuffer::wrap($$new($bytes, 1))), 127);
								checkState(raf, fch, 16, 128);
								fch->write($($ByteBuffer::wrap($$new($bytes, 1))), 42);
								checkState(raf, fch, 16, 128);
								raf->setLength(64);
								checkState(raf, fch, 16, 64);
								raf->seek(21);
								checkState(raf, fch, 21, 64);
								raf->skipBytes(4);
								checkState(raf, fch, 25, 64);
								raf->read();
								checkState(raf, fch, 26, 64);
								raf->setLength(0);
								checkState(raf, fch, 0, 0);
								fch->truncate(42);
								checkState(raf, fch, 0, 0);
								raf->setLength(42);
								checkState(raf, fch, 0, 42);
								raf->seek(512);
								checkState(raf, fch, 512, 42);
								fch->truncate(256);
								checkState(raf, fch, 256, 42);
								fch->truncate(42);
								checkState(raf, fch, 42, 42);
								fch->truncate(0);
								checkState(raf, fch, 0, 0);
							} catch ($Throwable& t$) {
								if (fch != nullptr) {
									try {
										fch->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							if (fch != nullptr) {
								fch->close();
							}
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						raf->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				raf->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

TruncateRAF::TruncateRAF() {
}

$Class* TruncateRAF::load$($String* name, bool initialize) {
	$loadClass(TruncateRAF, name, initialize, &_TruncateRAF_ClassInfo_, allocate$TruncateRAF);
	return class$;
}

$Class* TruncateRAF::class$ = nullptr;